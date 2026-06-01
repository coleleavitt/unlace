__int64 __fastcall sub_222C70(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  *a1 = off_4BFF78;
  if ( a1[34] )
  {
    a1[35] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( a1[18] )
  {
    a1[19] = 0;
    qfree();
  }
  result = a1[11];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[12] )
    {
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)result & 3LL;
      *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[11],
                                     (__m128i)(unsigned __int64)a1[11]);
      *(_QWORD *)a1[11] &= ~1uLL;
      result = a1[11];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_33:
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | v3 & 3;
      *(__m128i *)(a1[11] + 8LL) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)a1[11],
                                     (__m128i)(unsigned __int64)a1[11]);
      *(_QWORD *)a1[11] &= ~1uLL;
      result = a1[11];
      *(_QWORD *)result |= 2uLL;
      a1[12] = 0;
LABEL_10:
      if ( a1[11] )
        return qfree();
      return result;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_35;
      goto LABEL_28;
    }
    v6 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_17:
        if ( *(_QWORD *)(v5 + 88) )
        {
          *(_QWORD *)(v5 + 96) = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( *(_QWORD *)(v5 + 24) )
        {
          *(_QWORD *)(v5 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v5 |= 2uLL;
LABEL_25:
        if ( v5 )
          qfree();
        v8 = *(_QWORD **)(v4 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_29:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_30:
            if ( v3 > 3 )
              qfree();
            result = a1[11];
            v3 = *(_QWORD *)result;
            goto LABEL_33;
          }
LABEL_35:
          if ( *(_QWORD *)(v4 + 88) )
          {
            *(_QWORD *)(v4 + 96) = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( *(_QWORD *)(v4 + 24) )
          {
            *(_QWORD *)(v4 + 32) = 0;
            qfree();
          }
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_30;
        }
LABEL_28:
        sub_222AF0(v8);
        goto LABEL_29;
      }
    }
    else
    {
      sub_222AF0(v6);
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_24;
    }
    sub_222AF0(v7);
LABEL_24:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_25;
    goto LABEL_17;
  }
  return result;
}

