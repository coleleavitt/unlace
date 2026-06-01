__int64 __fastcall sub_278B60(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rax

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_8;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_27:
      v5 = *(unsigned __int64 **)(v1 + 32);
      if ( v5 )
      {
        if ( *(_QWORD *)(v1 + 40) )
        {
          sub_278330((_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL));
          **(_QWORD **)(v1 + 32) = *(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v1 + 32) & 3LL;
          *(__m128i *)(*(_QWORD *)(v1 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v1 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v1 + 32));
          **(_QWORD **)(v1 + 32) &= ~1uLL;
          **(_QWORD **)(v1 + 32) |= 2uLL;
          *(_QWORD *)(v1 + 40) = 0;
        }
        else
        {
          *v5 = *v5 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v1 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v1 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v1 + 32));
          **(_QWORD **)(v1 + 32) &= ~1uLL;
          **(_QWORD **)(v1 + 32) |= 2uLL;
        }
        if ( *(_QWORD *)(v1 + 32) )
          qfree();
      }
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_6;
    }
  }
  else
  {
    sub_278B60();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_5;
  }
  sub_278B60();
LABEL_5:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_27;
LABEL_6:
  if ( v1 )
    qfree();
LABEL_8:
  v2 = a1[2];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_15;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_34:
      v6 = *(unsigned __int64 **)(v2 + 32);
      if ( v6 )
      {
        if ( *(_QWORD *)(v2 + 40) )
        {
          sub_278330((_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL));
          **(_QWORD **)(v2 + 32) = *(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v2 + 32) & 3LL;
          *(__m128i *)(*(_QWORD *)(v2 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32));
          **(_QWORD **)(v2 + 32) &= ~1uLL;
          **(_QWORD **)(v2 + 32) |= 2uLL;
          *(_QWORD *)(v2 + 40) = 0;
        }
        else
        {
          *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v2 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32));
          **(_QWORD **)(v2 + 32) &= ~1uLL;
          **(_QWORD **)(v2 + 32) |= 2uLL;
        }
        if ( *(_QWORD *)(v2 + 32) )
          qfree();
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_13;
    }
  }
  else
  {
    sub_278B60();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_12;
  }
  sub_278B60();
LABEL_12:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_34;
LABEL_13:
  if ( v2 )
    qfree();
LABEL_15:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      if ( a1[5] )
      {
        sub_278330((_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL));
        *(_QWORD *)a1[4] = a1[4] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a1[4] & 3LL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
        a1[5] = 0;
      }
      else
      {
        *(_QWORD *)v4 = *(_QWORD *)v4 & 3LL | v4 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
      }
      if ( a1[4] )
        qfree();
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree();
  return result;
}

