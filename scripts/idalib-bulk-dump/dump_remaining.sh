#!/usr/bin/env bash
# Remaining priority targets, in order of utility.
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
    [ -d "$outdir/all" ] && [ -n "$(ls -A "$outdir/all" 2>/dev/null)" ] && { echo "[SKIP] $cat/$name — already dumped"; return; }
    echo "[DUMP] $cat/$name from $relpath ..."
    timeout 600 python3 "$SCRIPT" "$binary" "$outdir" 2>&1 | tail -2
}

# Decompiler-per-arch plugins (medium size, high value)
dump_one plugins hexarm   plugins/hexarm.so
dump_one plugins hexmips  plugins/hexmips.so
dump_one plugins hexppc   plugins/hexppc.so
dump_one plugins hexrv    plugins/hexrv.so
dump_one plugins hexarc   plugins/hexarc.so
dump_one plugins hexv850  plugins/hexv850.so

# IDAPython runtime
dump_one plugins idapython3 plugins/idapython3.so

# Debuggers (priority)
dump_one plugins gdb_user    plugins/gdb_user.so
dump_one plugins linux_user  plugins/linux_user.so
dump_one plugins bochs_user  plugins/bochs_user.so
dump_one plugins dalvik_user plugins/dalvik_user.so

# Misc plugins
dump_one plugins objc       plugins/objc.so
dump_one plugins rtti       plugins/rtti.so
dump_one plugins strings    plugins/strings.so
dump_one plugins svdimport  plugins/svdimport.so

# Loaders (the missing macho.so/pe.so are the priority ones)
dump_one loaders macho_full loaders/macho.so

echo "=== DONE ==="
