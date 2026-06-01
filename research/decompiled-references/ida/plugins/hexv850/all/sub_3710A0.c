__int64 __fastcall sub_3710A0(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r13
  _BYTE *v5; // rdi
  _BYTE *v6; // rdi
  __int64 v7; // r12
  void *v8; // rdi

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_4;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_4:
      if ( *a1 )
        return qfree();
      return result;
    }
    v5 = *(_BYTE **)(v4 + 8);
    if ( (*v5 & 2) != 0 )
    {
      v6 = *(_BYTE **)(v4 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_366660((__int64)v5);
      v6 = *(_BYTE **)(v4 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_10;
    }
    sub_366660((__int64)v6);
LABEL_10:
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree();
      result = *a1;
      v3 = *(_QWORD *)*a1;
      goto LABEL_14;
    }
LABEL_18:
    clear_tinfo_t();
    v7 = *(_QWORD *)(v4 + 48);
    while ( v7 )
    {
      sub_365B50(*(_QWORD **)(v7 + 24));
      v8 = (void *)v7;
      v7 = *(_QWORD *)(v7 + 16);
      operator delete(v8, 0x28u);
    }
    *(_QWORD *)v4 |= 2uLL;
    goto LABEL_11;
  }
  return result;
}

