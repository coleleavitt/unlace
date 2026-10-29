__int64 __fastcall sub_7C890(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  result = a1[3];
  if ( !result )
    goto LABEL_6;
  v3 = *(_QWORD *)result;
  if ( !a1[4] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
    *(_QWORD *)a1[3] &= ~1uLL;
    result = a1[3];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_4;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
    v6 = *(__int64 **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_29:
        if ( *(_QWORD *)(v5 + 32) )
        {
          *(_QWORD *)(v5 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v5 |= 2uLL;
LABEL_15:
        if ( v5 )
          qfree();
        v8 = *(__int64 **)(v4 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_19:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_20:
            if ( v3 > 3 )
              qfree();
            result = a1[3];
            v3 = *(_QWORD *)result;
            goto LABEL_23;
          }
LABEL_25:
          if ( *(_QWORD *)(v4 + 32) )
          {
            *(_QWORD *)(v4 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_20;
        }
LABEL_18:
        sub_772B0(v8);
        goto LABEL_19;
      }
    }
    else
    {
      sub_772B0(v6);
      v7 = *(__int64 **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_14;
    }
    sub_772B0(v7);
LABEL_14:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_29;
  }
LABEL_23:
  *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
  *(_QWORD *)a1[3] &= ~1uLL;
  result = a1[3];
  *(_QWORD *)result |= 2uLL;
  a1[4] = 0;
LABEL_4:
  if ( a1[3] )
    result = qfree();
LABEL_6:
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

