unsigned __int64 sub_CB10(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  sub_CA30(a1, (const __m128i *)va);
  return v3 - __readfsqword(0x28u);
}

