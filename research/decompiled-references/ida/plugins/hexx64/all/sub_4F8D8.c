__int64 __fastcall sub_4F8D8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi

  v5 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    v6 = *v5;
    if ( a1[1] )
    {
      v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v8 = (_QWORD *)v7[1];
        if ( (*(_BYTE *)v8 & 2) == 0 )
          sub_2BA180(v8);
        v9 = (_QWORD *)v7[2];
        if ( (*(_BYTE *)v9 & 2) == 0 )
          sub_2BA180(v9);
        if ( (*(_BYTE *)v7 & 2) == 0 )
        {
          sub_2B9980(v7 + 8);
          cleanup_argloc();
          *v7 |= 2uLL;
        }
        if ( v6 > 3 )
          qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
      }
      *(_QWORD *)*a1 = *a1 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
    }
    else
    {
      *v5 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL | *v5 & 3;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      *(_QWORD *)*a1 |= 2uLL;
    }
    if ( *a1 )
      qfree(*a1);
  }
  qfree((__int64)a1);
  return a4;
}

