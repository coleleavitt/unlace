__int64 __fastcall std::__detail::_Scanner<char>::_M_eat_escape_posix(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 (__fastcall *v6)(__int64, unsigned int); // r9
  signed __int8 v7; // al
  char *v8; // rax
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+8h] [rbp-20h]

  v1 = *(unsigned __int8 **)(a1 + 176);
  if ( v1 == *(unsigned __int8 **)(a1 + 184) )
  {
    std::__throw_regex_error();
    return std::__detail::_Scanner<char>::_M_scan_normal(2);
  }
  else
  {
    v2 = *v1;
    v3 = *(_QWORD *)(a1 + 192);
    LODWORD(v4) = *(char *)(v3 + v2 + 313);
    v5 = *v1;
    if ( !*(_BYTE *)(v3 + v2 + 313) )
    {
      v4 = (unsigned int)(char)v2;
      v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 64LL);
      v7 = *v1;
      if ( v6 != std::ctype<char>::do_narrow )
      {
        v12 = v2;
        v11 = *(_QWORD *)(a1 + 192);
        v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v6)(v3, v4, 0);
        v2 = v12;
        v3 = v11;
        LODWORD(v4) = v7;
      }
      if ( v7 )
        *(_BYTE *)(v3 + v2 + 313) = v7;
    }
    v8 = strchr(*(const char **)(a1 + 160), v4);
    if ( v8 && *v8 )
    {
      *(_DWORD *)(a1 + 144) = 1;
      result = std::string::_M_replace_aux();
LABEL_10:
      ++*(_QWORD *)(a1 + 176);
      return result;
    }
    v10 = *(_DWORD *)(a1 + 140);
    if ( (v10 & 0x80u) != 0 )
    {
      return std::__detail::_Scanner<char>::_M_eat_escape_awk();
    }
    else
    {
      if ( (v10 & 0x120) != 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * v5 + 1) & 8) != 0
        && v5 != 48 )
      {
        *(_DWORD *)(a1 + 144) = 4;
        result = std::string::_M_replace_aux();
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 144) = 1;
      result = std::string::_M_replace_aux();
      ++*(_QWORD *)(a1 + 176);
    }
  }
  return result;
}

