char *__fastcall std::__detail::_Scanner<char>::_M_scan_in_bracket(__int64 a1)
{
  char *result; // rax
  char *v2; // rdx
  char v4; // r8
  __int64 v5; // r9
  char v6; // dl
  __int64 (__fastcall *v7)(_QWORD); // rax
  _QWORD *v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-10h]

  result = *(char **)(a1 + 176);
  v2 = *(char **)(a1 + 184);
  if ( result == v2 )
  {
    std::__throw_regex_error();
    goto LABEL_26;
  }
  *(_QWORD *)(a1 + 176) = result + 1;
  v4 = *result;
  if ( *result == 45 )
  {
    *(_DWORD *)(a1 + 144) = 28;
    *(_BYTE *)(a1 + 168) = 0;
    return result;
  }
  if ( v4 != 91 )
  {
    if ( v4 != 93 )
    {
      if ( v4 == 92 && (*(_BYTE *)(a1 + 140) & 0x90) != 0 )
      {
        v7 = *(__int64 (__fastcall **)(_QWORD))(a1 + 232);
        v8 = (_QWORD *)(a1 + *(_QWORD *)(a1 + 240));
        if ( ((unsigned __int8)v7 & 1) != 0 )
          v7 = *(__int64 (__fastcall **)(_QWORD))((char *)v7 + *v8 - 1);
        v9 = a1;
        result = (char *)v7(v8);
        v5 = v9;
        goto LABEL_7;
      }
LABEL_6:
      *(_DWORD *)(a1 + 144) = 1;
      result = (char *)std::string::_M_replace_aux();
      v5 = a1;
LABEL_7:
      *(_BYTE *)(v5 + 168) = 0;
      return result;
    }
    if ( (*(_BYTE *)(a1 + 140) & 0x10) == 0 && *(_BYTE *)(a1 + 168) )
      goto LABEL_6;
    *(_DWORD *)(a1 + 144) = 11;
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 168) = 0;
    return result;
  }
  if ( v2 == result + 1 )
LABEL_26:
    std::__throw_regex_error();
  v6 = result[1];
  switch ( v6 )
  {
    case '.':
      *(_DWORD *)(a1 + 144) = 16;
      break;
    case ':':
      *(_DWORD *)(a1 + 144) = 15;
      break;
    case '=':
      *(_DWORD *)(a1 + 144) = 17;
      break;
    default:
      *(_DWORD *)(a1 + 144) = 1;
      result = (char *)std::string::_M_replace_aux();
      *(_BYTE *)(a1 + 168) = 0;
      return result;
  }
  *(_QWORD *)(a1 + 176) = result + 2;
  result = (char *)std::__detail::_Scanner<char>::_M_eat_class();
  *(_BYTE *)(a1 + 168) = 0;
  return result;
}

