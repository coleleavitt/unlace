_QWORD *__fastcall sub_38200(_QWORD *a1, const __m128i *a2, const __m128i *a3, double a4, __m128 a5, __m128 a6)
{
  __m128 v6; // xmm0
  volatile signed __int32 *v7; // xmm1_8
  __m128 v8; // xmm0
  volatile signed __int32 *v9; // xmm2_8
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __m128i v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v6 = (__m128)_mm_loadu_si128(a3);
  v13 = __readfsqword(0x28u);
  v7 = (volatile signed __int32 *)_mm_movehl_ps(a5, v6).m128_u64[0];
  v12 = (__m128i)v6;
  if ( v7 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v7 + 2, 1u);
    else
      ++*((_DWORD *)v7 + 2);
  }
  v8 = (__m128)_mm_loadu_si128(a2);
  v9 = (volatile signed __int32 *)_mm_movehl_ps(a6, v8).m128_u64[0];
  v11 = (__m128i)v8;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v9 + 2, 1u);
    else
      ++*((_DWORD *)v9 + 2);
    sub_1CEE0(a1, 14, &v11, &v12);
    sub_1C430(v9);
  }
  else
  {
    sub_1CEE0(a1, 14, &v11, &v12);
  }
  if ( v7 )
    sub_1C430(v7);
  return a1;
}

