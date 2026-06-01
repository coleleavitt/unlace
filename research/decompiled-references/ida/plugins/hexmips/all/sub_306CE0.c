unsigned __int64 __fastcall sub_306CE0(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 i; // rbp
  bool (__fastcall *v3)(__int64); // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  __m128i v27; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v28[2]; // [rsp+20h] [rbp-A8h] BYREF
  char v29; // [rsp+30h] [rbp-98h]
  __int64 *v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h] BYREF
  __int128 v32; // [rsp+48h] [rbp-80h]
  unsigned __int64 v33; // [rsp+58h] [rbp-70h]
  __int128 v34; // [rsp+60h] [rbp-68h]
  int v35; // [rsp+70h] [rbp-58h]
  __m128i *v36; // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  switch_dbctx();
  v27 = 0u;
  v1 = a1[5];
  for ( i = v1 + 192LL * a1[6]; i != v1; *(_DWORD *)(v4 + 128) = *(_DWORD *)(v1 - 56) )
  {
    while ( 1 )
    {
      v3 = **(bool (__fastcall ***)(__int64))v1;
      if ( v3 == sub_2A8840 )
        break;
      if ( v3(v1) )
        goto LABEL_6;
LABEL_3:
      v1 += 192;
      if ( i == v1 )
        goto LABEL_7;
    }
    if ( *(_DWORD *)(v1 + 40) != 1 )
      goto LABEL_3;
LABEL_6:
    v28[0] = v1 + 8;
    v4 = sub_305720(&v27, v1 + 8, v28) + 24;
    copy_argloc();
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v1 + 64);
    sub_2AC2B0(v4 + 64, v1 + 72);
    copy_tinfo_t();
    sub_2AC2B0(v4 + 96, v1 + 104);
    v5 = *(_QWORD *)(v1 + 128);
    v1 += 192;
    *(_QWORD *)(v4 + 120) = v5;
  }
LABEL_7:
  v6 = a1[10];
  v7 = a1[8];
  v29 = 118;
  v28[1] = v6;
  v30 = &v31;
  v28[0] = (__int64)off_4C1C40;
  v31 = 0;
  v33 = 0;
  v35 = 1;
  v36 = &v27;
  v32 = 0;
  v34 = 0;
  sub_2B1980(v7, (__int64)v28);
  v8 = v33;
  v28[0] = (__int64)off_4C1C40;
  if ( !v33 )
    goto LABEL_12;
  v9 = *(_QWORD *)v33;
  if ( !(_QWORD)v34 )
  {
    *(_QWORD *)v33 = *(_QWORD *)v33 & 3LL | v33 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
    *(_QWORD *)v33 &= ~1uLL;
    *(_QWORD *)v33 |= 2uLL;
    goto LABEL_10;
  }
  v24 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v25 = *(_QWORD **)(v24 + 8);
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
      v26 = *(_QWORD **)(v24 + 16);
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_46;
    }
    else
    {
      sub_2ABFA0(v25);
      v26 = *(_QWORD **)(v24 + 16);
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_38;
    }
    sub_2ABFA0(v26);
LABEL_38:
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
LABEL_39:
      if ( v9 > 3 )
        qfree();
      v8 = v33;
      v9 = *(_QWORD *)v33;
      goto LABEL_42;
    }
LABEL_46:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_39;
  }
LABEL_42:
  *(_QWORD *)v8 = v9 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
  *(_QWORD *)v33 &= ~1uLL;
  *(_QWORD *)v33 |= 2uLL;
  *(_QWORD *)&v34 = 0;
LABEL_10:
  if ( v33 )
    qfree();
LABEL_12:
  v10 = v31;
  if ( v31 )
  {
    v11 = v32;
    if ( (_QWORD)v32 )
    {
      v12 = 0;
      do
      {
        v13 = 3 * v12++;
        sub_2B5100((_QWORD *)(32 * v13 + v10));
        v10 = v31;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v14 = v27.m128i_i64[0];
  if ( v27.m128i_i64[0] )
  {
    v15 = *(_QWORD *)v27.m128i_i64[0];
    if ( !v27.m128i_i64[1] )
    {
      *(_QWORD *)v27.m128i_i64[0] = *(_QWORD *)v27.m128i_i64[0] & 3LL | v27.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v16 = v27.m128i_i64[0];
      v17 = (__m128i)v27.m128i_u64[0];
      *(_QWORD *)v27.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
      *(_QWORD *)v27.m128i_i64[0] |= 2uLL;
      goto LABEL_20;
    }
    v19 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_33:
      *(_QWORD *)v14 = v15 & 3 | v14 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = v27.m128i_i64[0];
      v23 = (__m128i)v27.m128i_u64[0];
      *(_QWORD *)v27.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
      *(_QWORD *)v27.m128i_i64[0] |= 2uLL;
      v27.m128i_i64[1] = 0;
LABEL_20:
      if ( v27.m128i_i64[0] )
        qfree();
      return v37 - __readfsqword(0x28u);
    }
    v20 = *(_QWORD **)(v19 + 8);
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v21 = *(_QWORD **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_44;
    }
    else
    {
      sub_2B5900(v20);
      v21 = *(_QWORD **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_29;
    }
    sub_2B5900(v21);
LABEL_29:
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
LABEL_30:
      if ( v15 > 3 )
        qfree();
      v14 = v27.m128i_i64[0];
      v15 = *(_QWORD *)v27.m128i_i64[0];
      goto LABEL_33;
    }
LABEL_44:
    sub_2B5100((_QWORD *)(v19 + 64));
    cleanup_argloc();
    *(_QWORD *)v19 |= 2uLL;
    goto LABEL_30;
  }
  return v37 - __readfsqword(0x28u);
}

