__int64 __fastcall sub_6C20(__int64 a1)
{
  __m128i v1; // xmm1
  __m128i v2; // xmm0
  char v3; // r8
  __int16 v4; // si
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // ecx
  int v8; // r9d
  __m128i v9; // xmm1

  v1 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  *(_BYTE *)(a1 + 80) = 1;
  v3 = *(_BYTE *)(a1 + 41);
  v4 = *(_WORD *)(a1 + 42);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(a1 + 72);
  v7 = *(_DWORD *)(a1 + 44);
  v8 = *(_DWORD *)(a1 + 112);
  *(__m128i *)(a1 + 40) = v1;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  *(_BYTE *)(a1 + 81) = v3;
  *(_DWORD *)(a1 + 72) = v8;
  *(_WORD *)(a1 + 82) = v4;
  *(_DWORD *)(a1 + 84) = v7;
  *(_QWORD *)(a1 + 104) = v5;
  *(_DWORD *)(a1 + 112) = result;
  *(_BYTE *)(a1 + 40) = 0;
  *(__m128i *)(a1 + 56) = v9;
  *(__m128i *)(a1 + 88) = v2;
  return result;
}

