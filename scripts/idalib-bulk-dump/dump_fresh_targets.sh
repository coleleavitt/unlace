#!/usr/bin/env bash
# Fresh decompilation of priority binaries that have NO .i64 yet.
# idalib will autoanalyze and decompile on the fly.
set -u

IDA_DIR="/home/cole/Downloads/Software/IDAPro/ida-pro-9.3sp1"
REFS_DIR="/home/cole/RustProjects/active/unlace/references/ida"
SCRIPT="/tmp/dump_one_binary.py"

export PYTHONPATH="$IDA_DIR/idalib/python"
export LD_LIBRARY_PATH="$IDA_DIR"

dump_one() {
    local cat="$1"
    local name="$2"
    local relpath="$3"
    local binary="$IDA_DIR/$relpath"
    local outdir="$REFS_DIR/$cat/$name"
    if [ ! -f "$binary" ]; then
        echo "[SKIP] $cat/$name — missing $binary"; return
    fi
    if [ -d "$outdir/all" ] && [ -n "$(ls -A "$outdir/all" 2>/dev/null)" ]; then
        local count
        count=$(ls "$outdir/all" 2>/dev/null | wc -l)
        echo "[SKIP] $cat/$name — has $count files already"; return
    fi
    echo "[DUMP] $cat/$name from $relpath ..."
    timeout 3600 python3 "$SCRIPT" "$binary" "$outdir" 2>&1 | tail -3
}

# ─── Top-level binaries without .i64 ─────────────────────────────────
echo "=== TOP-LEVEL ==="
dump_one binary idat        idat
dump_one binary libidalib   libidalib.so
dump_one binary libidalib32 libidalib32.so
dump_one binary libida32    libida32.so

# ─── Plugins without .i64 (priority) ─────────────────────────────────
echo "=== HIGH-PRIORITY PLUGINS (no .i64) ==="
dump_one plugins idapython3  plugins/idapython3.so
dump_one plugins gdb_user    plugins/gdb_user.so
dump_one plugins linux_user  plugins/linux_user.so
dump_one plugins bochs_user  plugins/bochs_user.so
dump_one plugins ios_user    plugins/ios_user.so
dump_one plugins xnu_user    plugins/xnu_user.so
dump_one plugins pin_user    plugins/pin_user.so
dump_one plugins replay_user plugins/replay_user.so
dump_one plugins dalvik_user plugins/dalvik_user.so
dump_one plugins objc        plugins/objc.so
dump_one plugins rtti        plugins/rtti.so
dump_one plugins strings     plugins/strings.so
dump_one plugins svdimport   plugins/svdimport.so
dump_one plugins ida_mcp_server plugins/ida_mcp_server.so
dump_one plugins hexarm      plugins/hexarm.so
dump_one plugins hexmips     plugins/hexmips.so
dump_one plugins hexppc      plugins/hexppc.so
dump_one plugins hexrv       plugins/hexrv.so
dump_one plugins hexarc      plugins/hexarc.so
dump_one plugins hexv850     plugins/hexv850.so

# ─── Stubs (small) ───────────────────────────────────────────────────
echo "=== STUB DEBUGGERS ==="
dump_one plugins linux_stub   plugins/linux_stub.so
dump_one plugins win32_stub   plugins/win32_stub.so
dump_one plugins mac_stub     plugins/mac_stub.so
dump_one plugins arm_mac_stub plugins/arm_mac_stub.so
dump_one plugins armlinux_stub plugins/armlinux_stub.so

# ─── Loaders without .i64 ────────────────────────────────────────────
echo "=== LOADERS ==="
dump_one loaders macho  loaders/macho.so
dump_one loaders pe2    loaders/pe.so

# ─── Procs without .i64 (smaller, less critical) ─────────────────────
echo "=== ADDITIONAL PROCS ==="
dump_one processors arm_proc  procs/arm.so
dump_one processors pc_proc   procs/pc.so
dump_one processors avr       procs/avr.so
dump_one processors pic       procs/pic.so
dump_one processors z80       procs/z80.so

echo "=== DONE ==="
