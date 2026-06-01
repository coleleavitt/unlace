__int64 __fastcall sub_381340(__int64 *a1)
{
  __int64 v1; // rsi
  __m128i si128; // xmm0
  __int64 v4; // rax

  v1 = *a1;
  if ( (unsigned __int64)a1[2] <= 0x16 )
  {
    v4 = qvector_reserve();
    *a1 = v4;
    v1 = v4;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_407410);
  a1[1] = 23;
  *(__m128i *)v1 = si128;
  *(_QWORD *)(v1 + 14) = 0x72656C69706D6F63LL;
  *(_BYTE *)(*a1 + 22) = 0;
  return 1;
}

