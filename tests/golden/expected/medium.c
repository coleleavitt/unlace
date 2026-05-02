/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __stack_chk_fail, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void main(void) {
    long long v13; // rax
    long long v3; // rsp
    long long v23; // rdi
    long long v21; // r8
    int v19; // r10d
    int v1; // r10
    int v10; // rip
    int v31; // OF
    __int128 v12; // xmm0
    __int128 v22; // xmm1
    __int128 v36; // xmm2
    int result;
    int v18;
    _OWORD v11; // temp
    v3 = v1; *(_QWORD *)(v1) = v1; v3 = v1;
    v11 = *(_OWORD *)(v1); v12 = _mm_load_si128(v11); v13 = v1;
    _mm_load_ps(0LL, v12); v11 = *(_OWORD *)(v1); v12 = _mm_load_si128(v11);
    _mm_load_ps(v1, v12); v11 = *(_OWORD *)(v1); v12 = _mm_load_si128(v11);
    _mm_load_ps(v1, v12); v11 = *(_OWORD *)(v1); v12 = _mm_load_si128(v11);
    _mm_load_ps(v1, v12);
    for (; v16; v16 = 0) {
    }
    if (v18) {
    }
    for (; v16; v16 = 0) {
        v14 = 0; v16 = 0;
    }
    if (v18) {
    }
    v21 = 0LL; v12 = _mm_xor_si128(v12, v12);
    if (v18) {
    }
    v22 = _mm_load_si128(v12); v23 = 4LL; v12 = _mm_add_epi32(v12, v22);
    v22 = _mm_load_si128(v12); v12 = _mm_add_epi32(v12, v22);
    if (v12) {
        if (v18) {
        }
    } else {
        if (0) { 0 = 0LL; }
        if (v23) {
        }
    }
    if (v21) {
        for (; v31; v35 = 0) {
            if (0) { 0 = 0LL; } if (0) { 0 = 4LL; }
        }
    } else {
        if (0) { 0 = 0; }
        if (v14) {
        }
    }
    v36 = _mm_xor_si128(v36, v36);
    if (v18) {
    }
    v12 = _mm_load_si128(v36); v36 = _mm_add_epi32(v36, v12); v12 = _mm_load_si128(v36);
    if (v14) {
    }
    if (v6) {
        do {
            break;
        } while (v31);
    }
    if (v5) {
    }
    if (v19) {
    }
    if (v18) {
    }
    if (v14) {
        if (v14) {
        }
    }
    return result;
}
/* Function:   _start | Address: 0x1480 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x14a5LL; return;
}
/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2b1 (689 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
void f_rec_fib(void) {
    int v11; // rdi
    v7 = 0;
    if (v7) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
        for (; v7; v7 = 1) {
            if (v13) {
            }
            break;
        }
    }
    return;
}
/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
void f_ackermann(void) {
    int v12; // rdx
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_DWORD *)(0LL) = 0;
    if (v10) {
        *(_DWORD *)(0xcLL) = 0;
        v10 = 1;
        if (v10) {
        } else {
            if (v3) {
                if (v10) {
                }
            } else {
            }
        }
        if (v10) {
            if (v10) {
            } else {
                if (v3) {
                    v10 = 0;
                    if (v10) {
                    } else {
                    }
                } else {
                }
            }
            if (v10) {
                v10 = 0;
                if (v10) {
                } else {
                    if (v3) {
                        if (v10) {
                        } else {
                        }
                    } else {
                    }
                }
                if (v10) {
                    v10 = 0;
                    if (v10) {
                    } else {
                        if (v3) {
                            if (v10) {
                            } else {
                            }
                        } else {
                        }
                    }
                    if (v10) {
                        *(_DWORD *)(8LL) = 0; *(_DWORD *)(4LL) = 0; qword_FFFFFFFFFFFFFFF8 = 0x1978LL;
                        f_ackermann();
                        if (v10) {
                        } else {
                            if (v10) {
                            } else {
                                v10 = 0;
                                if (v10) {
                                } else {
                                }
                            }
                        }
                    }
                }
                if (v10) {
                } else {
                    v10 = 0;
                    if (v10) {
                    } else {
                    }
                }
            }
            if (v10) {
            } else {
                if (v10) {
                } else {
                }
            }
        }
        v10 = 0;
        if (v10) {
        } else {
            if (v10) {
            }
        }
    }
    return result;
}
/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
void f_rec_power.constprop.0(__int64 a1) {
    int v13; // al
    int v20; // cl
    long long v12; // rsp
    int v1; // dil
    int v8; // temp
    unsigned long long result; // temp
    if (v1) {
    } else {
        v8 = -1; cond = 0;
        if (cond) {
            result = *(_QWORD *)(v10); v10 = v10; v12 = v10;
            return result;
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
        v8 = 1; cond = 0;
        if (cond) {
        } else {
            v8 = v8;
            if (cond) {
            } else {
                if (cond) {
                    v8 = 2;
                } else {
                }
            }
        }
        return result;
    }
    return;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
void sub_1520(void) {
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
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1547LL; sub_1040();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x154cLL; sub_14b0();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
    return;
}
/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void sub_1560(void) {
    long long v14; // rsp
    int v11; // edi
    int v16; // rdi
    signed char v9; // temp
    signed char v4; // temp
    signed char v6; // temp
    v4 = LOBYTE(0); v9 = v4;
    if (v11) {
        return result;
    } else {
        v14 = cond; *(_QWORD *)(cond) = cond; v14 = cond;
        *(_QWORD *)(cond) = cond; v14 = cond; *(_QWORD *)(cond) = cond;
        v14 = cond; *(_QWORD *)(cond) = cond; v14 = cond;
        *(_QWORD *)(cond) = cond; v14 = cond; *(_QWORD *)(cond) = cond;
        result = cond - 0x38LL; cond = cond == 4LL; cond = result < 0LL;
        v4 = LOBYTE(cond); v6 = LOBYTE(result);
        if (v10) {
            cond = cond; v4 = v4; v6 = v6;
            v6 = v6;
            if (v9) {
            }
        }
    }
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
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
