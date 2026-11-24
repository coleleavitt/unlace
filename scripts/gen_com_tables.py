#!/usr/bin/env python3
"""Generate the COM interface and GUID tables of the 'com' pass.

Reads the Win32 half of the 'windows' crate (microsoft/windows-rs, MIT OR
Apache-2.0), whose bindings are generated from the Windows metadata, and writes:

  crates/unlace-analysis/src/analyzers/com/interfaces.txt
      '= IName Base iid' opens an interface, then one 'Method KINDS' line per
      method it adds to its base. KINDS is the return kind and then one kind
      per parameter after This (see KIND below); '?' marks a method with a
      by-value aggregate, which gets an untyped slot.
  crates/unlace-analysis/src/analyzers/com/guids.txt
      '<32 hex digits in memory order> <name>' for every interface IID
      (IID_<I>) and every class id (CLSID_<Class>).

Usage: scripts/gen_com_tables.py <path to windows-0.62.x crate>
"""
import os
import re
import sys

PRIM = {
    "i8": "1", "u8": "1", "i16": "2", "u16": "2", "i32": "i", "u32": "u",
    "i64": "8", "u64": "8", "f32": "f", "f64": "d", "usize": "z", "isize": "z",
    "bool": "1",
    "windows_core::BOOL": "i", "windows_core::HRESULT": "h",
    "windows_core::PWSTR": "w", "windows_core::PCWSTR": "w",
    "windows_core::PSTR": "s", "windows_core::PCSTR": "s",
    "windows_core::BSTR": "w", "core::ffi::c_void": "?",
}

# Namespaces left out: media, device and printing stacks, whose interfaces
# are many and rarely reached through CoCreateInstance in the code this pass
# is for.
SKIP = ["Media", "Devices", "Graphics/Printing", "Storage/Xps", "Storage/Packaging",
        "UI/TabletPC", "System/WinRT", "System/RealTimeCommunications"]

DEFINE = re.compile(r"define_interface!\((\w+), (\w+)_Vtbl, 0x([0-9a-f_]+)\)")
VTBL = re.compile(r"^pub struct (\w+)_Vtbl \{$")
BASE = re.compile(r"^\s+pub base__: (?:[\w:]+::)?(\w+)_Vtbl,$")
METHOD = re.compile(r'^\s+pub (\w+): unsafe extern "system" fn\((.*)\)(?: -> (.+))?,$')
NEWTYPE = re.compile(r"^pub struct (\w+)\(pub ([^)]+)\);$")
ALIAS = re.compile(r"^pub type (\w+) = ([^;<]+);$")
CONST = re.compile(r"^pub const (\w+): windows_core::GUID = windows_core::GUID::from_u128\(0x([0-9a-f_]+)\);$")


def split_args(text):
    out, depth, cur = [], 0, ""
    for ch in text:
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def memory_order(u128):
    v = int(u128.replace("_", ""), 16)
    raw = v.to_bytes(16, "big")
    d1 = raw[0:4][::-1]
    d2 = raw[4:6][::-1]
    d3 = raw[6:8][::-1]
    return (d1 + d2 + d3 + raw[8:16]).hex()


def main():
    root = os.path.join(sys.argv[1], "src", "Windows", "Win32")
    newtypes, aliases = {}, {}
    vtbls, iids, consts = {}, {}, {}
    order = []
    for dirpath, _, files in sorted(os.walk(root)):
        rel = os.path.relpath(dirpath, root).replace(os.sep, "/")
        skip = any(rel == s or rel.startswith(s + "/") for s in SKIP)
        for f in sorted(files):
            if not f.endswith(".rs"):
                continue
            # newtypes and aliases come from every namespace; interfaces and
            # class ids only from the ones kept
            keep = not skip
            lines = open(os.path.join(dirpath, f), encoding="utf-8").read().split("\n")
            i = 0
            while i < len(lines):
                line = lines[i]
                m = DEFINE.search(line) if keep else None
                if m and m.group(1) == m.group(2):
                    iids[m.group(1)] = m.group(3)
                m = NEWTYPE.match(line)
                if m:
                    newtypes.setdefault(m.group(1), m.group(2).strip())
                m = ALIAS.match(line)
                if m:
                    aliases.setdefault(m.group(1), m.group(2).strip())
                m = CONST.match(line) if keep else None
                if m:
                    consts.setdefault(m.group(1), m.group(2))
                m = VTBL.match(line)
                if m:
                    name, base, methods, seen = m.group(1), None, [], set()
                    i += 1
                    while i < len(lines) and lines[i] != "}":
                        b = BASE.match(lines[i])
                        if b:
                            base = b.group(1)
                        mm = METHOD.match(lines[i])
                        if mm and mm.group(1) not in seen:
                            seen.add(mm.group(1))
                            methods.append((mm.group(1), mm.group(2), mm.group(3)))
                        um = re.match(r"^\s+(\w+): usize,$", lines[i])
                        if um and um.group(1) not in seen:
                            seen.add(um.group(1))
                            methods.append((um.group(1), None, None))
                        i += 1
                    if name not in vtbls:
                        vtbls[name] = (base, methods)
                        order.append(name)
                i += 1

    def kind(ty, depth=0):
        ty = ty.strip()
        if ty.startswith("*mut ") or ty.startswith("*const "):
            return "p"
        if ty in PRIM:
            return PRIM[ty]
        last = ty.split("::")[-1]
        if depth > 8:
            return "?"
        if last in newtypes:
            return kind(newtypes[last], depth + 1)
        if last in aliases:
            return kind(aliases[last], depth + 1)
        if ty.startswith("Option<") or ty.startswith("core::mem::ManuallyDrop<"):
            return "p"
        return "?"

    out = ["# Generated by scripts/gen_com_tables.py from the windows crate (microsoft/windows-rs,",
           "# MIT OR Apache-2.0), Win32 bindings; do not edit.",
           "= IUnknown -",
           "QueryInterface hpp", "AddRef u", "Release u"]
    emitted = set(["IUnknown"])

    def emit(name, depth=0):
        if name in emitted:
            return True
        if depth > 32 or name not in vtbls or name not in iids:
            return False
        base, methods = vtbls[name]
        if base is None or not emit(base, depth + 1):
            return False
        out.append("= %s %s" % (name, base))
        for mname, args, ret in methods:
            if args is None:
                out.append("%s ?" % mname)
                continue
            params = split_args(args)[1:]
            kinds = [kind(p) for p in params]
            rk = "v" if ret is None else kind(ret)
            if "?" in kinds or rk == "?":
                out.append("%s ?" % mname)
            else:
                out.append("%s %s%s" % (mname, rk, "".join(kinds)))
        emitted.add(name)
        return True

    for name in order:
        emit(name)

    here = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..",
                        "crates", "unlace-analysis", "src", "analyzers", "com")
    with open(os.path.join(here, "interfaces.txt"), "w") as fh:
        fh.write("\n".join(out) + "\n")

    guids = {}
    for name in sorted(emitted):
        if name == "IUnknown":
            guids[memory_order("00000000_0000_0000_c000_000000000046")] = "IID_IUnknown"
            continue
        guids.setdefault(memory_order(iids[name]), "IID_" + name)
    for name, value in sorted(consts.items()):
        if "_" in name or not name[0].isupper() or int(value.replace("_", ""), 16) == 0:
            continue
        guids.setdefault(memory_order(value), "CLSID_" + name)
    lines = ["# Generated by scripts/gen_com_tables.py from the windows crate (microsoft/windows-rs,",
             "# MIT OR Apache-2.0), Win32 bindings; do not edit."]
    lines += ["%s %s" % (k, v) for k, v in sorted(guids.items(), key=lambda kv: kv[1])]
    with open(os.path.join(here, "guids.txt"), "w") as fh:
        fh.write("\n".join(lines) + "\n")
    print("%d interfaces, %d guids" % (len(emitted), len(guids)))


if __name__ == "__main__":
    main()
