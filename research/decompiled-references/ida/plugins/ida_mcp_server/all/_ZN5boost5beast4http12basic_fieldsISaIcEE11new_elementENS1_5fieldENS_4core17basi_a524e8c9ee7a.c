_WORD *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::new_element(
        __int16 a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5)
{
  _WORD *v5; // rdx
  __m128i v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  void *v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+50h] [rbp-58h] BYREF
  void (__fastcall **v11)(boost::system::system_error *__hidden); // [rsp+60h] [rbp-48h] BYREF
  __m128i v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+80h] [rbp-28h]
  unsigned __int64 v14; // [rsp+88h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v5 = boost::beast::http::basic_fields<std::allocator<char>>::try_create_new_element(a1, a2, a3, a4, a5, &v7);
  if ( (v8 & 1) != 0 && (v8 != 1 || v7.m128i_i32[0]) )
  {
    boost::system::error_code::what[abi:cxx11]();
    std::runtime_error::runtime_error();
    if ( v9 != &v10 )
      operator delete(v9, v10 + 1);
    v12 = _mm_load_si128(&v7);
    v11 = off_444638;
    v13 = v8;
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&v11);
  }
  return v5;
}

