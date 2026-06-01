__int64 __fastcall sub_71380(const __m128i *a1, int a2, char a3)
{
  int v3; // ebp
  __int16 v4; // ax
  char v6; // r12
  char v7; // r14
  unsigned __int64 v9; // rdx
  __int8 *v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r9
  unsigned __int64 *v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r9
  __int16 v16; // ax
  char v17; // al
  char v18; // al
  __int16 v19; // ax
  __m128i v20; // xmm1
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 v23; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v24; // [rsp+8h] [rbp-1C0h]
  __int64 v25; // [rsp+18h] [rbp-1B0h] BYREF
  __int128 v26; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-198h]
  __int64 v28; // [rsp+38h] [rbp-190h]
  __int64 v29; // [rsp+40h] [rbp-188h]
  _BYTE v30[16]; // [rsp+48h] [rbp-180h] BYREF
  __int64 v31; // [rsp+58h] [rbp-170h]
  unsigned __int64 v32; // [rsp+188h] [rbp-40h] BYREF

  v3 = a2;
  v4 = a1[2].m128i_i16[4];
  v32 = __readfsqword(0x28u);
  if ( v4 != 3 )
  {
    if ( v4 != 4 )
    {
LABEL_3:
      if ( v4 != 41 && !sub_312C0(a1[55].m128i_i64[1], (__int64)a1[1].m128i_i64, 0) )
        return 0;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_2C710(a1[55].m128i_i64[1], (__int64)a1[1].m128i_i64, a1[4].m128i_i64[1]) )
    {
      v4 = a1[2].m128i_i16[4];
      goto LABEL_3;
    }
  }
LABEL_4:
  v6 = a1[3].m128i_i8[0] & 0xF;
  switch ( v6 )
  {
    case 0:
      v7 = 2;
      if ( *(_BYTE *)(a1[54].m128i_i64[0] + 41) )
        return 0;
      goto LABEL_32;
    case 2:
    case 3:
      goto LABEL_6;
    case 8:
    case 9:
      goto LABEL_13;
    case 10:
    case 11:
      if ( a3 )
        return 0;
LABEL_6:
      v7 = 0;
      break;
    case 12:
    case 13:
      if ( a3 )
        return 0;
LABEL_13:
      v7 = 1;
      break;
    default:
      return 0;
  }
  if ( ((1LL << v6) & 0x1505) != 0 )
  {
LABEL_32:
    v19 = a1[2].m128i_i16[4];
    if ( (unsigned __int16)(v19 - 3) <= 1u )
    {
      v15 = (a1[4].m128i_i64[1] + 16 * a1[1].m128i_i64[0]) & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_34;
    }
    v15 = -1;
    if ( v19 != 41 || a1[3].m128i_i16[7] == 14 )
      goto LABEL_34;
    if ( !(unsigned __int8)sub_839C0(a1[55].m128i_i64[1], &v25, &a1[1], &a1[3].m128i_u64[1], 0) )
      return 0;
    goto LABEL_30;
  }
  if ( ((1LL << v6) & 0x2A08) == 0
    || a2 == -1
    || !(unsigned __int8)sub_839C0(a1[55].m128i_i64[1], &v25, &a1[1], &a1[3].m128i_u64[1], 0) )
  {
    return 0;
  }
  v9 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v25 &= ~1uLL;
  if ( a2 > 0 )
  {
    v10 = &a1[32].m128i_i8[a2];
    do
    {
      if ( !*v10 )
        break;
      --v10;
      --v3;
    }
    while ( v3 );
  }
  if ( a1[24].m128i_i64[v3] < v9 )
    return 0;
  v27 = -1;
  v11 = a1[2].m128i_u16[5];
  v28 = 0;
  v12 = a1[2].m128i_i64[0] + v11;
  v13 = (unsigned __int64 *)v30;
  v29 = 0;
  v26 = -1;
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = 0;
  }
  while ( v13 != &v32 );
  v23 = v12;
  v14 = decode_insn();
  v15 = v23;
  if ( v14 > 0 && (v29 & 0xF) == 0xE )
  {
    v16 = v28;
    if ( (_WORD)v28 == 3 )
      goto LABEL_28;
    if ( (_WORD)v28 == 4 )
    {
      v22 = sub_2C710(a1[55].m128i_i64[1], (__int64)&v26, v31);
      v15 = v23;
      if ( !v22 )
        goto LABEL_28;
      v16 = v28;
    }
    if ( v16 == 41 )
    {
LABEL_28:
      v24 = v15;
      v17 = sub_839C0(a1[55].m128i_i64[1], &v25, &v26, v30, 0);
      v15 = v24;
      if ( !v17 )
        goto LABEL_34;
      v18 = is_spec_ea();
      v15 = v24;
      if ( v18 )
        goto LABEL_34;
LABEL_30:
      v15 = v25 & 0xFFFFFFFFFFFFFFFELL;
    }
  }
LABEL_34:
  v20 = _mm_loadl_epi64(a1 + 2);
  v21 = a1[54].m128i_i64[0];
  *(_QWORD *)(v21 + 40) = 25344;
  *(_QWORD *)(v21 + 64) = v15;
  *(_BYTE *)(v21 + 72) = v7;
  *(_WORD *)(v21 + 73) = 0;
  *(_BYTE *)(v21 + 75) = 0;
  *(__m128i *)(v21 + 48) = _mm_unpacklo_epi64((__m128i)((4 * v6) & 0x3C), v20);
  return 1;
}
