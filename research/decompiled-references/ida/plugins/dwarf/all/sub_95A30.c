void __noreturn sub_95A30(__int64 a1, __int64 a2, int a3, __int64 a4, ...)
{
  _QWORD *v5; // rax
  const char *v6; // rbp
  void *exception; // rbx
  const char *v8; // [rsp+0h] [rbp-108h] BYREF
  __int128 v9; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-D0h]
  __int64 v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h]

  va_start(va, a4);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a4);
  v11 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  sub_20090((__int64 *)&v8, a4, (const __m128i *)va, a4, v12, v13);
  v5 = sub_87270();
  v6 = (const char *)((__int64 (__fastcall *)(__int64))v5[58])(a1);
  exception = __cxa_allocate_exception(0x18u);
  sub_95790((__int64)exception, (__int64)"%s\nDwarf error: %s\n(at %s:%d)", v8, v6, "die.cpp", a3);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'die_t::load_failure_t, (void (*)(void *))sub_52F60);
}

