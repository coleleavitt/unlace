__int64 __fastcall sub_15E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v7; // rdi

  si128 = _mm_load_si128((const __m128i *)&xmmword_21440);
  result = 0;
  *(_DWORD *)a1 = 0x800000;
  *(__m128i *)(a1 + 8) = si128;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    result = qfree(v7, a2, a3, a4);
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  return result;
}
