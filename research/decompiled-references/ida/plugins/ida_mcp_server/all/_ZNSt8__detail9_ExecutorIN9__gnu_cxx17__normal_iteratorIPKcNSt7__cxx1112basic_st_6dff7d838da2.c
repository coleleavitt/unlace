__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_repeat(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // [rsp+18h] [rbp-20h]
  __int64 v9; // [rsp+18h] [rbp-20h]
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  result = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) + 48 * a3;
  if ( *(_BYTE *)(result + 24) )
  {
    if ( !*(_BYTE *)(a1 + 140) )
    {
      result = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
      if ( !*(_BYTE *)(a1 + 140) )
        return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more();
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 72) + 16 * a3;
    v5 = *(_DWORD *)(v4 + 8);
    v6 = *(_QWORD *)v4;
    if ( v5 && v6 == *(_QWORD *)(a1 + 24) )
    {
      if ( v5 <= 1 )
      {
        v9 = *(_QWORD *)(a1 + 72) + 16 * a3;
        *(_DWORD *)(v4 + 8) = v5 + 1;
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
        --*(_DWORD *)(v9 + 8);
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(v4 + 8) = 1;
      v11 = v5;
      *(_QWORD *)v4 = v7;
      v10 = v6;
      v8 = v4;
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
      *(_QWORD *)v8 = v10;
      *(_DWORD *)(v8 + 8) = v11;
    }
    return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
  }
  return result;
}

