/* Function:   _start | Address: 0x1060 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
/* Function:   area | Address: 0x1149 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int area(__int64 a1 /* BYREF */) {
    int v2; // rdi
    _DWORD v4; // temp
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    v4 = v2->size;
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    result = v4;
    v4 = v2[3]; v5 *= v4; return v5;
}
/* Function:   offset | Address: 0x1155 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
Point offset(Point p, int dx, int dy) {
    return 0LL;
}
/* Function:   main | Address: 0x116e | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
int main(void) {
    int result; // eax
    printf(0x2004LL, 0xc8);
    return result;
}
/* Function:   sub_1100 | Address: 0x1100 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_1090 | Xrefs from: unknown */
void sub_1100(void) {
    int result; // eax
    v9 = 0;
    if (v9) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; cond = 1;
        if (cond) {
        } else {
            sub_1040();
        }
        sub_1090(); *(_BYTE *)(0LL) = 1; return result;
    }
}
/* Function:   sub_1140 | Address: 0x1140 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1140(void) {
    sub_10c0(); return;
}
/* Function:   sub_1090 | Address: 0x1090 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1090(void) {
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
