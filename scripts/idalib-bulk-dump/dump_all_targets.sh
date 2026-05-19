#!/usr/bin/env bash
# Bulk-dump all IDA Pro plugin/proc/loader binaries via idalib.
#
# Output: /home/cole/RustProjects/active/unlace/references/ida/<category>/<name>/all/
set -u

IDA_DIR="/home/cole/Downloads/Software/IDAPro/ida-pro-9.3sp1"
REFS_DIR="/home/cole/RustProjects/active/unlace/references/ida"
SCRIPT="/tmp/dump_one_binary.py"

export PYTHONPATH="$IDA_DIR/idalib/python"
export LD_LIBRARY_PATH="$IDA_DIR"

# Run one target. Args: <category> <name> <relative-path-from-IDA_DIR>
dump_one() {
    local cat="$1"
    local name="$2"
    local relpath="$3"
    local binary="$IDA_DIR/$relpath"
    local outdir="$REFS_DIR/$cat/$name"

    if [ ! -f "$binary" ]; then
        echo "[SKIP] $cat/$name — binary missing: $binary"
        return
    fi

    # Already dumped?
    if [ -d "$outdir/all" ] && [ -n "$(ls -A "$outdir/all" 2>/dev/null)" ]; then
        local count
        count=$(ls "$outdir/all" 2>/dev/null | wc -l)
        echo "[SKIP] $cat/$name — already has $count files"
        return
    fi

    echo "[DUMP] $cat/$name from $relpath ..."
    timeout 1800 python3 "$SCRIPT" "$binary" "$outdir" 2>&1 | tail -3
}

# ─── Plugins ─── high-priority targets first ─────────────────────────
echo "=== PLUGINS ==="
dump_one plugins hexx64    plugins/hexx64.so
dump_one plugins idaclang  plugins/idaclang.so
dump_one plugins dbg       plugins/dbg.so
dump_one plugins dwarf     plugins/dwarf.so
dump_one plugins pdb       plugins/pdb.so
dump_one plugins eh34      plugins/eh34.so
dump_one plugins eh_parse  plugins/eh_parse.so
dump_one plugins dscu      plugins/dscu.so
dump_one plugins rust      plugins/rust.so
dump_one plugins swift     plugins/swift.so
dump_one plugins golang    plugins/golang.so
dump_one plugins makesig   plugins/makesig.so
dump_one plugins patfind   plugins/patfind.so
dump_one plugins xref_graph plugins/xref_graph.so
dump_one plugins tds       plugins/tds.so
dump_one plugins bdescr    plugins/bdescr.so
dump_one plugins goomba    plugins/goomba.so

# ─── Procs ─── per-architecture reference modules ────────────────────
echo "=== PROCS ==="
dump_one processors mips    procs/mips.so
dump_one processors ppc     procs/ppc.so
dump_one processors riscv   procs/riscv.so
dump_one processors sparc   procs/sparc.so
dump_one processors wasm    procs/wasm.so
dump_one processors xtensa  procs/xtensa.so
dump_one processors dalvik  procs/dalvik.so
dump_one processors java    procs/java.so
dump_one processors cli     procs/cli.so
dump_one processors mc68k   procs/mc68k.so
dump_one processors nec850  procs/nec850.so
dump_one processors nds32   procs/nds32.so
dump_one processors tricore procs/tricore.so
dump_one processors s390    procs/s390.so
dump_one processors sh3     procs/sh3.so
dump_one processors arc     procs/arc.so
dump_one processors ia      procs/ia.so

# ─── Loaders ─── (most already have .i64; extract them) ──────────────
echo "=== LOADERS ==="
dump_one loaders elf      loaders/elf.so
dump_one loaders coff     loaders/coff.so
dump_one loaders dex      loaders/dex.so
dump_one loaders javaldr  loaders/javaldr.so
dump_one loaders wasmldr  loaders/wasmldr.so
dump_one loaders n64rom   loaders/n64rom.so
dump_one loaders snes     loaders/snes.so
dump_one loaders archldr_zip loaders/archldr_zip.so

echo "=== DONE ==="
