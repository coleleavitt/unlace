/* Function:   _start | Address: 0x120000100 | Size: 0x1c (28 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   arithmetic_test, logic_test, memory_test | Xrefs from: unknown */
void _start(void) {
    int v3;
    arithmetic_test(); logic_test(); memory_test();
    while (v3) {
    }
    return;
}
/* Function:   arithmetic_test | Address: 0x120000120 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void arithmetic_test(void) {
    int result; // reg?
    return result;
}
/* Function:   logic_test | Address: 0x120000140 | Size: 0x2c (44 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void logic_test(void) {
    int result; // reg?
    v7 = 0;
    if (v7) {
    }
    return result;
}
/* Function:   memory_test | Address: 0x120000170 | Size: 0x34 (52 bytes) | Convention: unknown | Stack frame: 0x24 (36 bytes) | Xrefs from: unknown */
void memory_test(void) {
    _DWORD v9; // temp
    *(_QWORD *)(0x42LL) = 0LL; *(_QWORD *)(0x42LL) = 0LL; *(_DWORD *)(0x42LL) = LODWORD(0x42LL);
    v9 = *(_DWORD *)(0x42LL); v8 = 0;
    if (v8) {
    }
    int result = 0LL; // reg?
    return result;
}
