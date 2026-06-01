__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  int v3; // eax
  int v6; // eax
  unsigned __int8 *v7; // rsi
  __int16 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // edx
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  char v18; // bl
  unsigned int v19; // [rsp+Ch] [rbp-8Ch]
  void *v20[4]; // [rsp+10h] [rbp-88h] BYREF
  void *v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 152);
  v23[3] = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 11:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      return 0;
    case 16:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      std::regex_traits<char>::lookup_collatename<char const*>();
      if ( !v22 )
        std::__throw_regex_error();
      std::vector<char>::emplace_back<char>((_QWORD *)a3, *(_BYTE *)v21);
      v15 = *a2;
      if ( v22 == 1 )
      {
        v16 = v21;
        v18 = *(_BYTE *)v21;
        if ( v15 == 1 )
        {
          std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
          v16 = v21;
        }
        *a2 = 1;
        a2[1] = v18;
      }
      else
      {
        if ( v15 == 1 )
          std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
        *a2 = 2;
        v16 = v21;
      }
      if ( v16 != v23 )
        operator delete(v16, v23[0] + 1LL);
      return 1;
    case 17:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
        std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
      *a2 = 2;
      std::regex_traits<char>::lookup_collatename<char const*>();
      if ( !v20[1] )
        std::__throw_regex_error();
      std::regex_traits<char>::transform_primary<char *>();
      std::string::operator=((__int64)v20, (unsigned __int8 **)&v21);
      std::string::_M_dispose();
      v17 = *(_QWORD **)(a3 + 32);
      if ( v17 == *(_QWORD **)(a3 + 40) )
      {
        std::vector<std::string>::_M_realloc_append<std::string const&>();
      }
      else
      {
        *v17 = v17 + 2;
        std::string::_M_construct<true>();
        *(_QWORD *)(a3 + 32) += 32LL;
      }
      std::string::_M_dispose();
      return 1;
    case 15:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
        std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
      *a2 = 2;
      v9 = std::regex_traits<char>::lookup_classname<char const*>();
      v10 = HIWORD(v9);
      if ( (v9 & 0x10000) != 0 || (_WORD)v9 )
        goto LABEL_13;
      goto LABEL_38;
    default:
      if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
      {
        v12 = **(_BYTE **)(a1 + 272);
        if ( *a2 == 1 )
          std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
        *a2 = 1;
        a2[1] = v12;
        return 1;
      }
      v6 = *(_DWORD *)(a1 + 152);
      if ( v6 != 28 )
      {
        if ( v6 != 14 )
          std::__throw_regex_error();
        std::string::_M_assign();
        std::__detail::_Scanner<char>::_M_advance();
        if ( *a2 == 1 )
          std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
        v7 = *(unsigned __int8 **)(a1 + 272);
        *a2 = 2;
        v8 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) + 2LL * *v7) & 0x100;
        v9 = std::regex_traits<char>::lookup_classname<char const*>();
        v19 = v9;
        v10 = HIWORD(v9);
        if ( (v9 & 0x10000) != 0 || (_WORD)v9 )
        {
          if ( v8 )
          {
            v13 = *(_QWORD *)(a3 + 80);
            if ( v13 == *(_QWORD *)(a3 + 88) )
            {
              std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_realloc_append<std::regex_traits<char>::_RegexMask const&>();
            }
            else
            {
              v14 = v13 + 4;
              *(_DWORD *)(v14 - 4) = v19;
              *(_QWORD *)(a3 + 80) = v14;
            }
            return 1;
          }
LABEL_13:
          *(_WORD *)(a3 + 96) |= v9;
          *(_BYTE *)(a3 + 98) |= v10;
          return 1;
        }
LABEL_38:
        std::__throw_regex_error();
      }
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *(_DWORD *)(a1 + 152) != 11 )
      {
        if ( *a2 == 2 )
          std::__throw_regex_error();
        if ( *a2 == 1 )
        {
          if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
          {
            std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range();
            *a2 = 0;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 152) != 28 )
              std::__throw_regex_error();
            std::string::_M_assign();
            std::__detail::_Scanner<char>::_M_advance();
            std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range();
            *a2 = 0;
          }
        }
        else
        {
          if ( (*(_BYTE *)a1 & 0x10) == 0 )
            std::__throw_regex_error();
          *(_WORD *)a2 = 11521;
        }
        return 1;
      }
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
        std::vector<char>::emplace_back<char>((_QWORD *)a3, a2[1]);
      *(_WORD *)a2 = 11521;
      return 0;
  }
}

