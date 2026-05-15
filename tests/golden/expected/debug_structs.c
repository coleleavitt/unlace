/* Function:   _start | Address: 0x1060 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1085LL; return;
}
/* Function:   area | Address: 0x1149 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int area(__int64 a1 /* BYREF */) {
    int v3; // rdi
    _DWORD v5; // temp
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    v5 = *(_DWORD *)(0LL);
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    v1 = v5;
    result = 0LL; return result;
}
/* Function:   offset | Address: 0x1155 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
Point offset(Point p, int dx, int dy) {
    return;
}
/* Function:   main | Address: 0x116e | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int main(void) {
    *(_QWORD *)(0LL) = 0x1191LL; return result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_1100 | Address: 0x1100 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1040, sub_1090 | Xrefs from: unknown */
void sub_1100(void) {
    __int64 v1; // rsp
    int v4; // rip
    _QWORD c1; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; c1 = *(_QWORD *)(c1);
        if (cond) {
        } else {
            c1 = *(_QWORD *)(c1); *(_QWORD *)(0LL) = 0x1127LL; sub_1040();
        }
        v1 = c1; *(_QWORD *)(c1) = 0x112cLL; sub_1090();
        *(_BYTE *)(c1) = 1; c1 = c1; v1 = c1;
        result = *(_QWORD *)(c1); return result;
    }
}
/* Function:   sub_1140 | Address: 0x1140 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1140(void) {
    sub_10c0(); return;
}
/* Function:   sub_1090 | Address: 0x1090 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1090(void) {
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
