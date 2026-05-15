/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1065LL; return;
}
/* Function:   sum_squares_x87 | Address: 0x1129 | Size: 0x14 (20 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sum_squares_x87(void) {
    int v3; // reg?
    v6 = *(_QWORD *)(0LL);
    int v7 = /* CALLOTHER tag=784 */ 0; // reg?
    v2 = /* CALLOTHER tag=788 */ 0; /* CALLOTHER tag=791 */ 0; v2 = /* CALLOTHER tag=788 */ 0;
    v3 = /* CALLOTHER tag=786 */ 0; result = 0LL; return result;
}
/* Function:   compare_floats_x87 | Address: 0x113e | Size: 0x27 (39 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void compare_floats_x87(void) {
    int v4; // CF
    int v5; // ZF
    int v7; // reg?
    v13 = *(_QWORD *)(0LL);
    int v14 = /* CALLOTHER tag=784 */ 0; // reg?
    _Bool cond = !v4; // temp
    _Bool cond = !v5; // temp
    _Bool c2 = cond && cond; // temp
    if (c2) {
    } else {
        /* CALLOTHER tag=791 */ 0;
    }
    result = 0LL; return result;
}
/* Function:   mix_ops_x87 | Address: 0x1166 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0xa (10 bytes) | Xrefs from: unknown */
void mix_ops_x87(void) {
    int v3; // reg?
    int v4; // reg?
    v7 = *(_QWORD *)(0LL);
    int v8 = /* CALLOTHER tag=784 */ 0; // reg?
    v3 = /* CALLOTHER tag=788 */ 0; v4 = /* CALLOTHER tag=787 */ 0; return;
}
/* Function:   main | Address: 0x1181 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    long long result = 0LL; // temp
    return result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
void sub_10e0(void) {
    long long v1; // rsp
    int v4; // rip
    unsigned long long c1; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; c1 = *(_QWORD *)(c1);
        if (cond) {
        } else {
            c1 = *(_QWORD *)(c1); *(_QWORD *)(0LL) = 0x1107LL; sub_1030();
        }
        v1 = c1; *(_QWORD *)(c1) = 0x110cLL; sub_1070();
        *(_BYTE *)(c1) = 1; c1 = c1; v1 = c1;
        result = *(_QWORD *)(c1); return result;
    }
}
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0(); return;
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1070(void) {
    int v5; // rip
    v8 = 1;
    if (v8) {
        return result;
    } else {
        result = 0LL; v8 = 1;
        if (v8) {
            result = 0LL; return result;
        }
    }
    return;
}
