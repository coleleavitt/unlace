__int64 __fastcall ida_mcp::tools::search::search_disassembly(__int64 a1, __int64 a2)
{
  std::runtime_error *exception; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  size_t v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  size_t v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r13
  __int64 v17; // rbx
  __int128 *v18; // rax
  char v19; // r15
  unsigned __int64 v20; // rax
  __int64 func; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // rsi
  _BYTE *v27; // rax
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  size_t v32; // rax
  unsigned int v33; // r12d
  char *v34; // rdx
  _QWORD *v35; // rax
  _OWORD *v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  const char *v40; // r12
  __int128 *v41; // rax
  void *v42; // r13
  size_t v43; // rax
  size_t v44; // r14
  __int128 *v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // r12
  __int8 v48; // al
  __m128i v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // r13
  __int8 v55; // si
  __int64 v56; // rax
  void **v57; // r12
  __int64 *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _BYTE *v63; // r13
  unsigned __int64 v64; // r12
  _QWORD *v65; // rax
  _BYTE *v66; // rdi
  __int64 *v67; // rbx
  __m128i v68; // xmm0
  size_t v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned __int64 v82; // rax
  __int64 *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  char *v91; // rbx
  unsigned __int64 v92; // rax
  _BYTE *v94; // r14
  unsigned __int64 v95; // r13
  _QWORD *v96; // rax
  _BYTE *v97; // rdi
  size_t v98; // rdx
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int128 *v102; // rcx
  unsigned int v103; // edi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rdx
  char *v111; // rax
  char *v112; // rsi
  unsigned int v113; // r12d
  unsigned int v114; // r12d
  unsigned int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // r8
  char *v120; // rcx
  char *v121; // r9
  unsigned int v122; // edx
  unsigned int v123; // ecx
  __int64 v124; // rdi
  __int64 v125; // r14
  __int64 v126; // r12
  __int64 v127; // r13
  __int64 v128; // r14
  __int128 *v129; // r15
  size_t v130; // rdx
  int v131; // eax
  unsigned __int64 v132; // rbx
  __int128 *v133; // rcx
  unsigned __int64 v134; // r13
  size_t v135; // rax
  const void *v136; // rdi
  int v137; // eax
  __int128 *v138; // r15
  __int128 *v139; // r13
  size_t v140; // rdx
  int v141; // eax
  unsigned __int64 v142; // r14
  unsigned __int64 v143; // r12
  size_t v144; // rax
  int v145; // eax
  __int64 v146; // r12
  _BYTE *v147; // rax
  __m128i v148; // rax
  __int8 v149; // r15
  __int64 v150; // rax
  __int64 v151; // rax
  _BYTE *v152; // rax
  __m128i v153; // rax
  __int8 v154; // bl
  __int64 v155; // r14
  unsigned __int64 v156; // rdi
  _BYTE *v157; // rax
  char *v158; // r8
  unsigned int v159; // esi
  unsigned int v160; // eax
  __int64 v161; // rcx
  int v162; // eax
  char v163; // bl
  _QWORD *v164; // r12
  char v165; // bl
  _QWORD *v166; // r12
  __int8 v167; // r15
  __int64 v168; // rax
  __int8 v169; // si
  __int64 v170; // rdx
  __int64 v171; // r13
  __int64 v172; // rax
  __int8 v173; // si
  __int64 v174; // rdx
  __int8 v175; // r15
  __int64 v176; // rax
  __int8 v177; // si
  __int64 v178; // rdx
  __int64 v179; // r14
  __int64 v180; // rax
  __int8 v181; // si
  __int64 v182; // rdx
  char *v183; // [rsp+0h] [rbp-360h]
  int v184; // [rsp+0h] [rbp-360h]
  int v185; // [rsp+0h] [rbp-360h]
  int v186; // [rsp+0h] [rbp-360h]
  int v187; // [rsp+0h] [rbp-360h]
  _QWORD *v188; // [rsp+8h] [rbp-358h]
  int v189; // [rsp+8h] [rbp-358h]
  int v190; // [rsp+8h] [rbp-358h]
  int v191; // [rsp+8h] [rbp-358h]
  __int64 v192; // [rsp+8h] [rbp-358h]
  void *v193; // [rsp+8h] [rbp-358h]
  __int64 v194; // [rsp+10h] [rbp-350h]
  __int64 v195; // [rsp+10h] [rbp-350h]
  __int64 v196; // [rsp+10h] [rbp-350h]
  __int64 v197; // [rsp+10h] [rbp-350h]
  _QWORD *v198; // [rsp+10h] [rbp-350h]
  __int64 v199; // [rsp+10h] [rbp-350h]
  void **p_src; // [rsp+18h] [rbp-348h]
  int v201; // [rsp+18h] [rbp-348h]
  __int64 *v202; // [rsp+20h] [rbp-340h]
  int v203; // [rsp+28h] [rbp-338h]
  int v204; // [rsp+2Ch] [rbp-334h]
  int v205; // [rsp+2Ch] [rbp-334h]
  __int64 v206; // [rsp+30h] [rbp-330h]
  int first_of; // [rsp+38h] [rbp-328h]
  void **v208; // [rsp+48h] [rbp-318h]
  _QWORD *v209; // [rsp+50h] [rbp-310h]
  _QWORD *v210; // [rsp+50h] [rbp-310h]
  char v211; // [rsp+58h] [rbp-308h]
  __int64 v212; // [rsp+60h] [rbp-300h]
  int v213; // [rsp+68h] [rbp-2F8h]
  unsigned __int64 v214; // [rsp+70h] [rbp-2F0h]
  unsigned __int64 v215; // [rsp+70h] [rbp-2F0h]
  unsigned __int64 v216; // [rsp+78h] [rbp-2E8h]
  unsigned __int8 v217; // [rsp+96h] [rbp-2CAh]
  char v218; // [rsp+97h] [rbp-2C9h]
  __m128i v219; // [rsp+A0h] [rbp-2C0h] BYREF
  __int128 *v220; // [rsp+B0h] [rbp-2B0h]
  __int128 *text; // [rsp+B8h] [rbp-2A8h]
  unsigned __int64 v222; // [rsp+C8h] [rbp-298h]
  char v223; // [rsp+D0h] [rbp-290h] BYREF
  _QWORD *v224; // [rsp+D8h] [rbp-288h]
  __m128i v225; // [rsp+E0h] [rbp-280h] BYREF
  __int64 v226; // [rsp+F0h] [rbp-270h]
  __int128 v227; // [rsp+F8h] [rbp-268h]
  int v228[2]; // [rsp+110h] [rbp-250h] BYREF
  __int128 v229; // [rsp+118h] [rbp-248h]
  __m128i v230; // [rsp+130h] [rbp-230h] BYREF
  void *src; // [rsp+150h] [rbp-210h] BYREF
  unsigned __int64 v232; // [rsp+158h] [rbp-208h]
  _QWORD v233[2]; // [rsp+160h] [rbp-200h] BYREF
  void *v234; // [rsp+170h] [rbp-1F0h]
  __m128 v235; // [rsp+178h] [rbp-1E8h] BYREF
  void *v236; // [rsp+190h] [rbp-1D0h] BYREF
  __int128 v237; // [rsp+198h] [rbp-1C8h] BYREF
  char v238; // [rsp+1A8h] [rbp-1B8h]
  __m128i v239; // [rsp+1B0h] [rbp-1B0h]
  char v240; // [rsp+1C0h] [rbp-1A0h] BYREF
  __int128 v241; // [rsp+1C8h] [rbp-198h]
  char v242; // [rsp+1D8h] [rbp-188h]
  __int64 v243; // [rsp+1E0h] [rbp-180h]
  __int64 v244; // [rsp+1E8h] [rbp-178h]
  char v245; // [rsp+1F0h] [rbp-170h] BYREF
  __int128 v246; // [rsp+1F8h] [rbp-168h] BYREF
  char v247; // [rsp+208h] [rbp-158h]
  __int128 v248; // [rsp+210h] [rbp-150h] BYREF
  char v249; // [rsp+220h] [rbp-140h] BYREF
  __int128 v250; // [rsp+228h] [rbp-138h]
  char v251; // [rsp+238h] [rbp-128h]
  __int128 v252; // [rsp+240h] [rbp-120h] BYREF
  _BYTE *v253; // [rsp+250h] [rbp-110h] BYREF
  _OWORD v254[2]; // [rsp+258h] [rbp-108h] BYREF
  __int64 v255; // [rsp+278h] [rbp-E8h]
  void *v256; // [rsp+280h] [rbp-E0h] BYREF
  unsigned __int64 v257; // [rsp+288h] [rbp-D8h]
  unsigned __int64 v258; // [rsp+290h] [rbp-D0h] BYREF
  _QWORD v259[2]; // [rsp+298h] [rbp-C8h] BYREF
  __int64 v260; // [rsp+2A8h] [rbp-B8h]
  _QWORD v261[2]; // [rsp+2B0h] [rbp-B0h] BYREF
  __int64 v262; // [rsp+2C0h] [rbp-A0h]
  _QWORD v263[3]; // [rsp+2C8h] [rbp-98h] BYREF
  _QWORD v264[3]; // [rsp+2E0h] [rbp-80h] BYREF
  char v265[8]; // [rsp+2F8h] [rbp-68h] BYREF
  char s[40]; // [rsp+300h] [rbp-60h] BYREF
  unsigned __int64 v267; // [rsp+328h] [rbp-38h]

  v194 = a1;
  v267 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_275;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !v4 )
    goto LABEL_275;
  v5 = v3 + 8;
  v6 = v3 + 8;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 40);
      if ( !v9 )
        break;
      v7 = 7;
      if ( v9 <= 7 )
        v7 = *(_QWORD *)(v4 + 40);
      v8 = memcmp(*(const void **)(v4 + 32), "pattern", v7);
      if ( v8 || (v8 = v9 - 7, (__int64)(v9 - 7) <= 0x7FFFFFFF) )
      {
        if ( v8 < 0 )
          break;
      }
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_12;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_12:
  text = (__int128 *)a2;
  if ( v5 == v6
    || std::string::compare(*(void **)(v6 + 32), *(_QWORD *)(v6 + 40), "pattern") > 0
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_275:
    JUMPOUT(0x6C20B);
  }
  LOBYTE(v233[0]) = 0;
  v232 = 0;
  p_src = &src;
  v188 = v233;
  src = v233;
  HIBYTE(v203) = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  if ( HIBYTE(v203) != 3 )
    JUMPOUT(0x6C24C);
  std::string::_M_assign();
  v230.m128i_i32[0] = 100;
  v204 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  if ( *(_BYTE *)text != 1 )
    JUMPOUT(0x6C3C3);
  v10 = *((_QWORD *)text + 1);
  v11 = *(_QWORD *)(v10 + 16);
  if ( !v11 )
    goto LABEL_235;
  v12 = v10 + 8;
  v13 = v12;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v11 + 40);
      if ( !v16 )
        break;
      v14 = 16;
      if ( v16 <= 0x10 )
        v14 = *(_QWORD *)(v11 + 40);
      v15 = memcmp(*(const void **)(v11 + 32), "case_insensitive", v14);
      if ( v15 || (v15 = v16 - 16, (__int64)(v16 - 16) <= 0x7FFFFFFF) )
      {
        if ( v15 < 0 )
          break;
      }
      v13 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_27;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v11 );
LABEL_27:
  if ( v13 == v12 )
  {
LABEL_235:
    v217 = 0;
  }
  else
  {
    v217 = 0;
    if ( std::string::compare(*(void **)(v13 + 32), *(_QWORD *)(v13 + 40), "case_insensitive") <= 0 )
    {
      if ( *(_BYTE *)(v13 + 64) != 4 )
        JUMPOUT(0x6C924);
      v217 = *(_BYTE *)(v13 + 72);
    }
  }
  v17 = getinf();
  v216 = getinf();
  v18 = text;
  if ( *(_BYTE *)text == 1 )
  {
    v125 = *((_QWORD *)text + 1);
    v126 = *(_QWORD *)(v125 + 16);
    if ( v126 )
    {
      text = (__int128 *)v17;
      v127 = v126;
      v220 = v18;
      v128 = v125 + 8;
      v129 = (__int128 *)v128;
      do
      {
        while ( 1 )
        {
          v132 = *(_QWORD *)(v127 + 40);
          if ( !v132 )
            break;
          v130 = 13;
          if ( v132 <= 0xD )
            v130 = *(_QWORD *)(v127 + 40);
          v131 = memcmp(*(const void **)(v127 + 32), "start_address", v130);
          if ( v131 || (v131 = v132 - 13, (__int64)(v132 - 13) <= 0x7FFFFFFF) )
          {
            if ( v131 < 0 )
              break;
          }
          v128 = v127;
          v127 = *(_QWORD *)(v127 + 16);
          if ( !v127 )
            goto LABEL_161;
        }
        v127 = *(_QWORD *)(v127 + 24);
      }
      while ( v127 );
LABEL_161:
      v133 = v129;
      text = v220;
      if ( v129 != (__int128 *)v128 )
      {
        v134 = *(_QWORD *)(v128 + 40);
        if ( !v134 )
          goto LABEL_200;
        v135 = 13;
        v136 = *(const void **)(v128 + 32);
        v220 = v129;
        if ( v134 <= 0xD )
          v135 = v134;
        v137 = memcmp(v136, "start_address", v135);
        v133 = v220;
        if ( v137 || (v137 = v134 - 13, (__int64)(v134 - 13) <= 0x7FFFFFFF) )
        {
          if ( v137 <= 0 )
          {
LABEL_200:
            v152 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            *(_QWORD *)&v254[0] = 0;
            v253 = (char *)v254 + 8;
            BYTE8(v254[0]) = 0;
            if ( *v152 != 3 )
              JUMPOUT(0x6CB89);
            std::string::_M_assign();
            v153.m128i_i64[0] = ida_mcp::parse_ea(v253, *(unsigned __int64 *)&v254[0]);
            v154 = v153.m128i_i8[8];
            v230 = v153;
            std::string::_M_dispose();
            if ( !v154 )
              JUMPOUT(0x6C72D);
            if ( *(_BYTE *)text != 1 )
              goto LABEL_30;
            v155 = *((_QWORD *)text + 1);
            v126 = *(_QWORD *)(v155 + 16);
            if ( !v126 )
              goto LABEL_30;
            v133 = (__int128 *)(v155 + 8);
          }
        }
      }
      v138 = v133;
      v139 = v133;
      do
      {
        while ( 1 )
        {
          v142 = *(_QWORD *)(v126 + 40);
          if ( !v142 )
            break;
          v140 = 11;
          if ( v142 <= 0xB )
            v140 = *(_QWORD *)(v126 + 40);
          v141 = memcmp(*(const void **)(v126 + 32), "end_address", v140);
          if ( v141 || (v141 = v142 - 11, (__int64)(v142 - 11) <= 0x7FFFFFFF) )
          {
            if ( v141 < 0 )
              break;
          }
          v138 = (__int128 *)v126;
          v126 = *(_QWORD *)(v126 + 16);
          if ( !v126 )
            goto LABEL_177;
        }
        v126 = *(_QWORD *)(v126 + 24);
      }
      while ( v126 );
LABEL_177:
      if ( v138 != v139 )
      {
        v143 = *((_QWORD *)v138 + 5);
        if ( !v143 )
          goto LABEL_184;
        v144 = 11;
        if ( v143 <= 0xB )
          v144 = *((_QWORD *)v138 + 5);
        v145 = memcmp(*((const void **)v138 + 4), "end_address", v144);
        if ( v145 || (v146 = v143 - 11, v145 = v146, v146 <= 0x7FFFFFFF) )
        {
          if ( v145 <= 0 )
          {
LABEL_184:
            v147 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            *(_QWORD *)&v254[0] = 0;
            v253 = (char *)v254 + 8;
            BYTE8(v254[0]) = 0;
            if ( *v147 != 3 )
              ida_mcp::tools::search::search_disassembly();
            std::string::_M_assign();
            v148.m128i_i64[0] = ida_mcp::parse_ea(v253, *(unsigned __int64 *)&v254[0]);
            v149 = v148.m128i_i8[8];
            v230 = v148;
            std::string::_M_dispose();
            if ( !v149 )
            {
              exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
              std::runtime_error::runtime_error(exception, "Invalid end_address");
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::runtime_error,
                (void (*)(void *))&std::runtime_error::~runtime_error);
            }
            v216 = v230.m128i_i64[0];
          }
        }
      }
    }
  }
LABEL_30:
  v223 = 0;
  v224 = nullptr;
  v183 = &v223;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v19 = v223;
  v209 = v224;
  v218 = v223;
  first_of = std::string::find_first_of();
  if ( v19 == 1 )
  {
    v20 = v209[5];
    v214 = v204;
  }
  else
  {
    if ( v218 == 2 )
    {
      v214 = v204;
      goto LABEL_75;
    }
    v20 = v218 != 0;
    v214 = v204;
  }
  if ( v20 < v214 )
  {
    while ( 1 )
    {
      text = (__int128 *)find_text();
      if ( (unsigned __int64)text >= v216 )
        goto LABEL_76;
      v226 = 0;
      v227 = 0;
      *(_QWORD *)v228 = 0;
      v229 = 0;
      generate_disasm_line();
      tag_remove();
      func = get_func();
      v235.m128_u64[0] = 0;
      v234 = &v235.m128_u16[4];
      v235.m128_i8[8] = 0;
      if ( func )
        break;
LABEL_47:
      v245 = 0;
      *(_QWORD *)&v246 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v245 = 3;
      v31 = operator new(0x20u);
      strcpy((char *)(v31 + 16), "address");
      *(_QWORD *)v31 = v31 + 16;
      *(_QWORD *)(v31 + 8) = 7;
      v246 = (unsigned __int64)v31;
      qsnprintf();
      v236 = (char *)&v237 + 8;
      v32 = strlen(s);
      v230.m128i_i64[0] = v32;
      v33 = v32;
      if ( v32 > 0xF )
      {
        v100 = (_QWORD *)std::string::_M_create();
        v236 = v100;
        *((_QWORD *)&v237 + 1) = v230.m128i_i64[0];
      }
      else
      {
        if ( v32 == 1 )
        {
          BYTE8(v237) = s[0];
LABEL_50:
          v34 = (char *)&v237 + 8;
          goto LABEL_51;
        }
        if ( !v32 )
          goto LABEL_50;
        v100 = (_QWORD *)&v237 + 1;
      }
      if ( v33 >= 8 )
      {
        *v100 = *(_QWORD *)s;
        *(_QWORD *)((char *)v100 + v33 - 8) = *(_QWORD *)&v265[v33];
        v110 = (unsigned __int64)(v100 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v111 = (char *)v100 - v110;
        v112 = (char *)(s - v111);
        v113 = ((_DWORD)v111 + v33) & 0xFFFFFFF8;
        if ( v113 >= 8 )
        {
          v114 = v113 & 0xFFFFFFF8;
          v115 = 0;
          do
          {
            v116 = v115;
            v115 += 8;
            *(_QWORD *)(v110 + v116) = *(_QWORD *)&v112[v116];
          }
          while ( v115 < v114 );
        }
      }
      else if ( (v33 & 4) != 0 )
      {
        *(_DWORD *)v100 = *(_DWORD *)s;
        *(_DWORD *)((char *)v100 + v33 - 4) = *(_DWORD *)&v265[v33 + 4];
      }
      else if ( v33 )
      {
        *(_BYTE *)v100 = s[0];
        if ( (v33 & 2) != 0 )
          *(_WORD *)((char *)v100 + v33 - 2) = *(_WORD *)&v265[v33 + 6];
      }
      v32 = v230.m128i_i64[0];
      v34 = (char *)v236;
LABEL_51:
      *(_QWORD *)&v237 = v32;
      v34[v32] = 0;
      v247 = 0;
      *(_QWORD *)&v248 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v247 = 3;
      v35 = (_QWORD *)operator new(0x20u);
      v36 = v236;
      v37 = v35 + 2;
      v38 = v237;
      *v35 = v35 + 2;
      if ( v36 == (__int128 *)((char *)&v237 + 8) )
      {
        v103 = v38 + 1;
        if ( (unsigned int)(v38 + 1) >= 8 )
        {
          v35[2] = *((_QWORD *)&v237 + 1);
          *(_QWORD *)((char *)v37 + v103 - 8) = *(_QWORD *)((char *)&v237 + v103);
          v119 = (unsigned __int64)(v35 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v120 = (char *)v37 - v119;
          v121 = (char *)((char *)&v237 + 8 - v120);
          if ( (((_DWORD)v120 + v103) & 0xFFFFFFF8) >= 8 )
          {
            v122 = ((_DWORD)v120 + v103) & 0xFFFFFFF8;
            v123 = 0;
            do
            {
              v124 = v123;
              v123 += 8;
              *(_QWORD *)(v119 + v124) = *(_QWORD *)&v121[v124];
            }
            while ( v123 < v122 );
          }
        }
        else if ( (v103 & 4) != 0 )
        {
          *((_DWORD *)v35 + 4) = DWORD2(v237);
          *(_DWORD *)((char *)v37 + v103 - 4) = *(_DWORD *)((char *)&v237 + v103 + 4);
        }
        else if ( (_DWORD)v38 != -1 )
        {
          *((_BYTE *)v35 + 16) = BYTE8(v237);
          if ( (v103 & 2) != 0 )
            *(_WORD *)((char *)v37 + v103 - 2) = *(_WORD *)((char *)&v237 + v103 + 6);
        }
      }
      else
      {
        *v35 = v36;
        v35[2] = *((_QWORD *)&v237 + 1);
      }
      v35[1] = v38;
      v236 = (char *)&v237 + 8;
      *(_QWORD *)&v237 = 0;
      BYTE8(v237) = 0;
      v248 = (unsigned __int64)v35;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v256,
        (const __m128i *)&v245);
      v249 = 0;
      v258 = 0;
      *(_QWORD *)&v250 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v249 = 3;
      v39 = operator new(0x20u);
      strcpy((char *)(v39 + 16), "disassembly");
      *(_QWORD *)v39 = v39 + 16;
      *(_QWORD *)(v39 + 8) = 11;
      v250 = (unsigned __int64)v39;
      if ( (_QWORD)v229 )
        v40 = *(const char **)v228;
      else
        v40 = (const char *)&_qstring<char>::c_str(void)const::nullstr;
      v251 = 0;
      *(_QWORD *)&v252 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v251 = 3;
      v41 = (__int128 *)operator new(0x20u);
      v42 = v41 + 1;
      v220 = v41;
      *(_QWORD *)v41 = v41 + 1;
      if ( !v40 )
        JUMPOUT(0x6C7FD);
      v43 = strlen(v40);
      v230.m128i_i64[0] = v43;
      v44 = v43;
      if ( v43 > 0xF )
      {
        v101 = std::string::_M_create();
        v102 = v220;
        v42 = (void *)v101;
        *(_QWORD *)v220 = v101;
        *((_QWORD *)v102 + 2) = v230.m128i_i64[0];
      }
      else
      {
        if ( v43 == 1 )
        {
          *((_BYTE *)v220 + 16) = *v40;
          goto LABEL_59;
        }
        if ( !v43 )
          goto LABEL_59;
      }
      memcpy(v42, v40, v44);
      v43 = v230.m128i_i64[0];
      v42 = *(void **)v220;
LABEL_59:
      v45 = v220;
      *((_QWORD *)v220 + 1) = v43;
      *((_BYTE *)v42 + v43) = 0;
      v252 = (unsigned __int64)v45;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v259,
        (const __m128i *)&v249);
      LOBYTE(v253) = 0;
      v220 = v254;
      v260 = 0;
      *(_QWORD *)&v254[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v253) = 3;
      v46 = operator new(0x20u);
      *(_QWORD *)v46 = v46 + 16;
      strcpy((char *)(v46 + 16), "function");
      *(_QWORD *)(v46 + 8) = 8;
      v254[0] = (unsigned __int64)v46;
      if ( !v235.m128_u64[0] )
      {
        v47 = nullptr;
        v48 = 0;
        goto LABEL_61;
      }
      v225 = 0u;
      v202 = &v225.m128i_i64[1];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v94 = v234;
      v95 = v235.m128_u64[0];
      v96 = (_QWORD *)operator new(0x20u);
      v97 = v96 + 2;
      v222 = v95;
      v47 = v96;
      *v96 = v96 + 2;
      if ( v95 > 0xF )
      {
        v108 = std::string::_M_create();
        *v47 = v108;
        v97 = (_BYTE *)v108;
        v109 = v222;
        v47[2] = v222;
        v98 = v109 + 1;
        if ( !v109 )
        {
LABEL_123:
          *v97 = *v94;
          v99 = v222;
          goto LABEL_99;
        }
        v99 = -1;
        if ( !v98 )
          goto LABEL_99;
      }
      else
      {
        v98 = v95 + 1;
        if ( !v95 )
          goto LABEL_123;
      }
      memcpy(v97, v94, v98);
      v99 = v222;
LABEL_99:
      v47[1] = v99;
      v48 = 3;
LABEL_61:
      v225.m128i_i64[1] = (__int64)v47;
      v225.m128i_i8[0] = v48;
      v49 = _mm_load_si128(&v225);
      v255 = 0;
      v254[1] = v49;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v261,
        (const __m128i *)&v253);
      v219.m128i_i64[0] = (__int64)&v256;
      v230.m128i_i8[0] = 0;
      v262 = 0;
      v219.m128i_i64[1] = 3;
      v230.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v230,
        (__int64)&v256,
        3,
        v50,
        v51,
        v52,
        (int)v183,
        (__int64)v188,
        v194,
        (int)p_src,
        (int)v202,
        v203,
        (__int64)&v249,
        first_of,
        (int)&v245,
        (int)&v236,
        (int)v209,
        (char)&v252,
        (__int64)&v248,
        (int)&v246,
        v214);
      LODWORD(v202) = v230.m128i_i32[2];
      if ( v218 )
      {
        if ( v218 != 2 )
          JUMPOUT(0x6CA75);
        v117 = v209[1];
        if ( v209[2] != v117 )
        {
          v118 = v117 + 16;
          v55 = 0;
          *(__m128i *)(v118 - 16) = _mm_load_si128(&v230);
          v209[1] = v118;
          v56 = 0;
          goto LABEL_64;
        }
        v54 = v209;
      }
      else
      {
        v53 = operator new(0x18u);
        *(_QWORD *)(v53 + 16) = 0;
        v54 = (_QWORD *)v53;
        *(_OWORD *)v53 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v209 = v54;
      v55 = v230.m128i_i8[0];
      v56 = v230.m128i_i64[1];
LABEL_64:
      v230.m128i_i8[0] = v55;
      v57 = (void **)v263;
      v230.m128i_i64[1] = v56;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      do
      {
        v57 -= 3;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v57 != &v256 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v236 != (char *)&v237 + 8 )
        operator delete(v236, *((_QWORD *)&v237 + 1) + 1LL);
      if ( next_head() == -1 )
      {
        std::string::_M_dispose();
        if ( *(_QWORD *)v228 )
        {
          *(_QWORD *)&v229 = 0;
          qfree();
        }
        if ( v226 )
        {
          *(_QWORD *)&v227 = 0;
          qfree();
        }
        v218 = 2;
        goto LABEL_77;
      }
      if ( v234 != &v235.m128_u16[4] )
        operator delete(v234, v235.m128_u64[1] + 1);
      if ( *(_QWORD *)v228 )
      {
        *(_QWORD *)&v229 = 0;
        qfree();
      }
      if ( v226 )
      {
        *(_QWORD *)&v227 = 0;
        qfree();
      }
LABEL_75:
      v218 = 2;
      if ( (__int64)(v209[1] - *v209) >> 4 >= v214 )
        goto LABEL_76;
    }
    memset(&v230, 0, 24);
    if ( get_func_name() <= 0 )
    {
      qsnprintf();
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&v256,
        s,
        v104,
        v105,
        v106,
        v107,
        (int)v183,
        (int)v188,
        v194);
    }
    else
    {
      v26 = (const char *)v230.m128i_i64[0];
      if ( !v230.m128i_i64[1] )
        v26 = (const char *)&_qstring<char>::c_str(void)const::nullstr;
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&v256,
        v26,
        v22,
        v23,
        v24,
        v25,
        (int)v183,
        (int)v188,
        v194);
    }
    if ( v230.m128i_i64[0] )
    {
      v230.m128i_i64[1] = 0;
      qfree();
      v27 = v234;
      v28 = v234;
      if ( v234 != &v235.m128_u16[4] )
        goto LABEL_42;
    }
    else
    {
      v27 = v234;
      v28 = v234;
      if ( v234 != &v235.m128_u16[4] )
      {
LABEL_42:
        v29 = v257;
        if ( v256 != &v258 )
        {
          v30 = v235.m128_u64[1];
          v234 = v256;
          v235 = _mm_loadh_ps((const double *)&v258);
          if ( v27 )
          {
            v256 = v27;
            v258 = v30;
            goto LABEL_45;
          }
          goto LABEL_115;
        }
        goto LABEL_132;
      }
    }
    if ( v256 != &v258 )
    {
      v234 = v256;
      v235 = _mm_loadh_ps((const double *)&v258);
LABEL_115:
      v256 = &v258;
      v28 = &v258;
      goto LABEL_45;
    }
    v29 = v257;
LABEL_132:
    if ( v29 )
    {
      if ( v29 == 1 )
      {
        *v27 = v258;
        v27 = v234;
        v29 = v257;
        goto LABEL_139;
      }
      if ( (unsigned int)v29 >= 8 )
      {
        *(_QWORD *)v27 = v258;
        *(_QWORD *)&v27[(unsigned int)v29 - 8] = *(unsigned __int64 *)((char *)&v257 + (unsigned int)v29);
        v156 = (unsigned __int64)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v157 = &v27[-v156];
        v158 = (char *)((char *)&v258 - v157);
        if ( (((_DWORD)v157 + (_DWORD)v29) & 0xFFFFFFF8) >= 8 )
        {
          v159 = ((_DWORD)v157 + v29) & 0xFFFFFFF8;
          v160 = 0;
          do
          {
            v161 = v160;
            v160 += 8;
            *(_QWORD *)(v156 + v161) = *(_QWORD *)&v158[v161];
          }
          while ( v160 < v159 );
        }
LABEL_138:
        v27 = v234;
        v29 = v257;
        goto LABEL_139;
      }
      if ( (v29 & 4) != 0 )
      {
        *(_DWORD *)v27 = v258;
        *(_DWORD *)&v27[(unsigned int)v29 - 4] = *(_DWORD *)((char *)&v257 + (unsigned int)v29 + 4);
        v27 = v234;
        v29 = v257;
        goto LABEL_139;
      }
      if ( (_DWORD)v29 )
      {
        *v27 = v258;
        if ( (v29 & 2) != 0 )
        {
          *(_WORD *)&v27[(unsigned int)v29 - 2] = *(_WORD *)((char *)&v257 + (unsigned int)v29 + 6);
          v27 = v234;
          v29 = v257;
          goto LABEL_139;
        }
        goto LABEL_138;
      }
    }
LABEL_139:
    v235.m128_u64[0] = v29;
    v27[v29] = 0;
    v28 = v256;
LABEL_45:
    *v28 = 0;
    if ( v256 != &v258 )
      operator delete(v256, v258 + 1);
    goto LABEL_47;
  }
LABEL_76:
  v208 = &v236;
LABEL_77:
  LOBYTE(v236) = 0;
  text = &v237;
  *(_QWORD *)&v237 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v236) = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v58, "pattern", v59, v60, v61, v62, (int)v183, (int)v188, v194);
  v238 = 0;
  v237 = (unsigned __int64)v58;
  v239.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = 3;
  v63 = src;
  v64 = v232;
  v65 = (_QWORD *)operator new(0x20u);
  v66 = v65 + 2;
  v230.m128i_i64[0] = v64;
  v67 = v65;
  *v65 = v65 + 2;
  if ( v64 <= 0xF )
  {
    v68 = (__m128i)(unsigned __int64)v65;
    v69 = v64 + 1;
    if ( v64 )
    {
LABEL_79:
      v219 = v68;
      memcpy(v66, v63, v69);
      v70 = v230.m128i_i64[0];
      v68 = _mm_load_si128(&v219);
      goto LABEL_80;
    }
    goto LABEL_150;
  }
  v150 = std::string::_M_create();
  *v67 = v150;
  v66 = (_BYTE *)v150;
  v151 = v230.m128i_i64[0];
  v68 = (__m128i)(unsigned __int64)v67;
  v67[2] = v230.m128i_i64[0];
  v69 = v151 + 1;
  if ( !v151 )
  {
LABEL_150:
    *v66 = *v63;
    v70 = v230.m128i_i64[0];
    goto LABEL_80;
  }
  v70 = -1;
  if ( v69 )
    goto LABEL_79;
LABEL_80:
  v67[1] = v70;
  v239 = v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v256,
    (const __m128i *)v208);
  v240 = 0;
  v258 = 0;
  *(_QWORD *)&v241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v240 = 3;
  v71 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v71, "case_insensitive", v72, v73, v74, v75, v184, v189, v195);
  v242 = 4;
  v243 = v217;
  v244 = 0;
  v241 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v259,
    (const __m128i *)&v240);
  v260 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>();
  *((_QWORD *)&v246 + 1) = 0;
  if ( v218 == 1 )
  {
    v76 = v209[5];
  }
  else if ( v218 == 2 )
  {
    v76 = (__int64)(v209[1] - *v209) >> 4;
  }
  else
  {
    v76 = v218 != 0;
  }
  v247 = 6;
  v248 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v261,
    (const __m128i *)&v245);
  v249 = 0;
  v262 = 0;
  *(_QWORD *)&v250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v249 = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "truncated", v78, v79, v80, v81, v185, v190, v196);
  v250 = (unsigned __int64)v77;
  if ( v218 == 1 )
  {
    v82 = v209[5];
  }
  else if ( v218 == 2 )
  {
    v82 = (__int64)(v209[1] - *v209) >> 4;
  }
  else
  {
    v82 = v218 != 0;
  }
  v251 = 4;
  v252 = v82 >= v214;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v263,
    (const __m128i *)&v249);
  LOBYTE(v253) = 0;
  v220 = v254;
  v263[2] = 0;
  *(_QWORD *)&v254[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v253) = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "results", v84, v85, v86, v87, v186, v191, v197);
  v254[0] = (unsigned __int64)v83;
  v223 = v218;
  v224 = v209;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v255 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v264,
    (const __m128i *)&v253);
  v264[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (__int64)&v256,
    5,
    v88,
    v89,
    v90,
    v187,
    v192,
    (int)v198,
    (int)p_src,
    (int)v202,
    v203,
    v206,
    first_of,
    (int)&v245,
    (int)v208,
    (int)v209,
    v211,
    v212,
    v213,
    v214);
  v91 = v265;
  do
  {
    v91 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v91 != (char *)&v256 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (unsigned int)getinf() != 25 )
    goto LABEL_93;
  if ( v218 == 1 )
    v92 = v210[5];
  else
    v92 = v218 == 2 ? (__int64)(v210[1] - *v210) >> 4 : v218 != 0;
  if ( v92 >= v215 )
    goto LABEL_93;
  if ( std::string::find() != -1
    || std::string::find() != -1
    || std::string::find() != -1
    || std::string::find() != -1
    || std::string::find() != -1
    || std::string::find() != -1 )
  {
    if ( v218 == 1 )
    {
      v162 = v205 - *((_DWORD *)v210 + 10);
    }
    else if ( v218 == 2 )
    {
      v162 = v205 - ((__int64)(v210[1] - *v210) >> 4);
    }
    else
    {
      v162 = (v218 == 0) + v205 - 1;
    }
    ida_mcp::tools::search::`anonymous namespace'::search_objc_section(
      (char *)v228,
      v201,
      (int)"__TEXT,__objc_methname",
      (int)"__objc_methname",
      (int)"selector",
      (int)"objc_selector",
      v162);
    v163 = v228[0];
    v164 = (_QWORD *)v229;
    switch ( LOBYTE(v228[0]) )
    {
      case 1:
        if ( !*(_QWORD *)(v229 + 40) )
          goto LABEL_217;
        break;
      case 2:
        if ( *(_QWORD *)(v229 + 8) == *(_QWORD *)v229 )
          goto LABEL_217;
        break;
      case 0:
LABEL_217:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_218;
    }
    v230.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v175 = v230.m128i_i8[0];
    v176 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v177 = *(_BYTE *)v176;
    v178 = *(_QWORD *)(v176 + 8);
    *(_BYTE *)v176 = v175;
    *(_QWORD *)(v176 + 8) = v230.m128i_i64[1];
    v230.m128i_i64[1] = v178;
    v230.m128i_i8[0] = v177;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v163 == 1 )
    {
      v179 = v164[5];
    }
    else
    {
      v179 = 1;
      if ( v163 == 2 )
        v179 = (__int64)(v164[1] - *v164) >> 4;
    }
    v180 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v181 = *(_BYTE *)v180;
    v182 = *(_QWORD *)(v180 + 8);
    *(_BYTE *)v180 = 6;
    v230.m128i_i8[0] = v181;
    *(_QWORD *)(v180 + 8) = v179;
    v230.m128i_i64[1] = v182;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_217;
  }
LABEL_218:
  if ( v218 == 1 )
  {
    ida_mcp::tools::search::`anonymous namespace'::search_objc_section(
      (char *)v228,
      v201,
      (int)"__TEXT,__objc_classname",
      (int)"__objc_classname",
      (int)"classname",
      (int)"objc_class",
      v205 - *((_DWORD *)v210 + 10));
  }
  else if ( v218 == 2 )
  {
    ida_mcp::tools::search::`anonymous namespace'::search_objc_section(
      (char *)v228,
      v201,
      (int)"__TEXT,__objc_classname",
      (int)"__objc_classname",
      (int)"classname",
      (int)"objc_class",
      v205 - ((__int64)(v210[1] - *v210) >> 4));
  }
  else
  {
    ida_mcp::tools::search::`anonymous namespace'::search_objc_section(
      (char *)v228,
      v201,
      (int)"__TEXT,__objc_classname",
      (int)"__objc_classname",
      (int)"classname",
      (int)"objc_class",
      (v218 == 0) + v205 - 1);
  }
  v165 = v228[0];
  v166 = (_QWORD *)v229;
  if ( LOBYTE(v228[0]) == 1 )
  {
    if ( *(_QWORD *)(v229 + 40) )
      goto LABEL_224;
  }
  else if ( LOBYTE(v228[0]) == 2 )
  {
    if ( *(_QWORD *)(v229 + 8) != *(_QWORD *)v229 )
      goto LABEL_224;
  }
  else if ( LOBYTE(v228[0]) )
  {
LABEL_224:
    v230.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v167 = v230.m128i_i8[0];
    v168 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v169 = *(_BYTE *)v168;
    v170 = *(_QWORD *)(v168 + 8);
    *(_BYTE *)v168 = v167;
    *(_QWORD *)(v168 + 8) = v230.m128i_i64[1];
    v230.m128i_i64[1] = v170;
    v230.m128i_i8[0] = v169;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v165 == 1 )
    {
      v171 = v166[5];
    }
    else
    {
      v171 = 1;
      if ( v165 == 2 )
        v171 = (__int64)(v166[1] - *v166) >> 4;
    }
    v172 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v173 = *(_BYTE *)v172;
    v174 = *(_QWORD *)(v172 + 8);
    *(_BYTE *)v172 = 6;
    v230.m128i_i8[0] = v173;
    *(_QWORD *)(v172 + 8) = v171;
    v230.m128i_i64[1] = v174;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_93:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src != v193 )
    operator delete(src, v233[0] + 1LL);
  return v199;
}

