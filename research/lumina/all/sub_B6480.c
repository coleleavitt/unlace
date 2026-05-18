__int64 sub_B6480(__int64 a1, __int64 (__fastcall ***a2)(_QWORD), ...)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 (__fastcall ***)(_QWORD), const __m128i *, __int64, __int64, __int64); // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]
  __int64 v7; // [rsp+30h] [rbp-A8h]
  __int64 v8; // [rsp+38h] [rbp-A0h]
  __int64 v9; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+48h] [rbp-90h]

  va_start(va, a2);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  v6 = __readfsqword(0x28u);
  result = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    va_start(va, a2);
    v4 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD), const __m128i *, __int64, __int64, __int64))(*(_QWORD *)v3 + 16LL);
    if ( v4 == sub_B6460 )
      return interr_exc_t___vtable_at_1764016(
               0x17u,
               a2,
               (const __m128i *)va,
               (const __m128i *)&interr_exc_t___vtable_at_1764016,
               v9,
               v10);
    else
      return ((__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)(_QWORD), __va_list_tag *, __int64, __int64, __int64, _QWORD, void *, void *, unsigned __int64))v4)(
               v3,
               a2,
               va,
               v8,
               v9,
               v10,
               *(_QWORD *)&va[0].gp_offset,
               va[0].overflow_arg_area,
               va[0].reg_save_area,
               v6);
  }
  return result;
}
