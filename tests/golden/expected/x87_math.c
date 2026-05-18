/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
/* Function:   sum_squares_x87 | Address: 0x1129 | Size: 0x14 (20 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0xa (10 bytes) | Xrefs from: unknown */
void __aapcs sum_squares_x87(__int64 a1) {
    int result; // eax
    int v2; // rsp
    int v4; // reg?
    v6 = *(_QWORD *)(v2 + 8LL);
    int v7 = /* CALLOTHER tag=784 */ 0; // reg?
    v3 = /* CALLOTHER tag=788 */ 0; /* CALLOTHER tag=791 */ 0; v3 = /* CALLOTHER tag=788 */ 0;
    v4 = /* CALLOTHER tag=786 */ 0; return result;
}
/* Function:   compare_floats_x87 | Address: 0x113e | Size: 0x27 (39 bytes) | Convention: System V AMD64 | Stack frame: 0xa (10 bytes) | Xrefs from: unknown */
void compare_floats_x87(void) {
    int result; // eax
    int v3; // rsp
    int v4; // CF
    int v5; // ZF
    int v7; // reg?
    v11 = *(_QWORD *)(v3 + 0x18LL);
    int v12 = /* CALLOTHER tag=784 */ 0; // reg?
    _BOOL cond = !v4; // temp
    _BOOL cond = !v5; // temp
    _BOOL c3 = cond && cond; // temp
    if (c3) {
        v6 = /* CALLOTHER tag=785 */ 0; c0 = /* CALLOTHER tag=785 */ 0;
    } else {
        /* CALLOTHER tag=791 */ 0; v6 = /* CALLOTHER tag=785 */ 0;
    }
    return result;
}
/* Function:   mix_ops_x87 | Address: 0x1166 | Size: 0x1a (26 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0xa (10 bytes) | Xrefs from: unknown */
void __aapcs mix_ops_x87(__int64 a1) {
    int result; // eax
    int v2; // rsp
    int v4; // reg?
    int v5; // reg?
    v7 = v2[4];
    int v8 = /* CALLOTHER tag=784 */ 0; // reg?
    v4 = /* CALLOTHER tag=788 */ 0; v5 = /* CALLOTHER tag=787 */ 0; return result;
}
/* Function:   main | Address: 0x1181 | Size: 0x9 (9 bytes) | Convention: stdcall | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int __stdcall main(void) {
    return 1;
}
/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
void sub_10e0(void) {
    int result; // eax
    v9 = 0;
    if (v9) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; cond = 1;
        if (cond) {
        } else {
            sub_1030();
        }
        sub_1070(); *(_BYTE *)(0LL) = 1; return result;
    }
}
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0(); return;
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1070(void) {
    int result; // eax
    __int64 v2; // rax
    v2 = v14;
    char cond = 1; // ZF
    if (cond) {
        return result;
    } else {
        v2 = v14; cond = v14 == 0LL;
        if (cond) {
            return result;
        }
    }
    return;
}
