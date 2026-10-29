__int64 __fastcall std::deque<long>::_M_push_back_aux<long const&>(__m128i *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 *v3; // r12
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a1[4].m128i_i64[1];
  if ( ((a1[2].m128i_i64[0] - a1[1].m128i_i64[0]) >> 3)
     + ((a1[3].m128i_i64[0] - a1[3].m128i_i64[1]) >> 3)
     + (((v2 == 0) + ((v2 - a1[2].m128i_i64[1]) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1->m128i_i64[1] - ((v2 - a1->m128i_i64[0]) >> 3)) <= 1 )
  {
    std::deque<long>::_M_reallocate_map();
    v2 = a1[4].m128i_i64[1];
  }
  v3 = (__int64 *)(v2 + 8);
  result = operator new(0x200u);
  v5 = *a2;
  *v3 = result;
  *(_QWORD *)a1[3].m128i_i64[0] = v5;
  a1[4].m128i_i64[1] = (__int64)v3;
  a1[4].m128i_i64[0] = result + 512;
  a1[3] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

