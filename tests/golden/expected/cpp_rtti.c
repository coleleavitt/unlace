/* Function:   main | Address: 0x10c0 | Size: 0x77 (119 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   identify(Animal*), __printf_chk, __stack_chk_fail | Xrefs from: unknown */
void main(void) {
    int v4; // rip
    int result;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0x10f9LL; identify(); *(_QWORD *)(0LL) = 0x1106LL;
    identify(); *(_QWORD *)(0LL) = 0x111fLL; __printf_chk();
    v12 = 0;
    if (v12) {
        *(_QWORD *)(0LL) = 0x113cLL; __stack_chk_fail();
    } else {
    }
    return result;
}
/* Function:   _start | Address: 0x1140 | Size: 0x1f (31 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v9; // rip
    *(_QWORD *)(0LL) = 0x1165LL; return;
}
/* Function:   identify(Animal*) | Address: 0x1230 | Size: 0xbb (187 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __dynamic_cast | Xrefs from: unknown */
// identify(Animal*)
void identify(void) {
    int v12; // rip
    if (v6) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0x125bLL; __dynamic_cast(); v6 = 0LL;
        if (v2) {
            __dynamic_cast();
            if (v2) {
                return result;
            } else {
                v2 = 1;
                if (v2) {
                }
            }
        } else {
            result = 0LL; v16 = 0;
            if (v16) {
            } else {
            }
        }
    label_3:;
        return result;
        goto label_3;
    }
    return;
}
/* Function:   Dog::speak() | Address: 0x1300 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::speak()
void Dog_speak(void) {
    return result;
}
/* Function:   Cat::speak() | Address: 0x1310 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::speak()
void Cat_speak(void) {
    return result;
}
/* Function:   Dog::~Dog() | Address: 0x1320 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(void) {
    result = 0LL; return result;
}
/* Function:   Cat::~Cat() | Address: 0x1330 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(void) {
    result = 0LL; return result;
}
/* Function:   Cat::~Cat() | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(void) {
    return;
}
/* Function:   Dog::~Dog() | Address: 0x1350 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(void) {
    return;
}
/* Function:   sub_11e0 | Address: 0x11e0 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1070, sub_1170 | Xrefs from: unknown */
void sub_11e0(void) {
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
            v3 = *(_QWORD *)(v3); *(_QWORD *)(0LL) = 0x1207LL; sub_1070();
        }
        v8 = v3; *(_QWORD *)(v3) = 0x120cLL; sub_1170();
        *(_BYTE *)(v3) = 1; v3 = v3; v8 = v3;
        result = *(_QWORD *)(v3); return result;
    }
    return;
}
/* Function:   sub_1220 | Address: 0x1220 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1220(void) {
    return;
}
/* Function:   sub_1170 | Address: 0x1170 | Size: 0x6c (108 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
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
