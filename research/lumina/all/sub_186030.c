void __noreturn sub_186030(const __m128i *a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]
  __int64 v3; // [rsp+28h] [rbp-B0h]
  __int64 v4; // [rsp+30h] [rbp-A8h]
  __int64 v5; // [rsp+38h] [rbp-A0h]
  __int64 v6; // [rsp+40h] [rbp-98h]
  __int64 v7; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v2 = __readfsqword(0x28u);
  interr_exc_t___vtable_at_1764016(
    0x18u,
    (__int64 (__fastcall ***)(_QWORD))&byte_4,
    a1,
    (const __m128i *)va,
    (__int64)&interr_exc_t___vtable_at_1764016,
    v7);
  abort();
}
