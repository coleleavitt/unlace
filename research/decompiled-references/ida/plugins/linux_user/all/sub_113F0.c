__m128i *__fastcall sub_113F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  bool v4; // cc
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i *result; // rax
  __m128i v8; // xmm3
  __m128i v9; // xmm4
  __m128i si128; // [rsp+0h] [rbp-38h] BYREF
  __m128i v11[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = 16 * a3;
  v4 = *(_DWORD *)a2 < -1;
  si128 = _mm_load_si128((const __m128i *)(a1 + v3 + 992));
  v11[0] = _mm_load_si128((const __m128i *)(a1 + v3 + 1408));
  if ( !v4 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      *(_QWORD *)(a2 + 16) = 0;
      qfree();
    }
    *(_DWORD *)a2 = -2;
  }
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v5 = qvector_reserve();
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v5;
  memset((void *)(v5 + v6), 0, 32 - v6);
  result = *(__m128i **)(a2 + 8);
  v8 = _mm_load_si128(&si128);
  *(_QWORD *)(a2 + 16) = 32;
  v9 = _mm_load_si128(v11);
  *result = v8;
  result[1] = v9;
  *(_DWORD *)a2 = 0;
  return result;
}

