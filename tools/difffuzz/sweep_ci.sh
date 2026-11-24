#!/usr/bin/env bash
# Runs the difffuzz regression sweep (tools/difffuzz/sweep.py) over every configuration, then the XOP/TBM
# model check (tools/difffuzz/xopcheck.py), for a cron job or CI. Exit status is sweep.py's: 0 clean, 1 an unaccepted mismatch/length/missing finding,
# 2 a configuration errored; when the sweep is clean, xopcheck's (1 on a difference). Usage:
#   tools/difffuzz/sweep_ci.sh <unlace binary> [extra sweep.py arguments]
# Environment (defaults in brackets):
#   DIFFFUZZ_PYTHON      python with capstone, unicorn, keystone [~/.local/share/difffuzz-venv/bin/python]
#   DIFFFUZZ_QEMU_DIR    ':'-separated QEMU user-binary dirs [~/.local/share/qemu-8.2-user:~/.local/share/qemu-10.2-user]
#   DIFFFUZZ_OBJDUMP     llvm-objdump with RISC-V vector support [rustup's rustc-master llvm-objdump]
#   DIFFFUZZ_PPC_OBJDUMP llvm-objdump with the PowerPC target, for ppc64-p10 [the same rustup llvm-objdump]
#   DIFFFUZZ_GDBSIM_DIR  dfsim-<sim> drivers and gdb for --oracle gdbsim [~/.local/share/difffuzz-gdbsim/bin]
#   DIFFFUZZ_LA_OBJDUMP  binutils objdump for LoongArch [~/.local/share/difffuzz-tools/loongarch64-linux-gnu-objdump]
#   DIFFFUZZ_SLEIGHPATH  SLEIGH tree for xopcheck.py (sweep.py takes --sleighpath) [the binary's own]
#   DIFFFUZZ_SWEEP_OUT   directory for the summary JSON [~/.local/share/difffuzz-sweeps]
#   DIFFFUZZ_JOBS        configurations run at once [4]
set -euo pipefail

if [ $# -lt 1 ]; then
    echo "usage: $0 <unlace binary> [sweep.py arguments]" >&2
    exit 2
fi
unlace=$1
shift
here=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)

py=${DIFFFUZZ_PYTHON:-$HOME/.local/share/difffuzz-venv/bin/python}
export DIFFFUZZ_QEMU_DIR=${DIFFFUZZ_QEMU_DIR:-$HOME/.local/share/qemu-8.2-user:$HOME/.local/share/qemu-10.2-user}
rvv=$HOME/.rustup/toolchains/rustc-master/lib/rustlib/x86_64-unknown-linux-gnu/bin/llvm-objdump
objdump=${DIFFFUZZ_OBJDUMP:-$( [ -x "$rvv" ] && echo "$rvv" || echo llvm-objdump )}
if [ -z "${DIFFFUZZ_PPC_OBJDUMP:-}" ] && [ -x "$rvv" ]; then
    export DIFFFUZZ_PPC_OBJDUMP=$rvv
fi
la=$HOME/.local/share/difffuzz-tools/loongarch64-linux-gnu-objdump
if [ -z "${DIFFFUZZ_LA_OBJDUMP:-}" ] && [ -x "$la" ]; then
    export DIFFFUZZ_LA_OBJDUMP=$la
fi
outdir=${DIFFFUZZ_SWEEP_OUT:-$HOME/.local/share/difffuzz-sweeps}
mkdir -p "$outdir"
out="$outdir/sweep-$(date -u +%Y%m%dT%H%M%SZ)-$(basename "$unlace").json"

ulimit -c 0
slot=()
if command -v unlace-slot >/dev/null; then
    slot=(unlace-slot)
fi

set +e
"${slot[@]}" "$py" "$here/sweep.py" --unlace "$unlace" --objdump "$objdump" \
    --jobs "${DIFFFUZZ_JOBS:-4}" --out "$out" "$@"
rc=$?
# XOP/TBM have no CPU or emulator here: check them against xopcheck.py's model of the APM
"${slot[@]}" "$py" "$here/xopcheck.py" "$(cd "$here/../.." && pwd)" "$unlace" "${DIFFFUZZ_SLEIGHPATH:-}"
xrc=$?
set -e
[ $rc -ne 0 ] || rc=$xrc
echo "summary: $out (exit $rc)"
exit $rc
