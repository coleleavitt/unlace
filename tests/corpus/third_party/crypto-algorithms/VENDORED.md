# Vendored: B-Con/crypto-algorithms

- Upstream: https://github.com/B-Con/crypto-algorithms
- Commit: cfbde48414baacf51fc7c74f275190881f037d32
- License: public domain (see README.md in this directory, copied verbatim).
- Author: Brad Conte (brad AT bradconte.com).

Files are unmodified copies. The `*_test.c` drivers call `strlen` without
including `<string.h>`, so tests/corpus/corpus.toml adds `-include string.h`.
