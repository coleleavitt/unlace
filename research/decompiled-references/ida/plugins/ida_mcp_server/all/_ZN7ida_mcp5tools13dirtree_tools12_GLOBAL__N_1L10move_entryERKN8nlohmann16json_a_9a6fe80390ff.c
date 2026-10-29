_QWORD *__fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::move_entry(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        int a21,
        int a22,
        char a23,
        char a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        char a30,
        int a31,
        char a32,
        char a33,
        int a34,
        char a35,
        char a36,
        int a37,
        int a38,
        __int64 a39)
{
  void *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  nlohmann::json_abi_v3_12_0::detail::type_error *v44; // r12
  const char *v45; // rbx
  std::runtime_error *exception; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v47; // r13
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // r15
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _BYTE *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 *v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v101; // rdx
  __int64 v102; // r15
  __int64 v103; // rbx
  __int64 v104; // r14
  size_t v105; // rdx
  int v106; // eax
  unsigned __int64 v107; // rbp
  unsigned __int64 v108; // r8
  size_t v109; // rdx
  int v110; // eax
  _BYTE *v111; // r14
  int v112; // [rsp+0h] [rbp-148h]
  __int64 v113; // [rsp+0h] [rbp-148h]
  __int64 v114; // [rsp+0h] [rbp-148h]
  int v115; // [rsp+0h] [rbp-148h]
  __int64 v116; // [rsp+0h] [rbp-148h]
  int v117; // [rsp+0h] [rbp-148h]
  __int64 v118; // [rsp+0h] [rbp-148h]
  int v119; // [rsp+0h] [rbp-148h]
  __int64 v120; // [rsp+0h] [rbp-148h]
  int v121; // [rsp+0h] [rbp-148h]
  char v122; // [rsp+8h] [rbp-140h]
  char v123; // [rsp+8h] [rbp-140h]
  int v124; // [rsp+8h] [rbp-140h]
  char v125; // [rsp+8h] [rbp-140h]
  int v126; // [rsp+8h] [rbp-140h]
  char v127; // [rsp+8h] [rbp-140h]
  int v128; // [rsp+8h] [rbp-140h]
  char v129; // [rsp+8h] [rbp-140h]
  int v130; // [rsp+8h] [rbp-140h]
  _QWORD *v131; // [rsp+8h] [rbp-140h]
  __int64 v132; // [rsp+10h] [rbp-138h]
  int v133; // [rsp+10h] [rbp-138h]
  int v134; // [rsp+10h] [rbp-138h]
  __int64 v135; // [rsp+10h] [rbp-138h]
  int v136; // [rsp+10h] [rbp-138h]
  int v137; // [rsp+10h] [rbp-138h]
  int v138; // [rsp+10h] [rbp-138h]
  __int64 v139; // [rsp+10h] [rbp-138h]
  int v140; // [rsp+10h] [rbp-138h]
  __int64 v141; // [rsp+10h] [rbp-138h]
  int v142; // [rsp+18h] [rbp-130h]
  int v143; // [rsp+18h] [rbp-130h]
  int v144; // [rsp+18h] [rbp-130h]
  char v145; // [rsp+18h] [rbp-130h]
  int v146; // [rsp+18h] [rbp-130h]
  int v147; // [rsp+18h] [rbp-130h]
  unsigned __int8 v148; // [rsp+1Fh] [rbp-129h]
  int v149; // [rsp+20h] [rbp-128h]
  int v150; // [rsp+20h] [rbp-128h]
  int v151; // [rsp+20h] [rbp-128h]
  int v152; // [rsp+20h] [rbp-128h]
  int v153; // [rsp+20h] [rbp-128h]
  int v154; // [rsp+28h] [rbp-120h]
  char v155; // [rsp+28h] [rbp-120h]
  int v156; // [rsp+28h] [rbp-120h]
  int v157; // [rsp+28h] [rbp-120h]
  char v158; // [rsp+28h] [rbp-120h]
  void *v159; // [rsp+28h] [rbp-120h]
  __int64 v160; // [rsp+30h] [rbp-118h]
  int v161; // [rsp+30h] [rbp-118h]
  __int64 v162; // [rsp+30h] [rbp-118h]
  int v163; // [rsp+30h] [rbp-118h]
  int v164; // [rsp+30h] [rbp-118h]
  void **v165; // [rsp+30h] [rbp-118h]
  int v166; // [rsp+38h] [rbp-110h]
  int v167; // [rsp+38h] [rbp-110h]
  int v168; // [rsp+38h] [rbp-110h]
  __m128i *v169; // [rsp+38h] [rbp-110h]
  int v170; // [rsp+40h] [rbp-108h]
  __int64 v171; // [rsp+40h] [rbp-108h]
  int v172; // [rsp+40h] [rbp-108h]
  int v173; // [rsp+40h] [rbp-108h]
  int v174; // [rsp+48h] [rbp-100h]
  int v175; // [rsp+48h] [rbp-100h]
  int v176; // [rsp+48h] [rbp-100h]
  void *v177[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v178[2]; // [rsp+60h] [rbp-E8h] BYREF
  char v179; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v180; // [rsp+78h] [rbp-D0h]
  char v181; // [rsp+88h] [rbp-C0h]
  __m128i v182; // [rsp+90h] [rbp-B8h]
  void *v183; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v184; // [rsp+A8h] [rbp-A0h] BYREF
  char v185; // [rsp+B8h] [rbp-90h]
  __int64 v186; // [rsp+C0h] [rbp-88h]
  __int64 v187; // [rsp+C8h] [rbp-80h]
  __m128i v188; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v189; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v190[12]; // [rsp+E8h] [rbp-60h] BYREF

  v190[4] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_54;
  v49 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v49 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_54;
  std::string::basic_string<std::allocator<char>>(v188.m128i_i64, "tree", v50, v51, v52, v53, v112, a1, v132);
  v57 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          (const void *)v188.m128i_i64[0],
          v188.m128i_u64[1],
          v54,
          v55,
          v56,
          v113,
          v122,
          v133,
          v142,
          v149,
          v154,
          v160);
  if ( (__int64 *)v188.m128i_i64[0] != &v189 )
    operator delete((void *)v188.m128i_i64[0], v189 + 1);
  if ( *(_BYTE *)v57 != 3 )
  {
LABEL_54:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing required parameter: tree");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1
    || (v58 = *(_QWORD *)(a2 + 8) + 8LL,
        v58 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>())
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   (__int64)"path",
                   v59,
                   v60,
                   v61,
                   v62,
                   v114,
                   v123,
                   v134,
                   v143,
                   v150,
                   v155,
                   v161,
                   v166,
                   v170,
                   v174,
                   (__int64)v177[0]) != 3 )
  {
    JUMPOUT(0x1164CC);
  }
  std::string::basic_string<std::allocator<char>>(v188.m128i_i64, "tree", v63, v64, v65, v66, v115, v124, v135);
  v70 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          (const void *)v188.m128i_i64[0],
          v188.m128i_u64[1],
          v67,
          v68,
          v69,
          v116,
          v125,
          v136,
          v144,
          v151,
          v156,
          v162);
  if ( (__int64 *)v188.m128i_i64[0] != &v189 )
    operator delete((void *)v188.m128i_i64[0], v189 + 1);
  BYTE8(v184) = 0;
  v183 = (char *)&v184 + 8;
  *(_QWORD *)&v184 = 0;
  if ( *(_BYTE *)v70 != 3 )
  {
    v47 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v47,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v47,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v71 = v70[1];
  std::string::_M_assign();
  v138 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
           &v183,
           v71,
           v72,
           v73,
           v74,
           v75,
           v117,
           v126,
           v137,
           v145,
           v152,
           v157,
           v163,
           v167,
           v171);
  if ( v183 != (char *)&v184 + 8 )
  {
    v71 = *((_QWORD *)&v184 + 1) + 1LL;
    operator delete(v183, *((_QWORD *)&v184 + 1) + 1LL);
  }
  v80 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   v71,
                   v76,
                   v77,
                   v78,
                   v79,
                   v118,
                   v127,
                   v138,
                   v146,
                   v153,
                   v158,
                   v164,
                   v168,
                   v172,
                   v175,
                   (__int64)v177[0]);
  LOBYTE(v178[0]) = 0;
  v177[1] = nullptr;
  v177[0] = v178;
  if ( *v80 != 3 )
    ida_mcp::tools::dirtree_tools::`anonymous namespace'::move_entry(
      a2,
      v71,
      v81,
      v82,
      v83,
      v84,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      a31,
      a32,
      a33,
      a34,
      a35,
      a36,
      a37,
      a38,
      a39);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v101 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v101 + 16) )
    {
      v165 = &v183;
      v102 = v101 + 8;
      v103 = *(_QWORD *)(v101 + 16);
      v104 = v101 + 8;
      v169 = &v188;
      do
      {
        while ( 1 )
        {
          v107 = *(_QWORD *)(v103 + 40);
          if ( !v107 )
            break;
          v105 = 6;
          if ( v107 <= 6 )
            v105 = *(_QWORD *)(v103 + 40);
          v106 = memcmp(*(const void **)(v103 + 32), "unlink", v105);
          if ( v106 || (v106 = v107 - 6, (__int64)(v107 - 6) <= 0x7FFFFFFF) )
          {
            if ( v106 < 0 )
              break;
          }
          v102 = v103;
          v103 = *(_QWORD *)(v103 + 16);
          if ( !v103 )
            goto LABEL_30;
        }
        v103 = *(_QWORD *)(v103 + 24);
      }
      while ( v103 );
LABEL_30:
      if ( v104 != v102 )
      {
        v108 = *(_QWORD *)(v102 + 40);
        if ( !v108 )
          goto LABEL_61;
        v109 = 6;
        v165 = *(void ***)(v102 + 40);
        if ( v108 <= 6 )
          v109 = *(_QWORD *)(v102 + 40);
        v110 = memcmp(*(const void **)(v102 + 32), "unlink", v109);
        if ( v110 || (v110 = (_DWORD)v165 - 6, (__int64)v165 - 6 <= 0x7FFFFFFF) )
        {
          if ( v110 <= 0 )
          {
LABEL_61:
            if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() == 4 )
            {
              v111 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              if ( *v111 != 4 )
              {
                v44 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                switch ( *v111 )
                {
                  case 0:
                    v45 = "null";
                    break;
                  case 1:
                    v45 = "object";
                    break;
                  case 2:
                    v45 = "array";
                    break;
                  case 3:
                    v45 = "string";
                    break;
                  case 4:
                    v45 = "boolean";
                    break;
                  case 8:
                    v45 = "binary";
                    break;
                  case 9:
                    v45 = "discarded";
                    break;
                  default:
                    v45 = "number";
                    break;
                }
                v188.m128i_i64[0] = (__int64)&v189;
                v188.m128i_i64[1] = 0;
                LOBYTE(v189) = 0;
                strlen(v45);
                std::string::reserve();
                std::string::append();
                std::string::append();
                nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                  v44,
                  302);
                std::string::_M_dispose();
                __cxa_throw(
                  v44,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)dirtree_link() )
  {
    v39 = __cxa_allocate_exception(0x10u);
    dirtree_errstr();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v183,
      "link/unlink failed: ",
      v40,
      v41,
      v42,
      v43,
      v119,
      v128,
      v139);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v39,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v179 = 0;
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v85, "path", v86, v87, v88, v89, v119, v128, v139);
  v180 = (unsigned __int64)v85;
  v94 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
          a2,
          (__int64)"path",
          v90,
          v91,
          v92,
          v93,
          v120,
          v129,
          v140,
          v147,
          (int)v177,
          (char)v178,
          (int)v165,
          (int)v169,
          v173,
          v176,
          (__int64)v177[0]);
  v181 = 0;
  v182 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v94);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v188,
    (const __m128i *)&v179);
  v189 = 0;
  LOBYTE(v183) = 0;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v183) = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "linked", v96, v97, v98, v99, v121, v130, v141);
  v185 = 4;
  v186 = v148;
  v187 = 0;
  v184 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v183);
  v190[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v131,
    &v188);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v177[0] != v159 )
    operator delete(v177[0], v178[0] + 1LL);
  return v131;
}

