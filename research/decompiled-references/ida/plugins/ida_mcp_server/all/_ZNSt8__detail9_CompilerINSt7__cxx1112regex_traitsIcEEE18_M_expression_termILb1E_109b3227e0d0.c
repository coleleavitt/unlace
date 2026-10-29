__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(
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
  char v26; // al
  char v27; // bl
  __int16 v28; // ax
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // dl
  char *v33; // rax
  _BYTE *v34; // rax
  char v35; // r14
  __int64 v36; // rdi
  char v37; // al
  char v38; // cl
  char v39; // dl
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  __int64 v42; // rbx
  char v43; // r14
  __int64 v44; // rdi
  char v45; // al
  __int64 v46; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+8h] [rbp-A0h]
  unsigned int v48; // [rsp+1Ch] [rbp-8Ch]
  _QWORD v49[4]; // [rsp+20h] [rbp-88h] BYREF
  char *v50; // [rsp+40h] [rbp-68h] BYREF
  __int64 v51; // [rsp+48h] [rbp-60h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 152);
  v52 = __readfsqword(0x28u);
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
      if ( !v51 )
        std::__throw_regex_error();
      v17 = *(_QWORD *)(a3 + 104);
      v18 = *v50;
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL)
                      + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
      if ( !v19 )
        std::__throw_bad_cast();
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, (unsigned int)v18);
      std::vector<char>::emplace_back<char>((_QWORD *)a3, v20);
      v21 = *a2;
      if ( v51 == 1 )
      {
        v27 = *v50;
        if ( v21 == 1 )
        {
          v35 = a2[1];
          v47 = *(_QWORD *)(a3 + 104);
          v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
          if ( !v36 )
            std::__throw_bad_cast();
          v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 32LL))(v36, (unsigned int)v35);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v37);
        }
        LOBYTE(v28) = 1;
        HIBYTE(v28) = v27;
        *(_WORD *)a2 = v28;
      }
      else
      {
        if ( v21 == 1 )
        {
          v31 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
                  *(_QWORD *)(a3 + 104),
                  a2[1]);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v31);
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
        v29 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
                *(_QWORD *)(a3 + 104),
                a2[1]);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v29);
      }
      *a2 = 2;
      std::regex_traits<char>::lookup_collatename<char const*>();
      if ( !v49[1] )
        std::__throw_regex_error();
      std::regex_traits<char>::transform_primary<char *>();
      std::string::operator=((__int64)v49, (unsigned __int8 **)&v50);
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
        v30 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
                *(_QWORD *)(a3 + 104),
                a2[1]);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v30);
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
LABEL_37:
      std::__throw_regex_error();
    default:
      if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
      {
        v14 = **(_BYTE **)(a1 + 272);
        if ( *a2 == 1 )
        {
          v26 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
                  *(_QWORD *)(a3 + 104),
                  a2[1]);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v26);
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
          v48 = v11;
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
                *(_DWORD *)(v16 - 4) = v48;
                *(_QWORD *)(a3 + 80) = v16;
              }
              return 1;
            }
            goto LABEL_12;
          }
          goto LABEL_37;
        }
        v23 = a2[1];
        v46 = *(_QWORD *)(a3 + 104);
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, (unsigned int)v23);
          std::vector<char>::emplace_back<char>((_QWORD *)a3, v25);
          goto LABEL_9;
        }
LABEL_74:
        std::__throw_bad_cast();
      }
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *(_DWORD *)(a1 + 152) != 11 )
      {
        if ( *a2 == 2 )
          std::__throw_regex_error();
        if ( *a2 != 1 )
        {
          if ( (*(_BYTE *)a1 & 0x10) == 0 )
            std::__throw_regex_error();
          *(_WORD *)a2 = 11521;
          return 1;
        }
        if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
        {
          v38 = a2[1];
          v39 = **(_BYTE **)(a1 + 272);
          if ( v39 >= v38 )
          {
            v40 = *(_BYTE **)(a3 + 56);
            if ( v40 != *(_BYTE **)(a3 + 64) )
            {
              *v40 = v38;
              v41 = v40 + 2;
              *(v41 - 1) = v39;
              *(_QWORD *)(a3 + 56) = v41;
              goto LABEL_54;
            }
LABEL_64:
            std::vector<std::pair<char,char>>::_M_realloc_append<std::pair<char,char>>();
            goto LABEL_54;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 152) != 28 )
            std::__throw_regex_error();
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          v32 = a2[1];
          if ( v32 <= 45 )
          {
            v33 = *(char **)(a3 + 56);
            if ( v33 != *(char **)(a3 + 64) )
            {
              *v33 = v32;
              v34 = v33 + 2;
              *(v34 - 1) = 45;
              *(_QWORD *)(a3 + 56) = v34;
LABEL_54:
              *a2 = 0;
              return 1;
            }
            goto LABEL_64;
          }
        }
        std::__throw_regex_error();
      }
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *a2 == 1 )
      {
        v42 = *(_QWORD *)(a3 + 104);
        v43 = a2[1];
        v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v44 )
          goto LABEL_74;
        v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 32LL))(v44, (unsigned int)v43);
        std::vector<char>::emplace_back<char>((_QWORD *)a3, v45);
      }
      *(_WORD *)a2 = 11521;
      return 0;
  }
}

