char __fastcall sub_8D860(__int64 a1, unsigned int a2, __int64 a3, char a4)
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
  bool v20; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char *v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned int v40; // ecx
  __m128i v41; // xmm0
  __int64 v42; // rax

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
  v19 = sub_82310(a1, a2, a3);
  switch ( v19 )
  {
    case 2:
      v20 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 1;
      if ( !v20 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 40) = 8;
        *(_QWORD *)(a1 + 32) = v24;
      }
      v22 = 32;
      break;
    case 3:
      return sub_8D620(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
    case 1:
      v20 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 0;
      if ( !v20 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = 4;
        *(_QWORD *)(a1 + 32) = v21;
      }
      v22 = 28;
      break;
    default:
      return 0;
  }
  v25 = *(_QWORD *)(a1 + 144);
  if ( v25 < v22 )
  {
    v38 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v22 )
    {
      v39 = qvector_reserve(a1 + 136, v38, v22, 1);
      v25 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = v39;
      v38 = v39;
    }
    memset((void *)(v38 + v25), 0, v22 - v25);
    *(_QWORD *)(a1 + 144) = v22;
  }
  else if ( v22 != v25 )
  {
    *(_QWORD *)(a1 + 144) = v22;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 136), v22) != v22 )
    return 0;
  v26 = *(_QWORD **)(a1 + 136);
  v27 = (a1 + 172) & 0xFFFFFFFFFFFFFFF8LL;
  v28 = a1 + 164 - v27;
  v29 = (char *)v26 - v28;
  *(_QWORD *)(a1 + 164) = *v26;
  v30 = (v22 + v28) & 0xFFFFFFF8;
  *(_QWORD *)(a1 + v22 + 156) = *(_QWORD *)((char *)v26 + v22 - 8);
  v31 = 0;
  do
  {
    v32 = v31;
    v31 += 8;
    *(_QWORD *)(v27 + v32) = *(_QWORD *)&v29[v32];
  }
  while ( v31 < v30 );
  if ( !*(_BYTE *)(a1 + 161) )
    *(_DWORD *)(a1 + 192) = 0;
  v33 = *(_DWORD *)(a1 + 164);
  LODWORD(v34) = *(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 160) = (v33 & 0xFEFFFFFF) == -822415874;
  if ( (v33 & 0xFEFFFFFF) == 0xCEFAEDFE )
  {
    v40 = *(_DWORD *)(a1 + 188);
    LODWORD(v34) = _byteswap_ulong(v34);
    *(_DWORD *)(a1 + 164) = HIBYTE(v33) | 0xFEEDFA00;
    *(_DWORD *)(a1 + 168) = _byteswap_ulong(*(_DWORD *)(a1 + 168));
    *(_DWORD *)(a1 + 172) = _byteswap_ulong(*(_DWORD *)(a1 + 172));
    v41 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 176))),
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 180)))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(_byteswap_ulong(v40))));
    *(_DWORD *)(a1 + 192) = _byteswap_ulong(*(_DWORD *)(a1 + 192));
    *(__m128i *)(a1 + 176) = v41;
  }
  v34 = (unsigned int)v34;
  v35 = (unsigned int)v34 + v22;
  if ( *(_QWORD *)(a1 + 128) < v35 )
    return 0;
  v36 = *(_QWORD *)(a1 + 144);
  if ( v36 < v35 )
  {
    if ( *(_QWORD *)(a1 + 152) < v35 )
    {
      v42 = qvector_reserve(a1 + 136, v26, (unsigned int)v34 + v22, 1);
      *(_QWORD *)(a1 + 136) = v42;
      v26 = (_QWORD *)v42;
      v36 = *(_QWORD *)(a1 + 144);
    }
    memset((char *)v26 + v36, 0, v35 - v36);
    *(_QWORD *)(a1 + 144) = v35;
    v34 = *(unsigned int *)(a1 + 184);
    v26 = *(_QWORD **)(a1 + 136);
  }
  else if ( v35 != v36 )
  {
    *(_QWORD *)(a1 + 144) = v35;
  }
  if ( *(_DWORD *)(a1 + 184) != qlread(*(_QWORD *)(a1 + 48), (char *)v26 + v22, v34) )
  {
    v37 = *(_QWORD *)(a1 + 136);
    if ( v37 )
    {
      *(_QWORD *)(a1 + 144) = 0;
      qfree(v37);
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 152) = 0;
    }
    return 0;
  }
  return sub_82480(a1, a4);
}
