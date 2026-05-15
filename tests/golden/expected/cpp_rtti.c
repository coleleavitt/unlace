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
void __noreturn main(void) {
    int v6; // rip
    int result;
    *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL; *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0x10f9LL; identify(); *(_QWORD *)(0LL) = 0x1106LL;
    identify(); *(_QWORD *)(0LL) = 0x111fLL; printf();
    v8 = 0;
    if (v8) {
        *(_QWORD *)(0LL) = 0x113cLL; __stack_chk_fail();
    }
    return result;
}

/* Function:   _start | Address: 0x1140 | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    int v6; // rip
    *(_QWORD *)(0LL) = 0x1165LL; return;
}

/* Function:   identify(Animal*) | Address: 0x1230 | Size: 0xbb (187 bytes) | Convention: stdcall | Stack frame: 0x8 (8 bytes) | Xrefs to:   __dynamic_cast | Xrefs from: unknown */
// identify(Animal*)
void __stdcall identify(void) {
    int v8; // rip
    if (v7) {
        return result;
    } else {
        qword_FFFFFFFFFFFFFFE0 = 0x125bLL; __dynamic_cast(); v7 = 0LL;
        if (v11) {
            __dynamic_cast();
            if (v11) {
                return result;
            } else {
            }
        } else {
            result = v8 + 0x1300LL; v11 = 1;
        }
        return result;
    }
}

/* Function:   Dog::speak() | Address: 0x1300 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::speak()
void Dog_speak(Dog *this) {
    return result;
}

/* Function:   Cat::speak() | Address: 0x1310 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::speak()
void Cat_speak(Cat *this) {
    return result;
}

/* Function:   Dog::~Dog() | Address: 0x1320 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(Dog *this) {
    long long result = 0LL; // temp
    return result;
}

/* Function:   Cat::~Cat() | Address: 0x1330 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(Cat *this) {
    long long result = 0LL; // temp
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

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   sub_11e0 | Address: 0x11e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   sub_1070, sub_1170 | Xrefs from: unknown */
void sub_11e0(void) {
    long long v1; // rsp
    int v4; // rip
    unsigned long long c1; // temp
    if (v4) {
        return result;
    } else {
        *(_QWORD *)(0LL) = 0LL; c1 = *(_QWORD *)(c1);
        if (cond) {
        } else {
            c1 = *(_QWORD *)(c1); *(_QWORD *)(0LL) = 0x1207LL; sub_1070();
        }
        v1 = c1; *(_QWORD *)(c1) = 0x120cLL; sub_1170();
        *(_BYTE *)(c1) = 1; c1 = c1; v1 = c1;
        result = *(_QWORD *)(c1); return result;
    }
}

/* Function:   sub_1220 | Address: 0x1220 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1220(void) {
    sub_11a0(); return;
}

/* Function:   sub_1170 | Address: 0x1170 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
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
