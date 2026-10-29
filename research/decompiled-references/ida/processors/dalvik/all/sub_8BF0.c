__int64 *sub_8BF0(__int64 *a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int64 v5; // [rsp+30h] [rbp-A8h]
  __int64 v6; // [rsp+38h] [rbp-A0h]

  va_start(va, a2);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_8B20(a1, a2, (const __m128i *)va, v6);
  return a1;
}

