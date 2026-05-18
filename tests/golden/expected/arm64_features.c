/* Function:   _start | Address: 0x400100 | Size: 0xc (12 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   bitfield_test, csel_test, mul_test | Xrefs from: unknown */
void __aapcs _start(void) {
    mul_test(); csel_test(); bitfield_test();
    return;
}
/* Function:   mul_test | Address: 0x400118 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs mul_test(void) {
    int result; // reg?
    return result;
}
/* Function:   csel_test | Address: 0x400128 | Size: 0x20 (32 bytes) | Convention: Microsoft x64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __fastcall csel_test(__int64 a1) {
    __int64 v3; // rdx
    __int64 v4; // rbx
    __int64 v5; // rsp
    __int64 v6; // rbp
    int result; // reg?
    __int64 c0; // temp
    c0 = v1 - v2;
    _BOOL cond = v1 == v2; // reg?
    v12 = LOBYTE(c0 < 0LL); v9 = v12;
    if (v12 ^ __OFSUB__(v1, v2)) { cond = v1; } else { cond = v2; }
    __csinv__(v12 ^ __OFSUB__(v1, v2), v1, v2, 2);
    /* COPY */; /* BOOL_NEGATE */;
    __csneg__(!cond, v1, v2, 0xb);
    if (cond) {
    } else {
        /* INT_ADD */;
    }
    return result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
    void * field_16;
};

/* Function:   bitfield_test | Address: 0x400148 | Size: 0x1c (28 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x18 (24 bytes) | Xrefs from: unknown */
void __aapcs bitfield_test(void) {
    char buf_16[24];
    int v3; // reg?
    _QWORD v6; // temp
    __int64 v4 = v3 - 16; // temp
    *(_QWORD *)(v4) = v4; v3->field_FFFFFFFFFFFFFFF8 = v6; v7 = *(_QWORD *)(v3);
    v1 = v7; v6 = v3->field_8;
    __int64 result = v6; // reg?
    __dmb__(); return result;
}
