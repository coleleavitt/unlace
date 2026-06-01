__int64 __fastcall ida_mcp::tools::fixups::`anonymous namespace'::handle_list_fixups(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v4; // rax
  char *v5; // rax
  unsigned __int64 i; // rax
  size_t v7; // rax
  unsigned int v8; // r13d
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r13
  size_t v13; // rcx
  __int64 v14; // rax
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rdx
  char *v21; // r15
  __int64 *v22; // rax
  __int64 *v23; // r13
  size_t v24; // rax
  void *v25; // rcx
  size_t v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  size_t v29; // rax
  unsigned int v30; // r15d
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // r13
  size_t v35; // rcx
  __int64 v36; // rax
  char v37; // si
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rax
  char v41; // si
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rax
  unsigned int v46; // ebp
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rcx
  size_t v51; // rsi
  __int64 v52; // rax
  size_t v53; // rax
  unsigned int v54; // r12d
  _QWORD *v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  _QWORD *v58; // rcx
  size_t v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  char *v66; // rbp
  _DWORD *v68; // rax
  unsigned __int64 v69; // rcx
  char *v70; // rax
  char *v71; // r13
  unsigned int v72; // r15d
  unsigned int v73; // r15d
  unsigned int v74; // eax
  __int64 v75; // rdx
  _DWORD *v76; // rax
  unsigned __int64 v77; // rcx
  char *v78; // rax
  char *v79; // r12
  unsigned int v80; // r13d
  unsigned int v81; // r13d
  unsigned int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rax
  unsigned int v86; // eax
  unsigned __int64 v87; // rsi
  char *v88; // rdx
  char *v89; // r8
  unsigned int v90; // eax
  unsigned int v91; // eax
  unsigned int v92; // edx
  __int64 v93; // rdi
  unsigned int v94; // eax
  unsigned __int64 v95; // rsi
  char *v96; // rdx
  char *v97; // r8
  unsigned int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // edx
  __int64 v101; // rdi
  __int64 v102; // rbx
  __int64 v103; // r14
  __int64 v104; // rbx
  __int64 v105; // r12
  __int64 v106; // r13
  size_t v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // r15
  unsigned __int64 v110; // r12
  size_t v111; // rax
  int v112; // eax
  __int64 v113; // r13
  __int64 v114; // r12
  size_t v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // r15
  unsigned __int64 v118; // r12
  size_t v119; // rax
  int v120; // eax
  __int64 v121; // r15
  size_t v122; // rdx
  int v123; // eax
  unsigned __int64 v124; // r13
  unsigned __int64 v125; // r12
  size_t v126; // rax
  int v127; // eax
  _BYTE *v128; // rbp
  _BYTE *v129; // rbx
  int *v130; // rax
  int *v131; // rbp
  __int64 v132; // r13
  _QWORD *v133; // rax
  __int64 v134; // r13
  __int64 v135; // r15
  size_t v136; // rdx
  int v137; // eax
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // r12
  size_t v140; // rax
  int v141; // eax
  _BYTE *v142; // r13
  _BYTE *v143; // rbx
  int *v144; // rax
  int *v145; // r13
  __int64 v146; // r14
  __int64 v147; // rbx
  unsigned __int64 v148; // rdx
  char *v149; // rax
  char *v150; // rbx
  unsigned int v151; // ebp
  unsigned int v152; // ebp
  unsigned int v153; // eax
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  char *v156; // rax
  char *v157; // rbx
  unsigned int v158; // r12d
  unsigned int v159; // r12d
  unsigned int v160; // eax
  __int64 v161; // rcx
  unsigned int v162; // edi
  unsigned int v163; // edi
  unsigned __int64 v164; // r8
  char *v165; // rcx
  char *v166; // r9
  unsigned int v167; // edx
  unsigned int v168; // ecx
  __int64 v169; // rdi
  unsigned __int64 v170; // r8
  char *v171; // rcx
  char *v172; // r9
  unsigned int v173; // edx
  unsigned int v174; // ecx
  __int64 v175; // rdi
  unsigned __int64 v176; // [rsp+0h] [rbp-318h]
  unsigned __int64 v177; // [rsp+8h] [rbp-310h]
  __int64 v178; // [rsp+10h] [rbp-308h]
  __int64 v179; // [rsp+10h] [rbp-308h]
  __int64 v180; // [rsp+18h] [rbp-300h]
  _QWORD *v181; // [rsp+20h] [rbp-2F8h]
  char *v182; // [rsp+28h] [rbp-2F0h]
  void *dest; // [rsp+30h] [rbp-2E8h]
  void *desta; // [rsp+30h] [rbp-2E8h]
  __int64 v186; // [rsp+38h] [rbp-2E0h]
  __int64 v187; // [rsp+60h] [rbp-2B8h]
  size_t v188; // [rsp+68h] [rbp-2B0h]
  __int64 v189; // [rsp+70h] [rbp-2A8h] BYREF
  _QWORD *v190; // [rsp+78h] [rbp-2A0h]
  char v191; // [rsp+80h] [rbp-298h]
  __int64 v192; // [rsp+88h] [rbp-290h]
  size_t v193; // [rsp+90h] [rbp-288h]
  __int64 v194; // [rsp+98h] [rbp-280h]
  char *v195; // [rsp+A0h] [rbp-278h]
  __int128 v196; // [rsp+A8h] [rbp-270h]
  _BYTE *v197; // [rsp+C0h] [rbp-258h]
  __m128i si128; // [rsp+C8h] [rbp-250h]
  __int64 v199; // [rsp+D8h] [rbp-240h]
  __int64 v200; // [rsp+E0h] [rbp-238h]
  void *v201; // [rsp+F0h] [rbp-228h] BYREF
  size_t v202; // [rsp+F8h] [rbp-220h]
  _QWORD v203[2]; // [rsp+100h] [rbp-218h] BYREF
  void *v204; // [rsp+110h] [rbp-208h] BYREF
  size_t v205; // [rsp+118h] [rbp-200h]
  _QWORD v206[2]; // [rsp+120h] [rbp-1F8h] BYREF
  char v207; // [rsp+130h] [rbp-1E8h] BYREF
  __int128 v208; // [rsp+138h] [rbp-1E0h] BYREF
  char v209; // [rsp+148h] [rbp-1D0h]
  __int128 v210; // [rsp+150h] [rbp-1C8h] BYREF
  char v211; // [rsp+160h] [rbp-1B8h] BYREF
  __int128 v212; // [rsp+168h] [rbp-1B0h] BYREF
  char v213; // [rsp+178h] [rbp-1A0h]
  __int128 v214; // [rsp+180h] [rbp-198h]
  char v215; // [rsp+190h] [rbp-188h] BYREF
  __int128 v216; // [rsp+198h] [rbp-180h]
  char v217; // [rsp+1A8h] [rbp-170h]
  __int64 v218; // [rsp+1B0h] [rbp-168h]
  __int64 v219; // [rsp+1B8h] [rbp-160h]
  void *v220; // [rsp+1C0h] [rbp-158h] BYREF
  __int128 v221; // [rsp+1C8h] [rbp-150h] BYREF
  __int64 v222; // [rsp+1E8h] [rbp-130h]
  void *v223; // [rsp+1F0h] [rbp-128h] BYREF
  size_t v224; // [rsp+1F8h] [rbp-120h]
  _QWORD s2[4]; // [rsp+200h] [rbp-118h] BYREF
  _QWORD v226[3]; // [rsp+220h] [rbp-F8h] BYREF
  __int64 v227; // [rsp+238h] [rbp-E0h] BYREF
  __int64 v228; // [rsp+248h] [rbp-D0h]
  char s[24]; // [rsp+250h] [rbp-C8h] BYREF
  _BYTE v230[8]; // [rsp+268h] [rbp-B0h]
  char v231[24]; // [rsp+270h] [rbp-A8h] BYREF
  _BYTE v232[8]; // [rsp+288h] [rbp-90h]
  char v233[24]; // [rsp+290h] [rbp-88h] BYREF
  _BYTE v234[8]; // [rsp+2A8h] [rbp-70h]
  char v235[40]; // [rsp+2B0h] [rbp-68h] BYREF
  unsigned __int64 v236; // [rsp+2D8h] [rbp-40h]

  v236 = __readfsqword(0x28u);
  v176 = getinf();
  v177 = getinf();
  if ( *(_BYTE *)a2 == 1 )
  {
    v102 = *(_QWORD *)(a2 + 8);
    v103 = *(_QWORD *)(v102 + 16);
    if ( v103 )
    {
      v104 = v102 + 8;
      v105 = v103;
      v178 = v104;
      v106 = v104;
      do
      {
        while ( 1 )
        {
          v109 = *(_QWORD *)(v105 + 40);
          if ( !v109 )
            break;
          v107 = 13;
          if ( v109 <= 0xD )
            v107 = *(_QWORD *)(v105 + 40);
          v108 = memcmp(*(const void **)(v105 + 32), "start_address", v107);
          if ( v108 || (v108 = v109 - 13, (__int64)(v109 - 13) <= 0x7FFFFFFF) )
          {
            if ( v108 < 0 )
              break;
          }
          v106 = v105;
          v105 = *(_QWORD *)(v105 + 16);
          if ( !v105 )
            goto LABEL_104;
        }
        v105 = *(_QWORD *)(v105 + 24);
      }
      while ( v105 );
LABEL_104:
      if ( v104 == v106 )
        goto LABEL_111;
      v110 = *(_QWORD *)(v106 + 40);
      if ( v110 )
      {
        v111 = 13;
        if ( v110 <= 0xD )
          v111 = *(_QWORD *)(v106 + 40);
        v112 = memcmp(*(const void **)(v106 + 32), "start_address", v111);
        if ( !v112 )
        {
          v112 = v110 - 13;
          if ( (__int64)(v110 - 13) > 0x7FFFFFFF )
            goto LABEL_111;
        }
        if ( v112 > 0 )
          goto LABEL_111;
      }
      v180 = v104;
      v134 = v104;
      v135 = v103;
      strcpy((char *)s2, "start_address");
      do
      {
        while ( 1 )
        {
          v138 = *(_QWORD *)(v135 + 40);
          if ( !v138 )
            break;
          v136 = 13;
          if ( v138 <= 0xD )
            v136 = *(_QWORD *)(v135 + 40);
          v137 = memcmp(*(const void **)(v135 + 32), s2, v136);
          if ( v137 || (v137 = v138 - 13, (__int64)(v138 - 13) <= 0x7FFFFFFF) )
          {
            if ( v137 < 0 )
              break;
          }
          v134 = v135;
          v135 = *(_QWORD *)(v135 + 16);
          if ( !v135 )
            goto LABEL_179;
        }
        v135 = *(_QWORD *)(v135 + 24);
      }
      while ( v135 );
LABEL_179:
      v104 = v180;
      if ( v180 != v134 )
      {
        v139 = *(_QWORD *)(v134 + 40);
        if ( v139 )
        {
          v140 = 13;
          if ( v139 <= 0xD )
            v140 = *(_QWORD *)(v134 + 40);
          v141 = memcmp(s2, *(const void **)(v134 + 32), v140);
          if ( v141 || (v141 = 13 - v139, (__int64)(13 - v139) >= (__int64)0xFFFFFFFF80000000LL) )
          {
            if ( v141 < 0 )
              v134 = v180;
            v178 = v134;
          }
        }
        else
        {
          v178 = v134;
        }
      }
      if ( !*(_BYTE *)(v178 + 64) )
        goto LABEL_111;
      v220 = (char *)&v221 + 8;
      *(_QWORD *)&v221 = 0;
      v142 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      BYTE8(v221) = 0;
      if ( *v142 != 3 )
      {
        exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( *v142 )
        {
          case 0:
            v4 = "null";
            break;
          case 1:
            v4 = "object";
            break;
          case 2:
            v4 = (char *)"array";
            break;
          case 3:
            v4 = "string";
            break;
          case 4:
            v4 = "boolean";
            break;
          case 8:
            v4 = "binary";
            break;
          case 9:
            v4 = "discarded";
            break;
          default:
            v4 = "number";
            break;
        }
        v197 = v4;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          exception,
          302);
        std::string::_M_dispose();
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::string::_M_assign();
      v143 = v220;
      v144 = __errno_location();
      *v144 = 0;
      v145 = v144;
      v146 = __isoc23_strtoull();
      if ( v143 == v197 || *v197 || *v145 == 34 && v146 == -1 )
      {
        if ( v220 != (char *)&v221 + 8 )
          operator delete(v220, *((_QWORD *)&v221 + 1) + 1LL);
      }
      else
      {
        if ( v220 != (char *)&v221 + 8 )
          operator delete(v220, *((_QWORD *)&v221 + 1) + 1LL);
        v176 = v146;
      }
      if ( *(_BYTE *)a2 == 1 )
      {
        v147 = *(_QWORD *)(a2 + 8);
        v103 = *(_QWORD *)(v147 + 16);
        v104 = v147 + 8;
        if ( v103 )
        {
LABEL_111:
          v179 = v104;
          v113 = v104;
          v114 = v103;
          do
          {
            while ( 1 )
            {
              v117 = *(_QWORD *)(v114 + 40);
              if ( !v117 )
                break;
              v115 = 11;
              if ( v117 <= 0xB )
                v115 = *(_QWORD *)(v114 + 40);
              v116 = memcmp(*(const void **)(v114 + 32), "end_address", v115);
              if ( v116 || (v116 = v117 - 11, (__int64)(v117 - 11) <= 0x7FFFFFFF) )
              {
                if ( v116 < 0 )
                  break;
              }
              v113 = v114;
              v114 = *(_QWORD *)(v114 + 16);
              if ( !v114 )
                goto LABEL_120;
            }
            v114 = *(_QWORD *)(v114 + 24);
          }
          while ( v114 );
LABEL_120:
          if ( v104 != v113 )
          {
            v118 = *(_QWORD *)(v113 + 40);
            if ( !v118 )
              goto LABEL_127;
            v119 = 11;
            if ( v118 <= 0xB )
              v119 = *(_QWORD *)(v113 + 40);
            v120 = memcmp(*(const void **)(v113 + 32), "end_address", v119);
            if ( v120 || (v120 = v118 - 11, (__int64)(v118 - 11) <= 0x7FFFFFFF) )
            {
              if ( v120 <= 0 )
              {
LABEL_127:
                v121 = v104;
                strcpy((char *)s2, "end_address");
                do
                {
                  while ( 1 )
                  {
                    v124 = *(_QWORD *)(v103 + 40);
                    if ( !v124 )
                      break;
                    v122 = 11;
                    if ( v124 <= 0xB )
                      v122 = *(_QWORD *)(v103 + 40);
                    v123 = memcmp(*(const void **)(v103 + 32), s2, v122);
                    if ( v123 || (v123 = v124 - 11, (__int64)(v124 - 11) <= 0x7FFFFFFF) )
                    {
                      if ( v123 < 0 )
                        break;
                    }
                    v121 = v103;
                    v103 = *(_QWORD *)(v103 + 16);
                    if ( !v103 )
                      goto LABEL_136;
                  }
                  v103 = *(_QWORD *)(v103 + 24);
                }
                while ( v103 );
LABEL_136:
                if ( v104 != v121 )
                {
                  v125 = *(_QWORD *)(v121 + 40);
                  if ( v125 )
                  {
                    v126 = 11;
                    if ( v125 <= 0xB )
                      v126 = *(_QWORD *)(v121 + 40);
                    v127 = memcmp(s2, *(const void **)(v121 + 32), v126);
                    if ( v127 || (v127 = 11 - v125, (__int64)(11 - v125) >= (__int64)0xFFFFFFFF80000000LL) )
                    {
                      if ( v127 < 0 )
                        v121 = v104;
                      v179 = v121;
                    }
                  }
                  else
                  {
                    v179 = v121;
                  }
                }
                if ( *(_BYTE *)(v179 + 64) )
                {
                  v220 = (char *)&v221 + 8;
                  *(_QWORD *)&v221 = 0;
                  v128 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                  BYTE8(v221) = 0;
                  if ( *v128 != 3 )
                  {
                    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                    switch ( *v128 )
                    {
                      case 0:
                        v5 = "null";
                        break;
                      case 1:
                        v5 = "object";
                        break;
                      case 2:
                        v5 = (char *)"array";
                        break;
                      case 3:
                        v5 = "string";
                        break;
                      case 4:
                        v5 = "boolean";
                        break;
                      case 8:
                        v5 = "binary";
                        break;
                      case 9:
                        v5 = "discarded";
                        break;
                      default:
                        v5 = "number";
                        break;
                    }
                    v197 = v5;
                    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
                    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                      v2,
                      302);
                    std::string::_M_dispose();
                    __cxa_throw(
                      v2,
                      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
                  }
                  std::string::_M_assign();
                  v129 = v220;
                  v130 = __errno_location();
                  *v130 = 0;
                  v131 = v130;
                  v132 = __isoc23_strtoull();
                  if ( v129 == v197 || *v197 || *v131 == 34 && v132 == -1 )
                  {
                    if ( v220 != (char *)&v221 + 8 )
                      operator delete(v220, *((_QWORD *)&v221 + 1) + 1LL);
                  }
                  else
                  {
                    if ( v220 != (char *)&v221 + 8 )
                      operator delete(v220, *((_QWORD *)&v221 + 1) + 1LL);
                    v177 = v132;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v189) = 0;
  v190 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v180) = 0;
  v181 = nullptr;
  for ( i = get_first_fixup_ea(); i != -1; i = get_next_fixup_ea() )
  {
    if ( i >= v176 )
    {
      if ( i >= v177 )
        break;
      v197 = nullptr;
      v199 = 0;
      v200 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E2220);
      if ( (unsigned __int8)get_fixup() )
      {
        v195 = nullptr;
        v196 = 0;
        get_fixup_desc();
        v192 = 0;
        qsnprintf();
        v223 = s2;
        v7 = strlen(s);
        v193 = v7;
        v8 = v7;
        if ( v7 > 0xF )
        {
          v76 = (_DWORD *)std::string::_M_create();
          v223 = v76;
          s2[0] = v193;
          goto LABEL_67;
        }
        if ( v7 == 1 )
        {
          LOBYTE(s2[0]) = s[0];
LABEL_11:
          v9 = s2;
        }
        else
        {
          if ( !v7 )
            goto LABEL_11;
          v76 = s2;
LABEL_67:
          if ( v8 < 8 )
          {
            if ( (v8 & 4) != 0 )
            {
              *v76 = *(_DWORD *)s;
              *(_DWORD *)((char *)v76 + v8 - 4) = *(_DWORD *)&s[v8 - 4];
            }
            else if ( v8 )
            {
              *(_BYTE *)v76 = s[0];
              if ( (v8 & 2) != 0 )
                *(_WORD *)((char *)v76 + v8 - 2) = *(_WORD *)&s[v8 - 2];
            }
          }
          else
          {
            *(_QWORD *)v76 = *(_QWORD *)s;
            *(_QWORD *)((char *)v76 + v8 - 8) = *(_QWORD *)&s[v8 - 8];
            v77 = (unsigned __int64)(v76 + 2) & 0xFFFFFFFFFFFFFFF8LL;
            v78 = (char *)v76 - v77;
            v79 = (char *)(s - v78);
            v80 = ((_DWORD)v78 + v8) & 0xFFFFFFF8;
            if ( v80 >= 8 )
            {
              v81 = v80 & 0xFFFFFFF8;
              v82 = 0;
              do
              {
                v83 = v82;
                v82 += 8;
                *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
              }
              while ( v82 < v81 );
            }
          }
          v7 = v193;
          v9 = v223;
        }
        v224 = v7;
        *((_BYTE *)v9 + v7) = 0;
        v193 = 0;
        v194 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v10 = (_QWORD *)operator new(0x20u);
        v11 = v10 + 2;
        v12 = v10;
        v13 = v224;
        *v10 = v10 + 2;
        if ( v223 == s2 )
        {
          v94 = v13 + 1;
          if ( (unsigned int)(v13 + 1) < 8 )
          {
            if ( (v94 & 4) != 0 )
            {
              *((_DWORD *)v12 + 4) = s2[0];
              *(_DWORD *)((char *)v11 + v94 - 4) = *(_DWORD *)((char *)&v224 + v94 + 4);
            }
            else if ( (_DWORD)v13 != -1 )
            {
              *((_BYTE *)v12 + 16) = s2[0];
              if ( (v94 & 2) != 0 )
                *(_WORD *)((char *)v11 + v94 - 2) = *(_WORD *)((char *)&v224 + v94 + 6);
            }
          }
          else
          {
            v12[2] = s2[0];
            *(_QWORD *)((char *)v11 + v94 - 8) = *(_QWORD *)((char *)&s2[-1] + v94);
            v95 = (unsigned __int64)(v12 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v96 = (char *)v11 - v95;
            v97 = (char *)((char *)s2 - v96);
            v98 = ((_DWORD)v96 + v94) & 0xFFFFFFF8;
            if ( v98 >= 8 )
            {
              v99 = v98 & 0xFFFFFFF8;
              v100 = 0;
              do
              {
                v101 = v100;
                v100 += 8;
                *(_QWORD *)(v95 + v101) = *(_QWORD *)&v97[v101];
              }
              while ( v100 < v99 );
            }
          }
        }
        else
        {
          *v10 = v223;
          v10[2] = s2[0];
        }
        v12[1] = v13;
        v223 = s2;
        v224 = 0;
        LOBYTE(s2[0]) = 0;
        v191 = 0;
        v14 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v15 = *(_BYTE *)v14;
        v16 = *(_QWORD *)(v14 + 8);
        *(_BYTE *)v14 = 3;
        *(_QWORD *)(v14 + 8) = v12;
        LOBYTE(v193) = v15;
        v194 = v16;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v223 != s2 )
          operator delete(v223, s2[0] + 1LL);
        v17 = (unsigned __int16)v197;
        v18 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v19 = *(_BYTE *)v18;
        v20 = *(_QWORD *)(v18 + 8);
        *(_BYTE *)v18 = 6;
        LOBYTE(v193) = v19;
        *(_QWORD *)(v18 + 8) = v17;
        v194 = v20;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v21 = v195;
        if ( !(_QWORD)v196 )
          v21 = _qstring<char>::c_str(void)const::nullstr;
        v193 = 0;
        v194 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v22 = (__int64 *)operator new(0x20u);
        v23 = v22;
        *v22 = (__int64)(v22 + 2);
        if ( !v21 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        dest = v22 + 2;
        v24 = strlen(v21);
        v25 = dest;
        v188 = v24;
        v26 = v24;
        if ( v24 > 0xF )
        {
          desta = (void *)v24;
          v84 = std::string::_M_create();
          *v23 = v84;
          v25 = (void *)v84;
          v26 = (size_t)desta;
          v23[2] = v188;
          goto LABEL_73;
        }
        if ( v24 == 1 )
        {
          *((_BYTE *)v23 + 16) = *v21;
        }
        else
        {
          if ( !v24 )
            goto LABEL_22;
LABEL_73:
          memcpy(v25, v21, v26);
          v24 = v188;
          v25 = (void *)*v23;
        }
LABEL_22:
        v23[1] = v24;
        *((_BYTE *)v25 + v24) = 0;
        v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v28 = *(_QWORD *)(v27 + 8);
        *(_BYTE *)v27 = 3;
        *(_QWORD *)(v27 + 8) = v23;
        v194 = v28;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        qsnprintf();
        v223 = s2;
        v29 = strlen(v231);
        v193 = v29;
        v30 = v29;
        if ( v29 > 0xF )
        {
          v68 = (_DWORD *)std::string::_M_create();
          v223 = v68;
          s2[0] = v193;
          goto LABEL_61;
        }
        if ( v29 == 1 )
        {
          LOBYTE(s2[0]) = v231[0];
LABEL_25:
          v31 = s2;
        }
        else
        {
          if ( !v29 )
            goto LABEL_25;
          v68 = s2;
LABEL_61:
          if ( v30 < 8 )
          {
            if ( (v30 & 4) != 0 )
            {
              *v68 = *(_DWORD *)v231;
              *(_DWORD *)((char *)v68 + v30 - 4) = *(_DWORD *)&v230[v30 + 4];
            }
            else if ( v30 )
            {
              *(_BYTE *)v68 = v231[0];
              if ( (v30 & 2) != 0 )
                *(_WORD *)((char *)v68 + v30 - 2) = *(_WORD *)&v230[v30 + 6];
            }
          }
          else
          {
            *(_QWORD *)v68 = *(_QWORD *)v231;
            *(_QWORD *)((char *)v68 + v30 - 8) = *(_QWORD *)&v230[v30];
            v69 = (unsigned __int64)(v68 + 2) & 0xFFFFFFFFFFFFFFF8LL;
            v70 = (char *)v68 - v69;
            v71 = (char *)(v231 - v70);
            v72 = ((_DWORD)v70 + v30) & 0xFFFFFFF8;
            if ( v72 >= 8 )
            {
              v73 = v72 & 0xFFFFFFF8;
              v74 = 0;
              do
              {
                v75 = v74;
                v74 += 8;
                *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
              }
              while ( v74 < v73 );
            }
          }
          v29 = v193;
          v31 = v223;
        }
        v224 = v29;
        *((_BYTE *)v31 + v29) = 0;
        v193 = 0;
        v194 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v32 = (_QWORD *)operator new(0x20u);
        v33 = v32 + 2;
        v34 = v32;
        v35 = v224;
        *v32 = v32 + 2;
        if ( v223 == s2 )
        {
          v86 = v35 + 1;
          if ( (unsigned int)(v35 + 1) < 8 )
          {
            if ( (v86 & 4) != 0 )
            {
              *((_DWORD *)v34 + 4) = s2[0];
              *(_DWORD *)((char *)v33 + v86 - 4) = *(_DWORD *)((char *)&v224 + v86 + 4);
            }
            else if ( (_DWORD)v35 != -1 )
            {
              *((_BYTE *)v34 + 16) = s2[0];
              if ( (v86 & 2) != 0 )
                *(_WORD *)((char *)v33 + v86 - 2) = *(_WORD *)((char *)&v224 + v86 + 6);
            }
          }
          else
          {
            v34[2] = s2[0];
            *(_QWORD *)((char *)v33 + v86 - 8) = *(_QWORD *)((char *)&s2[-1] + v86);
            v87 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v88 = (char *)v33 - v87;
            v89 = (char *)((char *)s2 - v88);
            v90 = ((_DWORD)v88 + v86) & 0xFFFFFFF8;
            if ( v90 >= 8 )
            {
              v91 = v90 & 0xFFFFFFF8;
              v92 = 0;
              do
              {
                v93 = v92;
                v92 += 8;
                *(_QWORD *)(v87 + v93) = *(_QWORD *)&v89[v93];
              }
              while ( v92 < v91 );
            }
          }
        }
        else
        {
          *v32 = v223;
          v32[2] = s2[0];
        }
        v34[1] = v35;
        v223 = s2;
        v224 = 0;
        LOBYTE(s2[0]) = 0;
        v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v37 = *(_BYTE *)v36;
        v38 = *(_QWORD *)(v36 + 8);
        *(_BYTE *)v36 = 3;
        *(_QWORD *)(v36 + 8) = v34;
        LOBYTE(v193) = v37;
        v194 = v38;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v223 != s2 )
          operator delete(v223, s2[0] + 1LL);
        v39 = v200;
        v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v41 = *(_BYTE *)v40;
        v42 = *(_QWORD *)(v40 + 8);
        *(_BYTE *)v40 = 5;
        LOBYTE(v193) = v41;
        *(_QWORD *)(v40 + 8) = v39;
        v194 = v42;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( !(_BYTE)v180 )
        {
          v43 = operator new(0x18u);
          *(_QWORD *)(v43 + 16) = 0;
          v181 = (_QWORD *)v43;
          *(_OWORD *)v43 = 0;
          goto LABEL_32;
        }
        if ( v181[1] == v181[2] )
        {
LABEL_32:
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v181[1] += 16LL;
        }
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v195 )
        {
          *(_QWORD *)&v196 = 0;
          qfree();
        }
        LOBYTE(v180) = 2;
        continue;
      }
    }
  }
  v207 = 0;
  *(_QWORD *)&v208 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v207 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "start_address");
  *(_QWORD *)(v44 + 8) = 13;
  v208 = (unsigned __int64)v44;
  qsnprintf();
  v201 = v203;
  v45 = strlen(v233);
  v197 = (_BYTE *)v45;
  v46 = v45;
  if ( v45 > 0xF )
  {
    v85 = (_QWORD *)std::string::_M_create();
    v201 = v85;
    v203[0] = v197;
LABEL_164:
    if ( v46 >= 8 )
    {
      *v85 = *(_QWORD *)v233;
      *(_QWORD *)((char *)v85 + v46 - 8) = *(_QWORD *)&v232[v46];
      v148 = (unsigned __int64)(v85 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v149 = (char *)v85 - v148;
      v150 = (char *)(v233 - v149);
      v151 = ((_DWORD)v149 + v46) & 0xFFFFFFF8;
      if ( v151 >= 8 )
      {
        v152 = v151 & 0xFFFFFFF8;
        v153 = 0;
        do
        {
          v154 = v153;
          v153 += 8;
          *(_QWORD *)(v148 + v154) = *(_QWORD *)&v150[v154];
        }
        while ( v153 < v152 );
      }
    }
    else if ( (v46 & 4) != 0 )
    {
      *(_DWORD *)v85 = *(_DWORD *)v233;
      *(_DWORD *)((char *)v85 + v46 - 4) = *(_DWORD *)&v232[v46 + 4];
    }
    else if ( v46 )
    {
      *(_BYTE *)v85 = v233[0];
      if ( (v46 & 2) != 0 )
        *(_WORD *)((char *)v85 + v46 - 2) = *(_WORD *)&v232[v46 + 6];
    }
    v45 = (size_t)v197;
    v47 = v201;
  }
  else
  {
    if ( v45 == 1 )
    {
      LOBYTE(v203[0]) = v233[0];
      goto LABEL_39;
    }
    if ( v45 )
    {
      v85 = v203;
      goto LABEL_164;
    }
LABEL_39:
    v47 = v203;
  }
  v202 = v45;
  *((_BYTE *)v47 + v45) = 0;
  v209 = 0;
  *(_QWORD *)&v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v209 = 3;
  v48 = (_QWORD *)operator new(0x20u);
  v49 = v201;
  v50 = v48 + 2;
  v51 = v202;
  *v48 = v48 + 2;
  if ( v49 == v203 )
  {
    v162 = v51 + 1;
    if ( (unsigned int)(v51 + 1) >= 8 )
    {
      v48[2] = v203[0];
      *(_QWORD *)((char *)v50 + v162 - 8) = *(_QWORD *)((char *)&v203[-1] + v162);
      v164 = (unsigned __int64)(v48 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v165 = (char *)v50 - v164;
      v166 = (char *)((char *)v203 - v165);
      if ( (((_DWORD)v165 + v162) & 0xFFFFFFF8) >= 8 )
      {
        v167 = ((_DWORD)v165 + v162) & 0xFFFFFFF8;
        v168 = 0;
        do
        {
          v169 = v168;
          v168 += 8;
          *(_QWORD *)(v164 + v169) = *(_QWORD *)&v166[v169];
        }
        while ( v168 < v167 );
      }
    }
    else if ( (v162 & 4) != 0 )
    {
      *((_DWORD *)v48 + 4) = v203[0];
      *(_DWORD *)((char *)v50 + v162 - 4) = *(_DWORD *)((char *)&v202 + v162 + 4);
    }
    else if ( (_DWORD)v51 != -1 )
    {
      *((_BYTE *)v48 + 16) = v203[0];
      if ( (v162 & 2) != 0 )
        *(_WORD *)((char *)v50 + v162 - 2) = *(_WORD *)((char *)&v202 + v162 + 6);
    }
  }
  else
  {
    *v48 = v49;
    v48[2] = v203[0];
  }
  v48[1] = v51;
  v201 = v203;
  v202 = 0;
  LOBYTE(v203[0]) = 0;
  v210 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v223,
    (const __m128i *)&v207);
  s2[0] = 0;
  v211 = 0;
  *(_QWORD *)&v212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v211 = 3;
  v52 = operator new(0x20u);
  *(_QWORD *)v52 = v52 + 16;
  strcpy((char *)(v52 + 16), "end_address");
  *(_QWORD *)(v52 + 8) = 11;
  v212 = (unsigned __int64)v52;
  qsnprintf();
  v204 = v206;
  v53 = strlen(v235);
  v197 = (_BYTE *)v53;
  v54 = v53;
  if ( v53 > 0xF )
  {
    v133 = (_QWORD *)std::string::_M_create();
    v204 = v133;
    v206[0] = v197;
LABEL_157:
    if ( v54 >= 8 )
    {
      *v133 = *(_QWORD *)v235;
      *(_QWORD *)((char *)v133 + v54 - 8) = *(_QWORD *)&v234[v54];
      v155 = (unsigned __int64)(v133 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v156 = (char *)v133 - v155;
      v157 = (char *)(v235 - v156);
      v158 = ((_DWORD)v156 + v54) & 0xFFFFFFF8;
      if ( v158 >= 8 )
      {
        v159 = v158 & 0xFFFFFFF8;
        v160 = 0;
        do
        {
          v161 = v160;
          v160 += 8;
          *(_QWORD *)(v155 + v161) = *(_QWORD *)&v157[v161];
        }
        while ( v160 < v159 );
      }
    }
    else if ( (v54 & 4) != 0 )
    {
      *(_DWORD *)v133 = *(_DWORD *)v235;
      *(_DWORD *)((char *)v133 + v54 - 4) = *(_DWORD *)&v234[v54 + 4];
    }
    else if ( v54 )
    {
      *(_BYTE *)v133 = v235[0];
      if ( (v54 & 2) != 0 )
        *(_WORD *)((char *)v133 + v54 - 2) = *(_WORD *)&v234[v54 + 6];
    }
    v53 = (size_t)v197;
    v55 = v204;
  }
  else
  {
    if ( v53 == 1 )
    {
      LOBYTE(v206[0]) = v235[0];
      goto LABEL_45;
    }
    if ( v53 )
    {
      v133 = v206;
      goto LABEL_157;
    }
LABEL_45:
    v55 = v206;
  }
  v205 = v53;
  *((_BYTE *)v55 + v53) = 0;
  v213 = 0;
  *(_QWORD *)&v214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v213 = 3;
  v56 = (_QWORD *)operator new(0x20u);
  v57 = v204;
  v58 = v56 + 2;
  v59 = v205;
  *v56 = v56 + 2;
  if ( v57 == v206 )
  {
    v163 = v59 + 1;
    if ( (unsigned int)(v59 + 1) >= 8 )
    {
      v56[2] = v206[0];
      *(_QWORD *)((char *)v58 + v163 - 8) = *(_QWORD *)((char *)&v206[-1] + v163);
      v170 = (unsigned __int64)(v56 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v171 = (char *)v58 - v170;
      v172 = (char *)((char *)v206 - v171);
      if ( (((_DWORD)v171 + v163) & 0xFFFFFFF8) >= 8 )
      {
        v173 = ((_DWORD)v171 + v163) & 0xFFFFFFF8;
        v174 = 0;
        do
        {
          v175 = v174;
          v174 += 8;
          *(_QWORD *)(v170 + v175) = *(_QWORD *)&v172[v175];
        }
        while ( v174 < v173 );
      }
    }
    else if ( (v163 & 4) != 0 )
    {
      *((_DWORD *)v56 + 4) = v206[0];
      *(_DWORD *)((char *)v58 + v163 - 4) = *(_DWORD *)((char *)&v205 + v163 + 4);
    }
    else if ( (_DWORD)v59 != -1 )
    {
      *((_BYTE *)v56 + 16) = v206[0];
      if ( (v163 & 2) != 0 )
        *(_WORD *)((char *)v58 + v163 - 2) = *(_WORD *)((char *)&v205 + v163 + 6);
    }
  }
  else
  {
    *v56 = v57;
    v56[2] = v206[0];
  }
  v56[1] = v59;
  v204 = v206;
  v205 = 0;
  LOBYTE(v206[0]) = 0;
  v214 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s2[1],
    (const __m128i *)&v211);
  s2[3] = 0;
  v215 = 0;
  *(_QWORD *)&v216 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v215 = 3;
  v60 = operator new(0x20u);
  strcpy((char *)(v60 + 16), "fixup_count");
  *(_QWORD *)v60 = v60 + 16;
  *(_QWORD *)(v60 + 8) = 11;
  v216 = (unsigned __int64)v60;
  if ( (_BYTE)v180 == 2 )
    v61 = (__int64)(v181[1] - *v181) >> 4;
  else
    v61 = (_BYTE)v180 != 0;
  v217 = 6;
  v218 = v61;
  v219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v226,
    (const __m128i *)&v215);
  v226[2] = 0;
  LOBYTE(v220) = 0;
  *(_QWORD *)&v221 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v220) = 3;
  v62 = operator new(0x20u);
  strcpy((char *)(v62 + 16), "fixups");
  *(_QWORD *)v62 = v62 + 16;
  *(_QWORD *)(v62 + 8) = 6;
  v221 = (unsigned __int64)v62;
  LOBYTE(v189) = v180;
  v190 = v181;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v222 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v227,
    (const __m128i *)&v220);
  v228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)&v223,
    4,
    v63,
    v64,
    v65,
    (int)&v210,
    (__int64)&v204,
    (int)&v208,
    v180,
    (int)v181,
    (int)&v223,
    (__int64)&v212,
    (int)a1,
    (int)&v189,
    (int)&v201,
    (int)&v207,
    (char)&v211,
    v187,
    v188,
    v189);
  v66 = s;
  do
  {
    v66 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v66 != v182 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v204 != v206 )
    operator delete(v204, v206[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v201 != v203 )
    operator delete(v201, v203[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v186;
}

