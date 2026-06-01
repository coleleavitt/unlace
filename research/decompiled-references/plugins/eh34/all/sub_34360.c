__int64 __fastcall sub_34360(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v5; // rbp
  __m128i v6; // xmm0
  __m128i v7; // xmm2
  __int64 hexdsp; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *i)(__int64, __int64, __int64); // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *j)(__int64, __int64, __int64); // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r14d
  int v21; // eax
  __int64 result; // rax

  v3 = -5;
  v5 = *(_QWORD *)(a1 + 560) + ((__int64)(int)a2 << 6);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)v5);
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 4));
  if ( *(_BYTE *)(v5 + 12) )
    v3 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 668) = a2;
  *(_BYTE *)(a1 + 672) = 1;
  *(__m128i *)(a1 + 652) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(v6, v7),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v3)));
  hexdsp = get_hexdsp(a1, a2);
  v9 = 0;
  for ( i = (__int64 (__fastcall *)(__int64, __int64, __int64))hexdsp;
        ;
        i = (__int64 (__fastcall *)(__int64, __int64, __int64))v11 )
  {
    v12 = a1 + 680;
    v13 = i(227, a1 + 680, v9);
    v14 = v13;
    if ( *(_DWORD *)(a1 + 688) == v13 )
      break;
    *(_BYTE *)(*(_QWORD *)(a1 + 696) + 8LL * v13 + 4) = 0;
    v11 = get_hexdsp(227, v12);
    v9 = (unsigned int)(v14 + 1);
  }
  *(_QWORD *)(a1 + 688) = 0;
  v15 = get_hexdsp(227, v12);
  v16 = 0;
  for ( j = (__int64 (__fastcall *)(__int64, __int64, __int64))v15;
        ;
        j = (__int64 (__fastcall *)(__int64, __int64, __int64))v18 )
  {
    v19 = j(227, a1 + 720, v16);
    v20 = v19;
    if ( *(_DWORD *)(a1 + 728) == v19 )
      break;
    *(_QWORD *)(*(_QWORD *)(a1 + 736) + 32LL * v19 + 8) = 0;
    v18 = get_hexdsp(227, a1 + 720);
    v16 = (unsigned int)(v20 + 1);
  }
  *(_QWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 760) = *(_DWORD *)(v5 + 4) + 1;
  v21 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(a1 + 768) = a3;
  *(_DWORD *)(a1 + 764) = v21;
  result = *(unsigned int *)(a1 + 644);
  *(_DWORD *)(a1 + 772) = 0;
  *(_DWORD *)(a1 + 648) = result;
  return result;
}
