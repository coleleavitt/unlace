char __fastcall sub_DA70(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 i; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  char *v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rdi
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // ecx
  __m128i v49; // xmm0
  __int64 v50; // rax

  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v9 = *(_QWORD *)(a1 + 224);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v10 = *(_QWORD *)(a1 + 248);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v11 = *(_QWORD *)(a1 + 344);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 352);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = (__int64 *)(v11 + 24 * i);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v11 = *(_QWORD *)(a1 + 344);
        }
      }
    }
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  v16 = *(_QWORD *)(a1 + 368);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  v17 = *(_QWORD *)(a1 + 392);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v18 = *(_QWORD *)(a1 + 416);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 416) = 0;
    *(_QWORD *)(a1 + 432) = 0;
  }
  *(_BYTE *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = -1;
  v19 = sub_A240(a1, a2, a3);
  switch ( v19 )
  {
    case 2:
      v22 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 1;
      if ( !v22 )
      {
        v26 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 40) = 8;
        *(_QWORD *)(a1 + 32) = v26;
      }
      v24 = 32;
      break;
    case 3:
      return sub_D830(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
    case 1:
      v22 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 0;
      if ( !v22 )
      {
        v23 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = 4;
        *(_QWORD *)(a1 + 32) = v23;
      }
      v24 = 28;
      break;
    default:
      return 0;
  }
  v27 = *(_QWORD *)(a1 + 144);
  if ( v27 < v24 )
  {
    v46 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v24 )
    {
      v47 = qvector_reserve(a1 + 136, v46, v24, 1, v20, v21);
      v27 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = v47;
      v46 = v47;
    }
    memset((void *)(v46 + v27), 0, v24 - v27);
    *(_QWORD *)(a1 + 144) = v24;
  }
  else if ( v24 != v27 )
  {
    *(_QWORD *)(a1 + 144) = v24;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 136), v24) != v24 )
    return 0;
  v28 = *(_QWORD **)(a1 + 136);
  v29 = (a1 + 172) & 0xFFFFFFFFFFFFFFF8LL;
  v30 = a1 + 164 - v29;
  v31 = (char *)v28 - v30;
  *(_QWORD *)(a1 + 164) = *v28;
  v32 = (v24 + v30) & 0xFFFFFFF8;
  *(_QWORD *)(a1 + v24 + 156) = *(_QWORD *)((char *)v28 + v24 - 8);
  v33 = 0;
  do
  {
    v34 = v33;
    v33 += 8;
    v35 = *(_QWORD *)&v31[v34];
    *(_QWORD *)(v29 + v34) = v35;
  }
  while ( v33 < v32 );
  if ( !*(_BYTE *)(a1 + 161) )
    *(_DWORD *)(a1 + 192) = 0;
  v36 = *(_DWORD *)(a1 + 164);
  LODWORD(v37) = *(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 160) = (v36 & 0xFEFFFFFF) == -822415874;
  if ( (v36 & 0xFEFFFFFF) == 0xCEFAEDFE )
  {
    v48 = *(_DWORD *)(a1 + 188);
    LODWORD(v37) = _byteswap_ulong(v37);
    *(_DWORD *)(a1 + 164) = HIBYTE(v36) | 0xFEEDFA00;
    *(_DWORD *)(a1 + 168) = _byteswap_ulong(*(_DWORD *)(a1 + 168));
    *(_DWORD *)(a1 + 172) = _byteswap_ulong(*(_DWORD *)(a1 + 172));
    v49 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 176))),
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 180)))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(_byteswap_ulong(v48))));
    *(_DWORD *)(a1 + 192) = _byteswap_ulong(*(_DWORD *)(a1 + 192));
    *(__m128i *)(a1 + 176) = v49;
  }
  v37 = (unsigned int)v37;
  v38 = (unsigned int)v37 + v24;
  if ( *(_QWORD *)(a1 + 128) < v38 )
    return 0;
  v39 = *(_QWORD *)(a1 + 144);
  if ( v39 < v38 )
  {
    if ( *(_QWORD *)(a1 + 152) < v38 )
    {
      v50 = qvector_reserve(a1 + 136, v28, (unsigned int)v37 + v24, 1, v31, v35);
      *(_QWORD *)(a1 + 136) = v50;
      v28 = (_QWORD *)v50;
      v39 = *(_QWORD *)(a1 + 144);
    }
    memset((char *)v28 + v39, 0, v38 - v39);
    *(_QWORD *)(a1 + 144) = v38;
    v37 = *(unsigned int *)(a1 + 184);
    v28 = *(_QWORD **)(a1 + 136);
  }
  else if ( v38 != v39 )
  {
    *(_QWORD *)(a1 + 144) = v38;
  }
  v40 = qlread(*(_QWORD *)(a1 + 48), (char *)v28 + v24, v37);
  v44 = *(unsigned int *)(a1 + 184);
  if ( v44 != v40 )
  {
    v45 = *(_QWORD *)(a1 + 136);
    if ( v45 )
    {
      *(_QWORD *)(a1 + 144) = 0;
      qfree(v45);
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 152) = 0;
    }
    return 0;
  }
  return sub_8830(a1, a4, v44, v41, v42, v43);
}

