__int64 __fastcall std::__detail::_Scanner<char>::_M_advance(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)(a1 + 176) == result )
  {
    *(_DWORD *)(a1 + 144) = 27;
  }
  else
  {
    result = *(unsigned int *)(a1 + 136);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 2 )
      {
        return std::__detail::_Scanner<char>::_M_scan_in_bracket();
      }
      else if ( (_DWORD)result == 1 )
      {
        return std::__detail::_Scanner<char>::_M_scan_in_brace();
      }
    }
    else
    {
      return std::__detail::_Scanner<char>::_M_scan_normal();
    }
  }
  return result;
}

