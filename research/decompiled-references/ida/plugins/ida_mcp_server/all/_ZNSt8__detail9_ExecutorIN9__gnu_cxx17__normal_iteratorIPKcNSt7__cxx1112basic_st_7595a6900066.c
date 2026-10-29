__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  char *v4; // r13
  char *v5; // rbx
  char *v6; // r12
  char *v7; // rcx
  char *v8; // rax
  __int64 v9; // rax
  size_t v10; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  char *v14; // rcx
  char v15; // [rsp+8h] [rbp-60h]
  char *v16; // [rsp+10h] [rbp-58h]
  char v17; // [rsp+10h] [rbp-58h]
  char *v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) + 48 * a3 + 16);
  if ( !*(_BYTE *)(v3 + 16) )
    return v20 - __readfsqword(0x28u);
  v4 = *(char **)(a1 + 24);
  v5 = *(char **)(a1 + 40);
  v6 = *(char **)v3;
  v7 = *(char **)(v3 + 8);
  if ( v4 != v5 )
  {
    v8 = *(char **)(a1 + 24);
    while ( v8 != (char *)(&v4[(_QWORD)v7] - v6) )
    {
      if ( v5 == ++v8 )
        goto LABEL_7;
    }
    v5 = v8;
  }
LABEL_7:
  v9 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v16 = v7;
    std::locale::locale((std::locale *)&v19, (const std::locale *)(*(_QWORD *)(v9 + 16) + 80LL));
    v12 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
    v13 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * v12);
    if ( !v13 )
      std::__throw_bad_cast();
    std::locale::~locale((std::locale *)&v19);
    v14 = v16;
    if ( v16 - v6 != v5 - v4 )
      return v20 - __readfsqword(0x28u);
    if ( v6 != v16 )
    {
      do
      {
        v18 = v14;
        v15 = *v4;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, (unsigned int)*v6);
        if ( v17 != (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, (unsigned int)v15) )
          return v20 - __readfsqword(0x28u);
        v14 = v18;
        ++v6;
        ++v4;
      }
      while ( v18 != v6 );
    }
    v4 = *(char **)(a1 + 24);
  }
  else
  {
    v10 = v7 - v6;
    if ( v10 != v5 - v4 || v10 && memcmp(v6, *(const void **)(a1 + 24), v10) )
      return v20 - __readfsqword(0x28u);
  }
  if ( v4 != v5 )
  {
    *(_QWORD *)(a1 + 24) = v5;
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
    *(_QWORD *)(a1 + 24) = v4;
    return v20 - __readfsqword(0x28u);
  }
  return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
}

