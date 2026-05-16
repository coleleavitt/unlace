// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    int field_8;
};

/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: System V AMD64 | Stack frame: 0xc (12 bytes) | Xrefs to:   __stack_chk_fail, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void __noreturn main(void) {
    int v1; // eax
    __int64 v2; // rax
    int v5; // edx
    __int64 v13; // rdi
    int v20; // rip
    int v59; // reg?
    int result;
    *(_QWORD *)(0LL) = 0LL; v37 = *(_OWORD *)(0LL);
    __int128 v53 = v37; // xmm0
    _mm_load_ps(0LL, 0); v37 = *(_OWORD *)(0LL); v26 = v37;
    _mm_load_ps(0LL, 0); v37 = *(_OWORD *)(0LL); v26 = v37;
    _mm_load_ps(0LL, 0);
    for (; v34; v54 = 0) {
    }
    while (v5) {
    }
    while (v34) {
    }
    while (v1) {
    }
    v16 = 0LL;
    while (v2) {
    }
    v13 = 0LL;
    if (v16) {
        v34 = 0;
        for (; v34; v54 = 0) {
        }
    } else {
        if (v13) {
        }
    }
    if (v59) {
        for (; v34; v54 = 0) {
        }
    } else {
        if (v13) {
        }
    }
    while (v2) {
        v37 = *(_OWORD *)(0LL); v26 = v37;
    }
    if (v23) {
    }
    if (v44) {
    }
    for (; v34; v54 = 0) {
    }
    if (v59) {
    }
    if (v59) {
    }
    while (v1) {
    }
    if (v23) {
        if (v23) {
        }
    }
    return result;
}
/* Function:   _start | Address: 0x1480 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x14a5LL; return;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    __int64 field_8;
};

/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2b1 (689 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
void f_rec_fib(__int64 a1 /* BYREF */) {
    int v12; // rdi
    v37 = 0;
    if (v37) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        for (; v37; v49 = 0) {
            if (v34) {
            } else {
                return result;
            }
        }
    }
    return;
}
/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
void f_ackermann(void) {
    __int64 v8; // rsp
    int v47; // reg?
    char v37; // temp
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    v37 = 0; *(_QWORD *)(0LL) = 0LL;
    while (v32) {
        *(_DWORD *)(0LL) = 0;
        if (v47) {
        } else {
            v33 = 0;
            if (v25) {
                if (v32) {
                }
            } else {
            }
        }
        while (v47) {
            if (v32) {
            } else {
                if (v25) {
                    v32 = 1;
                    if (v32) {
                    } else {
                    }
                } else {
                }
            }
            if (v32) {
                if (v32) {
                } else {
                    if (v25) {
                        if (v32) {
                        } else {
                        }
                    } else {
                    }
                }
                if (v32) {
                    if (v32) {
                    } else {
                        if (v25) {
                            if (v32) {
                            } else {
                            }
                        } else {
                        }
                    }
                    if (v32) {
                        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0x1978LL;
                        f_ackermann();
                        if (v32) {
                        } else {
                            if (v37) {
                            } else {
                                if (v33) {
                                } else {
                                }
                            }
                        }
                    }
                }
                if (v33) {
                } else {
                    if (v33) {
                    } else {
                    }
                }
            }
            if (v33) {
            } else {
                if (v33) {
                } else {
                }
            }
        }
        if (v33) {
        } else {
            if (v8) {
            }
        }
    }
    return result;
}
/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
int f_rec_power.constprop.0(__int64 a1) {
    int v1; // al
    int v2; // eax
    int v39; // eax
    int v3; // cl
    int v8; // dil
    int v22; // temp
    __int64 result; // temp
    if (v8) {
    } else {
        v22 = -1;
        if (cond) {
            result = 0LL; return result;
        } else {
            cond = 1;
            if (cond) {
            } else {
                if (cond) {
                } else {
                    result = 0LL; *(_DWORD *)(0LL) = 1; *(_DWORD *)(0LL) = 1;
                    f_rec_power.constprop.0(); v22 = 0; return result;
                }
                v22 *= v22; v2 = v22; v22 = v22;
                v39 = v22; v22 *= v22; v2 = v22;
                v22 = v22; return result;
            }
        }
    }
    if (cond) {
    } else {
        v22--; cond = v22 == 1;
        if (cond) {
            v22 *= v22; v39 = v22; v22 = v22;
            return result;
        } else {
            cond = 1;
            if (cond) {
            } else {
                v22--;
                if (cond) {
                    v22 *= v22; v2 = v22;
                } else {
                }
            }
        }
    }
    return;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
void sub_1520(void) {
    __int64 v1; // rsp
    int v4; // rip
    _QWORD c1; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; c1 = *(_QWORD *)(c1);
        if (cond) {
        } else {
            c1 = *(_QWORD *)(c1); *(_QWORD *)(0LL) = 0x1547LL; sub_1040();
        }
        v1 = c1; *(_QWORD *)(c1) = 0x154cLL; sub_14b0();
        *(_BYTE *)(c1) = 1; c1 = c1; v1 = c1;
        result = *(_QWORD *)(c1); return result;
    }
}
/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void sub_1560(__int64 a1 /* BYREF */, __int64 a2, __int64 a3 /* BYREF */, __int64 a4 /* BYREF */) {
    int v15; // rdi
    char v56; // temp
    sub_14e0();
    char v45 = LOBYTE(0); // temp
    v42 = 1;
    if (v42) {
        return result;
    } else {
        __int64 v9 = cond; // rsp
        *(_QWORD *)(cond) = cond; v9 = cond; *(_QWORD *)(cond) = cond;
        v9 = cond; *(_QWORD *)(cond) = cond; v9 = cond;
        *(_QWORD *)(cond) = cond; v9 = cond; *(_QWORD *)(cond) = cond;
        v9 = cond; *(_QWORD *)(cond) = cond; cond = cond < 0LL;
        v55 = LOBYTE(cond); v56 = LOBYTE(cond);
        if (v42) {
            v47 = v56;
            if (v39) {
                v43 = 0; v45 = v55;
            } else {
                cond = cond < 0LL; v47 = LOBYTE(cond); v60 = cond;
                cond = cond; v9 = cond; cond = cond;
                v9 = cond; cond = cond; v9 = cond;
                cond = cond; v9 = cond; cond = cond;
                v9 = cond; cond = cond; v9 = cond;
                return result;
            }
        }
    }
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
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
