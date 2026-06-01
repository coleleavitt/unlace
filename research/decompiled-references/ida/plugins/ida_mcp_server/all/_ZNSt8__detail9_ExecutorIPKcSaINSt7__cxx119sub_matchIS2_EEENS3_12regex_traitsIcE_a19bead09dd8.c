__int64 __fastcall std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_rep_once_more(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // r12

  result = *(_QWORD *)(a1[7] + 56LL) + 48 * a3;
  v4 = 16 * a3 + a1[9];
  v5 = a1[3];
  v6 = *(_DWORD *)(v4 + 8);
  v7 = *(_QWORD *)v4;
  if ( v6 && v7 == v5 )
  {
    if ( v6 <= 1 )
    {
      *(_DWORD *)(v4 + 8) = v6 + 1;
      result = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
      --*(_DWORD *)(v4 + 8);
    }
  }
  else
  {
    *(_QWORD *)v4 = v5;
    *(_DWORD *)(v4 + 8) = 1;
    result = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
    *(_QWORD *)v4 = v7;
    *(_DWORD *)(v4 + 8) = v6;
  }
  return result;
}

