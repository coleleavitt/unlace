/*
 * C++ Class Hierarchy (from RTTI):
 *   Animal
 *     Dog
 *     Cat
 *
 * Dog::vtable @ 0x3cf0 (40 bytes, 1 subtable):
 *   [0] primary subtable @ 0x3d00:
 *       offset_to_top = 0
 *       typeinfo      = &typeinfo for Dog
 *       vfunc[0] = Dog::speak() [override]
 *       vfunc[1] = Dog::~Dog() [override]
 *       vfunc[2] = Dog::~Dog() [override]
 *
 * Cat::vtable @ 0x3d18 (40 bytes, 1 subtable):
 *   [0] primary subtable @ 0x3d28:
 *       offset_to_top = 0
 *       typeinfo      = &typeinfo for Cat
 *       vfunc[0] = Cat::speak() [override]
 *       vfunc[1] = Cat::~Cat() [override]
 *       vfunc[2] = Cat::~Cat() [override]
 */
/* Function:   main | Address: 0x10c0 | Size: 0x77 (119 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   identify(Animal*), __printf_chk, __stack_chk_fail | Xrefs from: unknown */
int __noreturn main(void) {
    int result; // eax
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    identify(); identify(); printf("%s %s\n", (char *)0x3d28LL, (char *)0x3d28LL);
    v7 = 0;
    if (v7) {
        __stack_chk_fail();
    } else {
        return 0;
    }
    return result;
}

/* Function:   _start | Address: 0x1140 | Size: 0x1f (31 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs _start(void * a1) {
    int v1; // rax
    *(_QWORD *)(0LL) = v1; *(_QWORD *)(0LL) = 0LL; ((void (*)())sub_0)();
    return;
}

/* Function:   identify(Animal*) | Address: 0x1230 | Size: 0xc7 (199 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   __dynamic_cast | Xrefs from: unknown */
// identify(Animal*)
void identify(void) {
    int result; // eax
    char v11 = 0; // ZF
    if (v11) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; __dynamic_cast();
        if (v11) {
            __dynamic_cast();
            if (v11) {
                return result;
            } else {
                v11 = 1;
            }
        } else {
        }
        return result;
    }
}

/* Function:   Dog::speak() | Address: 0x1300 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::speak()
void __aapcs Dog_speak(Dog *this, __int64 a1) {
    int result; // eax
    return result;
}

/* Function:   Cat::speak() | Address: 0x1310 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::speak()
void __aapcs Cat_speak(Cat *this, __int64 a1) {
    int result; // eax
    return result;
}

/* Function:   Dog::~Dog() | Address: 0x1320 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void __aapcs Dog_Dog(Dog *this, __int64 a1) {
    int result; // eax
    return result;
}

/* Function:   Cat::~Cat() | Address: 0x1330 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void __aapcs Cat_Cat(Cat *this, __int64 a1) {
    int result; // eax
    return result;
}

/* Function:   Cat::~Cat() | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(Cat *this) {
    delete(); return;
}

/* Function:   Dog::~Dog() | Address: 0x1350 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(Dog *this) {
    delete(); return;
}

/* Function:   sub_11e0 | Address: 0x11e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1070, sub_1170 | Xrefs from: unknown */
void sub_11e0(void) {
    int result; // eax
    v9 = 0;
    if (v9) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; cond = 1;
        if (cond) {
        } else {
            sub_1070();
        }
        sub_1170(); *(_BYTE *)(0LL) = 1; return result;
    }
}

/* Function:   sub_1220 | Address: 0x1220 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1220(void) {
    sub_11a0(); return;
}

/* Function:   sub_1170 | Address: 0x1170 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
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
