__int64 __fastcall boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
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
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rdi
  bool v17; // cc
  int v18; // r8d
  _BYTE *v20; // rdx
  int v21; // r8d
  int v22; // [rsp+14h] [rbp-44h]
  _BYTE dest[22]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v13 = *(_QWORD *)(a1 + 96);
  v24 = __readfsqword(0x28u);
  if ( !v13 )
  {
    v20 = (_BYTE *)(&dword_0 + 1);
    v21 = 1;
    *(_OWORD *)dest = 0;
    v15 = &dest[20];
    *(_QWORD *)&dest[14] = 0x30000000000000LL;
LABEL_12:
    v22 = v21;
    memmove(&dest[1], v15, (size_t)v20);
    v18 = v22;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(a1 + 84);
  if ( v14 < 0x190 && v14 != 226 )
  {
    if ( v14 > 0xE2 )
    {
      if ( v14 != 304 )
        goto LABEL_6;
LABEL_16:
      boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
        a1,
        a2,
        a3,
        v13,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13);
    }
    if ( v14 > 0x67 )
    {
      a3 = v14 - 200;
      if ( (unsigned int)a3 <= 8 && v14 == 204 )
        goto LABEL_16;
    }
  }
LABEL_6:
  v15 = &dest[21];
  memset(dest, 0, sizeof(dest));
  do
  {
    --v15;
    v16 = v13 % 0xA;
    v17 = v13 <= 9;
    v13 /= 0xAu;
    *v15 = a0123456789[v16];
  }
  while ( !v17 );
  if ( &dest[21] != v15 )
  {
    v21 = (unsigned __int8)(&dest[21] - v15);
    v20 = (_BYTE *)(&dest[21] - v15);
    goto LABEL_12;
  }
  v18 = 0;
LABEL_10:
  dest[v18 + 1] = 0;
  boost::beast::http::basic_fields<std::allocator<char>>::set();
  return boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl();
}

