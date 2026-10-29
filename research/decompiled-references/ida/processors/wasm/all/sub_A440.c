__int64 __fastcall sub_A440(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  unsigned int v8; // r12d
  __m128i *v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  int v13; // eax
  unsigned __int16 v14; // dx
  _DWORD *v15; // rdi
  __m128i *v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  _DWORD *v21; // rdi
  char *v22; // rsi
  __int64 j; // rcx
  __m128i v24; // xmm0
  int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  int v30; // eax
  unsigned __int16 v31; // dx
  _DWORD *v32; // rdi
  __int64 v33; // rcx
  __m128i *v34; // rsi
  _DWORD *v35; // rdi
  char *v36; // rsi
  __int64 i; // rcx
  int v38; // eax
  _DWORD *v39; // rdi
  __m128i *v40; // rsi
  __int64 v41; // rcx
  __int128 v42; // [rsp+0h] [rbp-308h] BYREF
  __int64 v43; // [rsp+10h] [rbp-2F8h]
  __int64 v44; // [rsp+18h] [rbp-2F0h]
  __int64 v45; // [rsp+20h] [rbp-2E8h]
  __m128i v46; // [rsp+28h] [rbp-2E0h] BYREF
  __m128i v47; // [rsp+38h] [rbp-2D0h] BYREF
  int v48; // [rsp+48h] [rbp-2C0h]
  char v49; // [rsp+50h] [rbp-2B8h] BYREF
  _BYTE v50[8]; // [rsp+168h] [rbp-1A0h] BYREF
  __int128 v51; // [rsp+170h] [rbp-198h] BYREF
  __int64 v52; // [rsp+180h] [rbp-188h]
  __int64 v53; // [rsp+188h] [rbp-180h]
  __int64 v54; // [rsp+190h] [rbp-178h]
  _BYTE v55[40]; // [rsp+198h] [rbp-170h] BYREF
  char v56; // [rsp+1C0h] [rbp-148h] BYREF
  _QWORD v57[6]; // [rsp+2D8h] [rbp-30h] BYREF

  v57[0] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 336) == 1 )
    return 0;
  if ( !a3 )
    return 0;
  v6 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v6 == 10
    || (*(_BYTE *)(a2 + 34) & 1) != 0
    || (unsigned __int8)has_insn_feature(v6, 1)
    || !(unsigned __int8)getinf_flag(11, 4) && (*(_BYTE *)(a1 + 120) & 1) == 0 )
  {
    return 0;
  }
  v8 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int8)has_insn_feature(*(unsigned __int16 *)(a2 + 24), 256) )
    return 0;
  v3 = has_insn_feature(v8, 4);
  if ( !(_BYTE)v3 )
    return 0;
  if ( (unsigned __int8)has_insn_feature(v8, 8) )
    return 0;
  v43 = -1;
  v44 = 0;
  v9 = &v46;
  v45 = 0;
  v42 = -1;
  do
  {
    v9->m128i_i16[0] = 0;
    v9 = (__m128i *)((char *)v9 + 40);
    v9[-3].m128i_i16[5] = 0;
    v9[-3].m128i_i16[6] = 0;
    v9[-1].m128i_i32[2] = 0;
    v9[-3].m128i_i16[7] = 0;
    v9[-2] = 0;
    v9[-1].m128i_i64[0] = 0;
  }
  while ( v50 != (_BYTE *)v9 );
  if ( (int)decode_insn(&v42, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v50, 0.0) <= 0
    || (_WORD)v44 == 10
    || (v45 & 0x10000) != 0
    || (unsigned __int8)has_insn_feature((unsigned __int16)v44, 1) )
  {
    return 0;
  }
  v10 = (unsigned __int16)v44;
  if ( !(unsigned __int8)has_insn_feature((unsigned __int16)v44, 4)
    && (unsigned __int8)has_insn_feature(v10, 256)
    && !(unsigned __int8)has_insn_feature(v10, 512) )
  {
    v24 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_WORD *)(a2 + 26) += WORD1(v44);
    v25 = *(_DWORD *)(a2 + 72);
    *(__m128i *)(a2 + 80) = v24;
    v26 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 112) = v25;
    v27 = v48;
    *(__m128i *)(a2 + 96) = v26;
    v28 = _mm_loadu_si128(&v46);
    *(_WORD *)(a2 + 24) = 540;
    *(__m128i *)(a2 + 40) = v28;
    v29 = _mm_loadu_si128(&v47);
    *(_DWORD *)(a2 + 72) = v27;
    *(__m128i *)(a2 + 56) = v29;
    return v3;
  }
  if ( (unsigned __int8)has_insn_feature((unsigned __int16)v44, 4)
    && (unsigned __int8)has_insn_feature((unsigned __int16)v44, 256)
    && !(unsigned __int8)has_insn_feature((unsigned __int16)v44, 512)
    && !(unsigned __int8)has_insn_feature((unsigned __int16)v44, 8) )
  {
    v30 = *(unsigned __int16 *)(a2 + 26);
    LOWORD(v30) = WORD1(v44) + v30;
    v31 = v44 - 30;
    *(_DWORD *)(a2 + 24) = (unsigned __int16)v44 | (v30 << 16);
    if ( v31 > 0xDu )
    {
      if ( v46.m128i_i8[1] == 8 && *(_BYTE *)(a2 + 41) != 8 )
        *(_QWORD *)(a2 + 48) *= 8LL;
    }
    else
    {
      v32 = (_DWORD *)(a2 + 80);
      v33 = 9;
      v34 = &v46;
      while ( v33 )
      {
        *v32 = v34->m128i_i32[0];
        v34 = (__m128i *)((char *)v34 + 4);
        ++v32;
        --v33;
      }
      v35 = (_DWORD *)(a2 + 120);
      v36 = &v49;
      for ( i = 9; i; --i )
      {
        *v35 = *(_DWORD *)v36;
        v36 += 4;
        ++v35;
      }
      *(_BYTE *)(a2 + 124) &= ~8u;
    }
    return v3;
  }
  v11 = (unsigned __int16)v44;
  if ( (unsigned __int8)has_insn_feature((unsigned __int16)v44, 256) )
    return 0;
  if ( !(unsigned __int8)has_insn_feature(v11, 4) )
    return 0;
  if ( (unsigned __int8)has_insn_feature(v11, 8) )
    return 0;
  v52 = -1;
  v53 = 0;
  v12 = v55;
  v54 = 0;
  v51 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v12 != v57 );
  if ( (int)decode_insn(&v51, v43 + WORD1(v44), v57, 0.0) <= 0
    || (_WORD)v53 == 10
    || (v54 & 0x10000) != 0
    || (unsigned __int8)has_insn_feature((unsigned __int16)v53, 1)
    || !(unsigned __int8)has_insn_feature((unsigned __int16)v53, 512)
    || (unsigned __int8)has_insn_feature((unsigned __int16)v53, 1024) )
  {
    return 0;
  }
  if ( (unsigned __int8)has_insn_feature((unsigned __int16)v53, 4) )
  {
    if ( !(unsigned __int8)has_insn_feature((unsigned __int16)v53, 8) )
    {
      v38 = WORD1(v53);
      v39 = (_DWORD *)(a2 + 80);
      v40 = &v46;
      LOWORD(v38) = *(_WORD *)(a2 + 26) + WORD1(v44) + WORD1(v53);
      v41 = 9;
      *(_DWORD *)(a2 + 24) = (unsigned __int16)v53 | (v38 << 16);
      while ( v41 )
      {
        *v39 = v40->m128i_i32[0];
        v40 = (__m128i *)((char *)v40 + 4);
        ++v39;
        --v41;
      }
      return v3;
    }
    return 0;
  }
  v13 = WORD1(v44);
  v14 = v53 - 44;
  v15 = (_DWORD *)(a2 + 80);
  LOWORD(v13) = *(_WORD *)(a2 + 26) + WORD1(v53) + WORD1(v44);
  v16 = &v46;
  v17 = 9;
  *(_DWORD *)(a2 + 24) = (unsigned __int16)v53 | (v13 << 16);
  while ( v17 )
  {
    *v15 = v16->m128i_i32[0];
    v16 = (__m128i *)((char *)v16 + 4);
    ++v15;
    --v17;
  }
  if ( v14 <= 8u )
  {
    v18 = (_DWORD *)(a2 + 120);
    v19 = 9;
    v20 = v55;
    while ( v19 )
    {
      *v18++ = *v20++;
      --v19;
    }
    v21 = (_DWORD *)(a2 + 160);
    v22 = &v56;
    for ( j = 9; j; --j )
    {
      *v21 = *(_DWORD *)v22;
      v22 += 4;
      ++v21;
    }
    *(_BYTE *)(a2 + 164) &= ~8u;
  }
  return v3;
}

