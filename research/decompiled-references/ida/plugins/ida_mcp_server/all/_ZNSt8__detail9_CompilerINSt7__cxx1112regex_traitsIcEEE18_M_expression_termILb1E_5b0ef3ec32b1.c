__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  int v3; // eax
  int v7; // eax
  unsigned __int8 *v8; // rsi
  __int64 v9; // rax
  __int16 v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // edx
  char v14; // bl
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // r14
  __int64 v19; // rdi
  char v20; // al
  char v21; // al
  _QWORD *v22; // rdi
  char v23; // r14
  __int64 v24; // rdi
  char v25; // al
  char v26; // r14
  __int64 v27; // rdi
  char v28; // al
  char v29; // bl
  __int16 v30; // ax
  char v31; // al
  char v32; // al
  char v33; // al
  char v34; // r14
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rbx
  char v38; // r14
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // [rsp+8h] [rbp-A0h]
  __int64 v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  unsigned int v44; // [rsp+1Ch] [rbp-8Ch]
  _QWORD v45[4]; // [rsp+20h] [rbp-88h] BYREF
  char *v46; // [rsp+40h] [rbp-68h] BYREF
  __int64 v47; // [rsp+48h] [rbp-60h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 152);
  v48 = __readfsqword(0x28u);
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
      if ( !v47 )
        std::__throw_regex_error();
      v17 = *(_QWORD *)(a3 + 104);
      v18 = *v46;
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL)
                      + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
      if ( !v19 )
        std::__throw_bad_cast();
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, (unsigned int)v18);
      std::vector<char>::emplace_back<char>((_QWORD *)a3, v20);
      v21 = *a2;
      if ( v47 == 1 )
      {
        v29 = *v46;
        if ( v21 == 1 )
        {
          v34 = a2[1];
          v43 = *(_QWORD *)(a3 + 104);
          v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
          if ( !v35 )
            std::__throw_bad_cast();
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 32LL))(v35, (unsigned int)v34);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v36);
        }
        LOBYTE(v30) = 1;
        HIBYTE(v30) = v29;
        *(_WORD *)a2 = v30;
      }
      else
      {
        if ( v21 == 1 )
        {
          v33 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
                  *(_QWORD *)(a3 + 104),
                  a2[1]);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v33);
        }
        *a2 = 2;
      }
      std::string::_M_dispose();
      return 1;
    case 17:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
      {
        v31 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
                *(_QWORD *)(a3 + 104),
                a2[1]);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v31);
      }
      *a2 = 2;
      std::regex_traits<char>::lookup_collatename<char const*>();
      if ( !v45[1] )
        std::__throw_regex_error();
      std::regex_traits<char>::transform_primary<char *>();
      std::string::operator=((__int64)v45, (unsigned __int8 **)&v46);
      std::string::_M_dispose();
      v22 = *(_QWORD **)(a3 + 32);
      if ( v22 == *(_QWORD **)(a3 + 40) )
      {
        std::vector<std::string>::_M_realloc_append<std::string const&>();
      }
      else
      {
        *v22 = v22 + 2;
        std::string::_M_construct<true>();
        *(_QWORD *)(a3 + 32) += 32LL;
      }
      std::string::_M_dispose();
      return 1;
    case 15:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
      {
        v32 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
                *(_QWORD *)(a3 + 104),
                a2[1]);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v32);
      }
      *a2 = 2;
      v11 = std::regex_traits<char>::lookup_classname<char const*>();
      v12 = HIWORD(v11);
      if ( (v11 & 0x10000) != 0 || (_WORD)v11 )
      {
LABEL_12:
        *(_WORD *)(a3 + 96) |= v11;
        *(_BYTE *)(a3 + 98) |= v12;
        return 1;
      }
LABEL_36:
      std::__throw_regex_error();
    default:
      if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
      {
        v14 = **(_BYTE **)(a1 + 272);
        if ( *a2 == 1 )
        {
          v26 = a2[1];
          v42 = *(_QWORD *)(a3 + 104);
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
          if ( !v27 )
            goto LABEL_61;
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, (unsigned int)v26);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v28);
        }
        *a2 = 1;
        a2[1] = v14;
        return 1;
      }
      v7 = *(_DWORD *)(a1 + 152);
      if ( v7 != 28 )
      {
        if ( v7 != 14 )
          std::__throw_regex_error();
        std::string::_M_assign();
        std::__detail::_Scanner<char>::_M_advance();
        if ( *a2 != 1 )
        {
LABEL_9:
          v8 = *(unsigned __int8 **)(a1 + 272);
          v9 = *(_QWORD *)(a1 + 392);
          *a2 = 2;
          v10 = *(_WORD *)(*(_QWORD *)(v9 + 48) + 2LL * *v8) & 0x100;
          v11 = std::regex_traits<char>::lookup_classname<char const*>();
          v44 = v11;
          v12 = HIWORD(v11);
          if ( (v11 & 0x10000) != 0 || (_WORD)v11 )
          {
            if ( v10 )
            {
              v15 = *(_QWORD *)(a3 + 80);
              if ( v15 == *(_QWORD *)(a3 + 88) )
              {
                std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_realloc_append<std::regex_traits<char>::_RegexMask const&>();
              }
              else
              {
                v16 = v15 + 4;
                *(_DWORD *)(v16 - 4) = v44;
                *(_QWORD *)(a3 + 80) = v16;
              }
              return 1;
            }
            goto LABEL_12;
          }
          goto LABEL_36;
        }
        v23 = a2[1];
        v41 = *(_QWORD *)(a3 + 104);
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, (unsigned int)v23);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v25);
          goto LABEL_9;
        }
LABEL_61:
        std::__throw_bad_cast();
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
            std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range();
            *a2 = 0;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 152) != 28 )
              std::__throw_regex_error();
            std::string::_M_assign();
            std::__detail::_Scanner<char>::_M_advance();
            std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range();
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
      {
        v37 = *(_QWORD *)(a3 + 104);
        v38 = a2[1];
        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v39 )
          goto LABEL_61;
        v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 32LL))(v39, (unsigned int)v38);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v40);
      }
      *(_WORD *)a2 = 11521;
      return 0;
  }
}

