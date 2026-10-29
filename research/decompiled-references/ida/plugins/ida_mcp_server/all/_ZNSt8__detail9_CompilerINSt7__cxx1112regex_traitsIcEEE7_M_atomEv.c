__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_atom(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __m128i v9; // xmm0
  __int64 inserted; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rax
  __m128i *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __m128 v28; // xmm0
  __m128 *v29; // rax
  __m128i v30; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+10h] [rbp-E8h]
  __m128 v32; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v35; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+60h] [rbp-98h] BYREF
  __m128i v37; // [rsp+70h] [rbp-88h] BYREF
  __m128i v38; // [rsp+80h] [rbp-78h] BYREF
  __m128i v39; // [rsp+90h] [rbp-68h] BYREF
  __m128i v40; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v1 = a1[38];
  v41 = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
    {
      v4 = *a1;
      if ( (*a1 & 1) != 0 )
      {
        if ( (v4 & 8) != 0 )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,true>();
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>();
      }
      else if ( (v4 & 8) != 0 )
      {
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>();
      }
      else
      {
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,false>();
      }
    }
    else
    {
      v2 = a1[38];
      switch ( v2 )
      {
        case 4:
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          v30.m128i_i64[0] = *((_QWORD *)a1 + 32);
          v6 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value();
          if ( (*(_BYTE *)(v30.m128i_i64[0] + 25) & 4) != 0 )
            std::__throw_regex_error();
          if ( (unsigned __int64)v6 >= *(_QWORD *)(v30.m128i_i64[0] + 40) )
            std::__throw_regex_error();
          v7 = *(_QWORD **)v30.m128i_i64[0];
          v8 = *(_QWORD **)(v30.m128i_i64[0] + 8);
          if ( *(_QWORD **)v30.m128i_i64[0] != v8 )
          {
            do
            {
              if ( v6 == *v7 )
                std::__throw_regex_error();
              ++v7;
            }
            while ( v8 != v7 );
          }
          *(_BYTE *)(v30.m128i_i64[0] + 48) = 1;
          v35.m128i_i32[0] = 3;
          v35.m128i_i64[1] = -1;
          v9 = _mm_load_si128(&v35);
          v36.m128i_i64[0] = v6;
          v38 = v9;
          v39 = _mm_load_si128(&v36);
          v40 = _mm_load_si128(&v37);
          inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state();
          v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
          if ( v38.m128i_i32[0] == 11 && v40.m128i_i64[0] )
          {
            v30 = v11;
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
            v11 = _mm_load_si128(&v30);
          }
          if ( v35.m128i_i32[0] == 11 && v37.m128i_i64[0] )
          {
            v30 = v11;
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
            v11 = _mm_load_si128(&v30);
          }
          v12 = *((_QWORD *)a1 + 32);
          v34 = v11;
          v33 = v12;
          std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
            (_QWORD *)a1 + 38,
            (const __m128i *)&v33);
          break;
        case 14:
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          v13 = *a1;
          if ( (*a1 & 1) != 0 )
          {
            if ( (v13 & 8) != 0 )
              std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>();
            else
              std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,false>();
          }
          else if ( (v13 & 8) != 0 )
          {
            std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,true>();
          }
          else
          {
            std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>();
          }
          break;
        case 6:
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          v14 = *((_QWORD **)a1 + 32);
          v38.m128i_i32[0] = 10;
          v38.m128i_i64[1] = -1;
          v15 = (__m128i *)v14[8];
          if ( v15 == (__m128i *)v14[9] )
          {
            v30.m128i_i64[0] = (__int64)v14;
            std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
            v14 = (_QWORD *)v30.m128i_i64[0];
            v16 = *(_QWORD *)(v30.m128i_i64[0] + 64);
          }
          else
          {
            *v15 = _mm_load_si128(&v38);
            v15[1] = _mm_load_si128(&v39);
            v15[2] = _mm_load_si128(&v40);
            v16 = v14[8] + 48LL;
            v14[8] = v16;
          }
          v17 = v16 - v14[7];
          if ( v17 > 4800000 )
            std::__throw_regex_error();
          if ( v38.m128i_i32[0] == 11 && v40.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
          v18 = *((_QWORD *)a1 + 32);
          std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction();
          if ( a1[38] != 8 )
            goto LABEL_47;
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
          v26 = *((_QWORD *)a1 + 46);
          *(_QWORD *)(*(_QWORD *)(v18 + 56) + v17 - 40) = v34.m128i_i64[0];
          v27 = *((_QWORD **)a1 + 44);
          v28 = _mm_loadh_ps((const double *)&v34.m128i_i64[1]);
          if ( v27 == (_QWORD *)(v26 - 24) )
          {
            v31 = v18;
            v32 = v28;
            std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
          }
          else
          {
            *v27 = v18;
            v29 = (__m128 *)(v27 + 3);
            v29[-1] = v28;
            *((_QWORD *)a1 + 44) = v29;
          }
          break;
        case 5:
          while ( 1 )
          {
            std::string::_M_assign();
            std::__detail::_Scanner<char>::_M_advance();
            v19 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin();
            v20 = *((_QWORD *)a1 + 32);
            v21 = v19;
            std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction();
            if ( a1[38] == 8 )
              break;
LABEL_47:
            std::__throw_regex_error();
          }
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
          *(_QWORD *)(*(_QWORD *)(v20 + 56) + 48 * v21 + 8) = v34.m128i_i64[0];
          v30.m128i_i64[0] = v34.m128i_i64[1];
          v22 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end();
          v23 = *((_QWORD *)a1 + 46) - 24LL;
          *(_QWORD *)(*(_QWORD *)(v20 + 56) + 48 * v34.m128i_i64[1] + 8) = v22;
          v24 = *((_QWORD **)a1 + 44);
          if ( v24 == (_QWORD *)v23 )
          {
            v33 = v20;
            v34.m128i_i64[0] = v21;
            v34.m128i_i64[1] = v22;
            std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
          }
          else
          {
            *v24 = v20;
            v25 = v24 + 3;
            *(v25 - 2) = v21;
            *(v25 - 1) = v22;
            *((_QWORD *)a1 + 44) = v25;
          }
          break;
        default:
          return std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression();
      }
    }
  }
  else
  {
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    v5 = *a1;
    if ( (*a1 & 0x10) != 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( (v5 & 8) != 0 )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,true>();
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,false>();
      }
      else if ( (v5 & 8) != 0 )
      {
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,true>();
      }
      else
      {
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,false>();
      }
    }
    else if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 8) != 0 )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>();
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,false>();
    }
    else if ( (v5 & 8) != 0 )
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,true>();
    }
    else
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>();
    }
  }
  return 1;
}

