__int64 __fastcall sub_33B0(__int64 a1, const __m128i *a2)
{
  _OWORD *v3; // r13
  __int64 v4; // rbx
  __int64 i; // rbx
  __int64 v6; // r14
  unsigned int v7; // esi
  _OWORD *v9; // [rsp+8h] [rbp-490h]
  __m128i s2[3]; // [rsp+20h] [rbp-478h] BYREF
  unsigned __int64 v11; // [rsp+458h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  qsnprintf();
  v3 = *(_OWORD **)(a1 + 112);
  v4 = 40LL * *(_QWORD *)(a1 + 120);
  s2[0] = _mm_loadu_si128(a2);
  v9 = (_OWORD *)((char *)v3 + v4);
  for ( i = 0xCCCCCCCCCCCCCCCDLL * (v4 >> 3); i > 0; i = i - 1 - v6 )
  {
    while ( 1 )
    {
      v6 = i >> 1;
      if ( memcmp((char *)v3 + 40 * (i >> 1), s2, 0x10u) < 0 )
        break;
      i >>= 1;
      if ( v6 <= 0 )
        goto LABEL_5;
    }
    v3 = (_OWORD *)((char *)v3 + 40 * (i >> 1) + 40);
  }
LABEL_5:
  v7 = 0;
  if ( v9 != v3 && *(_OWORD *)a2 - *v3 == 0 )
  {
    qstrncpy();
    return 1;
  }
  return v7;
}

