/*
 * C++ Class Hierarchy (from RTTI):
 *   .2.1_p20260214 ::) 15.::.1
 */
/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x35 (53 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
void __noreturn __aapcs may_throw(void * a1) {
    int v1; // rax
    __int64 v3; // rbx
    int v6; // r14
    _QWORD v9; // temp
    *(_QWORD *)(0LL) = v6; *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = v1;
    /* allocate exception */
    __cxa_allocate_exception(0x10);
    v3 = v1; std_runtime_error_runtime_error(); v9 = *(_QWORD *)(0LL);
    v2 = v9;
    __int64 v11 = v1; // rdi
    /* throw */
    __cxa_throw(v1, 0x3d40LL, v9);
    return;
}

/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0x9f (159 bytes) | Convention: stdcall | Stack frame: 0x18 (24 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_end_catch, __cxa_throw, __printf_chk | Xrefs from: unknown */
// safe_call(int) [clone .cold]
int __noreturn __stdcall safe_call(void) {
    *(_QWORD *)(0LL) = 0LL;
    /* allocate exception */
    __cxa_allocate_exception(0x10);
    std_runtime_error_runtime_error();
    /* throw */
    __cxa_throw(0LL, 0x3d40LL, 0LL);
    v10 = 0;
    if (v10) {
        _Unwind_Resume();
    } else {
        /* catch */
        __cxa_begin_catch();
        ((void (*)())sub_0)(); printf("caught: %s\n", (char *)0LL);
        /* end catch */
        __cxa_end_catch();
        return -1;
    }
    return;
}

/* Function:   main | Address: 0x1250 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void main(void) {
    int result;
    safe_call(); return result;
}

/* Function:   _start | Address: 0x1260 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}

/* Function:   may_throw(int) | Address: 0x1350 | Size: 0xc (12 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// may_throw(int)
void may_throw(__int64 a1) {
    int result; // eax
    v3 = LOBYTE(v2 < 0);
    if (v3) {
    }
    return result;
}

/* Function:   safe_call(int) | Address: 0x1360 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// safe_call(int)
int safe_call(__int64 a1) {
    v3 = 0;
    if (v3) {
    }
    return 0;
}

/* Function:   sub_1176 | Address: 0x1176 | Size: 0x12 (18 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, __cxa_free_exception | Xrefs from: unknown */
void __noreturn __aapcs sub_1176(__int64 a1) {
    int v1; // rax
    int v2; // rbx
    v4 = v1; saved_rbx = v2; __cxa_free_exception(v1);
    v3 = v1; _Unwind_Resume(v1); return;
}

/* Function:   sub_11c4 | Address: 0x11c4 | Size: 0x57 (87 bytes) | Convention: stdcall | Stack frame: 0x8 (8 bytes) | Xrefs to:   __cxa_begin_catch, __cxa_end_catch, __cxa_free_exception, __printf_chk | Xrefs from: unknown */
int __stdcall sub_11c4(void) {
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; __cxa_free_exception(0LL);
    v8 = 0;
    if (v8) {
    }
    /* catch */
    __cxa_begin_catch();
    ((void (*)())sub_0)(); printf("caught: %s\n", (char *)0LL);
    /* end catch */
    __cxa_end_catch();
    result = -1; return result;
}

/* Function:   sub_121c | Address: 0x121c | Size: 0x6 (6 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume | Xrefs from: unknown */
void __noreturn sub_121c(void) {
    sub_11e2(); _Unwind_Resume(); return;
}

/* Function:   sub_122d | Address: 0x122d | Size: 0xf (15 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   _Unwind_Resume, __cxa_end_catch | Xrefs from: unknown */
void __noreturn __aapcs sub_122d(__int64 a1) {
    int v1; // rax
    v2 = v1;
    /* end catch */
    __cxa_end_catch();
    v3 = v1; _Unwind_Resume(v1); return;
}

/* Function:   sub_1300 | Address: 0x1300 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_10b0, sub_1290 | Xrefs from: unknown */
void sub_1300(void) {
    int result; // eax
    v9 = 0;
    if (v9) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; cond = 1;
        if (cond) {
        } else {
            sub_10b0();
        }
        sub_1290(); *(_BYTE *)(0LL) = 1; return result;
    }
}

/* Function:   sub_1340 | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1340(void) {
    sub_12c0(); return;
}

/* Function:   sub_1290 | Address: 0x1290 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1290(void) {
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
