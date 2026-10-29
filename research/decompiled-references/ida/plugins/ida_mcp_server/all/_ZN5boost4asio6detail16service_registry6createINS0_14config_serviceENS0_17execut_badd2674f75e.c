__m128i *__fastcall boost::asio::detail::service_registry::create<boost::asio::config_service,boost::asio::execution_context>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rax
  __m128i *result; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // [rsp+0h] [rbp-28h] BYREF
  __m128i v13; // [rsp+10h] [rbp-18h] BYREF

  v6 = *a1;
  v12 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)a2);
  v7 = *v6;
  v13 = (__m128i)(unsigned __int64)off_444760;
  v8 = *(__int64 (__fastcall **)())(v7 + 8);
  if ( v8 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
  {
    result = (__m128i *)boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
                          0x30u,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          v12.m128i_i64[0]);
    v10 = _mm_load_si128(&v12);
    v11 = _mm_load_si128(&v13);
  }
  else
  {
    result = (__m128i *)((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v8)(
                          v6,
                          48,
                          8,
                          a4,
                          a5,
                          a6,
                          v12.m128i_i64[0],
                          v12.m128i_i64[1],
                          v13.m128i_i64[0],
                          v13.m128i_i64[1]);
    v11 = _mm_load_si128(&v13);
    v10 = _mm_load_si128(&v12);
  }
  result[2].m128i_i64[0] = 0;
  *result = v11;
  result[2].m128i_i64[1] = (__int64)boost::asio::detail::service_registry::destroy_allocated<boost::asio::config_service>;
  result[1] = v10;
  return result;
}

