unsigned __int64 __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_header_impl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 224) )
  {
    v6 = a2;
    v7[0] = a3;
    v7[1] = a4;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int64))(a1 + 232))(a1 + 208, &v6, v7, a5);
  }
  return v8 - __readfsqword(0x28u);
}

