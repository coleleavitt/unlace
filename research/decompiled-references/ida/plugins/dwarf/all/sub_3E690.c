void __fastcall sub_3E690(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm2
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax

  v3 = 0x2AAAAAAAAAAAAAALL;
  *a1 = a3;
  a1[1] = 0;
  if ( a3 <= 0x2AAAAAAAAAAAAAALL )
    v3 = a3;
  a1[2] = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v6 = 48 * v3;
      v7 = operator new(48 * v3, (const std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( v7 )
        break;
      if ( v3 == 1 )
        return;
      v3 = (v3 + 1) >> 1;
    }
    v9 = *(_QWORD *)(a2 + 16);
    v10 = _mm_loadu_si128((const __m128i *)a2);
    v11 = v7 + v6;
    v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
    v13 = v7 + 48;
    *(_OWORD *)(a2 + 24) = 0;
    *(_QWORD *)(v7 + 16) = v9;
    *(__m128i *)v7 = v10;
    *(__m128i *)(v7 + 24) = v12;
    v14 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 16) = 0;
    *(_DWORD *)(v8 + 40) = v14;
    v15 = v8 + 48;
    if ( v6 == 48 )
    {
      v20 = v8;
    }
    else
    {
      do
      {
        v16 = *(_QWORD *)(v15 - 32);
        v17 = _mm_loadu_si128((const __m128i *)(v15 - 48));
        *(_QWORD *)(v15 - 32) = 0;
        v15 += 48;
        *(__m128i *)(v15 - 48) = v17;
        v18 = _mm_loadu_si128((const __m128i *)(v15 - 72));
        *(_QWORD *)(v15 - 32) = v16;
        LODWORD(v16) = *(_DWORD *)(v15 - 56);
        *(__m128i *)(v15 - 24) = v18;
        *(_OWORD *)(v15 - 72) = 0;
        *(_DWORD *)(v15 - 8) = v16;
      }
      while ( v11 != v15 );
      v19 = (v11 - v8 - 96) & 0xFFFFFFFFFFFFFFF0LL;
      v20 = v19 + v13;
      v10 = _mm_loadu_si128((const __m128i *)(v8 + v19 + 48));
      v9 = *(_QWORD *)(v8 + v19 + 64);
      v12 = _mm_loadu_si128((const __m128i *)(v8 + v19 + 72));
    }
    v21 = *(_DWORD *)(v20 + 40);
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(a2 + 16) = v9;
    *(_DWORD *)(a2 + 40) = v21;
    a1[2] = v8;
    a1[1] = v3;
    *(__m128i *)a2 = v10;
    *(_OWORD *)(v20 + 24) = 0;
    *(__m128i *)(a2 + 24) = v12;
  }
}

