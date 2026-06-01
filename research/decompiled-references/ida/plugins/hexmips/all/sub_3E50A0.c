__int64 __fastcall sub_3E50A0(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  int v4; // eax

  result = 0;
  if ( a1[187] == 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_407560);
    *(_DWORD *)a2 = a1[90];
    v4 = a1[89];
    *(_QWORD *)(a2 + 24) = 1;
    *(_DWORD *)(a2 + 4) = v4;
    *(__m128i *)(a2 + 8) = si128;
    return 1;
  }
  return result;
}

