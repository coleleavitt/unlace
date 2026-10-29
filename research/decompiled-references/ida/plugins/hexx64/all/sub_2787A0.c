__int64 __fastcall sub_2787A0(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_8;
  v3 = *(__int64 **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_27:
      v11 = *(unsigned __int64 **)(v2 + 32);
      if ( v11 )
      {
        if ( *(_QWORD *)(v2 + 40) )
        {
          sub_277F70((_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL));
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
          *v11 = *v11 & 3 | (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v2 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v2 + 32));
          **(_QWORD **)(v2 + 32) &= ~1uLL;
          **(_QWORD **)(v2 + 32) |= 2uLL;
        }
        v12 = *(_QWORD *)(v2 + 32);
        if ( v12 )
          qfree(v12);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_6;
    }
  }
  else
  {
    sub_2787A0(v3);
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_5;
  }
  sub_2787A0(v4);
LABEL_5:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_27;
LABEL_6:
  if ( v2 )
    qfree(v2);
LABEL_8:
  v5 = a1[2];
  if ( (*(_BYTE *)v5 & 2) != 0 )
    goto LABEL_15;
  v6 = *(__int64 **)(v5 + 8);
  if ( (*(_BYTE *)v6 & 2) != 0 )
  {
    v7 = *(__int64 **)(v5 + 16);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
LABEL_34:
      v13 = *(unsigned __int64 **)(v5 + 32);
      if ( v13 )
      {
        if ( *(_QWORD *)(v5 + 40) )
        {
          sub_277F70((_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL));
          **(_QWORD **)(v5 + 32) = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v5 + 32) & 3LL;
          *(__m128i *)(*(_QWORD *)(v5 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v5 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v5 + 32));
          **(_QWORD **)(v5 + 32) &= ~1uLL;
          **(_QWORD **)(v5 + 32) |= 2uLL;
          *(_QWORD *)(v5 + 40) = 0;
        }
        else
        {
          *v13 = *v13 & 3 | (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL;
          *(__m128i *)(*(_QWORD *)(v5 + 32) + 8LL) = _mm_unpacklo_epi64(
                                                       (__m128i)*(unsigned __int64 *)(v5 + 32),
                                                       (__m128i)*(unsigned __int64 *)(v5 + 32));
          **(_QWORD **)(v5 + 32) &= ~1uLL;
          **(_QWORD **)(v5 + 32) |= 2uLL;
        }
        v14 = *(_QWORD *)(v5 + 32);
        if ( v14 )
          qfree(v14);
      }
      *(_QWORD *)v5 |= 2uLL;
      goto LABEL_13;
    }
  }
  else
  {
    sub_2787A0(v6);
    v7 = *(__int64 **)(v5 + 16);
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_12;
  }
  sub_2787A0(v7);
LABEL_12:
  if ( (*(_BYTE *)v5 & 2) == 0 )
    goto LABEL_34;
LABEL_13:
  if ( v5 )
    qfree(v5);
LABEL_15:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      if ( a1[5] )
      {
        sub_277F70((_QWORD *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL));
        *(_QWORD *)a1[4] = a1[4] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a1[4] & 3LL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
        a1[5] = 0;
      }
      else
      {
        *(_QWORD *)v9 = *(_QWORD *)v9 & 3LL | v9 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(a1[4] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[4], (__m128i)(unsigned __int64)a1[4]);
        *(_QWORD *)a1[4] &= ~1uLL;
        *(_QWORD *)a1[4] |= 2uLL;
      }
      v10 = a1[4];
      if ( v10 )
        qfree(v10);
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

