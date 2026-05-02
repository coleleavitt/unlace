/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x1065LL; return;
}
/* Function:   sum_squares_x87 | Address: 0x1129 | Size: 0x14 (20 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sum_squares_x87(void) {
    int v3; // reg?
    int v4; // reg?
    v2 = *(_QWORD *)(0LL); v3 = /* CALLOTHER tag=784 */ 0; v3 = /* CALLOTHER tag=788 */ 0;
    /* CALLOTHER tag=791 */ 0; v3 = /* CALLOTHER tag=788 */ 0; v4 = /* CALLOTHER tag=786 */ 0;
    result = 0LL; return result;
}
/* Function:   compare_floats_x87 | Address: 0x113e | Size: 0x27 (39 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void compare_floats_x87(void) {
    int v4; // CF
    int v6; // ZF
    int v3; // reg?
    int v9; // reg?
    _Bool cond; // temp
    v2 = *(_QWORD *)(0LL); v3 = /* CALLOTHER tag=784 */ 0; cond = !v4;
    cond = !v6; cond = cond && cond;
    if (cond) {
    } else {
        /* CALLOTHER tag=791 */ 0;
    }
    result = 0LL; return result;
}
/* Function:   mix_ops_x87 | Address: 0x1166 | Size: 0x1a (26 bytes) | Convention: unknown | Stack frame: 0xa (10 bytes) | Xrefs from: unknown */
void mix_ops_x87(void) {
    int v3; // reg?
    int v4; // reg?
    int v5; // reg?
    v2 = *(_QWORD *)(0LL); v3 = /* CALLOTHER tag=784 */ 0; v4 = /* CALLOTHER tag=788 */ 0;
    v5 = /* CALLOTHER tag=787 */ 0; return;
}
/* Function:   main | Address: 0x1181 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    result = 0LL; return result;
}
/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
void sub_10e0(void) {
    long long v8; // rsp
    int v1; // rip
    unsigned char v4; // temp
    unsigned long long v3; // temp
    v4 = *(_BYTE *)(v3);
    if (v1) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; v3 = *(_QWORD *)(v3); cond = v3 == 0LL;
        if (cond) {
        } else {
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1107LL; sub_1030();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x110cLL; sub_1070();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
}
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    return;
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1070(void) {
    int v1; // rip
    signed char v7; // temp
    v5 = 1; v7 = LOBYTE(0LL);
    if (v5) {
    } else {
        v5 = 1; v7 = v7;
        if (v5) {
        }
    }
    return result;
}
