unsigned __int64 **__fastcall sub_3B1430(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned __int64 **v3; // rbp
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r12
  _BYTE *v9; // rdi
  _BYTE *v10; // rdi
  void *v11; // rdi
  unsigned __int64 *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi

  v3 = *(unsigned __int64 ***)(a1 + 1392);
  v4 = *v3;
  if ( *v3 )
  {
    v5 = *v4;
    if ( !v3[1] )
    {
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | *v4 & 3;
      *(__m128i *)(*v3 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v3, (__m128i)(unsigned __int64)*v3);
      **v3 &= ~1uLL;
      **v3 |= 2u;
      v6 = (unsigned __int64)v3[4];
      if ( !v6 )
        goto LABEL_4;
      goto LABEL_15;
    }
    v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_13;
    v9 = *(_BYTE **)(v8 + 8);
    if ( (*v9 & 2) != 0 )
    {
      v10 = *(_BYTE **)(v8 + 16);
      if ( (*v10 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_3B0E50((__int64)v9, a2, a3);
      v10 = *(_BYTE **)(v8 + 16);
      if ( (*v10 & 2) != 0 )
        goto LABEL_9;
    }
    sub_3B0E50((__int64)v10, a2, a3);
LABEL_9:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
LABEL_10:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = *v3;
      v5 = **v3;
LABEL_13:
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | v5 & 3;
      *(__m128i *)(*v3 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v3, (__m128i)(unsigned __int64)*v3);
      **v3 &= ~1uLL;
      **v3 |= 2u;
      goto LABEL_14;
    }
LABEL_18:
    v12 = *(unsigned __int64 **)(v8 + 48);
    if ( !v12 )
    {
LABEL_23:
      clear_tinfo_t();
      *(_QWORD *)v8 |= 2uLL;
      goto LABEL_10;
    }
    if ( !*(_QWORD *)(v8 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(v8 + 48));
      goto LABEL_21;
    }
    v14 = *v12;
    v15 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
LABEL_31:
      sub_3B0AF0((unsigned __int64 *)(v8 + 48));
      *(_QWORD *)(v8 + 56) = 0;
LABEL_21:
      v13 = *(_QWORD *)(v8 + 48);
      if ( v13 )
        qfree(v13);
      goto LABEL_23;
    }
    v16 = *(_QWORD **)(v15 + 8);
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v17 = *(_QWORD **)(v15 + 16);
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
LABEL_33:
        sub_3ACAB0(v15 + 32, *(double *)a3.m128_u64);
        *(_QWORD *)v15 |= 2uLL;
LABEL_29:
        if ( v14 > 3 )
          qfree(v15);
        goto LABEL_31;
      }
    }
    else
    {
      sub_3B08A0(v16, a2, *(double *)a3.m128_u64);
      v17 = *(_QWORD **)(v15 + 16);
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_28;
    }
    sub_3B08A0(v17, a2, *(double *)a3.m128_u64);
LABEL_28:
    if ( (*(_BYTE *)v15 & 2) != 0 )
      goto LABEL_29;
    goto LABEL_33;
  }
LABEL_14:
  v6 = (unsigned __int64)v3[4];
  v3[1] = nullptr;
  if ( !v6 )
    goto LABEL_4;
  do
  {
LABEL_15:
    sub_3AB0B0(*(_QWORD **)(v6 + 24));
    v11 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v11, 0x28u);
  }
  while ( v6 );
LABEL_4:
  v3[4] = nullptr;
  v3[5] = (unsigned __int64 *)(v3 + 3);
  v3[6] = (unsigned __int64 *)(v3 + 3);
  v3[7] = nullptr;
  return v3 + 3;
}

