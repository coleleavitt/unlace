__int64 sub_7480(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __va_list_tag *))callui)(24, 2, a1, va);
}

