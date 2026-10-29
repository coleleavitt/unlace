__int64 __fastcall ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixup_info(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  _BYTE *v14; // r12
  int *v15; // rax
  int *v16; // r14
  __int64 v17; // rbx
  std::runtime_error *v18; // rbx
  __int64 v19; // rax
  size_t v20; // rax
  unsigned int v21; // ebx
  char *v22; // rdx
  _QWORD *v23; // rax
  _OWORD *v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rbp
  __int64 v30; // rax
  __m128i si128; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rbp
  __int64 v38; // rax
  size_t v39; // rax
  unsigned int v40; // ebx
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  size_t v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 *v49; // rax
  void *v50; // r14
  __int64 *v51; // r12
  size_t v52; // rax
  size_t v53; // rcx
  __int64 v54; // rax
  size_t v55; // rax
  unsigned int v56; // r13d
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rcx
  size_t v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char *v67; // r15
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  unsigned int v73; // edi
  unsigned int v74; // edi
  unsigned int v75; // edi
  unsigned __int64 v76; // rdx
  char *v77; // rax
  char *v78; // r12
  unsigned int v79; // r13d
  unsigned int v80; // r13d
  unsigned int v81; // eax
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  char *v84; // rax
  char *v85; // r12
  unsigned int v86; // ebx
  unsigned int v87; // ebx
  unsigned int v88; // eax
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  char *v91; // rax
  char *v92; // r12
  unsigned int v93; // ebx
  unsigned int v94; // ebx
  unsigned int v95; // eax
  __int64 v96; // rcx
  unsigned __int64 v97; // r8
  char *v98; // rcx
  char *v99; // r9
  unsigned int v100; // edx
  unsigned int v101; // ecx
  __int64 v102; // rdi
  unsigned __int64 v103; // r8
  char *v104; // rcx
  char *v105; // r9
  unsigned int v106; // edx
  unsigned int v107; // ecx
  __int64 v108; // rdi
  unsigned __int64 v109; // r8
  char *v110; // rcx
  char *v111; // r9
  unsigned int v112; // edx
  unsigned int v113; // ecx
  __int64 v114; // rdi
  __int64 v116; // [rsp+138h] [rbp-398h]
  size_t v117; // [rsp+140h] [rbp-390h]
  __int64 v118; // [rsp+168h] [rbp-368h]
  int v119; // [rsp+170h] [rbp-360h]
  int v120; // [rsp+178h] [rbp-358h]
  int v121; // [rsp+180h] [rbp-350h]
  int v122; // [rsp+188h] [rbp-348h]
  char v123; // [rsp+190h] [rbp-340h]
  __int64 v124; // [rsp+198h] [rbp-338h]
  int v125; // [rsp+1A0h] [rbp-330h]
  __int64 v126; // [rsp+1A8h] [rbp-328h]
  size_t v127; // [rsp+1B0h] [rbp-320h]
  size_t v128; // [rsp+1B0h] [rbp-320h]
  size_t v129; // [rsp+1B0h] [rbp-320h]
  size_t v130; // [rsp+1B8h] [rbp-318h]
  _BYTE *v131; // [rsp+1D8h] [rbp-2F8h]
  __int64 v132; // [rsp+1E8h] [rbp-2E8h]
  void *v133; // [rsp+208h] [rbp-2C8h] BYREF
  size_t v134; // [rsp+210h] [rbp-2C0h]
  _QWORD v135[2]; // [rsp+218h] [rbp-2B8h] BYREF
  void *v136; // [rsp+228h] [rbp-2A8h] BYREF
  size_t v137; // [rsp+230h] [rbp-2A0h]
  _QWORD v138[2]; // [rsp+238h] [rbp-298h] BYREF
  char v139; // [rsp+248h] [rbp-288h] BYREF
  __int128 v140; // [rsp+250h] [rbp-280h] BYREF
  char v141; // [rsp+260h] [rbp-270h]
  __int128 v142; // [rsp+268h] [rbp-268h] BYREF
  char v143; // [rsp+278h] [rbp-258h] BYREF
  __int128 v144; // [rsp+280h] [rbp-250h] BYREF
  __int64 v145; // [rsp+290h] [rbp-240h]
  __int64 v146; // [rsp+298h] [rbp-238h]
  __int64 v147; // [rsp+2A0h] [rbp-230h]
  char v148; // [rsp+2A8h] [rbp-228h] BYREF
  __int128 v149; // [rsp+2B0h] [rbp-220h] BYREF
  char v150; // [rsp+2C0h] [rbp-210h]
  __int64 v151; // [rsp+2C8h] [rbp-208h]
  __int64 v152; // [rsp+2D0h] [rbp-200h]
  void *v153; // [rsp+2D8h] [rbp-1F8h] BYREF
  __int128 v154; // [rsp+2E0h] [rbp-1F0h] BYREF
  char v155; // [rsp+2F0h] [rbp-1E0h]
  __int128 v156; // [rsp+2F8h] [rbp-1D8h] BYREF
  char v157; // [rsp+308h] [rbp-1C8h] BYREF
  __int128 v158; // [rsp+310h] [rbp-1C0h] BYREF
  char v159; // [rsp+320h] [rbp-1B0h]
  __int128 v160; // [rsp+328h] [rbp-1A8h] BYREF
  char v161; // [rsp+338h] [rbp-198h] BYREF
  __int128 v162; // [rsp+340h] [rbp-190h]
  __int64 v163; // [rsp+350h] [rbp-180h]
  __int64 v164; // [rsp+358h] [rbp-178h]
  __int64 v165; // [rsp+360h] [rbp-170h]
  void *v166; // [rsp+368h] [rbp-168h] BYREF
  __int128 s2; // [rsp+370h] [rbp-160h] BYREF
  char v168; // [rsp+380h] [rbp-150h]
  __int128 v169; // [rsp+388h] [rbp-148h] BYREF
  _QWORD v170[2]; // [rsp+398h] [rbp-138h] BYREF
  __int64 v171; // [rsp+3A8h] [rbp-128h]
  _QWORD v172[2]; // [rsp+3B0h] [rbp-120h] BYREF
  __int64 v173; // [rsp+3C0h] [rbp-110h]
  _QWORD v174[2]; // [rsp+3C8h] [rbp-108h] BYREF
  __int64 v175; // [rsp+3D8h] [rbp-F8h]
  _QWORD v176[3]; // [rsp+3E0h] [rbp-F0h] BYREF
  _QWORD v177[3]; // [rsp+3F8h] [rbp-D8h] BYREF
  _QWORD v178[3]; // [rsp+410h] [rbp-C0h] BYREF
  _QWORD v179[3]; // [rsp+428h] [rbp-A8h] BYREF
  char v180[8]; // [rsp+440h] [rbp-90h] BYREF
  char v181[24]; // [rsp+448h] [rbp-88h] BYREF
  _BYTE v182[8]; // [rsp+460h] [rbp-70h]
  char s[40]; // [rsp+468h] [rbp-68h] BYREF
  unsigned __int64 v184; // [rsp+490h] [rbp-40h]

  v184 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v166 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = v4 + 8;
  if ( v5 )
  {
    v7 = v4 + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        if ( !v10 )
          break;
        v8 = 7;
        if ( v10 <= 7 )
          v8 = *(_QWORD *)(v5 + 40);
        v9 = memcmp(*(const void **)(v5 + 32), (char *)&s2 + 8, v8);
        if ( v9 || (v9 = v10 - 7, (__int64)(v10 - 7) <= 0x7FFFFFFF) )
        {
          if ( v9 < 0 )
            break;
        }
        v7 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_12;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v5 );
LABEL_12:
    if ( v6 != v7 )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        v12 = 7;
        if ( v11 <= 7 )
          v12 = *(_QWORD *)(v7 + 40);
        v13 = memcmp((char *)&s2 + 8, *(const void **)(v7 + 32), v12);
        if ( v13 || (v13 = 7 - v11, (__int64)(7 - v11) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v13 >= 0 )
            v6 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
    }
  }
  v166 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v6 + 64) != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v14 = v166;
  v15 = __errno_location();
  *v15 = 0;
  v16 = v15;
  v17 = __isoc23_strtoull();
  if ( v14 == v131 || *v131 || *v16 == 34 && v17 == -1 )
  {
    if ( v166 != (char *)&s2 + 8 )
      operator delete(v166, *((_QWORD *)&s2 + 1) + 1LL);
    v18 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v18, "Invalid address format");
    __cxa_throw(
      v18,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v166 != (char *)&s2 + 8 )
    operator delete(v166, *((_QWORD *)&s2 + 1) + 1LL);
  v132 = _mm_load_si128((const __m128i *)&xmmword_3E2220).m128i_i64[1];
  if ( !(unsigned __int8)get_fixup() )
  {
    *(_QWORD *)&v158 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v157 = 3;
    v19 = operator new(0x20u);
    *(_QWORD *)v19 = v19 + 16;
    strcpy((char *)(v19 + 16), "address");
    *(_QWORD *)(v19 + 8) = 7;
    v158 = (unsigned __int64)v19;
    qsnprintf();
    v153 = (char *)&v154 + 8;
    v20 = strlen(s);
    v130 = v20;
    v21 = v20;
    if ( v20 > 0xF )
    {
      v69 = (_QWORD *)std::string::_M_create();
      v153 = v69;
      *((_QWORD *)&v154 + 1) = v130;
    }
    else
    {
      if ( v20 == 1 )
      {
        BYTE8(v154) = s[0];
        goto LABEL_34;
      }
      if ( !v20 )
      {
LABEL_34:
        v22 = (char *)&v154 + 8;
LABEL_35:
        *(_QWORD *)&v154 = v20;
        v22[v20] = 0;
        v159 = 0;
        *(_QWORD *)&v160 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v159 = 3;
        v23 = (_QWORD *)operator new(0x20u);
        v24 = v153;
        v25 = v23 + 2;
        v26 = v154;
        *v23 = v23 + 2;
        if ( v24 == (__int128 *)((char *)&v154 + 8) )
        {
          v73 = v26 + 1;
          if ( (unsigned int)(v26 + 1) >= 8 )
          {
            v23[2] = *((_QWORD *)&v154 + 1);
            *(_QWORD *)((char *)v25 + v73 - 8) = *(_QWORD *)((char *)&v154 + v73);
            v109 = (unsigned __int64)(v23 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v110 = (char *)v25 - v109;
            v111 = (char *)((char *)&v154 + 8 - v110);
            if ( (((_DWORD)v110 + v73) & 0xFFFFFFF8) >= 8 )
            {
              v112 = ((_DWORD)v110 + v73) & 0xFFFFFFF8;
              v113 = 0;
              do
              {
                v114 = v113;
                v113 += 8;
                *(_QWORD *)(v109 + v114) = *(_QWORD *)&v111[v114];
              }
              while ( v113 < v112 );
            }
          }
          else if ( (v73 & 4) != 0 )
          {
            *((_DWORD *)v23 + 4) = DWORD2(v154);
            *(_DWORD *)((char *)v25 + v73 - 4) = *(_DWORD *)((char *)&v154 + v73 + 4);
          }
          else if ( (_DWORD)v26 != -1 )
          {
            *((_BYTE *)v23 + 16) = BYTE8(v154);
            if ( (v73 & 2) != 0 )
              *(_WORD *)((char *)v25 + v73 - 2) = *(_WORD *)((char *)&v154 + v73 + 6);
          }
        }
        else
        {
          *v23 = v24;
          v23[2] = *((_QWORD *)&v154 + 1);
        }
        v23[1] = v26;
        v153 = (char *)&v154 + 8;
        *(_QWORD *)&v154 = 0;
        BYTE8(v154) = 0;
        v160 = (unsigned __int64)v23;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v170,
          (const __m128i *)&v157);
        v171 = 0;
        v161 = 0;
        *(_QWORD *)&v162 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v161 = 3;
        v27 = operator new(0x20u);
        *(_QWORD *)v27 = v27 + 16;
        strcpy((char *)(v27 + 16), "has_fixup");
        *(_QWORD *)(v27 + 8) = 9;
        v163 = 4;
        v164 = 0;
        v165 = 0;
        v162 = (unsigned __int64)v27;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v172,
          (const __m128i *)&v161);
        v173 = 0;
        LOBYTE(v166) = 0;
        *(_QWORD *)&s2 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v166) = 3;
        v28 = operator new(0x20u);
        *(_DWORD *)(v28 + 16) = 1869771365;
        *(_QWORD *)v28 = v28 + 16;
        *(_BYTE *)(v28 + 20) = 114;
        *(_QWORD *)(v28 + 8) = 5;
        *(_BYTE *)(v28 + 21) = 0;
        v168 = 0;
        *(_QWORD *)&v169 = 0;
        s2 = (unsigned __int64)v28;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v168 = 3;
        v29 = (__int64 *)operator new(0x20u);
        *v29 = (__int64)(v29 + 2);
        v30 = std::string::_M_create();
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E2230);
        *v29 = v30;
        v29[2] = 31;
        *(__m128i *)v30 = si128;
        *(__m128i *)(v30 + 15) = _mm_load_si128((const __m128i *)&xmmword_3E2240);
        v32 = *v29;
        v29[1] = 31;
        *(_BYTE *)(v32 + 31) = 0;
        v169 = (unsigned __int64)v29;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v174,
          (const __m128i *)&v166);
        v175 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          a1,
          (__int64)v170,
          3,
          v33,
          v34,
          v35,
          (int)a1,
          (__int64)&v158,
          (int)&v160,
          (int)&v153,
          (int)&v157,
          (int)&v169,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124,
          v125,
          v126);
        v36 = v176;
        do
        {
          v36 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v36 != v170 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v153 != (char *)&v154 + 8 )
          operator delete(v153, *((_QWORD *)&v154 + 1) + 1LL);
        return v116;
      }
      v69 = (_QWORD *)&v154 + 1;
    }
    if ( v21 >= 8 )
    {
      *v69 = *(_QWORD *)s;
      *(_QWORD *)((char *)v69 + v21 - 8) = *(_QWORD *)&v182[v21];
      v90 = (unsigned __int64)(v69 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v91 = (char *)v69 - v90;
      v92 = (char *)(s - v91);
      v93 = ((_DWORD)v91 + v21) & 0xFFFFFFF8;
      if ( v93 >= 8 )
      {
        v94 = v93 & 0xFFFFFFF8;
        v95 = 0;
        do
        {
          v96 = v95;
          v95 += 8;
          *(_QWORD *)(v90 + v96) = *(_QWORD *)&v92[v96];
        }
        while ( v95 < v94 );
      }
    }
    else if ( (v21 & 4) != 0 )
    {
      *(_DWORD *)v69 = *(_DWORD *)s;
      *(_DWORD *)((char *)v69 + v21 - 4) = *(_DWORD *)&v182[v21 + 4];
    }
    else if ( v21 )
    {
      *(_BYTE *)v69 = s[0];
      if ( (v21 & 2) != 0 )
        *(_WORD *)((char *)v69 + v21 - 2) = *(_WORD *)&v182[v21 + 6];
    }
    v20 = v130;
    v22 = (char *)v153;
    goto LABEL_35;
  }
  get_fixup_desc();
  *(_QWORD *)&v140 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v139 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "address");
  *(_QWORD *)(v38 + 8) = 7;
  v140 = (unsigned __int64)v38;
  qsnprintf();
  v133 = v135;
  v39 = strlen(v181);
  v127 = v39;
  v40 = v39;
  if ( v39 > 0xF )
  {
    v68 = (_QWORD *)std::string::_M_create();
    v133 = v68;
    v135[0] = v127;
  }
  else
  {
    if ( v39 == 1 )
    {
      LOBYTE(v135[0]) = v181[0];
      goto LABEL_46;
    }
    if ( !v39 )
    {
LABEL_46:
      v41 = v135;
      goto LABEL_47;
    }
    v68 = v135;
  }
  if ( v40 >= 8 )
  {
    *v68 = *(_QWORD *)v181;
    *(_QWORD *)((char *)v68 + v40 - 8) = *(_QWORD *)&v180[v40];
    v83 = (unsigned __int64)(v68 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v84 = (char *)v68 - v83;
    v85 = (char *)(v181 - v84);
    v86 = ((_DWORD)v84 + v40) & 0xFFFFFFF8;
    if ( v86 >= 8 )
    {
      v87 = v86 & 0xFFFFFFF8;
      v88 = 0;
      do
      {
        v89 = v88;
        v88 += 8;
        *(_QWORD *)(v83 + v89) = *(_QWORD *)&v85[v89];
      }
      while ( v88 < v87 );
    }
  }
  else if ( (v40 & 4) != 0 )
  {
    *(_DWORD *)v68 = *(_DWORD *)v181;
    *(_DWORD *)((char *)v68 + v40 - 4) = *(_DWORD *)&v180[v40 + 4];
  }
  else if ( v40 )
  {
    *(_BYTE *)v68 = v181[0];
    if ( (v40 & 2) != 0 )
      *(_WORD *)((char *)v68 + v40 - 2) = *(_WORD *)&v180[v40 + 6];
  }
  v39 = v127;
  v41 = v133;
LABEL_47:
  v134 = v39;
  *((_BYTE *)v41 + v39) = 0;
  v141 = 0;
  *(_QWORD *)&v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v141 = 3;
  v42 = (_QWORD *)operator new(0x20u);
  v43 = v133;
  v44 = v42 + 2;
  v45 = v134;
  *v42 = v42 + 2;
  if ( v43 == v135 )
  {
    v74 = v45 + 1;
    if ( (unsigned int)(v45 + 1) >= 8 )
    {
      v42[2] = v135[0];
      *(_QWORD *)((char *)v44 + v74 - 8) = *(_QWORD *)((char *)&v135[-1] + v74);
      v103 = (unsigned __int64)(v42 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v104 = (char *)v44 - v103;
      v105 = (char *)((char *)v135 - v104);
      if ( (((_DWORD)v104 + v74) & 0xFFFFFFF8) >= 8 )
      {
        v106 = ((_DWORD)v104 + v74) & 0xFFFFFFF8;
        v107 = 0;
        do
        {
          v108 = v107;
          v107 += 8;
          *(_QWORD *)(v103 + v108) = *(_QWORD *)&v105[v108];
        }
        while ( v107 < v106 );
      }
    }
    else if ( (v74 & 4) != 0 )
    {
      *((_DWORD *)v42 + 4) = v135[0];
      *(_DWORD *)((char *)v44 + v74 - 4) = *(_DWORD *)((char *)&v134 + v74 + 4);
    }
    else if ( (_DWORD)v45 != -1 )
    {
      *((_BYTE *)v42 + 16) = v135[0];
      if ( (v74 & 2) != 0 )
        *(_WORD *)((char *)v44 + v74 - 2) = *(_WORD *)((char *)&v134 + v74 + 6);
    }
  }
  else
  {
    *v42 = v43;
    v42[2] = v135[0];
  }
  v42[1] = v45;
  v133 = v135;
  v134 = 0;
  LOBYTE(v135[0]) = 0;
  v142 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v170,
    (const __m128i *)&v139);
  v171 = 0;
  v143 = 0;
  *(_QWORD *)&v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)v46 = v46 + 16;
  strcpy((char *)(v46 + 16), "has_fixup");
  *(_QWORD *)(v46 + 8) = 9;
  v145 = 4;
  v146 = 1;
  v147 = 0;
  v144 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v172,
    (const __m128i *)&v143);
  v173 = 0;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v47 = operator new(0x20u);
  strcpy((char *)(v47 + 16), "type");
  *(_QWORD *)v47 = v47 + 16;
  *(_QWORD *)(v47 + 8) = 4;
  v150 = 6;
  v151 = 0;
  v152 = 0;
  v149 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    (const __m128i *)&v148);
  v175 = 0;
  LOBYTE(v153) = 0;
  *(_QWORD *)&v154 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v153) = 3;
  v48 = operator new(0x20u);
  *(_QWORD *)v48 = v48 + 16;
  strcpy((char *)(v48 + 16), "type_desc");
  *(_QWORD *)(v48 + 8) = 9;
  v154 = (unsigned __int64)v48;
  v155 = 0;
  *(_QWORD *)&v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v155 = 3;
  v49 = (__int64 *)operator new(0x20u);
  v50 = v49 + 2;
  v51 = v49;
  *v49 = (__int64)(v49 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v52 = strlen(_qstring<char>::c_str(void)const::nullstr);
  v128 = v52;
  v53 = v52;
  if ( v52 > 0xF )
  {
    v117 = v52;
    v71 = std::string::_M_create();
    *v51 = v71;
    v50 = (void *)v71;
    v53 = v117;
    v51[2] = v128;
  }
  else
  {
    if ( v52 == 1 )
    {
      *((_BYTE *)v51 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      goto LABEL_53;
    }
    if ( !v52 )
      goto LABEL_53;
  }
  memcpy(v50, _qstring<char>::c_str(void)const::nullstr, v53);
  v52 = v128;
  v50 = (void *)*v51;
LABEL_53:
  v51[1] = v52;
  *((_BYTE *)v50 + v52) = 0;
  v156 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v176,
    (const __m128i *)&v153);
  v176[2] = 0;
  v157 = 0;
  *(_QWORD *)&v158 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v54 = operator new(0x20u);
  strcpy((char *)(v54 + 16), "target");
  *(_QWORD *)v54 = v54 + 16;
  *(_QWORD *)(v54 + 8) = 6;
  v158 = (unsigned __int64)v54;
  qsnprintf();
  v136 = v138;
  v55 = strlen(s);
  v129 = v55;
  v56 = v55;
  if ( v55 > 0xF )
  {
    v72 = (_QWORD *)std::string::_M_create();
    v136 = v72;
    v138[0] = v129;
LABEL_92:
    if ( v56 >= 8 )
    {
      *v72 = *(_QWORD *)s;
      *(_QWORD *)((char *)v72 + v56 - 8) = *(_QWORD *)&v182[v56];
      v76 = (unsigned __int64)(v72 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v77 = (char *)v72 - v76;
      v78 = (char *)(s - v77);
      v79 = ((_DWORD)v77 + v56) & 0xFFFFFFF8;
      if ( v79 >= 8 )
      {
        v80 = v79 & 0xFFFFFFF8;
        v81 = 0;
        do
        {
          v82 = v81;
          v81 += 8;
          *(_QWORD *)(v76 + v82) = *(_QWORD *)&v78[v82];
        }
        while ( v81 < v80 );
      }
    }
    else if ( (v56 & 4) != 0 )
    {
      *(_DWORD *)v72 = *(_DWORD *)s;
      *(_DWORD *)((char *)v72 + v56 - 4) = *(_DWORD *)&v182[v56 + 4];
    }
    else if ( v56 )
    {
      *(_BYTE *)v72 = s[0];
      if ( (v56 & 2) != 0 )
        *(_WORD *)((char *)v72 + v56 - 2) = *(_WORD *)&v182[v56 + 6];
    }
    v55 = v129;
    v57 = v136;
    goto LABEL_57;
  }
  if ( v55 == 1 )
  {
    LOBYTE(v138[0]) = s[0];
    goto LABEL_56;
  }
  if ( v55 )
  {
    v72 = v138;
    goto LABEL_92;
  }
LABEL_56:
  v57 = v138;
LABEL_57:
  v137 = v55;
  *((_BYTE *)v57 + v55) = 0;
  v159 = 0;
  *(_QWORD *)&v160 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v159 = 3;
  v58 = (_QWORD *)operator new(0x20u);
  v59 = v136;
  v60 = v58 + 2;
  v61 = v137;
  *v58 = v58 + 2;
  if ( v59 == v138 )
  {
    v75 = v61 + 1;
    if ( (unsigned int)(v61 + 1) >= 8 )
    {
      v58[2] = v138[0];
      *(_QWORD *)((char *)v60 + v75 - 8) = *(_QWORD *)((char *)&v138[-1] + v75);
      v97 = (unsigned __int64)(v58 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v98 = (char *)v60 - v97;
      v99 = (char *)((char *)v138 - v98);
      if ( (((_DWORD)v98 + v75) & 0xFFFFFFF8) >= 8 )
      {
        v100 = ((_DWORD)v98 + v75) & 0xFFFFFFF8;
        v101 = 0;
        do
        {
          v102 = v101;
          v101 += 8;
          *(_QWORD *)(v97 + v102) = *(_QWORD *)&v99[v102];
        }
        while ( v101 < v100 );
      }
    }
    else if ( (v75 & 4) != 0 )
    {
      *((_DWORD *)v58 + 4) = v138[0];
      *(_DWORD *)((char *)v60 + v75 - 4) = *(_DWORD *)((char *)&v137 + v75 + 4);
    }
    else if ( (_DWORD)v61 != -1 )
    {
      *((_BYTE *)v58 + 16) = v138[0];
      if ( (v75 & 2) != 0 )
        *(_WORD *)((char *)v60 + v75 - 2) = *(_WORD *)((char *)&v137 + v75 + 6);
    }
  }
  else
  {
    *v58 = v59;
    v58[2] = v138[0];
  }
  v58[1] = v61;
  v136 = v138;
  v137 = 0;
  LOBYTE(v138[0]) = 0;
  v160 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v177,
    (const __m128i *)&v157);
  v177[2] = 0;
  v161 = 0;
  *(_QWORD *)&v162 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v62 = operator new(0x20u);
  *(_QWORD *)v62 = v62 + 16;
  strcpy((char *)(v62 + 16), "displacement");
  *(_QWORD *)(v62 + 8) = 12;
  LOBYTE(v163) = 5;
  v164 = 0;
  v165 = 0;
  v162 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v178,
    (const __m128i *)&v161);
  v178[2] = 0;
  LOBYTE(v166) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v166) = 3;
  v63 = operator new(0x20u);
  *(_QWORD *)v63 = v63 + 16;
  strcpy((char *)(v63 + 16), "base");
  *(_QWORD *)(v63 + 8) = 4;
  s2 = (unsigned __int64)v63;
  v70 = 0;
  if ( v132 != -1 )
    v70 = 16 * sel2para();
  v168 = 6;
  v169 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    (const __m128i *)&v166);
  v179[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v170,
    7,
    v64,
    v65,
    v66,
    (int)a1,
    (__int64)&v158,
    (int)&v160,
    (int)&v153,
    (int)&v157,
    (int)&v140,
    (__int64)&v142,
    (int)&v144,
    (int)&v149,
    (int)&v154,
    (int)&v156,
    (char)&v133,
    (__int64)&v136,
    (int)&v139,
    v126);
  v67 = v180;
  do
  {
    v67 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v67 != (char *)v170 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v136 != v138 )
    operator delete(v136, v138[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v133 != v135 )
    operator delete(v133, v135[0] + 1LL);
  return v116;
}

