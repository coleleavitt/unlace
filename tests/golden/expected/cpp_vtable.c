/* Function:   main | Address: 0x1060 | Size: 0x26 (38 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
void main(void) {
    int result;
    *(_QWORD *)(0LL) = 0x1080LL; __printf_chk(); return result;
}
/* Function:   _start | Address: 0x1090 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x10b5LL; return;
}
/* Function:   use_base(Base*) | Address: 0x1180 | Size: 0x7 (7 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// use_base(Base*)
void use_base(void * a1) {
    int v1; // rdi
    unsigned long long v2; // temp
    v2 = *(_QWORD *)(v1); v3 = v2; return;
}
/* Function:   sub_1130 | Address: 0x1130 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_10c0 | Xrefs from: unknown */
void sub_1130(void) {
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
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1157LL; sub_1040();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x115cLL; sub_10c0();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
    return;
}
/* Function:   sub_1170 | Address: 0x1170 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
    return;
}
/* Function:   sub_10c0 | Address: 0x10c0 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10c0(void) {
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
