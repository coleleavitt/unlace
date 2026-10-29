__int64 __fastcall sub_2D7F60(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+10h] [rbp-C8h]
  __int128 v21; // [rsp+18h] [rbp-C0h]
  __int64 v22; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  __int128 v25; // [rsp+58h] [rbp-80h]
  __int64 v26; // [rsp+70h] [rbp-68h] BYREF
  __int128 v27; // [rsp+78h] [rbp-60h]
  __int64 v28; // [rsp+88h] [rbp-50h]
  __int128 v29; // [rsp+90h] [rbp-48h]
  int v30; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  sub_2B61B0(a1, a2, 0);
  v2 = 0;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_2;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v23 = 0;
  v28 = 0;
  v30 = 1;
  v22 = 0;
  v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)(v20 + v21));
  sub_2D7370(a1, (__int64)&v26, &v19, a2, &v22, v19);
  v25 = 0;
  v24 = 0;
  sub_2BBE40((__int64)&v24, a2, &v26, &v22);
  v4 = v24;
  sub_2B61B0(a1, a2, 1);
  netnode_setblob();
  if ( v4 )
    qfree(v4);
  v5 = v22;
  if ( v22 )
  {
    v6 = v23;
    if ( (_QWORD)v23 )
    {
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v5 + 24 * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = v22;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v5);
  }
  v10 = v28;
  if ( v28 )
  {
    v11 = *(_QWORD *)v28;
    if ( !(_QWORD)v29 )
    {
      *(_QWORD *)v28 = *(_QWORD *)v28 & 3LL | v28 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
      *(_QWORD *)v28 &= ~1uLL;
      *(_QWORD *)v28 |= 2uLL;
LABEL_25:
      if ( v28 )
        qfree(v28);
      goto LABEL_27;
    }
    v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_24:
      *(_QWORD *)v10 = v11 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
      *(_QWORD *)v28 &= ~1uLL;
      *(_QWORD *)v28 |= 2uLL;
      *(_QWORD *)&v29 = 0;
      goto LABEL_25;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_2B0820(v13);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_20;
    }
    sub_2B0820(v14);
LABEL_20:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_21:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v28;
      v11 = *(_QWORD *)v28;
      goto LABEL_24;
    }
LABEL_35:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_21;
  }
LABEL_27:
  v15 = v26;
  if ( v26 )
  {
    v16 = v27;
    if ( (_QWORD)v27 )
    {
      v17 = 0;
      do
      {
        v18 = 3 * v17++;
        sub_2B9980((_QWORD *)(32 * v18 + v15));
        v15 = v26;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v27 = 0;
    qfree(v15);
  }
  v2 = 1;
LABEL_2:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v2;
}

