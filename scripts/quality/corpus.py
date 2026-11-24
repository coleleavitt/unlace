"""Build the quality corpus: compile programs and packages, keep DWARF as ground truth.

Reads `corpus.toml` (or `--manifest`), expands the (unit x compiler x opt x arch)
matrix, and for every cell this machine can build:

1. compiles each source with `-g` and the cell's flags (one object per source),
   then links an executable (programs) or a shared object (`link = "shared"`
   packages) when the arch can link here; otherwise every object is a binary;
2. writes a stripped twin next to each binary (`llvm-strip --strip-all`, or
   `--strip-unneeded` for an object, which keeps only relocation symbols): the
   twin is what unlace decompiles, the original is only read for ground truth;
3. extracts the ground truth (`dwarf.extract`) and the source-side facts
   (`srcfacts`) into `<binary>.gt.json`;
4. records every cell (built or skipped, and why) in `<out>/corpus.json`.

Packages are fetched once into `<cache>/src`, verified against their pinned
sha256, and extracted with path checks; nothing from a package is executed.
"""
from __future__ import annotations

import hashlib
import json
import os
import shutil
import subprocess
import tarfile
import time
import urllib.request
import zipfile
from concurrent.futures import ThreadPoolExecutor
from dataclasses import dataclass, field
from pathlib import Path

try:
    import tomllib
except ModuleNotFoundError:  # pragma: no cover - python < 3.11
    tomllib = None

from . import dwarf, srcfacts

HERE = Path(__file__).resolve().parent
DEFAULT_MANIFEST = HERE / "corpus.toml"


def default_root() -> Path:
    return Path(os.environ.get("UNLACE_QUALITY_ROOT",
                               str(Path.home() / ".cache" / "unlace-quality")))


def load_manifest(path: Path = DEFAULT_MANIFEST) -> dict:
    if tomllib is None:
        raise SystemExit("python 3.11+ (tomllib) is needed to read the corpus manifest")
    doc = tomllib.loads(Path(path).read_text())
    doc["_dir"] = str(Path(path).resolve().parent)
    return doc


@dataclass
class Unit:
    name: str
    kind: str                      # "program" | "package"
    sources: list[Path]
    include: list[Path]
    cflags: list[str]
    link: str                      # "exe" | "shared" | "none"
    spec: dict = field(default_factory=dict)


@dataclass
class Cell:
    unit: Unit
    compiler: str
    opt: str
    arch: str

    @property
    def tag(self) -> str:
        return f"{self.compiler}-{self.opt}-{self.arch}"


# --------------------------------------------------------------------------
# toolchains
# --------------------------------------------------------------------------

_PROBE: dict[tuple, str | None] = {}


def _run(cmd: list[str], cwd: Path | None = None, timeout: int = 900) -> subprocess.CompletedProcess:
    return subprocess.run(cmd, capture_output=True, text=True, cwd=cwd, timeout=timeout)


def driver(compiler: str, arch_spec: dict) -> list[str] | None:
    """The compile driver argv prefix for (compiler, arch), or None when unusable here."""
    if compiler == "clang":
        cmd = ["clang", f"--target={arch_spec['triple']}"] + arch_spec.get("clang_flags", [])
    elif compiler == "gcc":
        exe = arch_spec.get("gcc")
        if not exe:
            return None
        cmd = [exe] + arch_spec.get("gcc_flags", [])
    else:
        cmd = [compiler] + arch_spec.get(f"{compiler}_flags", [])
    key = tuple(cmd)
    if key not in _PROBE:
        if shutil.which(cmd[0]) is None:
            _PROBE[key] = f"{cmd[0]} not on PATH"
        else:
            try:
                p = _run(cmd + ["-x", "c", "-c", "-o", os.devnull, "-"], timeout=60)
                _PROBE[key] = None if p.returncode == 0 else (p.stderr.strip().splitlines() or ["?"])[-1]
            except (OSError, subprocess.TimeoutExpired) as e:
                _PROBE[key] = str(e)
    return None if _PROBE[key] else cmd


def probe_error(compiler: str, arch_spec: dict) -> str | None:
    driver(compiler, arch_spec)
    if compiler == "gcc" and not arch_spec.get("gcc"):
        return "no gcc for this arch in the manifest"
    cmd = (["clang", f"--target={arch_spec['triple']}"] + arch_spec.get("clang_flags", [])
           if compiler == "clang" else [arch_spec.get("gcc", compiler)] + arch_spec.get("gcc_flags", []))
    return _PROBE.get(tuple(cmd))


_VERSIONS: dict[str, str] = {}


def compiler_version(cmd0: str) -> str:
    if cmd0 not in _VERSIONS:
        try:
            _VERSIONS[cmd0] = (_run([cmd0, "--version"], timeout=30).stdout.splitlines() or ["?"])[0]
        except OSError:
            _VERSIONS[cmd0] = "?"
    return _VERSIONS[cmd0]


def strip_tool() -> str:
    for tool in ("llvm-strip", "strip"):
        if shutil.which(tool):
            return tool
    raise SystemExit("neither llvm-strip nor strip is on PATH")


# --------------------------------------------------------------------------
# packages
# --------------------------------------------------------------------------

def _sha256(path: Path) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def _safe_extract(archive: Path, dest: Path) -> None:
    dest = dest.resolve()
    if archive.suffix == ".zip":
        with zipfile.ZipFile(archive) as zf:
            for name in zf.namelist():
                target = (dest / name).resolve()
                if dest not in target.parents and target != dest:
                    raise SystemExit(f"{archive.name}: member escapes the extract dir: {name}")
            zf.extractall(dest)
        return
    with tarfile.open(archive) as tf:
        try:
            tf.extractall(dest, filter="data")
        except TypeError:  # pragma: no cover - python without extraction filters
            for m in tf.getmembers():
                target = (dest / m.name).resolve()
                if dest not in target.parents and target != dest or m.issym() or m.islnk():
                    raise SystemExit(f"{archive.name}: unsafe member {m.name}")
            tf.extractall(dest)


def fetch(spec: dict, cache: Path, allow_unpinned: bool = False) -> Path:
    """Download (once), verify and extract one package; returns its source root."""
    src_dir = cache / "src"
    src_dir.mkdir(parents=True, exist_ok=True)
    if spec.get("path"):
        return Path(os.path.expanduser(spec["path"])).resolve()
    url = spec["url"]
    archive = src_dir / url.rsplit("/", 1)[-1]
    want = spec.get("sha256")
    if not want and not allow_unpinned:
        raise SystemExit(f"package {spec['name']}: no sha256 pin (pass --allow-unpinned to accept)")
    if not archive.exists():
        tmp = archive.with_suffix(archive.suffix + ".part")
        req = urllib.request.Request(url, headers={"User-Agent": "unlace-quality-harness"})
        with urllib.request.urlopen(req, timeout=300) as resp, open(tmp, "wb") as fh:
            shutil.copyfileobj(resp, fh)
        tmp.rename(archive)
    got = _sha256(archive)
    if want and got != want:
        raise SystemExit(f"package {spec['name']}: sha256 {got} != pinned {want}")
    dest = src_dir / f"{spec['name']}-{got[:12]}"
    if not dest.exists():
        tmp = dest.with_name(dest.name + ".part")
        shutil.rmtree(tmp, ignore_errors=True)
        _safe_extract(archive, tmp)
        tmp.rename(dest)
    return dest / spec.get("root", ".")


# --------------------------------------------------------------------------
# the matrix
# --------------------------------------------------------------------------

def units(manifest: dict, cache: Path, names: set[str] | None, with_packages: bool,
          allow_unpinned: bool = False) -> list[Unit]:
    base = Path(manifest["_dir"])
    out = []
    for spec in manifest.get("program", []):
        if names and spec["name"] not in names:
            continue
        out.append(Unit(spec["name"], "program", [base / s for s in spec["sources"]],
                        [base / i for i in spec.get("include", [])], spec.get("cflags", []),
                        spec.get("link", "exe"), spec))
    for spec in manifest.get("package", []):
        wanted = spec["name"] in names if names else (with_packages and spec.get("default", True))
        if not wanted:
            continue
        root = fetch(spec, cache, allow_unpinned)
        out.append(Unit(spec["name"], "package", [root / s for s in spec["sources"]],
                        [root / i for i in spec.get("include", [])], spec.get("cflags", []),
                        spec.get("link", "none"), spec))
    return out


def cells(manifest: dict, us: list[Unit], compilers=None, opts=None, arches=None) -> list[Cell]:
    m = manifest.get("matrix", {})
    out = []
    for unit in us:
        for compiler in compilers or m.get("compilers", ["gcc", "clang"]):
            for opt in opts or m.get("opts", ["O2"]):
                for arch in arches or m.get("arches", ["x86_64"]):
                    out.append(Cell(unit, compiler, opt.lstrip("-"), arch))
    return out


# --------------------------------------------------------------------------
# one cell
# --------------------------------------------------------------------------

def _symbol_sections(path: Path) -> dict[str, tuple[str, int]]:
    """FUNC symbol name -> (section name, value) from an unstripped object."""
    from elftools.elf.elffile import ELFFile
    from elftools.elf.sections import SymbolTableSection
    out = {}
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        for sec in elf.iter_sections():
            if not isinstance(sec, SymbolTableSection):
                continue
            for sym in sec.iter_symbols():
                if sym["st_info"]["type"] != "STT_FUNC":
                    continue
                shndx = sym["st_shndx"]
                if not isinstance(shndx, int):
                    continue
                out.setdefault(sym.name, (elf.get_section(shndx).name, sym["st_value"]))
    return out


def ground_truth(binary: Path, ast_cmd: list[str] | None, meta: dict) -> dict:
    """The sidecar document for one binary (also usable on a binary built elsewhere)."""
    gt = dwarf.extract(binary)
    funcs = gt["functions"]
    if gt["relocatable"]:
        sections = _symbol_sections(binary)
        for fn in funcs.values():
            sec = sections.get(fn["name"])
            fn["section"] = sec[0] if sec else None
            fn["key"] = f"{sec[0]}+{fn['entry']:#x}" if sec else None
    else:
        for fn in funcs.values():
            fn["section"] = None
            fn["key"] = f"{fn['entry']:#x}"
    noreturn = {fn["name"] for fn in funcs.values() if fn["noreturn"]}
    noreturn |= {c["target"] for fn in funcs.values() for c in fn["calls"]
                 if c.get("noreturn") and c.get("target")}
    srcfacts.extract(funcs, srcfacts.Source(ast_cmd, noreturn))
    return {
        "schema": 1,
        "binary": str(binary),
        **meta,
        "arch_elf": gt["arch"], "elfclass": gt["elfclass"], "relocatable": gt["relocatable"],
        "functions": {f"{entry:#x}": fn for entry, fn in sorted(funcs.items())},
        "globals": {f"{addr:#x}": g for addr, g in sorted(gt["globals"].items())},
    }


def build_cell(cell: Cell, manifest: dict, out: Path, clang_ast: bool, sysroot: str | None) -> dict:
    arch_spec = manifest.get("arch", {}).get(cell.arch)
    record = {"unit": cell.unit.name, "kind": cell.unit.kind, "compiler": cell.compiler,
              "opt": cell.opt, "arch": cell.arch, "binaries": []}
    if arch_spec is None:
        return {**record, "skipped": f"arch {cell.arch} not in the manifest"}
    cmd = driver(cell.compiler, arch_spec)
    if cmd is None:
        return {**record, "skipped": probe_error(cell.compiler, arch_spec) or "compiler unusable"}
    host = bool(arch_spec.get("host"))
    if cell.unit.kind == "package" and not host and not sysroot:
        return {**record, "skipped": "package needs libc headers: host arch or --sysroot"}
    m = manifest.get("matrix", {})
    shared = cell.unit.link == "shared" and arch_spec.get("link")
    exe = cell.unit.link == "exe" and arch_spec.get("link")
    flags = [f"-{cell.opt}", "-g"] + m.get("cflags", []) + cell.unit.cflags
    flags += [f"-I{i}" for i in cell.unit.include]
    if sysroot:
        flags += [f"--sysroot={sysroot}"]
    if shared:
        flags.append("-fPIC")
    elif exe and not m.get("pie", False):
        flags.append("-fno-pie")
    cell_dir = out / cell.unit.name / cell.tag
    obj_dir = cell_dir / "obj"
    obj_dir.mkdir(parents=True, exist_ok=True)
    objects, errors = [], []
    for src in cell.unit.sources:
        obj = obj_dir / (src.stem + ".o")
        p = _run(cmd + flags + ["-c", str(src), "-o", str(obj)])
        if p.returncode != 0:
            errors.append(f"{src.name}: {p.stderr.strip()[-400:]}")
        else:
            objects.append(obj)
    if errors:
        return {**record, "skipped": "compile failed", "errors": errors}
    if exe:
        target = cell_dir / cell.unit.name
        link = cmd + ([] if m.get("pie", False) else ["-no-pie"])
        p = _run(link + ["-g", "-o", str(target)] + [str(o) for o in objects])
        if p.returncode != 0:
            return {**record, "skipped": "link failed", "errors": [p.stderr.strip()[-400:]]}
        artifacts = [(target, "exe")]
    elif shared:
        target = cell_dir / f"lib{cell.unit.name}.so"
        p = _run(cmd + ["-shared", "-g", "-o", str(target)] + [str(o) for o in objects])
        if p.returncode != 0:
            return {**record, "skipped": "link failed", "errors": [p.stderr.strip()[-400:]]}
        artifacts = [(target, "shared")]
    else:
        artifacts = [(o, "object") for o in objects]
    ast_cmd = None
    if clang_ast:
        ast_cmd = (["clang", f"--target={arch_spec['triple']}", "-fsyntax-only", "-Xclang",
                    "-ast-dump=json"] + m.get("cflags", []) + cell.unit.cflags
                   + [f"-I{i}" for i in cell.unit.include]
                   + ([f"--sysroot={sysroot}"] if sysroot else []))
    strip = strip_tool()
    for binary, mode in artifacts:
        stripped = binary.with_name(binary.name + ".stripped")
        how = "--strip-unneeded" if mode == "object" else "--strip-all"
        p = _run([strip, how, "-o", str(stripped), str(binary)])
        if p.returncode != 0:
            record.setdefault("errors", []).append(f"strip {binary.name}: {p.stderr.strip()[-300:]}")
            continue
        meta = {"unit": cell.unit.name, "kind": cell.unit.kind, "compiler": cell.compiler,
                "compiler_version": compiler_version(cmd[0]), "opt": cell.opt,
                "arch": cell.arch, "mode": mode, "flags": flags, "stripped": str(stripped)}
        doc = ground_truth(binary, ast_cmd, meta)
        gt_path = binary.with_name(binary.name + ".gt.json")
        gt_path.write_text(json.dumps(doc, default=str))
        record["binaries"].append({
            "id": f"{cell.unit.name}/{cell.tag}/{binary.name}",
            "path": str(binary), "stripped": str(stripped), "gt": str(gt_path), "mode": mode,
            "sha256": _sha256(stripped), "functions": len(doc["functions"]),
        })
    return record


def build(manifest_path: Path, out: Path, names=None, compilers=None, opts=None, arches=None,
          packages: bool = True, clang_ast: bool = False, sysroot: str | None = None,
          jobs: int = 4, allow_unpinned: bool = False) -> dict:
    manifest = load_manifest(manifest_path)
    out.mkdir(parents=True, exist_ok=True)
    us = units(manifest, default_root(), set(names) if names else None, packages, allow_unpinned)
    todo = cells(manifest, us, compilers, opts, arches)
    started = time.time()
    with ThreadPoolExecutor(max_workers=max(1, jobs)) as pool:
        results = list(pool.map(lambda c: build_cell(c, manifest, out, clang_ast, sysroot), todo))
    index_path = out / "corpus.json"
    previous = json.loads(index_path.read_text()) if index_path.exists() else {"cells": []}
    fresh = {(r["unit"], r["compiler"], r["opt"], r["arch"]) for r in results}
    kept = [r for r in previous.get("cells", [])
            if (r["unit"], r["compiler"], r["opt"], r["arch"]) not in fresh]
    index = {"schema": 1, "manifest": str(Path(manifest_path).resolve()),
             "built_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
             "seconds": round(time.time() - started, 1),
             "cells": sorted(kept + results, key=lambda r: (r["unit"], r["compiler"], r["opt"], r["arch"]))}
    index_path.write_text(json.dumps(index, indent=1))
    return {**index, "cells": results}


def binaries(index_path: Path, filters: dict | None = None) -> list[dict]:
    """Every built binary in a corpus index, with its cell's coordinates."""
    index = json.loads(Path(index_path).read_text())
    out = []
    for cell in index.get("cells", []):
        if cell.get("skipped"):
            continue
        if filters and any(v and cell.get(k) not in v for k, v in filters.items()):
            continue
        for b in cell["binaries"]:
            out.append({**b, **{k: cell[k] for k in ("unit", "kind", "compiler", "opt", "arch")}})
    return out
