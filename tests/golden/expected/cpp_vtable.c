/* Function:   main | Address: 0x1060 | Size: 0x1b (27 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
void main(void) {
    int result;
    *(_QWORD *)(0LL) = 0x1080LL; __printf_chk(); return result;
}
/* Function:   _start | Address: 0x1090 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x10b5LL; return;
}
/* Function:   use_base(Base*) | Address: 0x1180 | Size: 0x7 (7 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// use_base(Base*)
void use_base(void * a1) {
    int v2; // rdi
    unsigned long long v3; // temp
    v3 = *(_QWORD *)(v2); v1 = v3; return;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_1130 | Address: 0x1130 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1040, sub_10c0 | Xrefs from: unknown */
void sub_1130(void) {
    long long v1; // rsp
    int v4; // rip
    unsigned long long v10; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; v10 = *(_QWORD *)(v10);
        if (cond) {
        } else {
            v10 = *(_QWORD *)(v10); *(_QWORD *)(0LL) = 0x1157LL; sub_1040();
        }
        v1 = v10; *(_QWORD *)(v10) = 0x115cLL; sub_10c0();
        *(_BYTE *)(v10) = 1; v10 = v10; v1 = v10;
        result = *(_QWORD *)(v10); return result;
    }
}
/* Function:   sub_1170 | Address: 0x1170 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
    sub_10f0(); return;
}
/* Function:   sub_10c0 | Address: 0x10c0 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10c0(void) {
    int v5; // rip
    signed char v17; // temp
    v8 = 1; v17 = LOBYTE(0LL);
    if (v8) {
    } else {
        v8 = 1; v17 = v17;
        if (v8) {
        }
    }
    return result;
}
