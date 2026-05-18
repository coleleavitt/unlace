/* Function:   main | Address: 0x1060 | Size: 0x26 (38 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
int main(void) {
    printf(0x2004LL, 0x2a); return 0;
}
/* Function:   _start | Address: 0x1090 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
/* Function:   use_base(Base*) | Address: 0x1180 | Size: 0x7 (7 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// use_base(Base*)
void use_base(void * a1) {
    int v2; // rdi
    _QWORD v3; // temp
    v3 = *(_QWORD *)(v2); v1 = v3; v3 = *(_QWORD *)(v3);
    return this->__vftable->method_0(); return;
}
/* Function:   sub_1130 | Address: 0x1130 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_10c0 | Xrefs from: unknown */
void sub_1130(void) {
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
        sub_10c0(); *(_BYTE *)(0LL) = 1; return result;
    }
}
/* Function:   sub_1170 | Address: 0x1170 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
    sub_10f0(); return;
}
/* Function:   sub_10c0 | Address: 0x10c0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10c0(void) {
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
