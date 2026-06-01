void __fastcall func(unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = *v1;
    if ( !a1[1] )
    {
      *v1 = *v1 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      goto LABEL_4;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_21:
      *v1 = v3 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      a1[1] = nullptr;
LABEL_4:
      if ( *a1 )
        qfree();
      return;
    }
    v6 = (__int64 *)v4[1];
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
      v10 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_24;
      goto LABEL_16;
    }
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
LABEL_26:
        *v6 = v7 | 2;
LABEL_13:
        if ( v6 )
          qfree();
        v10 = (__int64 *)v4[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_17:
          v5 = *v4;
          if ( (*v4 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree();
            v1 = *a1;
            v3 = **a1;
            goto LABEL_21;
          }
LABEL_24:
          *v4 = v5 | 2;
          goto LABEL_18;
        }
LABEL_16:
        sub_76EC0(v10);
        goto LABEL_17;
      }
    }
    else
    {
      sub_76EC0(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_12;
    }
    sub_76EC0(v9);
LABEL_12:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_26;
  }
}

