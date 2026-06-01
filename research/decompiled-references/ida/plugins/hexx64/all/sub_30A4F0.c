unsigned __int64 __fastcall sub_30A4F0(_QWORD *a1, double a2)
{
  __int64 v2; // r15
  __int64 i; // rbp
  bool (__fastcall *v4)(__int64); // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  unsigned __int64 v25; // rbp
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  __m128i v28; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v29[2]; // [rsp+20h] [rbp-A8h] BYREF
  char v30; // [rsp+30h] [rbp-98h]
  __int64 *v31; // [rsp+38h] [rbp-90h]
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int128 v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h]
  int v36; // [rsp+70h] [rbp-58h]
  __m128i *v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  switch_dbctx();
  v28 = 0u;
  v2 = a1[5];
  for ( i = v2 + 192LL * a1[6]; i != v2; *(_DWORD *)(v5 + 128) = *(_DWORD *)(v2 - 56) )
  {
    while ( 1 )
    {
      v4 = **(bool (__fastcall ***)(__int64))v2;
      if ( v4 == sub_2AD0E0 )
        break;
      if ( v4(v2) )
        goto LABEL_6;
LABEL_3:
      v2 += 192;
      if ( i == v2 )
        goto LABEL_7;
    }
    if ( (unsigned int)(*(_DWORD *)(v2 + 40) - 3) > 1 )
      goto LABEL_3;
LABEL_6:
    v29[0] = v2 + 8;
    v5 = sub_309FA0(&v28, v2 + 8, v29, a2) + 24;
    copy_argloc();
    *(_QWORD *)(v5 + 56) = *(_QWORD *)(v2 + 64);
    sub_2B0B30(v5 + 64, v2 + 72);
    copy_tinfo_t();
    sub_2B0B30(v5 + 96, v2 + 104);
    v6 = *(_QWORD *)(v2 + 128);
    v2 += 192;
    *(_QWORD *)(v5 + 120) = v6;
  }
LABEL_7:
  v7 = a1[10];
  v8 = a1[8];
  v30 = 118;
  v29[1] = v7;
  v31 = &v32;
  v29[0] = (__int64)off_4E1500;
  v32 = 0;
  v34 = 0;
  v36 = 1;
  v37 = &v28;
  v33 = 0;
  v35 = 0;
  sub_2B6200(v8, (__int64)v29);
  v9 = v34;
  v29[0] = (__int64)off_4E1500;
  if ( !v34 )
    goto LABEL_12;
  v10 = *(_QWORD *)v34;
  if ( !(_QWORD)v35 )
  {
    *(_QWORD *)v34 = *(_QWORD *)v34 & 3LL | v34 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
    *(_QWORD *)v34 &= ~1uLL;
    *(_QWORD *)v34 |= 2uLL;
    goto LABEL_10;
  }
  v25 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v26 = *(_QWORD **)(v25 + 8);
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_46;
    }
    else
    {
      sub_2B0820(v26);
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_38;
    }
    sub_2B0820(v27);
LABEL_38:
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
LABEL_39:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = v34;
      v10 = *(_QWORD *)v34;
      goto LABEL_42;
    }
LABEL_46:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v25 |= 2uLL;
    goto LABEL_39;
  }
LABEL_42:
  *(_QWORD *)v9 = v10 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
  *(_QWORD *)v34 &= ~1uLL;
  *(_QWORD *)v34 |= 2uLL;
  *(_QWORD *)&v35 = 0;
LABEL_10:
  if ( v34 )
    qfree(v34);
LABEL_12:
  v11 = v32;
  if ( v32 )
  {
    v12 = v33;
    if ( (_QWORD)v33 )
    {
      v13 = 0;
      do
      {
        v14 = 3 * v13++;
        sub_2B9980((_QWORD *)(32 * v14 + v11));
        v11 = v32;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v11);
  }
  v15 = v28.m128i_i64[0];
  if ( v28.m128i_i64[0] )
  {
    v16 = *(_QWORD *)v28.m128i_i64[0];
    if ( !v28.m128i_i64[1] )
    {
      *(_QWORD *)v28.m128i_i64[0] = *(_QWORD *)v28.m128i_i64[0] & 3LL | v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v17 = v28.m128i_i64[0];
      v18 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v18, v18);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
      goto LABEL_20;
    }
    v20 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_33:
      *(_QWORD *)v15 = v16 & 3 | v15 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = v28.m128i_i64[0];
      v24 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v24, v24);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
      v28.m128i_i64[1] = 0;
LABEL_20:
      if ( v28.m128i_i64[0] )
        qfree(v28.m128i_i64[0]);
      return v38 - __readfsqword(0x28u);
    }
    v21 = *(_QWORD **)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = *(_QWORD **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_44;
    }
    else
    {
      sub_2BA180(v21);
      v22 = *(_QWORD **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_29;
    }
    sub_2BA180(v22);
LABEL_29:
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
LABEL_30:
      if ( v16 > 3 )
        qfree(v16 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = v28.m128i_i64[0];
      v16 = *(_QWORD *)v28.m128i_i64[0];
      goto LABEL_33;
    }
LABEL_44:
    sub_2B9980((_QWORD *)(v20 + 64));
    cleanup_argloc();
    *(_QWORD *)v20 |= 2uLL;
    goto LABEL_30;
  }
  return v38 - __readfsqword(0x28u);
}

