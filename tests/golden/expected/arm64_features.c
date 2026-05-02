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
    long long v10; // rdx
    long long v11; // rbx
    long long v12; // rsp
    long long v14; // rbp
    int result; // reg?
    _Bool cond; // reg?
    long long v3; // temp
    v3 = v1 - v2; cond = v3 == 0LL; v6 = LOBYTE(v3 < 0LL);
    v7 = v6;
    if (v6 ^ __OFSUB__(v1, v2)) { cond = v1; } else { cond = v2; }
    __csinv__(v6 ^ __OFSUB__(v1, v2), v1, v2);
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
    int v5; // rbp
    long long result; // reg?
    int v1; // reg?
    long long v2; // temp
    unsigned long long v4; // temp
    v2 = v1 - 16; *(_QWORD *)(v2) = v2; v2[1] = v4;
    v2 = *(_QWORD *)(v1); v6 = v2; v4 = v1->field_8;
    result = v4; __dmb__(); return result;
}
