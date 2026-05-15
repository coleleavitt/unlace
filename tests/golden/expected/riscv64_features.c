/* Function:   _start | Address: 0x10100 | Size: 0x10 (16 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v3;
    arithmetic_test(); logic_test(); memory_test();
    while (v3) {
    }
    return;
}
/* Function:   arithmetic_test | Address: 0x10110 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void arithmetic_test(void) {
    return;
}
/* Function:   logic_test | Address: 0x10134 | Size: 0x30 (48 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void logic_test(void) {
    v6 = 0;
    if (v6) {
    }
    v6 = 1;
    if (v6) {
    }
    return;
}
/* Function:   memory_test | Address: 0x10164 | Size: 0x34 (52 bytes) | Convention: unknown | Stack frame: 0x24 (36 bytes) | Xrefs from: unknown */
void memory_test(void) {
    _DWORD v8; // temp
    _QWORD v10; // temp
    __int64 result = 0x42LL; // rdx
    *(_QWORD *)(0x42LL) = v10; *(_QWORD *)(0x42LL) = v10; *(_DWORD *)(0x42LL) = LODWORD(0x42LL);
    v8 = *(_DWORD *)(0x42LL); v10 = (__int64)(v8); v4 = v10;
    v10 = (_QWORD)(v10 < 0x64LL); v5 = v10; cond = v10 == 0LL;
    if (cond) {
    }
    v10 = *(_QWORD *)(0x42LL); v6 = v10; v10 = *(_QWORD *)(0x42LL);
    v1 = v10; return result;
}
