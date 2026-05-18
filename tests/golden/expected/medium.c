/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   __stack_chk_fail, f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void __noreturn main(void) {
    int result;
    *(_QWORD *)(0LL) = 0LL; v37 = *(_OWORD *)(0LL);
    __int128 v26 = v37; // xmm0
    *(_QWORD *)(0LL) = 0LL; _mm_load_ps(0LL, 0); v37 = *(_OWORD *)(0LL);
    v26 = v37; _mm_load_ps(0LL, 0); v37 = *(_OWORD *)(0LL);
    v26 = v37; _mm_load_ps(0LL, 0); v37 = *(_OWORD *)(0LL);
    v26 = v37; _mm_load_ps(0LL, 0);
    for (; v34; v49 = 0) {
    }
    while (v34) {
    }
    while (v34) {
    }
    while (v34) {
    }
    while (v34) {
    }
    if (v23) {
        for (; v34; v49 = 0) {
        }
    } else {
        if (v23) {
        }
    }
    if (v23) {
        v34 = 0;
        for (; v34; v49 = 0) {
        }
    } else {
        if (v23) {
        }
    }
    while (v34) {
        v37 = *(_OWORD *)(0LL); v53 = v37;
    }
    if (v23) {
    }
    if (v44) {
    }
    for (; v34; v34 = 0) {
        v34 = 0;
    }
    v34 = 0;
    if (v44) {
    }
    if (v34) {
    }
    while (v34) {
    }
    if (v23) {
        if (v23) {
        }
    }
    return result;
}
/* Function:   _start | Address: 0x1480 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    __int64 field_8;
};

/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2b1 (689 bytes) | Convention: stdcall | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
int __stdcall f_rec_fib(void) {
    int result; // eax
    v36 = 0;
    if (v36) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        for (; v36; v46 = 0) {
            if (v33) {
            } else {
                return result;
            }
        }
    }
    return;
}
/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: stdcall | Stack frame: 0x8 (8 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
int __stdcall f_ackermann(void) {
    int result; // eax
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    while (v32) {
        *(_DWORD *)(0LL) = 0;
        if (v32) {
        } else {
            if (v25) {
                if (v32) {
                }
            } else {
            }
        }
        while (v32) {
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
                        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; f_ackermann();
                        if (v32) {
                        } else {
                            v32 = 0;
                            if (v32) {
                            } else {
                                if (v32) {
                                } else {
                                }
                            }
                        }
                    }
                }
                v32 = 1;
                if (v32) {
                } else {
                    if (v32) {
                    } else {
                    }
                }
            }
            if (v32) {
            } else {
                v32 = 1;
                if (v32) {
                } else {
                }
            }
        }
        if (v32) {
        } else {
            if (v32) {
            }
        }
    }
    return result;
}
/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
int f_rec_power.constprop.0(__int64 a1) {
    int result; // eax
    int v22; // temp
    char cond = 1; // ZF
    if (cond) {
    } else {
        v22 = -1; cond = 0;
        if (cond) {
            return 2;
        } else {
            if (cond) {
            } else {
                if (cond) {
                } else {
                    *(_DWORD *)(0LL) = 1; *(_DWORD *)(0LL) = 1; *(_DWORD *)(0LL) = 1;
                    *(_DWORD *)(0LL) = 1; f_rec_power.constprop.0(); result = 0;
                    v22 = 0; return result;
                }
                v22 *= v22; result = v22; v22 = v22;
                v22 *= v22; result = v22; v22 = v22;
                result = v22; return result;
            }
        }
    }
    cond = 1;
    if (cond) {
    } else {
        v22--; cond = v22 == 1;
        if (cond) {
            result = v22; result = v22; return result;
        } else {
            if (cond) {
            } else {
                if (cond) {
                    result = v22;
                } else {
                }
            }
        }
    }
    return;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
void sub_1520(void) {
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
        sub_14b0(); *(_BYTE *)(0LL) = 1; return result;
    }
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    int field_8;
};

/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: stdcall | Stack frame: 0xc (12 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
int __stdcall sub_1560(void) {
    int result; // eax
    __int64 v8; // rbx
    __int64 v9; // rsp
    __int64 v11; // rbp
    __int64 v23; // r12
    __int64 v27; // r14
    __int64 v29; // r15
    __int64 v42; // temp
    __int64 v56; // temp
    char v58; // temp
    return sub_14e0();
    v43 = 1;
    if (v43) {
        return result;
    } else {
        v42 -= 8LL; v9 = v42; *(_QWORD *)(v42) = v42;
        v42 = v42; v9 = v42; *(_QWORD *)(v42) = v42;
        v42 -= 8LL; v9 = v42; *(_QWORD *)(v42) = v42;
        v42 -= 8LL; v9 = v42; *(_QWORD *)(v42) = v42;
        v42 -= 8LL; v9 = v42; *(_QWORD *)(v42) = v42;
        v56 -= 8LL; v9 = v56; *(_QWORD *)(v56) = v56;
        v42 -= 0x38LL; v58 = LOBYTE(v42); v9 = v42;
        while (v43) {
            if (v40) {
            } else {
                v42 += 0xcLL; v9 = v42; v42 += -43LL;
                result = v42; v42 = *(_QWORD *)(v42); v9 = v42 - 36;
                v8 = v42; v42 = *(_QWORD *)(v42); v9 = v42 - 36;
                v11 = v42; v42 = *(_QWORD *)(v42); v9 = v42 - 36;
                v23 = v42; v9 = v42 - 36; v25 = v42;
                v9 = v42 - 36; v27 = v42; v29 = v42;
                return result;
            }
        }
    }
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
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
