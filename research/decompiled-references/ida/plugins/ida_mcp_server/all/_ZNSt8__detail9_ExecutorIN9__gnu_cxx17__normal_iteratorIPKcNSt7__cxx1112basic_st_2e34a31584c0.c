void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _BYTE *v4; // rax
  __int64 v5; // r9
  __int64 v7; // rsi
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char is_line_terminator; // al
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // r14
  __int64 v15; // rax
  bool v16; // al
  char v17; // r15
  unsigned __int8 v18; // r14
  __int64 v19; // rax
  bool v20; // al
  const __m128i *v21; // rax
  __int64 v22; // rdx
  __int8 v23; // cl
  __int64 v24; // rdx
  __int8 *v25; // rax
  char v26; // al
  int v27; // eax
  int v28; // edx
  _QWORD *v29; // [rsp+0h] [rbp-68h]
  __int64 v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+0h] [rbp-68h]
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v35; // [rsp+0h] [rbp-68h]
  __m128i *v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int8 v47; // [rsp+8h] [rbp-60h]
  const __m128i **v48; // [rsp+8h] [rbp-60h]
  char v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  int v51; // [rsp+10h] [rbp-58h]
  int v52; // [rsp+10h] [rbp-58h]
  int v53; // [rsp+10h] [rbp-58h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  int v56; // [rsp+10h] [rbp-58h]
  int v57; // [rsp+10h] [rbp-58h]
  int v58; // [rsp+1Ch] [rbp-4Ch]
  int v59; // [rsp+1Ch] [rbp-4Ch]
  __m128i v60; // [rsp+20h] [rbp-48h] BYREF
  __int64 v61; // [rsp+30h] [rbp-38h]
  unsigned __int64 v62; // [rsp+38h] [rbp-30h]

  v62 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 120);
  v4 = (_BYTE *)(v3 + a3);
  if ( !*(_BYTE *)(v3 + a3) )
  {
    v5 = a1;
    while ( 2 )
    {
      v7 = *(_QWORD *)(v5 + 56);
      *v4 = 1;
      v8 = *(_QWORD *)(v7 + 56) + 48 * a3;
      switch ( *(_DWORD *)v8 )
      {
        case 1:
          if ( (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
          {
            v41 = *(_QWORD *)(v7 + 56) + 48 * a3;
            v30 = v5;
            v51 = a2;
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            v5 = v30;
            v8 = v41;
            a2 = v51;
            if ( !*(_BYTE *)(v30 + 140) )
              goto LABEL_31;
          }
          else
          {
            v38 = v5;
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            v26 = *(_BYTE *)(v38 + 140);
            *(_BYTE *)(v38 + 140) = 0;
            v49 = v26;
            std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
            *(_BYTE *)(v38 + 140) |= v49;
          }
          return;
        case 2:
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_repeat();
          return;
        case 3:
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref();
          return;
        case 4:
          if ( *(_QWORD *)(v5 + 24) != *(_QWORD *)(v5 + 32) )
          {
            if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL) + 24LL) & 0x810) != 0 )
              return;
            v52 = a2;
            v42 = *(_QWORD *)(v7 + 56) + 48 * a3;
            v31 = v5;
            is_line_terminator = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_line_terminator();
            a2 = v52;
            v5 = v31;
            v8 = v42;
            goto LABEL_19;
          }
          v27 = *(_DWORD *)(v5 + 136);
          if ( (v27 & 1) == 0 )
          {
            if ( (v27 & 0x80u) == 0 )
              goto LABEL_25;
            if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL) + 24LL) & 0x810) == 0 )
            {
              v57 = a2;
              v50 = *(_QWORD *)(v7 + 56) + 48 * a3;
              v39 = v5;
              is_line_terminator = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_line_terminator();
              v5 = v39;
              v8 = v50;
              a2 = v57;
LABEL_19:
              if ( is_line_terminator )
              {
                v3 = *(_QWORD *)(v5 + 120);
                goto LABEL_25;
              }
              return;
            }
          }
          return;
        case 5:
          if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)(v5 + 40) )
          {
            if ( (*(_BYTE *)(v5 + 136) & 2) == 0 )
              goto LABEL_25;
          }
          else if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL) + 24LL) & 0x810) == 0 )
          {
            v53 = a2;
            v43 = *(_QWORD *)(v7 + 56) + 48 * a3;
            v32 = v5;
            if ( (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_line_terminator() )
            {
              v5 = v32;
              a2 = v53;
              v8 = v43;
              v3 = *(_QWORD *)(v32 + 120);
LABEL_25:
              a3 = *(_QWORD *)(v8 + 8);
              goto LABEL_32;
            }
          }
          break;
        case 6:
          v13 = *(unsigned __int8 **)(v5 + 24);
          if ( v13 == *(unsigned __int8 **)(v5 + 32) )
          {
            v28 = *(_DWORD *)(v5 + 136);
            v17 = 0;
            if ( (v28 & 4) == 0 )
            {
              if ( v13 != *(unsigned __int8 **)(v5 + 40) )
              {
                if ( (v28 & 0x80) != 0 )
                {
LABEL_28:
                  v14 = *(v13 - 1);
                  v58 = a2;
                  v54 = v8;
                  v44 = v5;
                  v33 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL) + 80LL;
                  v15 = std::regex_traits<char>::lookup_classname<char const*>();
                  v16 = std::regex_traits<char>::isctype(v33, v14, v15, SBYTE2(v15));
                  v5 = v44;
                  v8 = v54;
                  v17 = v16;
                  a2 = v58;
                  v13 = *(unsigned __int8 **)(v44 + 24);
                  if ( v13 == *(unsigned __int8 **)(v44 + 40) )
                    goto LABEL_30;
                }
                v18 = *v13;
                v59 = a2;
                v55 = v8;
                v45 = v5;
                v34 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 16LL) + 80LL;
                v19 = std::regex_traits<char>::lookup_classname<char const*>();
                v20 = std::regex_traits<char>::isctype(v34, v18, v19, SBYTE2(v19));
                a2 = v59;
                v8 = v55;
                v5 = v45;
                v17 ^= v20;
                goto LABEL_30;
              }
              if ( (v28 & 8) == 0 && (v28 & 0x80) != 0 )
                goto LABEL_28;
            }
          }
          else
          {
            if ( v13 != *(unsigned __int8 **)(v5 + 40) )
              goto LABEL_28;
            v17 = 0;
            if ( (*(_BYTE *)(v5 + 136) & 8) == 0 )
              goto LABEL_28;
          }
LABEL_30:
          if ( *(_BYTE *)(v8 + 24) == v17 )
            return;
LABEL_31:
          a3 = *(_QWORD *)(v8 + 8);
          v3 = *(_QWORD *)(v5 + 120);
LABEL_32:
          v4 = (_BYTE *)(v3 + a3);
          if ( *(_BYTE *)(v3 + a3) )
            return;
          continue;
        case 7:
          v35 = *(_QWORD *)(v7 + 56) + 48 * a3;
          v56 = a2;
          v46 = v5;
          if ( (unsigned __int8)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead() == *(_BYTE *)(v35 + 24) )
            return;
          v5 = v46;
          a3 = *(_QWORD *)(v35 + 8);
          a2 = v56;
          v3 = *(_QWORD *)(v46 + 120);
          goto LABEL_32;
        case 8:
          v9 = (_QWORD *)(*(_QWORD *)v5 + 24LL * *(_QWORD *)(v8 + 16));
          v10 = *v9;
          v29 = v9;
          *v9 = *(_QWORD *)(v5 + 24);
          v40 = v10;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
          *v29 = v40;
          return;
        case 9:
          v21 = (const __m128i *)(*(_QWORD *)v5 + 24LL * *(_QWORD *)(v8 + 16));
          v36 = (__m128i *)v21;
          v60 = _mm_loadu_si128(v21);
          v61 = v21[1].m128i_i64[0];
          v22 = *(_QWORD *)(v5 + 24);
          v23 = v21[1].m128i_i8[0];
          v21[1].m128i_i8[0] = 1;
          v21->m128i_i64[1] = v22;
          v47 = v23;
          std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs();
          v36->m128i_i64[0] = v60.m128i_i64[0];
          v24 = v60.m128i_i64[1];
          v36[1].m128i_i8[0] = v47;
          v36->m128i_i64[1] = v24;
          return;
        case 0xB:
          v25 = *(__int8 **)(v5 + 24);
          if ( v25 != *(__int8 **)(v5 + 40) )
          {
            v60.m128i_i8[0] = *v25;
            if ( !*(_QWORD *)(v8 + 32) )
              std::__throw_bad_function_call();
            v48 = (const __m128i **)v5;
            v37 = v8;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *))(v8 + 40))(v8 + 16, &v60) )
            {
              v60.m128i_i64[0] = *(_QWORD *)(v37 + 8);
              std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
                (__int64)(v48 + 12),
                &v60,
                v48);
            }
          }
          return;
        case 0xC:
          v11 = *(_QWORD *)(v5 + 24);
          if ( (v11 != *(_QWORD *)(v5 + 32) || (*(_BYTE *)(v5 + 136) & 0x20) == 0)
            && ((_BYTE)a2 == 1 || v11 == *(_QWORD *)(v5 + 40))
            && !*(_BYTE *)(v5 + 140) )
          {
            *(_BYTE *)(v5 + 140) = 1;
            std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
              *(__int64 **)(v5 + 64),
              (const __m128i **)v5);
          }
          return;
        default:
          return;
      }
      break;
    }
  }
}

