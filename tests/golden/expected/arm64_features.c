/* Function:   _start | Address: 0x400100 | Size: 0xc (12 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   bitfield_test, csel_test, mul_test | Xrefs from: unknown */
void _start(void) {
    mul_test(); csel_test(); bitfield_test();
    return;
}
/* Function:   mul_test | Address: 0x400118 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void mul_test(void) {
    int result; // reg?
    return result;
}
/* Function:   csel_test | Address: 0x400128 | Size: 0x20 (32 bytes) | Convention: Microsoft x64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __fastcall csel_test(__int64 a1) {
    int v1; // rax
    int v2; // rcx
    long long v3; // rdx
    long long v4; // rbx
    long long v5; // rsp
    long long v6; // rbp
    int result; // reg?
    signed char v9; // reg?
    long long v13; // temp
    v13 = v1 - v2;
    _Bool cond = v13 == 0LL; // reg?
    v16 = LOBYTE(v13 < 0LL); v9 = v16;
    if (v16 ^ __OFSUB__(v1, v2)) { cond = v1; } else { cond = v2; }
    __csinv__(v16 ^ __OFSUB__(v1, v2), v1, v2);
    /* COPY */; /* BOOL_NEGATE */;
    __csneg__(!cond, v1, v2);
    if (cond) {
    } else {
        /* INT_ADD */;
    }
    return result;
}
/* Function:   bitfield_test | Address: 0x400148 | Size: 0x1c (28 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void bitfield_test(void) {
    int v2; // rbp
    int v5; // reg?
    unsigned long long v8; // temp
    long long v6 = v5 - 16; // temp
    *(_QWORD *)(v6) = v6; v6[1] = v8; v10 = *(_QWORD *)(v5);
    v3 = v10; v8 = v5->field_8;
    long long result = v8; // reg?
    __dmb__(); return result;
}
