__int64 (__fastcall **__fastcall sub_3C4220(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rdi

  *a1 = off_4C9378;
  v2 = (unsigned __int64 *)a1[9];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[10] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[9] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[9], (__m128i)(unsigned __int64)a1[9]);
    *(_QWORD *)a1[9] &= ~1uLL;
    *(_QWORD *)a1[9] |= 2uLL;
    goto LABEL_4;
  }
  v6 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v7 & 2) == 0 )
  {
    v8 = (__int64 *)v6[1];
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
      v12 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    v10 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
LABEL_29:
        *v8 = v9 | 2;
LABEL_17:
        if ( v8 )
          qfree();
        v12 = (__int64 *)v6[2];
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_21:
          v7 = *v6;
          if ( (*v6 & 2) != 0 )
          {
LABEL_22:
            if ( v3 > 3 )
              qfree();
            v2 = (unsigned __int64 *)a1[9];
            v3 = *v2;
            goto LABEL_25;
          }
LABEL_27:
          *v6 = v7 | 2;
          goto LABEL_22;
        }
LABEL_20:
        sub_3C4130(v12);
        goto LABEL_21;
      }
    }
    else
    {
      sub_3C4130(v10);
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_16;
    }
    sub_3C4130(v11);
LABEL_16:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
LABEL_25:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[9] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[9], (__m128i)(unsigned __int64)a1[9]);
  *(_QWORD *)a1[9] &= ~1uLL;
  *(_QWORD *)a1[9] |= 2uLL;
  a1[10] = 0;
LABEL_4:
  if ( a1[9] )
    qfree();
LABEL_6:
  v4 = a1[5];
  result = off_4BC478;
  *a1 = off_4BC478;
  if ( v4 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

