unsigned __int64 __fastcall sub_3058B0(_QWORD *a1)
{
  __m128i *v1; // r12
  __int64 v2; // r15
  __int64 i; // rbp
  bool (__fastcall *v4)(__int64); // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  __m128i *v19; // rax
  __int64 v20[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v21; // [rsp+20h] [rbp-98h]
  __int64 *v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  __int128 v24; // [rsp+38h] [rbp-80h]
  unsigned __int64 v25; // [rsp+48h] [rbp-70h]
  __int128 v26; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+60h] [rbp-58h]
  __m128i *v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  switch_dbctx();
  v1 = (__m128i *)sub_2C2BD0((__int64)a1);
  if ( !v1 )
  {
    v19 = (__m128i *)qalloc();
    v1 = v19;
    if ( !v19 )
      sub_4E45E(16);
    v19->m128i_i64[0] = 0;
    v19->m128i_i64[1] = 0;
  }
  v2 = a1[5];
  for ( i = v2 + 192LL * a1[6]; i != v2; *(_DWORD *)(v5 + 128) = *(_DWORD *)(v2 - 56) )
  {
    while ( 1 )
    {
      v4 = **(bool (__fastcall ***)(__int64))v2;
      if ( v4 == sub_2A8860 )
        break;
      if ( v4(v2) )
        goto LABEL_7;
LABEL_4:
      v2 += 192;
      if ( i == v2 )
        goto LABEL_8;
    }
    if ( (unsigned int)(*(_DWORD *)(v2 + 40) - 3) > 1 )
      goto LABEL_4;
LABEL_7:
    v20[0] = v2 + 8;
    v5 = sub_305720(v1, v2 + 8, v20) + 24;
    copy_argloc();
    *(_QWORD *)(v5 + 56) = *(_QWORD *)(v2 + 64);
    sub_2AC2B0(v5 + 64, v2 + 72);
    copy_tinfo_t();
    sub_2AC2B0(v5 + 96, v2 + 104);
    v6 = *(_QWORD *)(v2 + 128);
    v2 += 192;
    *(_QWORD *)(v5 + 120) = v6;
  }
LABEL_8:
  v7 = a1[10];
  v8 = a1[8];
  v21 = 118;
  v20[1] = v7;
  v22 = &v23;
  v20[0] = (__int64)off_4C1C40;
  v23 = 0;
  v25 = 0;
  v27 = 1;
  v28 = v1;
  v24 = 0;
  v26 = 0;
  sub_2B1980(v8, (__int64)v20);
  v9 = v25;
  v20[0] = (__int64)off_4C1C40;
  if ( !v25 )
    goto LABEL_13;
  v10 = *(_QWORD *)v25;
  if ( !(_QWORD)v26 )
  {
    *(_QWORD *)v25 = *(_QWORD *)v25 & 3LL | v25 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
    *(_QWORD *)v25 &= ~1uLL;
    *(_QWORD *)v25 |= 2uLL;
    goto LABEL_11;
  }
  v16 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v17 = *(_QWORD **)(v16 + 8);
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v18 = *(_QWORD **)(v16 + 16);
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_33;
    }
    else
    {
      sub_2ABFA0(v17);
      v18 = *(_QWORD **)(v16 + 16);
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_25;
    }
    sub_2ABFA0(v18);
LABEL_25:
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
LABEL_26:
      if ( v10 > 3 )
        qfree();
      v9 = v25;
      v10 = *(_QWORD *)v25;
      goto LABEL_29;
    }
LABEL_33:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v16 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)v9 = v10 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
  *(_QWORD *)v25 &= ~1uLL;
  *(_QWORD *)v25 |= 2uLL;
  *(_QWORD *)&v26 = 0;
LABEL_11:
  if ( v25 )
    qfree();
LABEL_13:
  v11 = v23;
  if ( v23 )
  {
    v12 = v24;
    if ( (_QWORD)v24 )
    {
      v13 = 0;
      do
      {
        v14 = 3 * v13++;
        sub_2B5100((_QWORD *)(32 * v14 + v11));
        v11 = v23;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  sub_2BF700(v1->m128i_i64);
  qfree();
  return v29 - __readfsqword(0x28u);
}

