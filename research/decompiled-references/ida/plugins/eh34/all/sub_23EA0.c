__int64 __fastcall sub_23EA0(
        __int64 a1,
        _BYTE *a2,
        void **a3,
        const char *a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8)
{
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_21E40((__int64)&v10, a1, a2, a3, (__int64)a4, a5, a6, a7, a8);
  result = (unsigned __int8)v10;
  if ( v11 )
  {
    sub_BD80((__int64)"[E] collect_metadata_ranges(%a): %s\n", a5, a4);
    if ( v10 )
      qfree(v10);
    return 0;
  }
  return result;
}

