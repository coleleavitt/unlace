unsigned __int64 *__fastcall sub_1406D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // r13
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rdi

  if ( !(_BYTE)a2 )
    sub_140330(*(unsigned __int64 ***)(a1 + 792), a2);
  v3 = *(_QWORD *)(a1 + 792);
  result = *(unsigned __int64 **)(v3 + 16);
  if ( !result )
    goto LABEL_15;
  v5 = *result;
  if ( *(_QWORD *)(v3 + 24) )
  {
    v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
    {
LABEL_14:
      *result = v5 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(v3 + 16) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(v3 + 16),
                                                   (__m128i)*(unsigned __int64 *)(v3 + 16));
      **(_QWORD **)(v3 + 16) &= ~1uLL;
      result = *(unsigned __int64 **)(v3 + 16);
      *result |= 2u;
LABEL_15:
      *(_QWORD *)(v3 + 24) = 0;
      goto LABEL_16;
    }
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_134B70(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_10;
    }
    sub_134B70(v9);
LABEL_10:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
LABEL_11:
      if ( v5 > 3 )
        qfree();
      result = *(unsigned __int64 **)(v3 + 16);
      v5 = *result;
      goto LABEL_14;
    }
LABEL_18:
    *v6 = v7 | 2;
    goto LABEL_11;
  }
  *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(v3 + 16) + 8LL) = _mm_unpacklo_epi64(
                                               (__m128i)*(unsigned __int64 *)(v3 + 16),
                                               (__m128i)*(unsigned __int64 *)(v3 + 16));
  **(_QWORD **)(v3 + 16) &= ~1uLL;
  result = *(unsigned __int64 **)(v3 + 16);
  *result |= 2u;
LABEL_16:
  *(_QWORD *)(a1 + 1112) = -1;
  return result;
}

