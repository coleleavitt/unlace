void __fastcall sub_335FB0(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 *v3; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rdi

  v2 = a1[4];
  if ( v2 )
  {
    v3 = a1[5];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (unsigned __int64 *)((char *)i + 1) )
      {
        v5 = &v2[3 * (_QWORD)i];
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[4];
        }
      }
    }
    a1[5] = nullptr;
    qfree();
  }
  v6 = *a1;
  if ( *a1 )
  {
    v7 = *v6;
    if ( !a1[1] )
    {
      *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      goto LABEL_11;
    }
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 2) != 0 )
    {
LABEL_28:
      *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      a1[1] = nullptr;
LABEL_11:
      if ( *a1 )
        qfree();
      goto LABEL_13;
    }
    v10 = (__int64 *)v8[1];
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
    {
      v14 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_23;
    }
    v12 = (__int64 *)v10[1];
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_32:
        *v10 = v11 | 2;
LABEL_20:
        if ( v10 )
          qfree();
        v14 = (__int64 *)v8[2];
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
LABEL_24:
          v9 = *v8;
          if ( (*v8 & 2) != 0 )
          {
LABEL_25:
            if ( v7 > 3 )
              qfree();
            v6 = *a1;
            v7 = **a1;
            goto LABEL_28;
          }
LABEL_30:
          *v8 = v9 | 2;
          goto LABEL_25;
        }
LABEL_23:
        sub_335560(v14);
        goto LABEL_24;
      }
    }
    else
    {
      sub_335560(v12);
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_19;
    }
    sub_335560(v13);
LABEL_19:
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
LABEL_13:
  operator delete(a1, 0x120u);
}

