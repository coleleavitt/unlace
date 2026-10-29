__int64 __fastcall std::__detail::_Scanner<char>::_M_scan_normal(char *a1)
{
  char *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, unsigned int); // r8
  char v7; // al
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax
  char v12; // dl
  char *v13; // rcx
  int v14; // eax
  _BYTE *v15; // rdx
  __int64 (__fastcall *v16)(char *); // rax
  char *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+8h] [rbp-20h]

  v1 = *((char **)a1 + 22);
  v2 = *((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 22) = v1 + 1;
  v3 = (unsigned __int8)*v1;
  v4 = (unsigned __int8)*v1;
  if ( *(_BYTE *)(v2 + v3 + 313) )
  {
    result = (__int64)strchr(*((const char **)a1 + 20), *(char *)(v2 + v3 + 313));
    if ( !result )
    {
      *((_DWORD *)a1 + 36) = 1;
      return std::string::_M_replace_aux();
    }
  }
  else
  {
    v5 = (unsigned int)(char)v3;
    v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 64LL);
    v7 = *v1;
    if ( v6 != std::ctype<char>::do_narrow )
    {
      v19 = v3;
      v18 = v2;
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v6)(v2, v5, 32);
      v3 = v19;
      v2 = v18;
      LODWORD(v5) = v7;
    }
    if ( v7 != 32 )
      *(_BYTE *)(v2 + v3 + 313) = v7;
    result = (__int64)strchr(*((const char **)a1 + 20), v5);
    if ( !result )
    {
      *((_DWORD *)a1 + 36) = 1;
      return std::string::_M_replace_aux();
    }
  }
  if ( (_BYTE)v4 == 92 )
  {
    result = *((_QWORD *)a1 + 22);
    if ( result == *((_QWORD *)a1 + 23) )
      goto LABEL_58;
    if ( (*((_WORD *)a1 + 70) & 0x120) == 0 || (unsigned __int8)(*(_BYTE *)result - 40) > 1u && *(_BYTE *)result != 123 )
    {
      v16 = *((__int64 (__fastcall **)(char *))a1 + 29);
      v17 = &a1[*((_QWORD *)a1 + 30)];
      if ( ((unsigned __int8)v16 & 1) != 0 )
        v16 = *(__int64 (__fastcall **)(char *))((char *)v16 + *(_QWORD *)v17 - 1);
      return v16(v17);
    }
    *((_QWORD *)a1 + 22) = result + 1;
    v4 = *(unsigned __int8 *)result;
  }
  switch ( (_BYTE)v4 )
  {
    case 0x28:
      v14 = *((_DWORD *)a1 + 35);
      if ( (v14 & 0x10) == 0 || (v15 = *((_BYTE **)a1 + 22), *v15 != 63) )
      {
        result = (unsigned int)((v14 & 2) != 0) + 5;
        *((_DWORD *)a1 + 36) = result;
        return result;
      }
      *((_QWORD *)a1 + 22) = v15 + 1;
      if ( v15 + 1 == *((_BYTE **)a1 + 23) )
      {
        std::__throw_regex_error();
LABEL_57:
        std::__throw_regex_error();
LABEL_58:
        std::__throw_regex_error();
      }
      result = (unsigned __int8)v15[1];
      switch ( (_BYTE)result )
      {
        case ':':
          *((_DWORD *)a1 + 36) = 6;
          *((_QWORD *)a1 + 22) = v15 + 2;
          return result;
        case '=':
          *((_DWORD *)a1 + 36) = 7;
          *((_QWORD *)a1 + 22) = v15 + 2;
          break;
        case '!':
          *((_DWORD *)a1 + 36) = 7;
          *((_QWORD *)a1 + 22) = v15 + 2;
          break;
        default:
          std::__throw_regex_error();
      }
      return std::string::_M_replace_aux();
    case 0x29:
      *((_DWORD *)a1 + 36) = 8;
      return result;
    case 0x5B:
      a1[168] = 1;
      result = *((_QWORD *)a1 + 22);
      *((_DWORD *)a1 + 34) = 2;
      if ( result != *((_QWORD *)a1 + 23) && *(_BYTE *)result == 94 )
      {
        *((_DWORD *)a1 + 36) = 10;
        *((_QWORD *)a1 + 22) = ++result;
      }
      else
      {
        *((_DWORD *)a1 + 36) = 9;
      }
      return result;
    case 0x7B:
      *((_DWORD *)a1 + 34) = 1;
      *((_DWORD *)a1 + 36) = 12;
      return result;
    case 0:
      if ( (a1[140] & 0x10) != 0 )
      {
        *((_DWORD *)a1 + 36) = 1;
        return std::string::_M_replace_aux();
      }
      goto LABEL_57;
  }
  if ( (v4 & 0xDF) == 0x5D )
  {
    *((_DWORD *)a1 + 36) = 1;
    return std::string::_M_replace_aux();
  }
  v9 = *((_QWORD *)a1 + 24);
  v10 = (unsigned __int8)v4;
  result = *(unsigned __int8 *)(v9 + (unsigned __int8)v4 + 313);
  if ( (_BYTE)result )
    goto LABEL_17;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v9 + 64LL);
  if ( v11 == std::ctype<char>::do_narrow )
    goto LABEL_16;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v11)(v9, (unsigned int)(char)v4, 0);
  v10 = (unsigned __int8)v4;
  if ( (_BYTE)result )
  {
    v4 = result;
LABEL_16:
    *(_BYTE *)(v9 + v10 + 313) = v4;
    result = v4;
  }
LABEL_17:
  v12 = *a1;
  if ( *a1 )
  {
    v13 = a1;
    while ( (_BYTE)result != v12 )
    {
      v12 = v13[8];
      v13 += 8;
      if ( !v12 )
        return result;
    }
    result = *((unsigned int *)v13 + 1);
    *((_DWORD *)a1 + 36) = result;
  }
  return result;
}

