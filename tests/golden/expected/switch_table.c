/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
/* Function:   dispatch | Address: 0x1129 | Size: 0x51 (81 bytes) | Convention: stdcall | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int __stdcall dispatch(void) {
    __int64 v3; // rdx
    int v5; // rdi
    int v6; // rip
    _DWORD v12; // temp
    if (v11) {
        return -1;
    } else {
        v3 = v6 + 0x2004LL; v9 = v5 << 2LL; v12 = *(_DWORD *)(v9 + v9);
        v2 = v12; v2 = v9 + v9;
    }
    return;
}
/* Function:   main | Address: 0x117b | Size: 0x27 (39 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   dispatch | Xrefs from: unknown */
int main(void) {
    int v5; // bpl
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    for (; v16; v21 = 0) {
        dispatch();
    }
    saved_rbp = v5; return saved_rbp;
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
