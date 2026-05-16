/*
 * C++ Class Hierarchy (from RTTI):
 *   .2.1_p20260214 ::) 15.::.1
 */
/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x35 (53 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
void __noreturn __aapcs may_throw(void * a1) {
    int v1; // rax
    int v5; // r14
    int v6; // rip
    *(_QWORD *)(0LL) = v5; *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = v1;
    *(_QWORD *)(0LL) = 0x114eLL;
    /* allocate exception */
    __cxa_allocate_exception();
    v3 = v1; *(_QWORD *)(0LL) = 0x1160LL; std_runtime_error_runtime_error();
    *(_QWORD *)(0LL) = 0x1176LL;
    /* throw */
    __cxa_throw();
    return;
}

/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0x9f (159 bytes) | Convention: stdcall | Stack frame: 0x88 (136 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_throw | Xrefs from: unknown */
// safe_call(int) [clone .cold]
int __noreturn __stdcall safe_call(void) {
    int v7; // rip
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x119cLL;
    /* allocate exception */
    __cxa_allocate_exception();
    *(_QWORD *)(0LL) = 0x11aeLL; std_runtime_error_runtime_error(); *(_QWORD *)(0LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    v10 = 0;
    if (v10) {
        qword_FFFFFFFFFFFFFFFF = 0x122dLL; _Unwind_Resume();
    } else {
        qword_FFFFFFFFFFFFFFFF = 0x11edLL;
        /* catch */
        __cxa_begin_catch();
        qword_FFFFFFFFFFFFFFFF = 0x11f6LL;
        _QWORD pfn = *(_QWORD *)(0LL); // temp
        ((void (*)())pfn)(); qword_FFFFFFFFFFFFFFFF = 0x1211LL; return result;
    }
    return;
}

/* Function:   main | Address: 0x1250 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    int result;
    safe_call(); return result;
}

/* Function:   _start | Address: 0x1260 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1285LL; return;
}

/* Function:   may_throw(int) | Address: 0x1350 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// may_throw(int)
void may_throw(void) {
    int v4; // reg?
    if (v4) {
    }
    __int64 result = 0LL; // temp
    return result;
}

/* Function:   safe_call(int) | Address: 0x1360 | Size: 0x6 (6 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// safe_call(int)
void safe_call(void) {
    int v5; // reg?
    if (v5) {
    }
    return;
}

/* Function:   sub_1176 | Address: 0x1176 | Size: 0x12 (18 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, __cxa_free_exception | Xrefs from: unknown */
void __noreturn __aapcs sub_1176(__int64 a1) {
    int v1; // rax
    v4 = v1; *(_QWORD *)(0LL) = 0x1185LL; __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL; _Unwind_Resume(); return;
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   sub_11c4 | Address: 0x11c4 | Size: 0x54 (84 bytes) | Convention: System V AMD64 | Stack frame: 0x20 (32 bytes) | Xrefs to:   __cxa_begin_catch, __cxa_free_exception | Xrefs from: unknown */
void sub_11c4(void) {
    __int64 v4; // rsp
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; v4 = 0LL;
    *(_QWORD *)(0LL) = 0x11d9LL; __cxa_free_exception();
    if (v4) {
    }
    *(_QWORD *)(0LL) = 0x11edLL;
    /* catch */
    __cxa_begin_catch();
    *(_QWORD *)(0LL) = 0x11f6LL;
    _QWORD pfn = *(_QWORD *)(0x10LL); // temp
    ((void (*)())pfn)(); *(_QWORD *)(0x10LL) = 0x1211LL; return;
}

/* Function:   sub_121c | Address: 0x121c | Size: 0x9 (9 bytes) | Convention: Microsoft x64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   _Unwind_Resume | Xrefs from: unknown */
void __noreturn __fastcall sub_121c(void) {
    int v2; // rdx
    __int64 v5; // temp
    a3 = v2; sub_11e2(); v5 -= 8LL;
    v3 = v5; *(_QWORD *)(v5) = 0x122dLL; _Unwind_Resume();
    return;
}

/* Function:   sub_122d | Address: 0x122d | Size: 0xf (15 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, __cxa_end_catch | Xrefs from: unknown */
void __noreturn __aapcs sub_122d(__int64 a1) {
    int v1; // rax
    v2 = v1; *(_QWORD *)(0LL) = 0x1239LL;
    /* end catch */
    __cxa_end_catch();
    *(_QWORD *)(0LL) = 0x1241LL; _Unwind_Resume(); return;
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   sub_1300 | Address: 0x1300 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_10b0, sub_1290 | Xrefs from: unknown */
void sub_1300(void) {
    __int64 v1; // rsp
    int v4; // rip
    _QWORD c1; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; c1 = *(_QWORD *)(c1);
        if (cond) {
        } else {
            c1 = *(_QWORD *)(c1); *(_QWORD *)(0LL) = 0x1327LL; sub_10b0();
        }
        v1 = c1; *(_QWORD *)(c1) = 0x132cLL; sub_1290();
        *(_BYTE *)(c1) = 1; c1 = c1; v1 = c1;
        result = *(_QWORD *)(c1); return result;
    }
}

/* Function:   sub_1340 | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1340(void) {
    sub_12c0(); return;
}

/* Function:   sub_1290 | Address: 0x1290 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1290(void) {
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
