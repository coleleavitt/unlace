void __fastcall boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::~parser(
        _QWORD *a1)
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v4; // rdi
  void *v5; // rdi

  *a1 = &off_444D68;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[32];
  if ( v2 )
    v2(a1 + 30, a1 + 30, 3);
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[28];
  if ( v3 )
    v3(a1 + 26, a1 + 26, 3);
  v4 = (_QWORD *)a1[20];
  if ( v4 != a1 + 22 )
    operator delete(v4, a1[22] + 1LL);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields();
  v5 = (void *)a1[5];
  if ( v5 )
    operator delete[](v5);
  operator delete(a1, 0x110u);
}

