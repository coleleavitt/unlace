/* Function:   _start | Address: 0x1040 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1065LL; return;
}
/* Function:   dispatch | Address: 0x1129 | Size: 0x4c (76 bytes) | Convention: System V AMD64 | Stack frame: 0x4 (4 bytes) | Xrefs from: unknown */
void dispatch(void) {
    int v5; // rip
    int v10; // reg?
    _DWORD v8; // temp
    if (v10) {
        return result;
    } else {
        v8 = *(_DWORD *)(0LL); v1 = v8;
    }
    return;
}
/* Function:   main | Address: 0x117b | Size: 0x27 (39 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   dispatch | Xrefs from: unknown */
void main(void) {
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    for (; v16; v24 = 0) {
        *(_QWORD *)(0LL) = 0x1192LL; dispatch();
    }
    return result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
void sub_10e0(void) {
    __int64 v1; // rsp
    int v4; // rip
    _QWORD c1; // temp
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
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0(); return;
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
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
