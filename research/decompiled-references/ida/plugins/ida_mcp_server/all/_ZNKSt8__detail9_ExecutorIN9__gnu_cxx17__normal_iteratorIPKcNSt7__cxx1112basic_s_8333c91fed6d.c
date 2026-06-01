__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_line_terminator(
        __int64 a1,
        unsigned __int8 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 v5; // dl
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a2;
  v8[1] = __readfsqword(0x28u);
  std::locale::locale((std::locale *)v8, (const std::locale *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL));
  v3 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
  v4 = *(_QWORD *)(*(_QWORD *)(v8[0] + 8LL) + 8 * v3);
  if ( !v4 )
    std::__throw_bad_cast();
  std::locale::~locale((std::locale *)v8);
  v5 = *(_BYTE *)(v4 + a2 + 313);
  if ( v5 )
    goto LABEL_7;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v4 + 64LL);
  if ( v6 != std::ctype<char>::do_narrow )
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v6)(v4, (unsigned int)(char)a2, 32);
  result = 0;
  if ( v2 != 32 )
  {
    *(_BYTE *)(v4 + a2 + 313) = v2;
    v5 = v2;
LABEL_7:
    result = 1;
    if ( v5 != 10 )
      return (v5 == 13) & (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) >> 4);
  }
  return result;
}

