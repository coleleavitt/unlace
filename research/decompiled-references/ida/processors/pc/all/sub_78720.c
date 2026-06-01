__int64 __fastcall sub_78720(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __m128i si128; // xmm0

  v1 = operator new(0x50u);
  *(_QWORD *)v1 = a1;
  *(_QWORD *)(a1 + 5304) = v1;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_OWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 40) = 0;
  *(_OWORD *)(v1 + 64) = 0;
  result = operator new(0x40u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_95060);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_QWORD *)(a1 + 5312) = result;
  *(__m128i *)(result + 48) = si128;
  return result;
}
