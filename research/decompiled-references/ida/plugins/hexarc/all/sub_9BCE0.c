__int64 __fastcall sub_9BCE0(_QWORD *a1)
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

  if ( *a1 )
    sub_FE750();
  result = a1[2];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[3] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_6;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_23:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *(_QWORD *)a1[2] &= ~1uLL;
      result = a1[2];
      *(_QWORD *)result |= 2uLL;
      a1[3] = 0;
LABEL_6:
      if ( a1[2] )
        return qfree();
      return result;
    }
    v6 = (__int64 *)v4[1];
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
      v10 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
LABEL_27:
        *v6 = v7 | 2;
LABEL_15:
        if ( v6 )
          qfree();
        v10 = (__int64 *)v4[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_19:
          v5 = *v4;
          if ( (*v4 & 2) != 0 )
          {
LABEL_20:
            if ( v3 > 3 )
              qfree();
            result = a1[2];
            v3 = *(_QWORD *)result;
            goto LABEL_23;
          }
LABEL_25:
          *v4 = v5 | 2;
          goto LABEL_20;
        }
LABEL_18:
        sub_9AA60(v10);
        goto LABEL_19;
      }
    }
    else
    {
      sub_9AA60(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_14;
    }
    sub_9AA60(v9);
LABEL_14:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_27;
  }
  return result;
}

