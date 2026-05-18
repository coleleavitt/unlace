unsigned __int64 __fastcall sub_C6BA0(__int64 a1)
{
  unsigned __int64 v1; // r8
  const __m128i *v2; // r12
  int v3; // esi
  int v5; // ecx
  __m128i *v6; // rbp
  unsigned __int64 result; // rax
  int v8; // edx
  int *v9; // rsi
  int v10; // edi
  __m128i v11; // xmm0

  v1 = a1 + 112;
  v2 = (const __m128i *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 76);
  v5 = 3007000;
  v6 = **(__m128i ***)(a1 + 48);
  result = a1 + 80;
  *(_BYTE *)(a1 + 84) = 1;
  v8 = v3 + 3007000;
  *(_DWORD *)(a1 + 72) = 3007000;
  v9 = (int *)(a1 + 80);
  do
  {
    v10 = *v9;
    result += 8LL;
    v9 += 2;
    v5 += v8 + v10;
    v8 += v5 + *(_DWORD *)(result - 4);
  }
  while ( v1 > result );
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(_DWORD *)(a1 + 112) = v5;
  *(_DWORD *)(a1 + 116) = v8;
  v6[3] = v11;
  v6[4] = _mm_loadu_si128(v2 + 1);
  v6[5] = _mm_loadu_si128(v2 + 2);
  if ( *(_BYTE *)(a1 + 63) != 2 )
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 8) + 120LL))(*(_QWORD *)(a1 + 8), v9);
  *v6 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v6[1] = _mm_loadu_si128(v2 + 1);
  v6[2] = _mm_loadu_si128(v2 + 2);
  return result;
}
