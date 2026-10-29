__int64 sub_3AE0(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __va_list_tag *))vadd_extra_line)(a1, a2 ^ 1u, a3, va);
}

