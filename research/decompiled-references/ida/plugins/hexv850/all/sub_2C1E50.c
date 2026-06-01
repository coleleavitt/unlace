__int64 __fastcall sub_2C1E50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD v14[2]; // [rsp+0h] [rbp-88h] BYREF
  char v15; // [rsp+10h] [rbp-78h]
  __int64 *v16; // [rsp+18h] [rbp-70h]
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h]
  unsigned __int64 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  unsigned __int64 v23; // [rsp+68h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  switch_dbctx();
  v1 = *(_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)(a1 + 64);
  v14[0] = off_4B4EA0;
  v14[1] = v1;
  v15 = 118;
  v16 = &v17;
  v17 = 0;
  v19 = 0;
  v21 = 1;
  v22 = 0;
  v18 = 0;
  v20 = 0;
  v3 = sub_2B1030(v2, v14);
  v4 = v19;
  v14[0] = off_4B4EA0;
  if ( !v19 )
    goto LABEL_6;
  v5 = *(_QWORD *)v19;
  if ( !(_QWORD)v20 )
  {
    *(_QWORD *)v19 = *(_QWORD *)v19 & 3LL | v19 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
    *(_QWORD *)v19 &= ~1uLL;
    *(_QWORD *)v19 |= 2uLL;
    goto LABEL_4;
  }
  v11 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v12 = *(_QWORD **)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_2AB460(v12);
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_15;
    }
    sub_2AB460(v13);
LABEL_15:
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
LABEL_16:
      if ( v5 > 3 )
        qfree();
      v4 = v19;
      v5 = *(_QWORD *)v19;
      goto LABEL_19;
    }
LABEL_22:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v11 |= 2uLL;
    goto LABEL_16;
  }
LABEL_19:
  *(_QWORD *)v4 = v5 & 3 | v4 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  *(_QWORD *)v19 &= ~1uLL;
  *(_QWORD *)v19 |= 2uLL;
  *(_QWORD *)&v20 = 0;
LABEL_4:
  if ( v19 )
    qfree();
LABEL_6:
  v6 = v17;
  if ( v17 )
  {
    v7 = v18;
    if ( (_QWORD)v18 )
    {
      v8 = 0;
      do
      {
        v9 = 3 * v8++;
        sub_2B45C0((_QWORD *)(32 * v9 + v6));
        v6 = v17;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v3;
}

