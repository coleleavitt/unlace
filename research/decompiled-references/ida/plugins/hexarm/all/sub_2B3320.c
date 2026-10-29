__int64 __fastcall sub_2B3320(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r12
  __m128i si128; // xmm0
  __int64 v4; // r12
  __m128i v5; // xmm0
  __int64 result; // rax
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  copy_argloc();
  *(_QWORD *)(a1 + 24) = a2[1].m128i_i64[1];
  *(_QWORD *)(a1 + 32) = a2[2].m128i_i64[0];
  *(_DWORD *)(a1 + 40) = a2[2].m128i_i32[2];
  copy_argloc();
  *(_QWORD *)(a1 + 64) = a2[4].m128i_i64[0];
  v2 = a2[4].m128i_i64[1];
  si128 = _mm_loadu_si128(a2 + 5);
  a2[4].m128i_i64[1] = 0;
  a2[5] = 0;
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v7[0] = si128;
    qfree();
    si128 = _mm_load_si128(v7);
  }
  *(_QWORD *)(a1 + 72) = v2;
  *(__m128i *)(a1 + 80) = si128;
  copy_tinfo_t();
  v4 = a2[6].m128i_i64[1];
  v5 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a2[7] = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 112) = 0;
    v7[0] = v5;
    qfree();
    v5 = _mm_load_si128(v7);
  }
  *(_QWORD *)(a1 + 104) = v4;
  *(__m128i *)(a1 + 112) = v5;
  *(_QWORD *)(a1 + 128) = a2[8].m128i_i64[0];
  *(_DWORD *)(a1 + 136) = a2[8].m128i_i32[2];
  copy_argloc();
  *(_QWORD *)(a1 + 160) = a2[10].m128i_i64[0];
  *(_QWORD *)(a1 + 168) = a2[10].m128i_i64[1];
  *(_DWORD *)(a1 + 176) = a2[11].m128i_i32[0];
  result = a2[11].m128i_u32[2];
  *(_DWORD *)(a1 + 184) = result;
  return result;
}

