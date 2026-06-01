unsigned __int64 __fastcall sub_2A0830(__int64 a1, double a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rbx
  int i; // eax
  char v5; // al
  char tinfo_property; // al
  int v7; // eax
  int v8; // eax
  int v9; // r14d
  int v10; // eax
  unsigned int v12[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v12[0] = 0;
  sub_29F770((__int64)v12, (unsigned int *)a1, a2);
  v13 = 0;
  copy_tinfo_t();
  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
  v3 = a1 - 32;
  v14 = v2.m128i_i64[0];
  for ( i = _mm_cvtsi128_si32(_mm_shuffle_epi32(v2, 229)); ; i = HIDWORD(v14) )
  {
    if ( *(_DWORD *)(v3 + 28) <= i )
    {
      if ( *(_DWORD *)(v3 + 28) < i )
        break;
      if ( (v5 = get_tinfo_property(), (v5 & 0x3E) == 0)
        || (v5 & 0xFu) > 8 && (v5 & 0x3F) != 0x2D
        || (get_tinfo_property() & 0x3F) != 0x2D )
      {
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D )
          goto LABEL_23;
        if ( (get_tinfo_property() & 0x3F) != 0x2D )
          goto LABEL_23;
      }
      v9 = score_tinfo();
      v10 = score_tinfo();
      if ( v9 > v10 )
        break;
      if ( v9 >= v10 )
      {
LABEL_23:
        v7 = *(_DWORD *)(v3 + 24);
        if ( (int)v14 >= v7 && ((int)v14 > v7 || (int)sub_29E6F0((__int64)v12, v3, *(double *)v2.m128i_i64) >= 0) )
          break;
      }
    }
    sub_29F770(v3 + 32, (unsigned int *)v3, *(double *)v2.m128i_i64);
    copy_tinfo_t();
    v8 = *(_DWORD *)(v3 + 24);
    v3 -= 32;
    *(_DWORD *)(v3 + 88) = v8;
    *(_DWORD *)(v3 + 92) = *(_DWORD *)(v3 + 60);
  }
  sub_29F770(v3 + 32, v12, *(double *)v2.m128i_i64);
  copy_tinfo_t();
  *(_QWORD *)(v3 + 56) = v14;
  clear_tinfo_t();
  sub_29EC30((__int64)v12, *(double *)v2.m128i_i64);
  return v15 - __readfsqword(0x28u);
}

