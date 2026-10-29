__int64 sub_382FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __va_list_tag *))callui)(
           31,
           a1,
           a2,
           a3,
           a4,
           va);
}

