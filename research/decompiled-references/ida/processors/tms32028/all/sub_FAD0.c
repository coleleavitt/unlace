__int64 __fastcall sub_FAD0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v5; // zf
  unsigned __int64 v6; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  _QWORD **v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // r9
  _QWORD *v20; // rdx
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rdx
  char *v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  char *v26; // rax
  __int64 v27; // r15
  __int16 flags; // ax
  char v29; // dl
  __int64 v30; // rax
  __int16 v31; // ax
  __m128i v32; // xmm0
  int v33; // eax
  __m128i v34; // xmm0
  int v35; // eax
  __m128i v36; // xmm0
  int v37; // eax
  __m128i v38; // xmm0
  int v39; // eax
  __m128i v40; // xmm0
  int v41; // eax
  __m128i v42; // xmm0
  unsigned __int64 v43; // [rsp+10h] [rbp-198h] BYREF
  __int64 v44; // [rsp+18h] [rbp-190h]
  __int64 v45; // [rsp+20h] [rbp-188h]
  char v46; // [rsp+28h] [rbp-180h] BYREF
  char v47; // [rsp+29h] [rbp-17Fh] BYREF
  __int16 v48; // [rsp+2Eh] [rbp-17Ah]
  __int64 v49; // [rsp+50h] [rbp-158h]
  __int64 v50; // [rsp+58h] [rbp-150h]
  _QWORD v51[8]; // [rsp+168h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 280) == 0;
  v6 = *(_QWORD *)(a2 + 16);
  v51[0] = __readfsqword(0x28u);
  if ( v5 )
  {
    v8 = *(_QWORD **)(a1 + 272);
    if ( !v8 )
      goto LABEL_3;
    while ( v6 != v8[1] )
    {
      v8 = (_QWORD *)*v8;
      if ( !v8 )
        goto LABEL_3;
    }
LABEL_9:
    *(_BYTE *)(a2 + 41) = 0;
    *(_WORD *)(a2 + 24) = 0;
    *(_BYTE *)(a2 + 81) = 0;
    *(_BYTE *)(a2 + 121) = 0;
    *(_BYTE *)(a2 + 161) = 0;
    *(_BYTE *)(a2 + 201) = 0;
    *(_BYTE *)(a2 + 241) = 0;
    *(_BYTE *)(a2 + 281) = 0;
    *(_BYTE *)(a2 + 321) = 0;
    v10 = *(_QWORD *)(a1 + 264);
    v11 = *(_QWORD *)(a1 + 256);
    v12 = v8[1] % v10;
    v13 = (_QWORD **)(v11 + 8 * v12);
    v14 = *v13;
    do
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v8 != v14 );
    v16 = *v14;
    if ( *v13 == v15 )
    {
      if ( v16 )
      {
        v22 = *(_QWORD *)(v16 + 8) % v10;
        if ( v12 != v22 )
        {
          *(_QWORD *)(v11 + 8 * v22) = v15;
          *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v12) = 0;
          v16 = *v14;
        }
      }
      else
      {
        *v13 = nullptr;
        v16 = *v14;
      }
    }
    else if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 8) % v10;
      if ( v12 != v17 )
      {
        *(_QWORD *)(v11 + 8 * v17) = v15;
        v16 = *v14;
      }
    }
    *v15 = v16;
    operator delete(v14, 0x10u);
    --*(_QWORD *)(a1 + 280);
    return 1;
  }
  v18 = *(_QWORD *)(a1 + 264);
  v19 = *(_QWORD **)(*(_QWORD *)(a1 + 256) + 8 * (v6 % v18));
  if ( v19 )
  {
    v20 = (_QWORD *)*v19;
    if ( v6 == *(_QWORD *)(*v19 + 8LL) )
    {
LABEL_22:
      if ( v19 )
      {
        v8 = (_QWORD *)*v19;
        if ( *v19 )
          goto LABEL_9;
      }
    }
    else
    {
      while ( 1 )
      {
        v21 = (_QWORD *)*v20;
        if ( !*v20 )
          break;
        v19 = v20;
        if ( v6 % v18 != v21[1] % v18 )
          break;
        v20 = (_QWORD *)*v20;
        if ( v6 == v21[1] )
          goto LABEL_22;
      }
    }
  }
LABEL_3:
  if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFF0000FFFFLL) == 0xA3000000BALL )
  {
    v31 = *(_WORD *)(a2 + 166);
    if ( v31 == 71 )
    {
      if ( *(_WORD *)(a2 + 206) != 71 || *(_WORD *)(a2 + 246) != 70 )
        goto LABEL_4;
    }
    else if ( v31 != 75 || *(_WORD *)(a2 + 206) != 75 || *(_WORD *)(a2 + 246) != 74 )
    {
      goto LABEL_4;
    }
    v32 = _mm_loadu_si128((const __m128i *)(a2 + 120));
    v33 = *(_DWORD *)(a2 + 152);
    *(_DWORD *)(a2 + 28) = 0;
    *(_WORD *)(a2 + 24) = 176;
    *(__m128i *)(a2 + 200) = v32;
    v34 = _mm_loadu_si128((const __m128i *)(a2 + 136));
    *(_DWORD *)(a2 + 232) = v33;
    v35 = *(_DWORD *)(a2 + 72);
    *(__m128i *)(a2 + 216) = v34;
    v36 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_DWORD *)(a2 + 152) = v35;
    v37 = *(_DWORD *)(a2 + 192);
    *(__m128i *)(a2 + 120) = v36;
    v38 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 72) = v37;
    v39 = *(_DWORD *)(a2 + 112);
    *(__m128i *)(a2 + 136) = v38;
    v40 = _mm_loadu_si128((const __m128i *)(a2 + 160));
    *(_DWORD *)(a2 + 192) = v39;
    v41 = *(_DWORD *)(a2 + 272);
    *(__m128i *)(a2 + 40) = v40;
    v42 = _mm_loadu_si128((const __m128i *)(a2 + 176));
    *(_DWORD *)(a2 + 112) = v41;
    *(__m128i *)(a2 + 56) = v42;
    *(__m128i *)(a2 + 160) = _mm_loadu_si128((const __m128i *)(a2 + 80));
    *(__m128i *)(a2 + 176) = _mm_loadu_si128((const __m128i *)(a2 + 96));
    *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 240));
    *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a2 + 256));
    *(_BYTE *)(a2 + 241) = 0;
    return 1;
  }
LABEL_4:
  if ( !(_BYTE)a3 )
    return 0;
  if ( *(_WORD *)(a2 + 24) != 183 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( (*(_QWORD *)(a2 + 80) & 0xFF000000FF00LL) != 0x30000000500LL )
    return 0;
  v43 = -1;
  v23 = &v46;
  v44 = 0;
  v45 = 0;
  do
  {
    *(_WORD *)v23 = 0;
    v23 += 40;
    *((_WORD *)v23 - 19) = 0;
    *((_WORD *)v23 - 18) = 0;
    *((_DWORD *)v23 - 2) = 0;
    *((_WORD *)v23 - 17) = 0;
    *((_OWORD *)v23 - 2) = 0;
    *((_QWORD *)v23 - 2) = 0;
  }
  while ( v51 != (_QWORD *)v23 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  if ( (_WORD)v44 != 185 || v47 != 1 || v48 != *(_WORD *)(a2 + 46) || (v49 & 0xFF000000FF00LL) != 0x10000000500LL )
  {
    v24 = *(_QWORD *)(a1 + 16);
    v25 = *(_DWORD *)(v24 + 104);
    if ( (unsigned __int16)v44 < v25
      || (unsigned __int16)v44 >= *(int *)(v24 + 108)
      || (*(_WORD *)(*(_QWORD *)(v24 + 112) + 16LL * ((unsigned __int16)v44 - v25) + 8) & 0x4003) == 0 )
    {
      v26 = &v47;
      while ( v26[4] != 9 )
      {
        if ( *v26 == 1 && *(_WORD *)(a2 + 46) == *(_WORD *)(v26 + 5) )
          return 0;
        v26 += 40;
        if ( (char *)v51 + 1 == v26 )
        {
          v27 = getseg();
          if ( v27 != getseg() )
            return 0;
          flags = get_flags_ex();
          if ( (flags & 0x1000) != 0 )
            return 0;
          if ( (flags & 0x600) == 0x400 )
            return 0;
          if ( !(unsigned int)decode_insn() )
            return 0;
          if ( (_WORD)v44 != 185 )
            return 0;
          v29 = a3;
          if ( v47 != 1 )
            return 0;
          goto LABEL_47;
        }
      }
    }
    return 0;
  }
  v29 = 0;
LABEL_47:
  if ( *(_WORD *)(a2 + 46) != v48 || (v49 & 0xFF000000FF00LL) != 0x10000000500LL )
    return 0;
  v30 = v50;
  *(_WORD *)(a2 + 24) = 182;
  *(_QWORD *)(a2 + 88) |= v30;
  if ( v29 )
    sub_F820((char **)(a1 + 256), &v43);
  else
    *(_WORD *)(a2 + 26) += WORD1(v44);
  return a3;
}

