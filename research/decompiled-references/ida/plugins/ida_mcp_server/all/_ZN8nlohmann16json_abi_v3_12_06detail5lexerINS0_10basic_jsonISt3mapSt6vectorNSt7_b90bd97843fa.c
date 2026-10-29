__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan(
        __m128i *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rcx
  char v12; // dl
  __m128i v13; // xmm0
  int v14; // ebp
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 *v17; // rax
  unsigned __int8 v18; // si
  int v19; // r14d
  __int8 v20; // cl
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rbp
  __int64 v25; // rax
  char v26; // cl
  __int32 v27; // esi
  int v28; // eax
  __m128i v29; // xmm0
  __m128 v30; // xmm1
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // r15
  unsigned __int8 v33; // r14
  __int32 v34; // ecx
  unsigned __int8 *v35; // rax
  unsigned __int8 *v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // r12
  signed __int64 v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // r15
  unsigned __int8 *v44; // rax
  signed __int64 v45; // rdx
  unsigned __int8 *v46; // r13
  __int64 v47; // rax
  unsigned __int8 *v48; // rsi
  unsigned __int8 *v49; // r8
  size_t v50; // r15
  __int64 v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int8 *v53; // rax
  unsigned __int8 *v54; // r8
  unsigned __int8 *v55; // r13
  __int64 v56; // r15
  unsigned __int8 *v57; // rax
  const char *v58; // rax
  __int64 result; // rax
  unsigned __int8 *v60; // rax
  unsigned __int8 *v61; // rax
  unsigned __int8 *v62; // r9
  _BYTE *v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // r12
  char *v66; // rax
  size_t v67; // rdx
  void *v68; // r9
  char *v69; // r13
  unsigned __int8 *v70; // r14
  unsigned __int8 *v71; // rax
  unsigned __int8 *v72; // rdx
  unsigned __int8 *v73; // rdx
  unsigned __int8 *v74; // rcx
  _BYTE *v75; // rbp
  _BYTE *v76; // rbp
  _BYTE *v77; // rbp
  unsigned __int8 *v78; // rsi
  __m128i n; // [rsp+0h] [rbp-78h]
  size_t na; // [rsp+0h] [rbp-78h]
  __int64 nd; // [rsp+0h] [rbp-78h]
  unsigned __int8 *nb; // [rsp+0h] [rbp-78h]
  _BYTE *nc; // [rsp+0h] [rbp-78h]
  void *ne; // [rsp+0h] [rbp-78h]
  __m128i v85; // [rsp+10h] [rbp-68h] BYREF
  __m128i *v86; // [rsp+20h] [rbp-58h]
  void *src; // [rsp+28h] [rbp-50h]
  _BYTE v88[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v89; // [rsp+38h] [rbp-40h]

  v9 = (unsigned __int8 *)a1[2].m128i_i64[0];
  v89 = __readfsqword(0x28u);
  if ( !v9 )
  {
    if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() != 239 )
    {
      v10 = (unsigned __int8 *)a1[2].m128i_i64[0];
      v11 = (unsigned __int8 *)a1[2].m128i_i64[1];
      a1[1].m128i_i8[8] = 1;
      v9 = v10 - 1;
      a1[2].m128i_i64[0] = (__int64)v9;
      if ( v11 )
      {
        a1[2].m128i_i64[1] = (__int64)--v11;
      }
      else
      {
        v73 = (unsigned __int8 *)a1[3].m128i_i64[0];
        if ( v73 )
          a1[3].m128i_i64[0] = (__int64)(v73 - 1);
      }
      if ( a1[1].m128i_i32[1] != -1 )
        --a1[4].m128i_i64[0];
      v12 = 1;
      goto LABEL_11;
    }
    if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() != 187
      || (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() != 191 )
    {
      v58 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
      goto LABEL_91;
    }
    v9 = (unsigned __int8 *)a1[2].m128i_i64[0];
  }
  v11 = (unsigned __int8 *)a1[2].m128i_i64[1];
  v12 = a1[1].m128i_i8[8];
LABEL_11:
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v11);
  n = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  while ( 1 )
  {
    a1[2] = _mm_add_epi64(v13, n);
    if ( v12 )
    {
      v14 = a1[1].m128i_i32[1];
      a1[1].m128i_i8[8] = 0;
      if ( v14 != -1 )
        goto LABEL_13;
      if ( !a1[1].m128i_i8[0] )
        goto LABEL_86;
LABEL_22:
      v14 = -1;
      goto LABEL_23;
    }
    v17 = (unsigned __int8 *)a1->m128i_i64[0];
    if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
    {
      a1[1].m128i_i32[1] = -1;
      if ( !a1[1].m128i_i8[0] )
        return 15;
      goto LABEL_22;
    }
    v14 = *v17;
    a1->m128i_i64[0] = (__int64)(v17 + 1);
    a1[1].m128i_i32[1] = v14;
LABEL_13:
    std::vector<char>::emplace_back<char>(&a1[3].m128i_i64[1], v14);
    v14 = a1[1].m128i_i32[1];
    if ( v14 == 10 )
    {
      ++a1[3].m128i_i64[0];
      a1[2].m128i_i64[1] = 0;
      goto LABEL_16;
    }
    v15 = (unsigned int)(v14 - 9);
    if ( (unsigned int)v15 > 0x17 )
      break;
    v16 = 8388627;
    if ( !_bittest64(&v16, v15) )
      break;
LABEL_16:
    v13 = _mm_loadu_si128(a1 + 2);
    v12 = a1[1].m128i_i8[8];
  }
  if ( !a1[1].m128i_i8[0] )
  {
LABEL_115:
    if ( v14 > 58 )
    {
      switch ( v14 )
      {
        case '[':
          return 8;
        case ']':
          return 10;
        case 'f':
          v75 = v88;
          qmemcpy(v88, "false", sizeof(v88));
          while ( v75[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() )
          {
            if ( &v88[4] == ++v75 )
              return 2;
          }
          goto LABEL_122;
        case 'n':
          *(_DWORD *)v88 = 1819047278;
          v76 = v88;
          while ( v76[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() )
          {
            if ( &v88[3] == ++v76 )
              return 3;
          }
          goto LABEL_122;
        case 't':
          *(_DWORD *)v88 = 1702195828;
          v77 = v88;
          break;
        case '{':
          return 9;
        case '}':
          return 11;
        default:
          goto LABEL_122;
      }
      while ( v77[1] == (unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get() )
      {
        if ( ++v77 == &v88[3] )
          return 1;
      }
      goto LABEL_122;
    }
    if ( v14 < -1 )
    {
LABEL_122:
      v58 = "invalid literal";
      goto LABEL_91;
    }
LABEL_86:
    switch ( v14 )
    {
      case -1:
      case 0:
        return 15;
      case 34:
        result = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan_string();
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
        result = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan_number();
        break;
      case 58:
        result = 12;
        break;
      default:
        goto LABEL_122;
    }
    return result;
  }
LABEL_23:
  v86 = a1 + 2;
  v85 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
LABEL_24:
  if ( v14 != 47 )
    goto LABEL_115;
  *v86 = _mm_add_epi64(_mm_loadu_si128(v86), v85);
  if ( a1[1].m128i_i8[8] )
  {
    a1[1].m128i_i8[8] = 0;
    v18 = 47;
    goto LABEL_27;
  }
  v57 = (unsigned __int8 *)a1->m128i_i64[0];
  if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
  {
    a1[1].m128i_i32[1] = -1;
    goto LABEL_90;
  }
  v18 = *v57;
  a1->m128i_i64[0] = (__int64)(v57 + 1);
  a1[1].m128i_i32[1] = v18;
LABEL_27:
  std::vector<char>::emplace_back<char>(&a1[3].m128i_i64[1], v18);
  v19 = a1[1].m128i_i32[1];
  if ( v19 == 10 )
  {
    ++a1[3].m128i_i64[0];
    a1[2].m128i_i64[1] = 0;
LABEL_90:
    v58 = "invalid comment; expecting '/' or '*' after '/'";
    goto LABEL_91;
  }
  if ( v19 != 42 )
  {
    if ( v19 != 47 )
      goto LABEL_90;
    while ( 1 )
    {
      v20 = a1[1].m128i_i8[8];
      v21 = a1[2].m128i_i64[0] + 1;
      v22 = a1[2].m128i_i64[1] + 1;
      a1[2].m128i_i64[0] = v21;
      a1[2].m128i_i64[1] = v22;
      if ( v20 )
      {
        v23 = (unsigned __int8 *)a1[4].m128i_i64[0];
        v24 = (unsigned __int8 *)a1[4].m128i_i64[1];
        a1[1].m128i_i8[8] = 0;
        if ( v23 != v24 )
          goto LABEL_32;
      }
      else
      {
        v48 = (unsigned __int8 *)a1->m128i_i64[0];
        if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
        {
          a1[1].m128i_i32[1] = -1;
          goto LABEL_55;
        }
        v19 = *v48;
        v23 = (unsigned __int8 *)a1[4].m128i_i64[0];
        v24 = (unsigned __int8 *)a1[4].m128i_i64[1];
        a1->m128i_i64[0] = (__int64)(v48 + 1);
        a1[1].m128i_i32[1] = v19;
        if ( v23 != v24 )
        {
LABEL_32:
          *v23 = v19;
          v19 = a1[1].m128i_i32[1];
          ++a1[4].m128i_i64[0];
          if ( v19 == 10 )
            goto LABEL_81;
          goto LABEL_33;
        }
      }
      v49 = (unsigned __int8 *)a1[3].m128i_i64[1];
      v50 = v24 - v49;
      if ( v24 - v49 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_165;
      v51 = 1;
      nb = (unsigned __int8 *)a1[3].m128i_i64[1];
      if ( v50 )
        v51 = v24 - v49;
      v52 = v51 + v50;
      if ( v51 + v50 > 0x7FFFFFFFFFFFFFFFLL )
        v52 = 0x7FFFFFFFFFFFFFFFLL;
      v53 = (unsigned __int8 *)operator new(v52);
      v54 = nb;
      v53[v50] = v19;
      v55 = v53;
      if ( v50 )
      {
        memcpy(v53, nb, v50);
        v54 = nb;
      }
      v56 = (__int64)&v55[v50 + 1];
      if ( v54 )
      {
        operator delete(v54, v24 - v54);
        v19 = a1[1].m128i_i32[1];
      }
      a1[3].m128i_i64[1] = (__int64)v55;
      a1[4].m128i_i64[0] = v56;
      a1[4].m128i_i64[1] = (__int64)&v55[v52];
      if ( v19 == 10 )
      {
LABEL_81:
        ++a1[3].m128i_i64[0];
        v21 = a1[2].m128i_i64[0];
        v22 = 0;
        v20 = a1[1].m128i_i8[8];
        goto LABEL_55;
      }
LABEL_33:
      if ( v19 > 0 )
      {
        if ( v19 == 13 )
          goto LABEL_53;
      }
      else if ( v19 >= -1 )
      {
        goto LABEL_53;
      }
    }
  }
  while ( 2 )
  {
    v25 = a1[2].m128i_i64[0];
    v26 = a1[1].m128i_i8[8];
    v22 = a1[2].m128i_i64[1];
LABEL_38:
    a1[2].m128i_i64[0] = v25 + 1;
    a1[2].m128i_i64[1] = v22 + 1;
    if ( v26 )
    {
      v27 = a1[1].m128i_i32[1];
      a1[1].m128i_i8[8] = 0;
      if ( v27 == -1 )
        goto LABEL_96;
LABEL_40:
      std::vector<char>::emplace_back<char>(&a1[3].m128i_i64[1], v27);
      v28 = a1[1].m128i_i32[1];
      if ( v28 == 10 )
      {
        ++a1[3].m128i_i64[0];
        a1[2].m128i_i64[1] = 0;
        continue;
      }
      if ( v28 <= 0 )
      {
        if ( v28 >= -1 )
          goto LABEL_96;
        continue;
      }
      if ( v28 != 42 )
        continue;
      v29 = _mm_loadu_si128(v86);
      v30 = (__m128)_mm_add_epi64(_mm_load_si128(&v85), v29);
      *v86 = (__m128i)v30;
      if ( a1[1].m128i_i8[8] )
      {
        v31 = (unsigned __int8 *)a1[4].m128i_i64[0];
        v32 = (unsigned __int8 *)a1[4].m128i_i64[1];
        a1[1].m128i_i8[8] = 0;
        v33 = 42;
        if ( v31 != v32 )
          goto LABEL_45;
LABEL_100:
        v62 = (unsigned __int8 *)a1[3].m128i_i64[1];
        v63 = (_BYTE *)(v32 - v62);
        if ( v32 - v62 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_165:
          std::__throw_length_error("vector::_M_realloc_append");
        v64 = 1;
        nc = (_BYTE *)(v32 - v62);
        if ( v63 )
          v64 = v32 - v62;
        src = (void *)a1[3].m128i_i64[1];
        v65 = (unsigned __int64)&v63[v64];
        if ( (unsigned __int64)&v63[v64] > 0x7FFFFFFFFFFFFFFFLL )
          v65 = 0x7FFFFFFFFFFFFFFFLL;
        v66 = (char *)operator new(v65);
        v67 = (size_t)nc;
        v68 = src;
        v69 = v66;
        nc[(_QWORD)v66] = v33;
        if ( nc )
        {
          src = nc;
          ne = v68;
          memcpy(v66, v68, v67);
          v68 = ne;
          v70 = (unsigned __int8 *)src + (_QWORD)v69 + 1;
          if ( ne )
LABEL_107:
            operator delete(v68, v32 - (_BYTE *)v68);
        }
        else
        {
          v70 = (unsigned __int8 *)(v66 + 1);
          if ( v68 )
            goto LABEL_107;
        }
        v34 = a1[1].m128i_i32[1];
        a1[3].m128i_i64[1] = (__int64)v69;
        a1[4].m128i_i64[0] = (__int64)v70;
        a1[4].m128i_i64[1] = (__int64)&v69[v65];
        if ( v34 == 10 )
        {
LABEL_109:
          ++a1[3].m128i_i64[0];
          v71 = (unsigned __int8 *)a1[2].m128i_i64[0];
          v72 = (unsigned __int8 *)a1[3].m128i_i64[0];
          a1[1].m128i_i8[8] = 1;
          v25 = (__int64)(v71 - 1);
          if ( v72 )
            a1[3].m128i_i64[0] = (__int64)(v72 - 1);
          v22 = 0;
LABEL_112:
          --a1[4].m128i_i64[0];
LABEL_113:
          v26 = 1;
          goto LABEL_38;
        }
      }
      else
      {
        v61 = (unsigned __int8 *)a1->m128i_i64[0];
        if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
        {
          a9 = _mm_movehl_ps(a9, v30);
          a1[1].m128i_i8[8] = 1;
          v25 = v29.m128i_i64[0];
          v22 = a9.m128_u64[0];
          a1[1].m128i_i32[1] = -1;
          a1[2].m128i_i64[0] = v29.m128i_i64[0];
          if ( a9.m128_u64[0] )
          {
            v22 = a9.m128_u64[0] - 1;
          }
          else
          {
            v74 = (unsigned __int8 *)a1[3].m128i_i64[0];
            if ( v74 )
              a1[3].m128i_i64[0] = (__int64)(v74 - 1);
          }
          goto LABEL_113;
        }
        v33 = *v61;
        v32 = (unsigned __int8 *)a1[4].m128i_i64[1];
        a1->m128i_i64[0] = (__int64)(v61 + 1);
        a1[1].m128i_i32[1] = v33;
        v31 = (unsigned __int8 *)a1[4].m128i_i64[0];
        if ( v31 == v32 )
          goto LABEL_100;
LABEL_45:
        *v31 = v33;
        v34 = a1[1].m128i_i32[1];
        ++a1[4].m128i_i64[0];
        if ( v34 == 10 )
          goto LABEL_109;
      }
      v21 = a1[2].m128i_i64[0];
      v22 = a1[2].m128i_i64[1];
      if ( v34 != 47 )
      {
        a1[1].m128i_i8[8] = 1;
        v25 = v21 - 1;
        if ( v22 )
        {
          --v22;
        }
        else
        {
          v78 = (unsigned __int8 *)a1[3].m128i_i64[0];
          if ( v78 )
            a1[3].m128i_i64[0] = (__int64)(v78 - 1);
        }
        if ( v34 != -1 )
          goto LABEL_112;
        goto LABEL_113;
      }
      while ( 2 )
      {
        v20 = a1[1].m128i_i8[8];
LABEL_55:
        a1[2].m128i_i64[0] = v21 + 1;
        a1[2].m128i_i64[1] = v22 + 1;
        if ( v20 )
        {
          v14 = a1[1].m128i_i32[1];
          a1[1].m128i_i8[8] = 0;
          if ( v14 == -1 )
            goto LABEL_85;
          v35 = (unsigned __int8 *)a1[4].m128i_i64[0];
          v36 = (unsigned __int8 *)a1[4].m128i_i64[1];
          if ( v35 == v36 )
            goto LABEL_58;
        }
        else
        {
          v39 = (unsigned __int8 *)a1->m128i_i64[0];
          if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
          {
            a1[1].m128i_i32[1] = -1;
LABEL_85:
            v14 = -1;
            goto LABEL_86;
          }
          v14 = *v39;
          v36 = (unsigned __int8 *)a1[4].m128i_i64[1];
          a1->m128i_i64[0] = (__int64)(v39 + 1);
          v35 = (unsigned __int8 *)a1[4].m128i_i64[0];
          a1[1].m128i_i32[1] = v14;
          if ( v35 == v36 )
          {
LABEL_58:
            v40 = (unsigned __int8 *)a1[3].m128i_i64[1];
            v41 = v36 - v40;
            if ( v36 - v40 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_165;
            v42 = 1;
            na = v36 - v40;
            if ( v41 )
              v42 = v36 - v40;
            v43 = v41 + v42;
            if ( v43 > 0x7FFFFFFFFFFFFFFFLL )
              v43 = 0x7FFFFFFFFFFFFFFFLL;
            v44 = (unsigned __int8 *)operator new(v43);
            v45 = v36 - v40;
            v46 = v44;
            v44[na] = v14;
            if ( na )
            {
              memcpy(v44, v40, na);
              v45 = v36 - v40;
            }
            v47 = (__int64)&v46[v45 + 1];
            if ( v40 )
            {
              nd = (__int64)&v46[v45 + 1];
              operator delete(v40, v36 - v40);
              v14 = a1[1].m128i_i32[1];
              v47 = nd;
            }
            a1[3].m128i_i64[1] = (__int64)v46;
            a1[4].m128i_i64[0] = v47;
            a1[4].m128i_i64[1] = (__int64)&v46[v43];
            if ( v14 == 10 )
            {
LABEL_68:
              ++a1[3].m128i_i64[0];
              a1[2].m128i_i64[1] = 0;
LABEL_53:
              v21 = a1[2].m128i_i64[0];
              v22 = a1[2].m128i_i64[1];
              continue;
            }
LABEL_51:
            v37 = (unsigned int)(v14 - 9);
            if ( (unsigned int)v37 > 0x17 || (v38 = 8388627, !_bittest64(&v38, v37)) )
            {
              if ( !a1[1].m128i_i8[0] )
                goto LABEL_115;
              goto LABEL_24;
            }
            goto LABEL_53;
          }
        }
        break;
      }
      *v35 = v14;
      v14 = a1[1].m128i_i32[1];
      ++a1[4].m128i_i64[0];
      if ( v14 == 10 )
        goto LABEL_68;
      goto LABEL_51;
    }
    break;
  }
  v60 = (unsigned __int8 *)a1->m128i_i64[0];
  if ( a1->m128i_i64[0] != a1->m128i_i64[1] )
  {
    v27 = *v60;
    a1->m128i_i64[0] = (__int64)(v60 + 1);
    a1[1].m128i_i32[1] = v27;
    goto LABEL_40;
  }
  a1[1].m128i_i32[1] = -1;
LABEL_96:
  v58 = "invalid comment; missing closing '*/'";
LABEL_91:
  a1[7].m128i_i64[0] = (__int64)v58;
  return 14;
}

