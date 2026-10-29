void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _UNKNOWN *__ptr32 *a5)
{
  __int64 v5; // r9
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // r11
  char *v17; // r10
  char *v18; // rax
  char *v19; // rcx
  char *v20; // rsi
  char *v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  size_t v24; // rdx
  int v25; // eax
  unsigned __int8 *v26; // rax
  unsigned __int8 v27; // r14
  __int64 v28; // rax
  bool v29; // al
  char v30; // r10
  unsigned __int8 v31; // r15
  __int64 v32; // rax
  bool v33; // al
  char is_line_terminator; // al
  const __m128i *v35; // rax
  __int64 v36; // rdx
  __int8 v37; // cl
  __int64 v38; // rdx
  __int8 *v39; // rax
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // r14
  _BYTE *v44; // r10
  char *v45; // rdx
  char v46; // r15
  char v47; // r13
  int v48; // edx
  int v49; // eax
  _QWORD *v50; // [rsp+8h] [rbp-80h]
  unsigned int v51; // [rsp+8h] [rbp-80h]
  unsigned int v52; // [rsp+8h] [rbp-80h]
  char *v53; // [rsp+8h] [rbp-80h]
  char *v54; // [rsp+8h] [rbp-80h]
  char *v55; // [rsp+8h] [rbp-80h]
  unsigned int v56; // [rsp+8h] [rbp-80h]
  unsigned int v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  __int64 v59; // [rsp+8h] [rbp-80h]
  unsigned int v60; // [rsp+8h] [rbp-80h]
  __m128i *v61; // [rsp+8h] [rbp-80h]
  char v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+10h] [rbp-78h]
  char *v64; // [rsp+10h] [rbp-78h]
  char v65; // [rsp+10h] [rbp-78h]
  __int8 v66; // [rsp+10h] [rbp-78h]
  _BYTE *v67; // [rsp+10h] [rbp-78h]
  char *v68; // [rsp+10h] [rbp-78h]
  unsigned int v69; // [rsp+18h] [rbp-70h]
  unsigned int v70; // [rsp+18h] [rbp-70h]
  unsigned int v71; // [rsp+18h] [rbp-70h]
  char *v72; // [rsp+18h] [rbp-70h]
  _BYTE *v73; // [rsp+18h] [rbp-70h]
  char *v74; // [rsp+20h] [rbp-68h]
  char *v75; // [rsp+20h] [rbp-68h]
  unsigned int v76; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v77; // [rsp+2Ch] [rbp-5Ch]
  __m128i v78; // [rsp+30h] [rbp-58h] BYREF
  __int64 v79; // [rsp+40h] [rbp-48h]
  unsigned __int64 v80; // [rsp+48h] [rbp-40h]

  v5 = a2;
  v80 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(v7 + 56);
  while ( 2 )
  {
    v9 = (unsigned int *)(v8 + 48 * a3);
    v10 = *v9;
    switch ( *v9 )
    {
      case 1u:
        if ( (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
        {
          v51 = v5;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
          v5 = v51;
          a5 = jpt_3C5334;
          if ( !*(_BYTE *)(a1 + 116) )
            goto LABEL_14;
        }
        else
        {
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
          v41 = *(_BYTE *)(a1 + 116);
          *(_BYTE *)(a1 + 116) = 0;
          v62 = v41;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
          *(_BYTE *)(a1 + 116) |= v62;
        }
        return;
      case 2u:
        if ( *((_BYTE *)v9 + 24) )
        {
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
          if ( !*(_BYTE *)(a1 + 116) )
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more();
        }
        else
        {
          v52 = v5;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more();
          v5 = v52;
          a5 = jpt_3C5334;
          if ( !*(_BYTE *)(a1 + 116) )
            goto LABEL_14;
        }
        return;
      case 3u:
        v15 = *(_QWORD *)a1 + 24LL * *((_QWORD *)v9 + 2);
        if ( !*(_BYTE *)(v15 + 16) )
          return;
        v16 = *(_BYTE **)v15;
        v17 = *(char **)(a1 + 24);
        v18 = *(char **)(v15 + 8);
        v19 = *(char **)(a1 + 40);
        v53 = v18;
        if ( v17 == v19 )
          goto LABEL_24;
        v20 = &v17[(_QWORD)v18];
        v21 = *(char **)(a1 + 24);
        v22 = (char *)(v20 - v16);
        while ( v22 != v21 )
        {
          if ( v19 == ++v21 )
            goto LABEL_24;
        }
        v19 = v22;
LABEL_24:
        v23 = *(_QWORD *)(a1 + 48);
        if ( (*(_BYTE *)v23 & 1) == 0 )
        {
          v24 = v53 - v16;
          if ( v53 - v16 != v19 - v17 )
            return;
          if ( v24 )
          {
            v69 = v5;
            v64 = v19;
            v54 = *(char **)(a1 + 24);
            v25 = memcmp(v16, v17, v24);
            v17 = v54;
            v19 = v64;
            a5 = jpt_3C5334;
            v5 = v69;
            if ( v25 )
              return;
          }
          goto LABEL_28;
        }
        v76 = v5;
        v74 = v19;
        v72 = v16;
        v67 = *(_BYTE **)(a1 + 24);
        std::locale::locale((std::locale *)&v78, (const std::locale *)(*(_QWORD *)(v23 + 16) + 80LL));
        v42 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
        v43 = *(_QWORD *)(*(_QWORD *)(v78.m128i_i64[0] + 8) + 8 * v42);
        if ( !v43 )
          std::__throw_bad_cast();
        std::locale::~locale((std::locale *)&v78);
        v19 = v74;
        a5 = jpt_3C5334;
        v44 = v67;
        v5 = v76;
        if ( v53 - v72 != v74 - v67 )
          return;
        v45 = v72;
        if ( v53 == v72 )
        {
LABEL_84:
          v17 = *(char **)(a1 + 24);
LABEL_28:
          if ( v17 == v19 )
            goto LABEL_14;
          *(_QWORD *)(a1 + 24) = v19;
          v55 = v17;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
          *(_QWORD *)(a1 + 24) = v55;
          return;
        }
        while ( 1 )
        {
          v46 = *v44;
          v77 = v5;
          v75 = v19;
          v73 = v44;
          v68 = v45;
          v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, char *, _UNKNOWN *__ptr32 *))(*(_QWORD *)v43 + 32LL))(
                  v43,
                  (unsigned int)*v45,
                  v45,
                  v19,
                  jpt_3C5334);
          if ( v47 != (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 32LL))(
                        v43,
                        (unsigned int)v46) )
            return;
          a5 = jpt_3C5334;
          v19 = v75;
          v5 = v77;
          v45 = v68 + 1;
          v44 = v73 + 1;
          if ( v53 == v68 + 1 )
            goto LABEL_84;
        }
      case 4u:
        if ( *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 32) )
        {
          if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) != 0 )
            return;
          goto LABEL_44;
        }
        v49 = *(_DWORD *)(a1 + 112);
        if ( (v49 & 1) == 0 )
        {
          if ( (v49 & 0x80u) == 0 )
            goto LABEL_46;
          if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0 )
          {
LABEL_44:
            v60 = v5;
            is_line_terminator = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_line_terminator();
            v5 = v60;
            a5 = jpt_3C5334;
            if ( is_line_terminator )
            {
              v7 = *(_QWORD *)(a1 + 56);
              v8 = *(_QWORD *)(v7 + 56);
              goto LABEL_46;
            }
            return;
          }
        }
        return;
      case 5u:
        if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 40) )
        {
          if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
            goto LABEL_46;
        }
        else if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0 )
        {
          v57 = v5;
          if ( (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_line_terminator() )
          {
            v7 = *(_QWORD *)(a1 + 56);
            v5 = v57;
            a5 = jpt_3C5334;
            v8 = *(_QWORD *)(v7 + 56);
LABEL_46:
            a3 = *((_QWORD *)v9 + 1);
            continue;
          }
        }
        return;
      case 6u:
        v26 = *(unsigned __int8 **)(a1 + 24);
        if ( v26 == *(unsigned __int8 **)(a1 + 32) )
        {
          v48 = *(_DWORD *)(a1 + 112);
          v30 = 0;
          if ( (v48 & 4) == 0 )
          {
            if ( v26 != *(unsigned __int8 **)(a1 + 40) )
            {
              if ( (v48 & 0x80) != 0 )
              {
LABEL_38:
                v27 = *(v26 - 1);
                v70 = v5;
                v58 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
                v28 = std::regex_traits<char>::lookup_classname<char const*>();
                v29 = std::regex_traits<char>::isctype(v58, v27, v28, SBYTE2(v28));
                v5 = v70;
                a5 = jpt_3C5334;
                v30 = v29;
                v26 = *(unsigned __int8 **)(a1 + 24);
                if ( v26 == *(unsigned __int8 **)(a1 + 40) )
                  goto LABEL_40;
              }
              v31 = *v26;
              v71 = v5;
              v65 = v30;
              v59 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
              v32 = std::regex_traits<char>::lookup_classname<char const*>();
              v33 = std::regex_traits<char>::isctype(v59, v31, v32, SBYTE2(v32));
              v5 = v71;
              a5 = jpt_3C5334;
              v30 = v33 ^ v65;
              goto LABEL_40;
            }
            if ( (v48 & 8) == 0 && (v48 & 0x80) != 0 )
              goto LABEL_38;
          }
        }
        else
        {
          if ( *(unsigned __int8 **)(a1 + 40) != v26 )
            goto LABEL_38;
          v30 = 0;
          if ( (*(_BYTE *)(a1 + 112) & 8) == 0 )
            goto LABEL_38;
        }
LABEL_40:
        if ( *((_BYTE *)v9 + 24) == v30 )
          return;
LABEL_14:
        v7 = *(_QWORD *)(a1 + 56);
        a3 = *((_QWORD *)v9 + 1);
        v8 = *(_QWORD *)(v7 + 56);
        continue;
      case 7u:
        v56 = v5;
        if ( (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_lookahead() == *((_BYTE *)v9 + 24) )
          return;
        v7 = *(_QWORD *)(a1 + 56);
        a3 = *((_QWORD *)v9 + 1);
        a5 = jpt_3C5334;
        v5 = v56;
        v8 = *(_QWORD *)(v7 + 56);
        continue;
      case 8u:
        v11 = (_QWORD *)(*(_QWORD *)a1 + 24LL * *((_QWORD *)v9 + 2));
        v12 = *v11;
        v50 = v11;
        *v11 = *(_QWORD *)(a1 + 24);
        v63 = v12;
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
        *v50 = v63;
        return;
      case 9u:
        v35 = (const __m128i *)(*(_QWORD *)a1 + 24LL * *((_QWORD *)v9 + 2));
        v61 = (__m128i *)v35;
        v78 = _mm_loadu_si128(v35);
        v79 = v35[1].m128i_i64[0];
        v36 = *(_QWORD *)(a1 + 24);
        v37 = v35[1].m128i_i8[0];
        v35[1].m128i_i8[0] = 1;
        v35->m128i_i64[1] = v36;
        v66 = v37;
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
        v61->m128i_i64[0] = v78.m128i_i64[0];
        v38 = v78.m128i_i64[1];
        v61[1].m128i_i8[0] = v66;
        v61->m128i_i64[1] = v38;
        return;
      case 0xBu:
        v39 = *(__int8 **)(a1 + 24);
        if ( v39 != *(__int8 **)(a1 + 40) )
        {
          v78.m128i_i8[0] = *v39;
          if ( !*((_QWORD *)v9 + 4) )
            std::__throw_bad_function_call();
          if ( (*((unsigned __int8 (__fastcall **)(unsigned int *, __m128i *, __int64, __int64, _UNKNOWN *__ptr32 *, __int64))v9
                + 5))(
                 v9 + 4,
                 &v78,
                 v10,
                 v7,
                 a5,
                 v5) )
          {
            ++*(_QWORD *)(a1 + 24);
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
            --*(_QWORD *)(a1 + 24);
          }
        }
        return;
      case 0xCu:
        v13 = *(_QWORD *)(a1 + 24);
        if ( (_BYTE)v5 )
        {
          *(_BYTE *)(a1 + 116) = 1;
          if ( v13 == *(_QWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
          {
LABEL_68:
            *(_BYTE *)(a1 + 116) = 0;
            return;
          }
        }
        else
        {
          v40 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 116) = v13 == v40;
          if ( v13 == *(_QWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
            goto LABEL_68;
          if ( v13 != v40 )
            return;
        }
        if ( (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
        {
LABEL_11:
          std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
            *(__int64 **)(a1 + 64),
            (const __m128i **)a1);
          return;
        }
        v14 = *(_QWORD *)(a1 + 104);
        if ( v14 < v13 || !v14 )
        {
          *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 24);
          goto LABEL_11;
        }
        return;
      default:
        return;
    }
  }
}

