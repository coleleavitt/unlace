/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   __stack_chk_fail, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void main(void) {
    int v5; // edx
    long long v13; // rdi
    int v21; // rip
    __m128i v28; // xmm1
    __m128i v29; // xmm2
    int v30;
    int result;
    int v56;
    __m128i v37; // temp
    *(_QWORD *)(0LL) = 0LL; v37 = *(_OWORD *)(0LL);
    __m128i v54 = _mm_load_si128(v37); // xmm0
    _mm_load_ps(0LL, v54); v37 = *(_OWORD *)(0LL); v27 = _mm_load_si128(v37);
    _mm_load_ps(0LL, v27); v37 = *(_OWORD *)(0LL); v27 = _mm_load_si128(v37);
    _mm_load_ps(0LL, v27);
    for (; v34; v55 = 0) {
    }
    if (v56) {
    }
    for (; v34; v55 = 0) {
    }
    if (v56) {
    }
    v27 = _mm_xor_si128(v27, v27);
    if (v56) {
    }
    v28 = _mm_load_si128(v27); v13 = 0LL; v27 = _mm_add_epi32(v27, v28);
    v28 = _mm_load_si128(v27); v27 = _mm_add_epi32(v27, v28);
    if (v27) {
        v34 = 0;
        if (v56) {
        }
    } else {
        if (0) { 0 = 0LL; }
        if (v13) {
        }
    }
    if (v5) {
        for (; v44; v64 = 0) {
            if (0) { 0 = 0LL; } if (0) { 0 = 0LL; }
        }
    } else {
        if (0) { 0 = 0; }
        if (v30) {
        }
    }
    v29 = _mm_xor_si128(v29, v29);
    while (v34) {
        v37 = *(_OWORD *)(0LL); v27 = _mm_load_si128(v37); v28 = _mm_load_si128(v27);
        v28 = _mm_shuffle_epi32(v28, v28); v27 = _mm_shuffle_epi32(v27, v27); v29 = _mm_add_epi32(v29, v28);
    }
    if (v24) {
    }
    if (v30) {
    }
    for (; v34; v55 = 0) {
    }
    if (v30) {
    }
    if (v30) {
    }
    if (v56) {
    }
    if (v24) {
        if (v24) {
        }
    }
    return result;
}
/* Function:   _start | Address: 0x1480 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x14a5LL; return;
}
/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2b1 (689 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
void f_rec_fib(void) {
    int v12; // rdi
    v37 = 0;
    if (v37) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        for (; v37; v48 = 0) {
            if (v34) {
            } else {
                return result;
            }
        }
    }
    return;
}
/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: unknown | Stack frame: 0x8 (8 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
void f_ackermann(void) {
    long long v8; // rsp
    int v28;
    int v50;
    signed char v37; // temp
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    v37 = 0; *(_DWORD *)(0LL) = 0;
    while (v32) {
        *(_DWORD *)(0LL) = 0;
        if (v28) {
        } else {
            v33 = 0;
            if (v25) {
                if (v32) {
                }
            } else {
            }
        }
        if (v50) {
            if (v25) {
                v32 = 1;
                if (v32) {
                } else {
                }
            } else {
                while (v32) {
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
                            if (v32) {
                            } else {
                                if (v25) {
                                    if (v32) {
                                    } else {
                                    }
                                } else {
                                }
                            }
                            *(_DWORD *)(0LL) = 0; *(_DWORD *)(0LL) = 0; *(_QWORD *)(0LL) = 0x1978LL;
                            f_ackermann();
                            if (v8) {
                            } else {
                                if (v37) {
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
                        if (v33) {
                        } else {
                        }
                    }
                }
                if (v33) {
                } else {
                }
            }
        }
        if (v8) {
        }
        if (v33) {
        } else {
        }
    }
    return result;
}
/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
void f_rec_power.constprop.0(__int64 a1) {
    int v1; // al
    int v3; // cl
    int v8; // dil
    int v23; // temp
    if (v8) {
    } else {
        v23 = -1; cond = 0;
        if (cond) {
            result = 0LL; return result;
        } else {
            if (cond) {
            } else {
                if (cond) {
                } else {
                    *(_DWORD *)(0LL) = 1; *(_DWORD *)(0LL) = 1; f_rec_power.constprop.0();
                    return result;
                }
            }
        }
    }
    cond = 1;
    if (cond) {
    } else {
        v23 = 1; cond = 0;
        if (cond) {
        } else {
            v23 = v23;
            if (cond) {
            } else {
                if (cond) {
                    v23 = 2;
                } else {
                }
            }
        }
        return result;
    }
    return;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
void sub_1520(void) {
    long long v1; // rsp
    int v4; // rip
    unsigned long long v10; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; v10 = *(_QWORD *)(v10);
        if (cond) {
        } else {
            v10 = *(_QWORD *)(v10); *(_QWORD *)(0LL) = 0x1547LL; sub_1040();
        }
        v1 = v10; *(_QWORD *)(v10) = 0x154cLL; sub_14b0();
        *(_BYTE *)(v10) = 1; v10 = v10; v1 = v10;
        result = *(_QWORD *)(v10); return result;
    }
}
/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: unknown | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void sub_1560(void) {
    int v14; // edi
    int v15; // rdi
    signed char v56; // temp
    sub_14e0();
    signed char v44 = LOBYTE(0); // temp
    if (v14) {
        return result;
    } else {
        long long v9 = cond; // rsp
        *(_QWORD *)(cond) = cond; v9 = cond; *(_QWORD *)(cond) = cond;
        v9 = cond; *(_QWORD *)(cond) = cond; v9 = cond;
        *(_QWORD *)(cond) = cond; v9 = cond; *(_QWORD *)(cond) = cond;
        v9 = cond; *(_QWORD *)(cond) = cond; cond = cond == -8LL;
        cond = cond < 0LL; v55 = LOBYTE(cond); v56 = LOBYTE(cond);
        if (v41) {
            v46 = v56;
            if (v38) {
                cond = cond; v42 = 0; v44 = v55;
            } else {
                v46 = LOBYTE(cond); v60 = cond; cond = cond;
                v9 = cond; cond = cond; v9 = cond;
                cond = cond; v9 = cond; cond = cond;
                v9 = cond; cond = cond; v9 = cond;
                cond = cond; v9 = cond; return result;
            }
        }
    }
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
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
