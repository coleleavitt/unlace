#!/bin/bash
# Stylistic fixture score against the IDA reference profile.
#
# Runs the golden_fixtures suite with --nocapture, scrapes the
# `[score] <value> <fixture>` lines that Metrics::score() prints to stderr,
# and reports the arithmetic mean across all fixtures. This is a style and
# structural-shape watchdog; it does not measure semantic equivalence or
# DWARF/type-variable accuracy.
#
# Each fixture is also scored once in golden_fixtures_metrics_summary, so
# the stream contains 2 entries per fixture (run + summary). The mean is
# robust to that duplication; both pass through the same scoring formula.
#
# Phase 9 baseline (P9-2 landing): Stylistic Fixture Parity 59.6%
# Per-fixture: medium=0.0 cpp_rtti=50.9 cpp_vtable=53.6 debug_calls=60.0
#              cpp_exceptions=78.2 debug_hello=80.9 debug_structs=93.9
set -euo pipefail

cd "$(dirname "$0")/.."

cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 \
    | grep -F '[score]' \
    | awk '{ sum += $2; n++ }
           END {
               if (n == 0) {
                   print "no [score] lines found" > "/dev/stderr"
                   exit 1
               }
               printf "Stylistic Fixture Parity: %.1f%%\n", sum / n
           }'
