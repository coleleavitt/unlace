/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
/* Function:   add | Address: 0x1129 | Size: 0x17 (23 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int add(int a, int b) {
    int v4; // esi
    int v5; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5; *(_DWORD *)(0LL) = v4;
    return 0;
}
/* Function:   sub | Address: 0x1141 | Size: 0x15 (21 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int sub(int a, int b) {
    int v4; // esi
    int v5; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5; *(_DWORD *)(0LL) = v4;
    return 0;
}
/* Function:   mul | Address: 0x1157 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int mul(int a, int b) {
    int v4; // esi
    int v5; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5; *(_DWORD *)(0LL) = v4;
    return 0;
}
/* Function:   square | Address: 0x116e | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   mul | Xrefs from: unknown */
int square(int x) {
    int result; // eax
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0; result = 0;
    mul(); return result;
}
/* Function:   cube | Address: 0x118e | Size: 0x28 (40 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   mul, square | Xrefs from: unknown */
int cube(int x) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0;
    square(); result = 0; mul();
    return result;
}
/* Function:   abs_val | Address: 0x11b7 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int abs_val(int x) {
    int v5; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5;
    return 0;
}
/* Function:   max | Address: 0x11ce | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int max(int a, int b) {
    int result; // eax
    int v5; // esi
    int v6; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v6; *(_DWORD *)(0LL) = v5;
    return result;
}
/* Function:   min | Address: 0x11e9 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int min(int a, int b) {
    int result; // eax
    int v5; // esi
    int v6; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v6; *(_DWORD *)(0LL) = v5;
    return result;
}
/* Function:   clamp | Address: 0x1204 | Size: 0x33 (51 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   max, min | Xrefs from: unknown */
int clamp(int x, int lo, int hi) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0; *(_DWORD *)(0LL) = 0;
    *(_DWORD *)(0LL) = 0;
    max(); result = 0; min();
    return result;
}
/* Function:   compute | Address: 0x1238 | Size: 0x7b (123 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   abs_val, add, clamp, cube, square, sub | Xrefs from: unknown */
int compute(int x) {
    int result; // eax
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0;
    add(); *(_DWORD *)(0LL) = 0;
    sub(); *(_DWORD *)(0LL) = 0;
    square(); *(_DWORD *)(0LL) = 0; cube();
    *(_DWORD *)(0LL) = 0; sub(); abs_val();
    *(_DWORD *)(0LL) = 0;
    // fixtures/src/calls.c:17
    result = 0;
    clamp(); return result;
}
/* Function:   main | Address: 0x12b4 | Size: 0x13 (19 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   compute | Xrefs from: unknown */
int __aapcs main(__int64 a1) {
    int result; // eax
    *(_QWORD *)(0LL) = 0LL; compute(); return result;
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
