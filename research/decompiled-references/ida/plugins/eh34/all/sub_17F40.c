unsigned __int64 sub_17F40(__int64 a1, __int64 a2, ...)
{
  __m128i v2; // xmm0
  gcc_va_list va; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v5; // [rsp+30h] [rbp-D8h] BYREF
  void *reg_save_area; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v7; // [rsp+48h] [rbp-C0h]

  va_start(va, a2);
  v7 = __readfsqword(0x28u);
  if ( *(char *)(a1 + 706) < 0 )
  {
    v2 = _mm_loadu_si128((const __m128i *)va);
    reg_save_area = va[0].reg_save_area;
    v5 = v2;
    sub_6D370(a1 + 88, a2, &v5);
  }
  sub_6D220(a1 + 88, a2, va);
  return v7 - __readfsqword(0x28u);
}

