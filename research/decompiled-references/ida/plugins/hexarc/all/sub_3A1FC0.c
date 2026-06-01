__int64 __fastcall sub_3A1FC0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  __int64 result; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  char v8; // al
  __m128i v9; // xmm0
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  __m128i v11; // [rsp+10h] [rbp-28h] BYREF
  __int64 v12; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v10 = _mm_loadu_si128((const __m128i *)a1);
  v12 = v1;
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 - 24);
    if ( v4 <= v2 && (*(_DWORD *)(a1 - 20) <= v3 || v4 != v2) )
      break;
    v7 = _mm_loadu_si128((const __m128i *)(a1 - 40));
    v8 = *(_BYTE *)(a1 - 8);
    a1 -= 40;
    *(__m128i *)(a1 + 40) = v7;
    v9 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    *(_BYTE *)(a1 + 72) = v8;
    *(__m128i *)(a1 + 56) = v9;
  }
  result = (unsigned __int8)v12;
  *(__m128i *)a1 = _mm_load_si128(&v10);
  v6 = _mm_load_si128(&v11);
  *(_BYTE *)(a1 + 32) = result;
  *(__m128i *)(a1 + 16) = v6;
  return result;
}

