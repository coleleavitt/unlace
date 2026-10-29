char __fastcall sub_31420(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 i; // rbp
  _QWORD *v10; // rax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  char *v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // ecx
  __m128i v32; // xmm0
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
  v11 = sub_2E150(a1, a2, a3);
  switch ( v11 )
  {
    case 2:
      v12 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 1;
      if ( !v12 )
      {
        v16 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 40) = 8;
        *(_QWORD *)(a1 + 32) = v16;
      }
      v14 = 32;
      break;
    case 3:
      return sub_311E0(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
    case 1:
      v12 = *(_BYTE *)(a1 + 44) == 0;
      *(_BYTE *)(a1 + 161) = 0;
      if ( !v12 )
      {
        v13 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = 4;
        *(_QWORD *)(a1 + 32) = v13;
      }
      v14 = 28;
      break;
    default:
      return 0;
  }
  v17 = *(_QWORD *)(a1 + 144);
  if ( v17 < v14 )
  {
    v29 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v14 )
    {
      v30 = qvector_reserve();
      v17 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = v30;
      v29 = v30;
    }
    memset((void *)(v29 + v17), 0, v14 - v17);
    *(_QWORD *)(a1 + 144) = v14;
  }
  else if ( v14 != v17 )
  {
    *(_QWORD *)(a1 + 144) = v14;
  }
  if ( qlread() != v14 )
    return 0;
  v18 = *(_QWORD **)(a1 + 136);
  v19 = (a1 + 172) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = a1 + 164 - v19;
  v21 = (char *)v18 - v20;
  *(_QWORD *)(a1 + 164) = *v18;
  v22 = (v14 + v20) & 0xFFFFFFF8;
  *(_QWORD *)(a1 + v14 + 156) = *(_QWORD *)((char *)v18 + v14 - 8);
  v23 = 0;
  do
  {
    v24 = v23;
    v23 += 8;
    *(_QWORD *)(v19 + v24) = *(_QWORD *)&v21[v24];
  }
  while ( v23 < v22 );
  if ( !*(_BYTE *)(a1 + 161) )
    *(_DWORD *)(a1 + 192) = 0;
  v25 = *(_DWORD *)(a1 + 164);
  v26 = *(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 160) = (v25 & 0xFEFFFFFF) == -822415874;
  if ( (v25 & 0xFEFFFFFF) == 0xCEFAEDFE )
  {
    v31 = *(_DWORD *)(a1 + 188);
    v26 = _byteswap_ulong(v26);
    *(_DWORD *)(a1 + 164) = HIBYTE(v25) | 0xFEEDFA00;
    *(_DWORD *)(a1 + 168) = _byteswap_ulong(*(_DWORD *)(a1 + 168));
    *(_DWORD *)(a1 + 172) = _byteswap_ulong(*(_DWORD *)(a1 + 172));
    v32 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 176))),
              _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 180)))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(_byteswap_ulong(v31))));
    *(_DWORD *)(a1 + 192) = _byteswap_ulong(*(_DWORD *)(a1 + 192));
    *(__m128i *)(a1 + 176) = v32;
  }
  v27 = v26 + v14;
  if ( *(_QWORD *)(a1 + 128) < v27 )
    return 0;
  v28 = *(_QWORD *)(a1 + 144);
  if ( v28 < v27 )
  {
    if ( *(_QWORD *)(a1 + 152) < v27 )
    {
      v33 = qvector_reserve();
      *(_QWORD *)(a1 + 136) = v33;
      v18 = (_QWORD *)v33;
      v28 = *(_QWORD *)(a1 + 144);
    }
    memset((char *)v18 + v28, 0, v27 - v28);
    *(_QWORD *)(a1 + 144) = v27;
  }
  else if ( v27 != v28 )
  {
    *(_QWORD *)(a1 + 144) = v27;
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
  return sub_2E2A0(a1, a4);
}

