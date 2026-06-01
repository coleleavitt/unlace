unsigned __int64 __fastcall sub_30A980(_QWORD *a1, double a2)
{
  __m128i *v2; // r12
  __int64 v3; // r15
  __int64 i; // rbp
  bool (__fastcall *v5)(__int64); // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  __m128i *v20; // rax
  __int64 v21[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v22; // [rsp+20h] [rbp-98h]
  __int64 *v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  __int128 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int128 v27; // [rsp+50h] [rbp-68h]
  int v28; // [rsp+60h] [rbp-58h]
  __m128i *v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  switch_dbctx();
  v2 = (__m128i *)sub_2C7210((__int64)a1);
  if ( !v2 )
  {
    v20 = (__m128i *)qalloc();
    v2 = v20;
    if ( !v20 )
      sub_4F618();
    v20->m128i_i64[0] = 0;
    v20->m128i_i64[1] = 0;
  }
  v3 = a1[5];
  for ( i = v3 + 192LL * a1[6]; i != v3; *(_DWORD *)(v6 + 128) = *(_DWORD *)(v3 - 56) )
  {
    while ( 1 )
    {
      v5 = **(bool (__fastcall ***)(__int64))v3;
      if ( v5 == sub_2AD0D0 )
        break;
      if ( v5(v3) )
        goto LABEL_7;
LABEL_4:
      v3 += 192;
      if ( i == v3 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(v3 + 40) != 2 )
      goto LABEL_4;
LABEL_7:
    v21[0] = v3 + 8;
    v6 = sub_309FA0(v2, v3 + 8, v21, a2) + 24;
    copy_argloc();
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(v3 + 64);
    sub_2B0B30(v6 + 64, v3 + 72);
    copy_tinfo_t();
    sub_2B0B30(v6 + 96, v3 + 104);
    v7 = *(_QWORD *)(v3 + 128);
    v3 += 192;
    *(_QWORD *)(v6 + 120) = v7;
  }
LABEL_8:
  v8 = a1[10];
  v9 = a1[8];
  v22 = 118;
  v21[1] = v8;
  v23 = &v24;
  v21[0] = (__int64)off_4E1500;
  v24 = 0;
  v26 = 0;
  v28 = 1;
  v29 = v2;
  v25 = 0;
  v27 = 0;
  sub_2B6200(v9, (__int64)v21);
  v10 = v26;
  v21[0] = (__int64)off_4E1500;
  if ( !v26 )
    goto LABEL_13;
  v11 = *(_QWORD *)v26;
  if ( !(_QWORD)v27 )
  {
    *(_QWORD *)v26 = *(_QWORD *)v26 & 3LL | v26 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
    *(_QWORD *)v26 &= ~1uLL;
    *(_QWORD *)v26 |= 2uLL;
    goto LABEL_11;
  }
  v17 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v18 = *(_QWORD **)(v17 + 8);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_33;
    }
    else
    {
      sub_2B0820(v18);
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_25;
    }
    sub_2B0820(v19);
LABEL_25:
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
LABEL_26:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v26;
      v11 = *(_QWORD *)v26;
      goto LABEL_29;
    }
LABEL_33:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v17 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)v10 = v11 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
  *(_QWORD *)v26 &= ~1uLL;
  *(_QWORD *)v26 |= 2uLL;
  *(_QWORD *)&v27 = 0;
LABEL_11:
  if ( v26 )
    qfree(v26);
LABEL_13:
  v12 = v24;
  if ( v24 )
  {
    v13 = v25;
    if ( (_QWORD)v25 )
    {
      v14 = 0;
      do
      {
        v15 = 3 * v14++;
        sub_2B9980((_QWORD *)(32 * v15 + v12));
        v12 = v24;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v12);
  }
  sub_2C3F80(v2->m128i_i64);
  qfree((__int64)v2);
  return v30 - __readfsqword(0x28u);
}

