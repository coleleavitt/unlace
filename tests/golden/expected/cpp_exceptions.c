/*
 * C++ Class Hierarchy (from RTTI):
 *   .2.1_p20260214 ::) 15.::.1
 */
/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x4c (76 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
void __aapcs may_throw(void * a1) {
    int v1; // rax
    int v6; // rip
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = v1;
    *(_QWORD *)(0LL) = 0x114eLL;
    /* allocate exception */
    __cxa_allocate_exception();
    v3 = v1; *(_QWORD *)(0LL) = 0x1160LL; std_runtime_error_runtime_error();
    *(_QWORD *)(0LL) = 0x1176LL;
    /* throw */
    __cxa_throw();
    v5 = v1; *(_QWORD *)(0LL) = 0x1185LL; __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL; _Unwind_Resume(); return;
}

/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0xb3 (179 bytes) | Convention: unknown | Stack frame: 0x88 (136 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_end_catch, __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
// safe_call(int) [clone .cold]
__int32 safe_call(void) {
    int v7; // rip
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x119cLL;
    /* allocate exception */
    __cxa_allocate_exception();
    *(_QWORD *)(0LL) = 0x11aeLL; std_runtime_error_runtime_error(); *(_QWORD *)(0LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x11d9LL;
    __cxa_free_exception();
    v10 = 0;
    if (v10) {
        *(_QWORD *)(0LL) = 0x122dLL; _Unwind_Resume(); *(_QWORD *)(0LL) = 0x1239LL;
        /* end catch */
        __cxa_end_catch();
        *(_QWORD *)(0LL) = 0x1241LL; _Unwind_Resume();
    } else {
        *(_QWORD *)(0LL) = 0x11edLL;
        /* catch */
        __cxa_begin_catch();
        *(_QWORD *)(0LL) = 0x11f6LL;
        unsigned long long pfn = *(_QWORD *)(0LL); // temp
        ((void (*)())pfn)(); *(_QWORD *)(0LL) = 0x1211LL; return result;
    }
    return;
}

/* Function:   main | Address: 0x1250 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    int result;
    safe_call(); return result;
}

/* Function:   _start | Address: 0x1260 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1285LL; return;
}

/* Function:   may_throw(int) | Address: 0x1350 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// may_throw(int)
void may_throw(void) {
    int v4;
    if (v4) {
    }
    long long result = 0LL; // temp
    return result;
}

/* Function:   safe_call(int) | Address: 0x1360 | Size: 0x6 (6 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// safe_call(int)
void safe_call(void) {
    int v5;
    if (v5) {
    }
    return;
}

/* Function:   sub_1176 | Address: 0x1176 | Size: 0x49 (73 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
void __aapcs sub_1176(void * a1) {
    int v1; // rax
    int v7; // rip
    v6 = v1; *(_QWORD *)(0LL) = 0x1185LL; __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL; _Unwind_Resume(); *(_QWORD *)(0LL) = v1;
    v2 = v1; *(_QWORD *)(0LL) = 0x11aeLL; std_runtime_error_runtime_error();
    *(_QWORD *)(0LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    return;
}

/* Function:   sub_11c4 | Address: 0x11c4 | Size: 0x54 (84 bytes) | Convention: unknown | Stack frame: 0x20 (32 bytes) | Xrefs to:   __cxa_begin_catch, __cxa_free_exception | Xrefs from: unknown */
void sub_11c4(void) {
    long long v4; // rsp
    *(_QWORD *)(0x10LL) = 0x10LL; *(_QWORD *)(0x10LL) = 0x10LL; v4 = 0LL;
    *(_QWORD *)(0x10LL) = 0x11d9LL; __cxa_free_exception();
    if (v4) {
    }
    *(_QWORD *)(0LL) = 0x11edLL;
    /* catch */
    __cxa_begin_catch();
    *(_QWORD *)(0LL) = 0x11f6LL;
    unsigned long long pfn = *(_QWORD *)(0x10LL); // temp
    ((void (*)())pfn)(); *(_QWORD *)(0x10LL) = 0x1211LL; return;
}

/* Function:   sub_121c | Address: 0x121c | Size: 0x9 (9 bytes) | Convention: Microsoft x64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   _Unwind_Resume | Xrefs from: unknown */
void __fastcall sub_121c(void) {
    int v2; // rdx
    long long v5; // temp
    v1 = v2; sub_11e2(); v5 -= 8LL;
    v3 = v5; *(_QWORD *)(v5) = 0x122dLL; _Unwind_Resume();
    return;
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
    long long v1; // rsp
    int v4; // rip
    unsigned long long v10; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; v10 = *(_QWORD *)(v10);
        if (cond) {
        } else {
            v10 = *(_QWORD *)(v10); *(_QWORD *)(0LL) = 0x1327LL; sub_10b0();
        }
        v1 = v10; *(_QWORD *)(v10) = 0x132cLL; sub_1290();
        *(_BYTE *)(v10) = 1; v10 = v10; v1 = v10;
        result = *(_QWORD *)(v10); return result;
    }
}

/* Function:   sub_1340 | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1340(void) {
    sub_12c0(); return;
}

/* Function:   sub_1290 | Address: 0x1290 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1290(void) {
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
