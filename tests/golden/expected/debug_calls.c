/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x1065LL; return;
}
/* Function:   add | Address: 0x1129 | Size: 0x17 (23 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int add(int a, int b) {
    int v5; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v5;
    return;
}
/* Function:   sub | Address: 0x1141 | Size: 0x15 (21 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int sub(int a, int b) {
    int v5; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v5;
    return;
}
/* Function:   mul | Address: 0x1157 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int mul(int a, int b) {
    int v5; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v5;
    return result;
}
/* Function:   square | Address: 0x116e | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   mul | Xrefs from: unknown */
int square(int x) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0; *(_QWORD *)(0LL) = 0x118cLL;
    mul(); return result;
}
/* Function:   cube | Address: 0x118e | Size: 0x28 (40 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   mul, square | Xrefs from: unknown */
int cube(int x) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x11a7LL; square(); *(_QWORD *)(0LL) = 0x11b5LL;
    mul(); return result;
}
/* Function:   abs_val | Address: 0x11b7 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int abs_val(int x) {
    int v6; // eax
    int v4; // edi
    int v8; // temp
    unsigned int cond; // temp
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4;
    // source: fixtures/src/calls.c:6
    cond = *(_DWORD *)(0LL);
    // source: fixtures/src/calls.c:6
    v6 = cond;
    v7 = cond; v8 = v8; cond = v8 < 0;
    v9 = LOBYTE(cond); v7 = v8; if (!v9) { cond = v8; }
    return result;
}
/* Function:   max | Address: 0x11ce | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int max(int a, int b) {
    int v5; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v5;
    v10 = LOBYTE(0); if (!v10) { 0 = 0; } return result;
}
/* Function:   min | Address: 0x11e9 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int min(int a, int b) {
    int v5; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v5;
    return result;
}
/* Function:   clamp | Address: 0x1204 | Size: 0x33 (51 bytes) | Convention: unknown | Stack frame: 0x8 (8 bytes) | Xrefs to:   max, min | Xrefs from: unknown */
int clamp(int x, int lo, int hi) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0; *(_DWORD *)(0LL) = 0;
    *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1228LL; max(); *(_QWORD *)(0LL) = 0x1236LL;
    min(); return result;
}
/* Function:   compute | Address: 0x1238 | Size: 0x7b (123 bytes) | Convention: unknown | Stack frame: 0x8 (8 bytes) | Xrefs to:   abs_val, add, clamp, cube, square, sub | Xrefs from: unknown */
int compute(int x) {
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1256LL; add(); *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1268LL; sub(); *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1275LL; square(); *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1282LL; cube(); *(_DWORD *)(0LL) = 0;
    *(_QWORD *)(0LL) = 0x1294LL; sub(); *(_QWORD *)(0LL) = 0x129bLL;
    abs_val(); *(_DWORD *)(0LL) = 0; *(_QWORD *)(0LL) = 0x12b2LL;
    clamp(); return result;
}
/* Function:   main | Address: 0x12b4 | Size: 0x13 (19 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   compute | Xrefs from: unknown */
int main(void) {
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x12c6LL; compute();
    return result;
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
