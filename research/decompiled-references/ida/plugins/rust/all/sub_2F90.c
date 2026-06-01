unsigned __int64 sub_2F90(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, __va_list_tag *))callui)(24, 9, a1, va);
  return v3 - __readfsqword(0x28u);
}

