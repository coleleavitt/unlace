unsigned __int8 *__fastcall std::__detail::_Scanner<char>::_M_scan_in_brace(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v2; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // r15

  result = *(unsigned __int8 **)(a1 + 176);
  v2 = *(unsigned __int8 **)(a1 + 184);
  if ( result == v2 )
    goto LABEL_24;
  v4 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 176) = result + 1;
  v5 = *result;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 48) + 2 * v5 + 1) & 8) == 0 )
  {
    if ( (_BYTE)v5 == 44 )
    {
      *(_DWORD *)(a1 + 144) = 25;
      return result;
    }
    if ( (*(_WORD *)(a1 + 140) & 0x120) != 0 )
    {
      if ( v2 != result + 1 && (_BYTE)v5 == 92 && result[1] == 125 )
      {
        *(_DWORD *)(a1 + 136) = 0;
        result += 2;
        *(_DWORD *)(a1 + 144) = 13;
        *(_QWORD *)(a1 + 176) = result;
        return result;
      }
    }
    else if ( (_BYTE)v5 == 125 )
    {
      *(_DWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 144) = 13;
      return result;
    }
    std::__throw_regex_error();
LABEL_24:
    std::__throw_regex_error();
    return (unsigned __int8 *)std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::~vector(6);
  }
  *(_DWORD *)(a1 + 144) = 26;
  std::string::_M_replace_aux();
  for ( result = *(unsigned __int8 **)(a1 + 176);
        result != *(unsigned __int8 **)(a1 + 184);
        result = *(unsigned __int8 **)(a1 + 176) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * *result + 1) & 8) == 0 )
      break;
    v7 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 176) = result + 1;
    v8 = *(_QWORD *)(a1 + 200);
    v9 = v8 == a1 + 216 ? 15LL : *(_QWORD *)(a1 + 216);
    v10 = *result;
    if ( v9 >= v7 + 1 )
    {
      *(_BYTE *)(v8 + v7) = v10;
    }
    else
    {
      std::string::_M_mutate();
      *(_BYTE *)(*(_QWORD *)(a1 + 200) + v7) = v10;
    }
    v6 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 208) = v7 + 1;
    *(_BYTE *)(v6 + v7 + 1) = 0;
  }
  return result;
}

