__int64 (__fastcall **__fastcall sub_24D3E0(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi

  *a1 = off_4AC5D8;
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
  v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v10 = *(_QWORD **)(v6 + 16);
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    v8 = *(_QWORD **)(v7 + 8);
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = *(_QWORD **)(v7 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
LABEL_29:
        clear_tinfo_t();
        *(_QWORD *)v7 |= 2uLL;
LABEL_17:
        if ( v7 )
          qfree();
        v10 = *(_QWORD **)(v6 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_21:
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
LABEL_22:
            if ( v3 > 3 )
              qfree();
            v2 = (unsigned __int64 *)a1[9];
            v3 = *v2;
            goto LABEL_25;
          }
LABEL_27:
          clear_tinfo_t();
          *(_QWORD *)v6 |= 2uLL;
          goto LABEL_22;
        }
LABEL_20:
        sub_24C140(v10);
        goto LABEL_21;
      }
    }
    else
    {
      sub_24C140(v8);
      v9 = *(_QWORD **)(v7 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_16;
    }
    sub_24C140(v9);
LABEL_16:
    if ( (*(_BYTE *)v7 & 2) != 0 )
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
  result = off_4A8538;
  *a1 = off_4A8538;
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

