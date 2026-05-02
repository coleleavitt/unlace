/* Function:   _start | Address: 0x1060 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x1085LL; return;
}
/* Function:   area | Address: 0x1149 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
__int32 area(__int64 a1) {
    int v1; // rdi
    unsigned int v3; // temp
    // source: /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    v3 = *(_DWORD *)(0LL);
    // source: /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    v4 = v3;
    result = 0LL; return result;
}
/* Function:   offset | Address: 0x1155 | Size: 0xe (14 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
Point offset(Point p, int dx, int dy) {
    return;
}
/* Function:   main | Address: 0x116e | Size: 0x2c (44 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int main(void) {
    *(_QWORD *)(0LL) = 0x1191LL; return result;
}
/* Function:   sub_1100 | Address: 0x1100 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_1090 | Xrefs from: unknown */
void sub_1100(void) {
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
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1127LL; sub_1040();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x112cLL; sub_1090();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
    return;
}
/* Function:   sub_1140 | Address: 0x1140 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1140(void) {
    return;
}
/* Function:   sub_1090 | Address: 0x1090 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1090(void) {
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
