__int64 sub_4C750(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-C0h]

  va_start(va, a5);
  v7 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, __int64, __va_list_tag *))callui)(
           28,
           a1,
           a2,
           a3,
           a4,
           a5,
           va);
}

