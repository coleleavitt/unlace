__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan(
        __m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  int v3; // ebp
  unsigned __int64 v4; // rax
  int v5; // eax
  const char *v6; // rax
  __int64 result; // rax
  __m128i v8; // xmm0
  int v9; // ebp
  _BYTE *v10; // rax
  _BYTE *v11; // r13
  __int8 v12; // al
  int v13; // eax
  __m128 v14; // xmm4
  unsigned __int64 v15; // xmm4_8
  __int64 v16; // rax
  int v17; // eax
  unsigned __int8 *v18; // rax
  __int64 v19; // r8
  size_t v20; // r15
  __int64 v21; // r14
  unsigned __int64 v22; // r14
  _BYTE *v23; // rax
  void *v24; // r8
  _BYTE *v25; // r12
  __int64 v26; // r15
  __int64 v27; // r14
  _BYTE *v28; // rax
  _BYTE *v29; // r13
  unsigned __int64 v30; // rax
  unsigned __int8 *v31; // rax
  __int64 v32; // r8
  _BYTE *v33; // rdx
  __int64 v34; // r15
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  size_t v37; // rdx
  void *v38; // r8
  char *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // rbp
  _BYTE *v43; // rbp
  _BYTE *v44; // rbp
  __m128i v45; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+10h] [rbp-58h]
  _BYTE *srca; // [rsp+10h] [rbp-58h]
  void *srcb; // [rsp+10h] [rbp-58h]
  char *srcc; // [rsp+10h] [rbp-58h]
  void *v50; // [rsp+18h] [rbp-50h]
  void *v51; // [rsp+18h] [rbp-50h]
  _BYTE v52[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( !a1[2].m128i_i64[0] )
  {
    if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() == 239 )
    {
      if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() != 187
        || (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() != 191 )
      {
        v6 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
        goto LABEL_16;
      }
    }
    else
    {
      v1 = a1[2].m128i_i64[1];
      --a1[2].m128i_i64[0];
      a1[1].m128i_i8[8] = 1;
      if ( v1 )
      {
        a1[2].m128i_i64[1] = v1 - 1;
      }
      else
      {
        v41 = a1[3].m128i_i64[0];
        if ( v41 )
          a1[3].m128i_i64[0] = v41 - 1;
      }
      if ( a1[1].m128i_i32[1] != -1 )
        --a1[4].m128i_i64[0];
    }
  }
  v2 = 8388627;
  do
  {
    nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
    v3 = a1[1].m128i_i32[1];
    v4 = (unsigned int)(v3 - 9);
    if ( (unsigned int)v4 > 0x17 )
    {
      if ( !a1[1].m128i_i8[0] )
        goto LABEL_77;
LABEL_11:
      v45 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
LABEL_12:
      if ( v3 != 47 )
      {
LABEL_77:
        if ( v3 > 58 )
        {
          switch ( v3 )
          {
            case '[':
              return 8;
            case ']':
              return 10;
            case 'f':
              v42 = v52;
              qmemcpy(v52, "false", sizeof(v52));
              while ( v42[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() )
              {
                if ( &v52[4] == ++v42 )
                  return 2;
              }
              goto LABEL_83;
            case 'n':
              *(_DWORD *)v52 = 1819047278;
              v43 = v52;
              while ( v43[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() )
              {
                if ( ++v43 == &v52[3] )
                  return 3;
              }
              goto LABEL_83;
            case 't':
              *(_DWORD *)v52 = 1702195828;
              v44 = v52;
              break;
            case '{':
              return 9;
            case '}':
              return 11;
            default:
              goto LABEL_83;
          }
          while ( v44[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() )
          {
            if ( ++v44 == &v52[3] )
              return 1;
          }
          goto LABEL_83;
        }
        if ( v3 < -1 )
          goto LABEL_83;
LABEL_73:
        switch ( v3 )
        {
          case -1:
          case 0:
            result = 15;
            break;
          case 34:
            result = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan_string();
            break;
          case 44:
            result = 13;
            break;
          case 45:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
            result = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan_number();
            break;
          case 58:
            result = 12;
            break;
          default:
            goto LABEL_83;
        }
        return result;
      }
      v5 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
      if ( v5 == 42 )
      {
        do
        {
          while ( 1 )
          {
            v17 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
            if ( v17 <= 0 )
              break;
            if ( v17 == 42 )
            {
              v13 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
              v8 = _mm_loadu_si128(a1 + 2);
              if ( v13 == 47 )
                goto LABEL_49;
              v15 = _mm_movehl_ps(v14, (__m128)v8).m128_u64[0];
              a1[1].m128i_i8[8] = 1;
              a1[2].m128i_i64[0] = v8.m128i_i64[0] - 1;
              if ( v15 )
              {
                a1[2].m128i_i64[1] = v15 - 1;
              }
              else
              {
                v16 = a1[3].m128i_i64[0];
                if ( v16 )
                  a1[3].m128i_i64[0] = v16 - 1;
              }
              if ( a1[1].m128i_i32[1] != -1 )
                --a1[4].m128i_i64[0];
            }
          }
        }
        while ( v17 < -1 );
        v6 = "invalid comment; missing closing '*/'";
        goto LABEL_16;
      }
      if ( v5 != 47 )
      {
        v6 = "invalid comment; expecting '/' or '*' after '/'";
        goto LABEL_16;
      }
      while ( 1 )
      {
        v8 = _mm_add_epi64(_mm_loadu_si128(a1 + 2), v45);
        a1[2] = v8;
        if ( a1[1].m128i_i8[8] )
        {
          v9 = a1[1].m128i_i32[1];
          a1[1].m128i_i8[8] = 0;
          if ( v9 == -1 )
            goto LABEL_75;
          v10 = (_BYTE *)a1[4].m128i_i64[0];
          v11 = (_BYTE *)a1[4].m128i_i64[1];
          if ( v10 != v11 )
            goto LABEL_22;
        }
        else
        {
          v18 = (unsigned __int8 *)a1->m128i_i64[0];
          if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
          {
            a1[1].m128i_i32[1] = -1;
LABEL_75:
            v12 = 0;
            goto LABEL_50;
          }
          v9 = *v18;
          v11 = (_BYTE *)a1[4].m128i_i64[1];
          a1->m128i_i64[0] = (__int64)(v18 + 1);
          v10 = (_BYTE *)a1[4].m128i_i64[0];
          a1[1].m128i_i32[1] = v9;
          if ( v10 != v11 )
          {
LABEL_22:
            *v10 = v9;
            v9 = a1[1].m128i_i32[1];
            ++a1[4].m128i_i64[0];
            if ( v9 == 10 )
              goto LABEL_48;
            goto LABEL_23;
          }
        }
        v19 = a1[3].m128i_i64[1];
        v20 = (size_t)&v11[-v19];
        if ( &v11[-v19] == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
LABEL_114:
          std::__throw_length_error("vector::_M_realloc_append");
        v21 = 1;
        src = (void *)a1[3].m128i_i64[1];
        if ( v20 )
          v21 = (__int64)&v11[-v19];
        v22 = v20 + v21;
        if ( v22 > 0x7FFFFFFFFFFFFFFFLL )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        v23 = (_BYTE *)operator new(v22);
        v24 = src;
        v23[v20] = v9;
        v25 = v23;
        if ( v20 )
        {
          memcpy(v23, src, v20);
          v24 = src;
        }
        v26 = (__int64)&v25[v20 + 1];
        if ( v24 )
        {
          operator delete(v24, v11 - (_BYTE *)v24);
          v9 = a1[1].m128i_i32[1];
        }
        a1[3].m128i_i64[1] = (__int64)v25;
        a1[4].m128i_i64[0] = v26;
        a1[4].m128i_i64[1] = (__int64)&v25[v22];
        if ( v9 == 10 )
        {
LABEL_48:
          ++a1[3].m128i_i64[0];
          v8 = _mm_loadl_epi64(a1 + 2);
LABEL_49:
          v12 = a1[1].m128i_i8[8];
LABEL_50:
          v27 = 8388627;
          while ( 2 )
          {
            a1[2] = _mm_add_epi64(v8, v45);
            if ( v12 )
            {
              v3 = a1[1].m128i_i32[1];
              a1[1].m128i_i8[8] = 0;
              if ( v3 == -1 )
                goto LABEL_72;
              v28 = (_BYTE *)a1[4].m128i_i64[0];
              v29 = (_BYTE *)a1[4].m128i_i64[1];
              if ( v28 == v29 )
                goto LABEL_60;
            }
            else
            {
              v31 = (unsigned __int8 *)a1->m128i_i64[0];
              if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
              {
                a1[1].m128i_i32[1] = -1;
LABEL_72:
                v3 = -1;
                goto LABEL_73;
              }
              v3 = *v31;
              v29 = (_BYTE *)a1[4].m128i_i64[1];
              a1->m128i_i64[0] = (__int64)(v31 + 1);
              v28 = (_BYTE *)a1[4].m128i_i64[0];
              a1[1].m128i_i32[1] = v3;
              if ( v28 == v29 )
              {
LABEL_60:
                v32 = a1[3].m128i_i64[1];
                v33 = &v29[-v32];
                if ( &v29[-v32] == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
                  goto LABEL_114;
                v34 = 1;
                srca = &v29[-v32];
                if ( v33 )
                  v34 = (__int64)&v29[-v32];
                v50 = (void *)a1[3].m128i_i64[1];
                v35 = (unsigned __int64)&v33[v34];
                if ( v35 > 0x7FFFFFFFFFFFFFFFLL )
                  v35 = 0x7FFFFFFFFFFFFFFFLL;
                v36 = operator new(v35);
                v37 = (size_t)srca;
                v38 = v50;
                v39 = (char *)v36;
                srca[v36] = v3;
                if ( srca )
                {
                  v51 = srca;
                  srcb = v38;
                  memcpy((void *)v36, v38, v37);
                  v37 = (size_t)v51;
                  v38 = srcb;
                }
                v40 = (__int64)&v39[v37 + 1];
                if ( v38 )
                {
                  srcc = &v39[v37 + 1];
                  operator delete(v38, v29 - (_BYTE *)v38);
                  v3 = a1[1].m128i_i32[1];
                  v40 = (__int64)srcc;
                }
                a1[3].m128i_i64[1] = (__int64)v39;
                a1[4].m128i_i64[0] = v40;
                a1[4].m128i_i64[1] = (__int64)&v39[v35];
                if ( v3 == 10 )
                {
LABEL_70:
                  ++a1[3].m128i_i64[0];
                  a1[2].m128i_i64[1] = 0;
LABEL_56:
                  v8 = _mm_loadu_si128(a1 + 2);
                  v12 = a1[1].m128i_i8[8];
                  continue;
                }
LABEL_54:
                v30 = (unsigned int)(v3 - 9);
                if ( (unsigned int)v30 > 0x17 || !_bittest64(&v27, v30) )
                {
                  if ( a1[1].m128i_i8[0] )
                    goto LABEL_12;
                  goto LABEL_77;
                }
                goto LABEL_56;
              }
            }
            break;
          }
          *v28 = v3;
          v3 = a1[1].m128i_i32[1];
          ++a1[4].m128i_i64[0];
          if ( v3 == 10 )
            goto LABEL_70;
          goto LABEL_54;
        }
LABEL_23:
        if ( v9 > 0 )
        {
          if ( v9 == 13 )
            goto LABEL_25;
        }
        else if ( v9 >= -1 )
        {
LABEL_25:
          v8 = _mm_loadu_si128(a1 + 2);
          v12 = a1[1].m128i_i8[8];
          goto LABEL_50;
        }
      }
    }
  }
  while ( _bittest64(&v2, v4) );
  if ( a1[1].m128i_i8[0] )
    goto LABEL_11;
LABEL_83:
  v6 = "invalid literal";
LABEL_16:
  a1[7].m128i_i64[0] = (__int64)v6;
  return 14;
}

