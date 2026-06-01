void __fastcall sub_13BF90(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  if ( !a1 )
    return;
  v2 = a1[2];
  if ( v2 )
  {
    v4 = *v2;
    if ( !a1[3] )
    {
      *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *a1[2] &= ~1uLL;
      *a1[2] |= 2u;
      goto LABEL_5;
    }
    v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 2) != 0 )
    {
LABEL_20:
      *v2 = v4 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[2] + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[2], (__m128i)(unsigned __int64)a1[2]);
      *a1[2] &= ~1uLL;
      *a1[2] |= 2u;
      a1[3] = nullptr;
LABEL_5:
      if ( a1[2] )
        qfree();
      goto LABEL_7;
    }
    v7 = (__int64 *)v5[1];
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_130570(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_16;
    }
    sub_130570(v8);
LABEL_16:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_17:
      if ( v4 > 3 )
        qfree();
      v2 = a1[2];
      v4 = *v2;
      goto LABEL_20;
    }
LABEL_22:
    *v5 = v6 | 2;
    goto LABEL_17;
  }
LABEL_7:
  if ( *a1 )
  {
    sub_13BD30(a1, a2);
    if ( *a1 )
      qfree();
  }
  operator delete(a1, 0x28u);
}

