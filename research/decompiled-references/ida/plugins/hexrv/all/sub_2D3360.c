__int64 __fastcall sub_2D3360(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  __m128i v18; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-C8h]
  __int128 v20; // [rsp+18h] [rbp-C0h]
  __int64 v21; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+38h] [rbp-A0h]
  __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  __int128 v24; // [rsp+58h] [rbp-80h]
  __int64 v25; // [rsp+70h] [rbp-68h] BYREF
  __int128 v26; // [rsp+78h] [rbp-60h]
  unsigned __int64 v27; // [rsp+88h] [rbp-50h]
  __int128 v28; // [rsp+90h] [rbp-48h]
  int v29; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v20 = 0;
  v19 = 0;
  sub_2B15B0(a1, a2, 0);
  v2 = 0;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_2;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v22 = 0;
  v27 = 0;
  v29 = 1;
  v21 = 0;
  v18 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)(v19 + (unsigned __int64)v20));
  sub_2D2770(a1, (__int64)&v25, &v18, a2, &v21, v18);
  v24 = 0;
  v23 = 0;
  sub_2B7240((__int64)&v23, a2, (__int64)&v25, &v21);
  v4 = v23;
  sub_2B15B0(a1, a2, 1);
  netnode_setblob();
  if ( v4 )
    qfree();
  v5 = v21;
  if ( v21 )
  {
    v6 = v22;
    if ( (_QWORD)v22 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 24 * v7);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = v21;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  v9 = v27;
  if ( v27 )
  {
    v10 = *(_QWORD *)v27;
    if ( !(_QWORD)v28 )
    {
      *(_QWORD *)v27 = *(_QWORD *)v27 & 3LL | v27 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      *(_QWORD *)v27 &= ~1uLL;
      *(_QWORD *)v27 |= 2uLL;
LABEL_25:
      if ( v27 )
        qfree();
      goto LABEL_27;
    }
    v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_24:
      *(_QWORD *)v9 = v10 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      *(_QWORD *)v27 &= ~1uLL;
      *(_QWORD *)v27 |= 2uLL;
      *(_QWORD *)&v28 = 0;
      goto LABEL_25;
    }
    v12 = *(_QWORD **)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_2ABC20(v12);
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_20;
    }
    sub_2ABC20(v13);
LABEL_20:
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
LABEL_21:
      if ( v10 > 3 )
        qfree();
      v9 = v27;
      v10 = *(_QWORD *)v27;
      goto LABEL_24;
    }
LABEL_35:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v11 |= 2uLL;
    goto LABEL_21;
  }
LABEL_27:
  v14 = v25;
  if ( v25 )
  {
    v15 = v26;
    if ( (_QWORD)v26 )
    {
      v16 = 0;
      do
      {
        v17 = 3 * v16++;
        sub_2B4D80((_QWORD *)(32 * v17 + v14));
        v14 = v25;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  v2 = 1;
LABEL_2:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v2;
}

