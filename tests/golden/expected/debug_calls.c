/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1065LL; return;
}
/* Function:   add | Address: 0x1129 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int add(int a, int b) {
    int v3; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v3;
    return;
}
/* Function:   sub | Address: 0x1141 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int sub(int a, int b) {
    int v3; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v3;
    return;
}
/* Function:   mul | Address: 0x1157 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int mul(int a, int b) {
    int v3; // esi
    int v4; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v4; *(_DWORD *)(0LL) = v3;
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
    int v1; // eax
    int v5; // edi
    int v8; // temp
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5;
    // fixtures/src/calls.c:6
    unsigned int cond = *(_DWORD *)(0LL); // temp
    // fixtures/src/calls.c:6
    v1 = cond;
    v2 = cond; v8 = v8; cond = v8 < 0;
    v11 = LOBYTE(cond); v2 = v8; if (!v11) { cond = v8; }
    return result;
}
/* Function:   max | Address: 0x11ce | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int max(int a, int b) {
    int v5; // esi
    int v6; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v6; *(_DWORD *)(0LL) = v5;
    v8 = LOBYTE(0); if (!v8) { 0 = 0; } return result;
}
/* Function:   min | Address: 0x11e9 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int min(int a, int b) {
    int v4; // esi
    int v5; // edi
    *(_QWORD *)(0LL) = 0LL; *(_DWORD *)(0LL) = v5; *(_DWORD *)(0LL) = v4;
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
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
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
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0(); return;
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
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
