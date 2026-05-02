/* Function:   _start | Address: 0x10100 | Size: 0x10 (16 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v1;
    while (v1) {
    }
    return;
}
/* Function:   arithmetic_test | Address: 0x10110 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void arithmetic_test(void) {
    return;
}
/* Function:   logic_test | Address: 0x10134 | Size: 0x30 (48 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void logic_test(void) {
    v5 = 0;
    if (v5) {
    }
    v5 = 1;
    if (v5) {
    }
    return;
}
/* Function:   memory_test | Address: 0x10164 | Size: 0x34 (52 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void memory_test(void) {
    long long result; // rdx
    unsigned int v5; // temp
    unsigned long long v3; // temp
    result = 0x42LL; *(_QWORD *)(0x42LL) = v3; *(_QWORD *)(0x42LL) = v3;
    *(_DWORD *)(0x42LL) = LODWORD(0x42LL); v5 = *(_DWORD *)(0x42LL); v3 = (__int64)(v5);
    v6 = v3; v3 = (unsigned __int64)(v3 < 0x64LL); v8 = v3;
    cond = v3 == 0LL;
    if (cond) {
    }
    v3 = *(_QWORD *)(0x42LL); v9 = v3; v3 = *(_QWORD *)(0x42LL);
    v10 = v3; return result;
}
