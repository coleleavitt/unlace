char __fastcall sub_25EF0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 i; // rbp
  _QWORD *v10; // rax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  char *v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // ecx
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax

  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  if ( *(_QWORD *)(a1 + 200) )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  if ( *(_QWORD *)(a1 + 224) )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree();
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v7 = *(_QWORD *)(a1 + 344);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 352);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (_QWORD *)(v7 + 24 * i);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = *(_QWORD *)(a1 + 344);
        }
      }
    }
    *(_QWORD *)(a1 + 352) = 0;
    qfree();
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree();
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  if ( *(_QWORD *)(a1 + 392) )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree();
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  if ( *(_QWORD *)(a1 + 416) )
  {
    *(_QWORD *)(a1 + 424) = 0;
    qfree();
    *(_QWORD *)(a1 + 416) = 0;
    *(_QWORD *)(a1 + 432) = 0;
  }
  *(_BYTE *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = -1;
  v11 = sub_1CB40(a1, a2, a3);
  switch ( v11 )
  {
    case 3:
      return sub_25C80(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
    case 4:
      return sub_26460(a1);
    case 1:
      v12 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 0;
      if ( !v12 )
      {
        v28 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = 4;
        *(_QWORD *)(a1 + 32) = v28;
      }
      v14 = 28;
      break;
    case 2:
      v12 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 1;
      if ( !v12 )
      {
        v13 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 40) = 8;
        *(_QWORD *)(a1 + 32) = v13;
      }
      v14 = 32;
      break;
    default:
      return 0;
  }
  v16 = *(_QWORD *)(a1 + 144);
  if ( v16 < v14 )
  {
    v29 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v14 )
    {
      v32 = qvector_reserve();
      v16 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = v32;
      v29 = v32;
    }
    memset((void *)(v29 + v16), 0, v14 - v16);
    *(_QWORD *)(a1 + 144) = v14;
  }
  else if ( v14 != v16 )
  {
    *(_QWORD *)(a1 + 144) = v14;
  }
  if ( qlread() != v14 )
    return 0;
  v17 = *(_QWORD **)(a1 + 136);
  v18 = (a1 + 172) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = a1 + 164 - v18;
  v20 = (char *)v17 - v19;
  *(_QWORD *)(a1 + 164) = *v17;
  v21 = (v14 + v19) & 0xFFFFFFF8;
  *(_QWORD *)(a1 + v14 + 156) = *(_QWORD *)((char *)v17 + v14 - 8);
  v22 = 0;
  do
  {
    v23 = v22;
    v22 += 8;
    *(_QWORD *)(v18 + v23) = *(_QWORD *)&v20[v23];
  }
  while ( v22 < v21 );
  if ( !*(_BYTE *)(a1 + 161) )
    *(_DWORD *)(a1 + 192) = 0;
  v24 = *(_DWORD *)(a1 + 164);
  v25 = *(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 160) = (v24 & 0xFEFFFFFF) == -822415874;
  if ( (v24 & 0xFEFFFFFF) == 0xCEFAEDFE )
  {
    v30 = *(_DWORD *)(a1 + 188);
    v25 = _byteswap_ulong(v25);
    *(_DWORD *)(a1 + 164) = HIBYTE(v24) | 0xFEEDFA00;
    *(_DWORD *)(a1 + 168) = _byteswap_ulong(*(_DWORD *)(a1 + 168));
    *(_DWORD *)(a1 + 172) = _byteswap_ulong(*(_DWORD *)(a1 + 172));
    v31 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 176))),
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 180)))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(_byteswap_ulong(v30))));
    *(_DWORD *)(a1 + 192) = _byteswap_ulong(*(_DWORD *)(a1 + 192));
    *(__m128i *)(a1 + 176) = v31;
  }
  v26 = v25 + v14;
  if ( *(_QWORD *)(a1 + 128) < v26 )
    return 0;
  v27 = *(_QWORD *)(a1 + 144);
  if ( v27 < v26 )
  {
    if ( *(_QWORD *)(a1 + 152) < v26 )
    {
      v33 = qvector_reserve();
      *(_QWORD *)(a1 + 136) = v33;
      v17 = (_QWORD *)v33;
      v27 = *(_QWORD *)(a1 + 144);
    }
    memset((char *)v17 + v27, 0, v26 - v27);
    *(_QWORD *)(a1 + 144) = v26;
  }
  else if ( v26 != v27 )
  {
    *(_QWORD *)(a1 + 144) = v26;
  }
  if ( *(_DWORD *)(a1 + 184) != qlread() )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      *(_QWORD *)(a1 + 144) = 0;
      qfree();
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 152) = 0;
    }
    return 0;
  }
  return sub_1AB40(a1, a4);
}

