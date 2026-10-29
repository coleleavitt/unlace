void __fastcall sub_1D8010(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  v2 = *(__int64 **)(a1 + 816);
  *(_QWORD *)(a1 + 808) = 0;
  if ( v2 )
  {
    v3 = *v2;
    if ( !*v2 )
    {
LABEL_7:
      qfree((__int64)v2);
      goto LABEL_8;
    }
    v4 = *(_QWORD *)v3;
    if ( !v2[1] )
    {
      *(_QWORD *)v3 = *(_QWORD *)v3 & 3LL | v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      *(_QWORD *)*v2 &= ~1uLL;
      *(_QWORD *)*v2 |= 2uLL;
      goto LABEL_5;
    }
    v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_17:
      *(_QWORD *)v3 = v4 & 3 | v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      *(_QWORD *)*v2 &= ~1uLL;
      *(_QWORD *)*v2 |= 2uLL;
      v2[1] = 0;
LABEL_5:
      if ( *v2 )
        qfree(*v2);
      goto LABEL_7;
    }
    v6 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_1D7F10(v6);
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_13;
    }
    sub_1D7F10(v7);
LABEL_13:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_14:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = *v2;
      v4 = *(_QWORD *)*v2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1D7D60(v5 + 32);
    *(_QWORD *)v5 |= 2uLL;
    goto LABEL_14;
  }
LABEL_8:
  *(_QWORD *)(a1 + 816) = 0;
  *(_DWORD *)(a1 + 824) = -1;
}

