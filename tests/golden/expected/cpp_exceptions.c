/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x4c (76 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
void __aapcs may_throw(void * a1) {
    int v3; // rax
    int v5; // rip
    *(_QWORD *)(0LL) = v3; *(_QWORD *)(0LL) = v3; *(_QWORD *)(0LL) = v3;
    *(_QWORD *)(0LL) = 0x114eLL;
    /* allocate exception */
    __cxa_allocate_exception();
    v4 = v3; *(_QWORD *)(0LL) = 0x1160LL; std_runtime_error_runtime_error();
    *(_QWORD *)(0LL) = 0x1176LL;
    /* throw */
    __cxa_throw();
    v7 = v3; *(_QWORD *)(0LL) = 0x1185LL; __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL; _Unwind_Resume(); return;
}
/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0xb3 (179 bytes) | Convention: unknown | Stack frame: 0x88 (136 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_end_catch, __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
// safe_call(int) [clone .cold]
__int32 safe_call(void) {
    int v5; // rip
    unsigned long long pfn; // temp
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x119cLL;
    /* allocate exception */
    __cxa_allocate_exception();
    *(_QWORD *)(0LL) = 0x11aeLL; std_runtime_error_runtime_error(); *(_QWORD *)(0LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x11d9LL;
    __cxa_free_exception();
    v11 = 0;
    if (v11) {
        *(_QWORD *)(0LL) = 0x122dLL; _Unwind_Resume(); *(_QWORD *)(0LL) = 0x1239LL;
        /* end catch */
        __cxa_end_catch();
        *(_QWORD *)(0LL) = 0x1241LL; _Unwind_Resume();
    } else {
        *(_QWORD *)(0LL) = 0x11edLL;
        /* catch */
        __cxa_begin_catch();
        *(_QWORD *)(0LL) = 0x11f6LL; pfn = *(_QWORD *)(0LL); ((void (*)())pfn)();
        *(_QWORD *)(0LL) = 0x1211LL; return result;
    }
    return;
}
/* Function:   main | Address: 0x1250 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    int result;
    return result;
}
/* Function:   _start | Address: 0x1260 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x1285LL; return;
}
/* Function:   may_throw(int) | Address: 0x1350 | Size: 0xc (12 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// may_throw(int)
void may_throw(__int64 a1) {
    int v1; // edi
    if (v1) {
    }
    result = 0LL; return result;
}
/* Function:   safe_call(int) | Address: 0x1360 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// safe_call(int)
void safe_call(__int64 a1) {
    int v1; // edi
    if (v1) {
    }
    return;
}
/* Function:   sub_1176 | Address: 0x1176 | Size: 0x49 (73 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
void __aapcs sub_1176(void * a1) {
    int v1; // rax
    int v5; // rip
    v2 = v1; *(_QWORD *)(0LL) = 0x1185LL; __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL; _Unwind_Resume(); *(_QWORD *)(0LL) = v1;
    v6 = v1; *(_QWORD *)(0LL) = 0x11aeLL; std_runtime_error_runtime_error();
    *(_QWORD *)(0LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    return;
}
/* Function:   sub_11c4 | Address: 0x11c4 | Size: 0x54 (84 bytes) | Convention: unknown | Stack frame: 0x20 (32 bytes) | Xrefs to:   __cxa_begin_catch, __cxa_free_exception | Xrefs from: unknown */
void sub_11c4(void) {
    long long v2; // rsp
    unsigned long long pfn; // temp
    *(_QWORD *)(0x10LL) = 0x10LL; *(_QWORD *)(0x10LL) = 0x10LL; v2 = 0LL;
    *(_QWORD *)(0x10LL) = 0x11d9LL; __cxa_free_exception();
    if (v2) {
    }
    *(_QWORD *)(0LL) = 0x11edLL;
    /* catch */
    __cxa_begin_catch();
    *(_QWORD *)(0LL) = 0x11f6LL; pfn = *(_QWORD *)(0x10LL); ((void (*)())pfn)();
    *(_QWORD *)(0x10LL) = 0x1211LL; return;
}
/* Function:   sub_121c | Address: 0x121c | Size: 0x9 (9 bytes) | Convention: Microsoft x64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   _Unwind_Resume | Xrefs from: unknown */
void __fastcall sub_121c(void) {
    int v1; // rdx
    long long v3; // temp
    v2 = v1; v3 -= 8LL; v4 = v3;
    *(_QWORD *)(v3) = 0x122dLL; _Unwind_Resume(); return;
}
/* Function:   sub_122d | Address: 0x122d | Size: 0xf (15 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, __cxa_end_catch | Xrefs from: unknown */
void __aapcs sub_122d(__int64 a1) {
    int v1; // rax
    v2 = v1; *(_QWORD *)(0LL) = 0x1239LL;
    /* end catch */
    __cxa_end_catch();
    *(_QWORD *)(0LL) = 0x1241LL; _Unwind_Resume(); return;
}
/* Function:   sub_1300 | Address: 0x1300 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_10b0, sub_1290 | Xrefs from: unknown */
void sub_1300(void) {
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
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1327LL; sub_10b0();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x132cLL; sub_1290();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
}
/* Function:   sub_1340 | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1340(void) {
    return;
}
/* Function:   sub_1290 | Address: 0x1290 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1290(void) {
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
