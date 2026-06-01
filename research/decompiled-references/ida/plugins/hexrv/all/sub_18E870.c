unsigned __int64 *__fastcall sub_18E870(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 *v5; // rdi
  __int64 *v6; // rdi

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v3 = *result;
  if ( !a1[1] )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v5 = *(__int64 **)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_18C930(v5);
      v6 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_8;
    }
    sub_18C930(v6);
LABEL_8:
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_9:
      if ( v3 > 3 )
        qfree();
      result = *a1;
      v3 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    if ( *(_QWORD *)(v4 + 40) )
    {
      *(_QWORD *)(v4 + 48) = 0;
      qfree();
    }
    *(_QWORD *)v4 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *result = v3 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}

