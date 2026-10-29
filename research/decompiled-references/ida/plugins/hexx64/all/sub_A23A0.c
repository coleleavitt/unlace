__int64 __fastcall sub_A23A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rdi

  v2 = *a1;
  if ( v2 )
    sub_104E10(v2);
  result = a1[2];
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( !a1[3] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_6;
    }
    v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
    {
LABEL_23:
      *(_QWORD *)result = v4 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      a1[3] = 0;
LABEL_6:
      v5 = a1[2];
      if ( v5 )
        return qfree(v5);
      return result;
    }
    v8 = (__int64 *)v6[1];
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
      v12 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
    v10 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_27:
        *v8 = v9 | 2;
LABEL_15:
        if ( v8 )
          qfree((__int64)v8);
        v12 = (__int64 *)v6[2];
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_19:
          v7 = *v6;
          if ( (*v6 & 2) != 0 )
          {
LABEL_20:
            if ( v4 > 3 )
              qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[2];
            v4 = *(_QWORD *)result;
            goto LABEL_23;
          }
LABEL_25:
          *v6 = v7 | 2;
          goto LABEL_20;
        }
LABEL_18:
        sub_A1120(v12);
        goto LABEL_19;
      }
    }
    else
    {
      sub_A1120(v10);
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_14;
    }
    sub_A1120(v11);
LABEL_14:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_27;
  }
  return result;
}

