#!/usr/bin/env bash
set -u
IDA_DIR="/home/cole/Downloads/Software/IDAPro/ida-pro-9.3sp1"
REFS_DIR="/home/cole/RustProjects/active/unlace/references/ida"
SCRIPT="/tmp/dump_one_binary.py"
export PYTHONPATH="$IDA_DIR/idalib/python"
export LD_LIBRARY_PATH="$IDA_DIR"

dump_one() {
    local cat="$1" name="$2" relpath="$3"
    local binary="$IDA_DIR/$relpath"
    local outdir="$REFS_DIR/$cat/$name"
    [ ! -f "$binary" ] && { echo "[SKIP] $cat/$name — missing"; return; }
    [ -d "$outdir/all" ] && [ -n "$(ls -A "$outdir/all" 2>/dev/null)" ] && { echo "[SKIP] $cat/$name — done"; return; }
    echo "[DUMP] $cat/$name ..."
    timeout 600 python3 "$SCRIPT" "$binary" "$outdir" 2>&1 | tail -2
}

dump_one plugins hexrv   plugins/hexrv.so
dump_one plugins hexarc  plugins/hexarc.so
dump_one plugins hexv850 plugins/hexv850.so
dump_one loaders macho_full loaders/macho.so

echo "DONE"
