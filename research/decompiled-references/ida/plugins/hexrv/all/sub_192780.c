__int64 __fastcall sub_192780(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = off_4B0D30;
  if ( a1[16] )
  {
    a1[17] = 0;
    qfree();
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  result = a1[6];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[7] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_10;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_27:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      a1[7] = 0;
LABEL_10:
      if ( a1[6] )
        return qfree();
      return result;
    }
    v6 = (__int64 *)v4[1];
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
      v10 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_29;
      goto LABEL_22;
    }
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
LABEL_31:
        *v6 = v7 | 2;
LABEL_19:
        if ( v6 )
          qfree();
        v10 = (__int64 *)v4[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_23:
          v5 = *v4;
          if ( (*v4 & 2) != 0 )
          {
LABEL_24:
            if ( v3 > 3 )
              qfree();
            result = a1[6];
            v3 = *(_QWORD *)result;
            goto LABEL_27;
          }
LABEL_29:
          *v4 = v5 | 2;
          goto LABEL_24;
        }
LABEL_22:
        sub_191DB0(v10);
        goto LABEL_23;
      }
    }
    else
    {
      sub_191DB0(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_18;
    }
    sub_191DB0(v9);
LABEL_18:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
      goto LABEL_19;
    goto LABEL_31;
  }
  return result;
}

