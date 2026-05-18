unsigned __int64 __fastcall sub_DF0A0(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  __m128i *v9; // rax
  __m128i *v10; // rbp
  int v12; // eax
  const char *v13; // rsi
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+10h] [rbp-58h]
  __int128 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v6 = *a1;
  v18 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 24LL * a3 + 8);
  if ( v7 )
  {
    v9 = sub_DD6E0(v6, v7, 0, nullptr);
    v10 = v9;
    if ( *(_BYTE *)(v6 + 103) )
    {
      if ( v9 )
        sub_D7720(v6, (__int64)v9);
      return __readfsqword(0x28u) ^ v18;
    }
    if ( a5 > 0 )
    {
      v15[0] = 0;
      v15[1] = sub_C4350;
      v17 = 0;
      v16 = 0;
      DWORD2(v17) = a5;
      if ( v9 )
        sub_CDCD0((__int64)v15, (__int64)v9);
    }
  }
  else
  {
    if ( *(_BYTE *)(v6 + 103) )
      return __readfsqword(0x28u) ^ v18;
    v10 = nullptr;
  }
  if ( *(_BYTE *)a4 == 113 )
    v10 = (__m128i *)sub_DF020(a1, (__int64)v10, *(const char **)(a4 + 8));
  *(_DWORD *)(a4 + 4) |= 0x8000000u;
  if ( a4 )
    sub_D7720(v6, a4);
  *(__m128i *)a4 = _mm_loadu_si128(v10);
  *(__m128i *)(a4 + 16) = _mm_loadu_si128(v10 + 1);
  *(__m128i *)(a4 + 32) = _mm_loadu_si128(v10 + 2);
  *(__m128i *)(a4 + 48) = _mm_loadu_si128(v10 + 3);
  *(_QWORD *)(a4 + 64) = v10[4].m128i_i64[0];
  v12 = *(_DWORD *)(a4 + 4);
  if ( (v12 & 0x400) == 0 )
  {
    v13 = *(const char **)(a4 + 8);
    if ( v13 )
    {
      *(_QWORD *)(a4 + 8) = sub_DC720(v6, v13);
      v12 = *(_DWORD *)(a4 + 4) | 0x10000;
      *(_DWORD *)(a4 + 4) = v12;
    }
  }
  if ( (v12 & 0x1000000) != 0 )
  {
    v14 = *(_QWORD *)(a4 + 64);
    if ( v14 )
      *(_QWORD *)(v14 + 112) = a4;
  }
  if ( v10 )
    sub_C9250(v6, v10);
  return __readfsqword(0x28u) ^ v18;
}
