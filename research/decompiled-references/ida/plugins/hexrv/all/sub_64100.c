unsigned __int64 __fastcall sub_64100(int **a1, int a2)
{
  int v3; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+4h] [rbp-44h]
  int v5; // [rsp+Ch] [rbp-3Ch]
  __m128i v6; // [rsp+10h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v3 = a2;
  v5 = 0;
  v4 = 0;
  v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4AE6B8), (__m128i)(unsigned __int64)sub_60E70);
  sub_64010(a1, (__int64)&v3);
  if ( v6.m128i_i64[0] )
    ((void (__fastcall *)(int *, int *, __int64))v6.m128i_i64[0])(&v3, &v3, 3);
  return v7 - __readfsqword(0x28u);
}

