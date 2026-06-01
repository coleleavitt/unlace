__int64 __fastcall sub_3B09D0(__int64 *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  result = *a1;
  if ( *a1 )
  {
    v5 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_4;
    }
    v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v5 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_4:
      if ( *a1 )
        return qfree(*a1);
      return result;
    }
    v7 = *(_QWORD **)(v6 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_3B08A0(v7, a2, a3);
      v8 = *(_QWORD **)(v6 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3B08A0(v8, a2, a3);
LABEL_10:
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_11:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v5 = *(_QWORD *)*a1;
      goto LABEL_14;
    }
LABEL_18:
    sub_3ACAB0(v6 + 32, a3);
    *(_QWORD *)v6 |= 2uLL;
    goto LABEL_11;
  }
  return result;
}

