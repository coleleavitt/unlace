void __fastcall __noreturn boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        __int64 a13)
{
  char *exception; // rbx
  __m128i si128; // xmm0
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_444C48, (__m128i)(unsigned __int64)off_444C78).m128i_u64[0];
  std::invalid_argument::invalid_argument((std::invalid_argument *)&a10, "invalid response body");
  exception = (char *)__cxa_allocate_exception(0x40u);
  *(_QWORD *)exception = &off_4445B8;
  std::logic_error::logic_error((std::logic_error *)(exception + 8), (const std::logic_error *)&a10);
  si128 = _mm_load_si128((const __m128i *)&retaddr);
  *((_QWORD *)exception + 7) = 398;
  *(__m128i *)exception = si128;
  *(_OWORD *)(exception + 24) = (unsigned __int64)off_444CA0;
  *(__m128i *)(exception + 40) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)off_442A10),
                                   (__m128i)(unsigned __int64)"/usr/include/boost/beast/http/impl/message.hpp");
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::invalid_argument>,
    (void (*)(void *))boost::wrapexcept<std::invalid_argument>::~wrapexcept);
}

