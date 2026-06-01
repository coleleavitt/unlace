__int64 __fastcall sub_36DF70(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x80u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 48) = result + 32;
  *(_QWORD *)(result + 56) = result + 32;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = result + 80;
  *(_QWORD *)(result + 104) = result + 80;
  *(__m128i *)(result + 112) = si128;
  return result;
}

