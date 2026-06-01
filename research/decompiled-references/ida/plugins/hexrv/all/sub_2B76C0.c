__int64 __fastcall sub_2B76C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r12d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  __int64 v17; // rdi
  _UNKNOWN **v18; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-90h]
  char v20; // [rsp+10h] [rbp-88h]
  __int64 *v21; // [rsp+18h] [rbp-80h]
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  __int128 v23; // [rsp+28h] [rbp-70h]
  unsigned __int64 v24; // [rsp+38h] [rbp-60h]
  __int128 v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+50h] [rbp-48h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 96);
  v27 = __readfsqword(0x28u);
  v19 = a2;
  v20 = 118;
  v22 = 0;
  v24 = 0;
  v26 = 1;
  v18 = &off_4B3BF8;
  v21 = &v22;
  v23 = 0;
  v25 = 0;
  if ( sub_2B17F0(v4, &v18) )
    nullsub_114();
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 16LL))(a3, &v22);
  if ( (_BYTE)v6 )
  {
    v17 = *(_QWORD *)(a1 + 96);
    v19 = a2;
    v20 = 118;
    v18 = &off_4B3BF8;
    v21 = &v22;
    sub_2B1600(v17, (__int64)&v18);
    sub_140270(*(_QWORD *)(a1 + 96), a2, (__int64)&v22);
    sub_1438B0(a1, a2, 0);
  }
  v7 = v24;
  if ( v24 )
  {
    v8 = *(_QWORD *)v24;
    if ( !(_QWORD)v25 )
    {
      *(_QWORD *)v24 = *(_QWORD *)v24 & 3LL | v24 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      *(_QWORD *)v24 &= ~1uLL;
      *(_QWORD *)v24 |= 2uLL;
      goto LABEL_8;
    }
    v14 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_24:
      *(_QWORD *)v7 = v8 & 3 | v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      *(_QWORD *)v24 &= ~1uLL;
      *(_QWORD *)v24 |= 2uLL;
      *(_QWORD *)&v25 = 0;
LABEL_8:
      if ( v24 )
        qfree();
      goto LABEL_10;
    }
    v15 = *(_QWORD **)(v14 + 8);
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
      v16 = *(_QWORD **)(v14 + 16);
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_26;
    }
    else
    {
      sub_2ABC20(v15);
      v16 = *(_QWORD **)(v14 + 16);
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_20;
    }
    sub_2ABC20(v16);
LABEL_20:
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
LABEL_21:
      if ( v8 > 3 )
        qfree();
      v7 = v24;
      v8 = *(_QWORD *)v24;
      goto LABEL_24;
    }
LABEL_26:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v14 |= 2uLL;
    goto LABEL_21;
  }
LABEL_10:
  v9 = v22;
  if ( v22 )
  {
    v10 = v23;
    if ( (_QWORD)v23 )
    {
      v11 = 0;
      do
      {
        v12 = 3 * v11++;
        sub_2B4D80((_QWORD *)(32 * v12 + v9));
        v9 = v22;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v6;
}

