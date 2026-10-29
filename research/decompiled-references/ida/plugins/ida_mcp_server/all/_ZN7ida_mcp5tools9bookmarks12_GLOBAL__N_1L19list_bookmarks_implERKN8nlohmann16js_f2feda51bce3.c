_QWORD *__fastcall ida_mcp::tools::bookmarks::`anonymous namespace'::list_bookmarks_impl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        nlohmann::json_abi_v3_12_0::detail::type_error *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        __int64 a21,
        char a22,
        char a23,
        char a24,
        __int64 a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        __int64 a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        __int64 a49,
        int a50,
        int a51,
        int a52,
        int a53,
        char a54,
        int a55,
        int a56,
        int a57,
        char *a58,
        int a59,
        int a60,
        int a61,
        char a62,
        int a63,
        int a64,
        int a65,
        char a66,
        int a67,
        int a68,
        int a69,
        char a70,
        int a71,
        int a72,
        int a73,
        char a74,
        int a75,
        int a76,
        char a77,
        char a78,
        int a79,
        char a80,
        int a81,
        int a82,
        char a83,
        char a84,
        int a85,
        char a86,
        int a87,
        int a88,
        char a89,
        char a90,
        int a91,
        char a92,
        char a93,
        int a94,
        char a95,
        char a96,
        int a97,
        int a98,
        int a99,
        int a100,
        char a101,
        int a102,
        int a103,
        int a104,
        int a105,
        int a106,
        __int64 a107)
{
  unsigned int v107; // ebx
  __int64 v108; // rax
  __int64 v109; // rax
  size_t v110; // rax
  unsigned int v111; // r13d
  int *v112; // rdx
  __int64 v113; // rax
  int *v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 v117; // rax
  bool v118; // cc
  char *v119; // r13
  __int64 *v120; // rax
  void *v121; // r14
  __int64 *v122; // r12
  size_t v123; // rax
  size_t v124; // rcx
  int v125; // ecx
  int v126; // r8d
  int v127; // r9d
  __int64 v128; // rax
  char v129; // si
  __int64 v130; // rax
  __m128i *v131; // r12
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  int *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  int *v138; // rdi
  _QWORD *v139; // r12
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  unsigned int v147; // edi
  unsigned __int64 v148; // r8
  unsigned __int64 v149; // rcx
  char *v150; // r9
  unsigned int v151; // edx
  unsigned int v152; // ecx
  __int64 v153; // rdi
  unsigned __int64 v154; // rdx
  char *v155; // rax
  char *v156; // r12
  unsigned int v157; // r13d
  unsigned int v158; // r13d
  unsigned int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  unsigned __int64 v164; // r12
  __m128i *v165; // r13
  char *v166; // rdi
  _BYTE *v167; // r12
  _BYTE *v168; // r14
  _BYTE *v169; // r13
  unsigned __int64 v170; // r14
  _QWORD *v171; // rax
  _BYTE *v172; // rdi
  size_t v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rax
  unsigned __int64 v176; // r13
  __m128i *v177; // r12
  char *v178; // rcx
  size_t v179; // r13
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  int v183; // [rsp+30h] [rbp-338h]
  __int64 v184; // [rsp+60h] [rbp-308h]
  unsigned __int8 v186; // [rsp+80h] [rbp-2E8h]
  __int64 v187; // [rsp+88h] [rbp-2E0h]
  char v188[16]; // [rsp+90h] [rbp-2D8h] BYREF
  int v189[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  int v190; // [rsp+A8h] [rbp-2C0h]
  int v191[2]; // [rsp+B0h] [rbp-2B8h]
  char v192[8]; // [rsp+C0h] [rbp-2A8h] BYREF
  int v193; // [rsp+C8h] [rbp-2A0h]
  int v194[2]; // [rsp+D0h] [rbp-298h]
  char *v195; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v196[3]; // [rsp+E8h] [rbp-280h]
  int v197[4]; // [rsp+100h] [rbp-268h]
  int v198[2]; // [rsp+110h] [rbp-258h]
  int v199[2]; // [rsp+118h] [rbp-250h]
  int v200[2]; // [rsp+120h] [rbp-248h]
  __int64 v201; // [rsp+128h] [rbp-240h]
  int v202[4]; // [rsp+130h] [rbp-238h]
  int v203[2]; // [rsp+140h] [rbp-228h]
  int v204[2]; // [rsp+148h] [rbp-220h]
  int v205[2]; // [rsp+150h] [rbp-218h]
  __int64 v206; // [rsp+158h] [rbp-210h]
  void *v207; // [rsp+160h] [rbp-208h]
  int v208[2]; // [rsp+168h] [rbp-200h]
  int v209[44]; // [rsp+170h] [rbp-1F8h] BYREF
  char v210; // [rsp+220h] [rbp-148h] BYREF
  __int64 v211[2]; // [rsp+228h] [rbp-140h]
  char v212; // [rsp+238h] [rbp-130h]
  char v213[8]; // [rsp+240h] [rbp-128h]
  int v214[2]; // [rsp+248h] [rbp-120h]
  char v215[8]; // [rsp+250h] [rbp-118h] BYREF
  __int64 v216[2]; // [rsp+258h] [rbp-110h]
  char v217; // [rsp+268h] [rbp-100h]
  char v218[16]; // [rsp+270h] [rbp-F8h]
  char v219; // [rsp+280h] [rbp-E8h] BYREF
  __int64 v220[2]; // [rsp+288h] [rbp-E0h]
  char v221; // [rsp+298h] [rbp-D0h]
  char v222[16]; // [rsp+2A0h] [rbp-C8h]
  __m128i v223; // [rsp+2B0h] [rbp-B8h] BYREF
  int v224[2]; // [rsp+2C0h] [rbp-A8h]
  __int64 v225; // [rsp+2C8h] [rbp-A0h] BYREF
  int v226[2]; // [rsp+2D8h] [rbp-90h]
  __int64 v227; // [rsp+2E0h] [rbp-88h] BYREF
  int v228[2]; // [rsp+2F0h] [rbp-78h]
  char v229[8]; // [rsp+2F8h] [rbp-70h] BYREF
  char s[40]; // [rsp+300h] [rbp-68h] BYREF
  __int64 v231; // [rsp+328h] [rbp-40h]

  v231 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v190 = 0;
  *(_QWORD *)v191 = getinf();
  *(_QWORD *)v198 = 0;
  *(_QWORD *)v189 = &off_445468;
  *(_QWORD *)v199 = -1;
  *(_QWORD *)v200 = 0;
  v201 = (__int64)v189;
  *(_OWORD *)v197 = 0;
  v201 = idaplace_t__clone();
  v183 = bookmarks_t_size();
  v107 = 0;
  if ( v183 )
  {
    while ( 1 )
    {
      v193 = 0;
      *(_QWORD *)v194 = 0;
      *(_QWORD *)v203 = 0;
      *(_QWORD *)v192 = &off_445468;
      *(_QWORD *)v204 = -1;
      v206 = (__int64)v192;
      *(_QWORD *)v205 = 0;
      *(_OWORD *)v202 = 0;
      v206 = idaplace_t__clone();
      v195 = nullptr;
      *(_OWORD *)v196 = 0;
      if ( (unsigned __int8)bookmarks_t_get() )
        break;
LABEL_25:
      if ( v195 )
      {
        v196[0] = 0;
        qfree();
      }
      if ( v206 )
      {
        qfree();
        if ( v183 == ++v107 )
          goto LABEL_29;
      }
      else if ( v183 == ++v107 )
      {
        goto LABEL_29;
      }
    }
    if ( v206 )
      (*(void (__fastcall **)(__int64, char **))(*(_QWORD *)v206 + 128LL))(v206, &v195);
    v210 = 0;
    v211[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v210 = 3;
    v108 = operator new(0x20u);
    *(_DWORD *)(v108 + 16) = 1701080681;
    *(_QWORD *)v108 = v108 + 16;
    *(_BYTE *)(v108 + 20) = 120;
    *(_QWORD *)(v108 + 8) = 5;
    *(_BYTE *)(v108 + 21) = 0;
    v212 = 6;
    *(_QWORD *)v213 = v107;
    *(_QWORD *)v214 = 0;
    *(_OWORD *)v211 = (unsigned __int64)v108;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v223,
      (const __m128i *)&v210);
    *(_QWORD *)v224 = 0;
    v215[0] = 0;
    v216[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v215[0] = 3;
    v109 = operator new(0x20u);
    *(_QWORD *)v109 = v109 + 16;
    strcpy((char *)(v109 + 16), "address");
    *(_QWORD *)(v109 + 8) = 7;
    *(_OWORD *)v216 = (unsigned __int64)v109;
    qsnprintf();
    v207 = v209;
    v110 = strlen(s);
    *(_QWORD *)v188 = v110;
    v111 = v110;
    if ( v110 > 0xF )
    {
      v135 = (int *)std::string::_M_create();
      v207 = v135;
      *(_QWORD *)v209 = *(_QWORD *)v188;
    }
    else
    {
      if ( v110 == 1 )
      {
        LOBYTE(v209[0]) = s[0];
LABEL_8:
        v112 = v209;
        goto LABEL_9;
      }
      if ( !v110 )
        goto LABEL_8;
      v135 = v209;
    }
    if ( v111 >= 8 )
    {
      *(_QWORD *)v135 = *(_QWORD *)s;
      *(_QWORD *)((char *)v135 + v111 - 8) = *(_QWORD *)&v229[v111];
      v154 = (unsigned __int64)(v135 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v155 = (char *)v135 - v154;
      v156 = (char *)(s - v155);
      v157 = ((_DWORD)v155 + v111) & 0xFFFFFFF8;
      if ( v157 >= 8 )
      {
        v158 = v157 & 0xFFFFFFF8;
        v159 = 0;
        do
        {
          v160 = v159;
          v159 += 8;
          *(_QWORD *)(v154 + v160) = *(_QWORD *)&v156[v160];
        }
        while ( v159 < v158 );
        v110 = *(_QWORD *)v188;
        v112 = (int *)v207;
LABEL_9:
        *(_QWORD *)v208 = v110;
        *((_BYTE *)v112 + v110) = 0;
        v217 = 0;
        *(_QWORD *)v218 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v217 = 3;
        v113 = operator new(0x20u);
        v114 = (int *)v207;
        v115 = v113 + 16;
        v116 = *(_QWORD *)v208;
        *(_QWORD *)v113 = v113 + 16;
        if ( v114 == v209 )
        {
          v147 = v116 + 1;
          if ( (unsigned int)(v116 + 1) < 8 )
          {
            if ( (v147 & 4) != 0 )
            {
              *(_DWORD *)(v113 + 16) = v209[0];
              *(_DWORD *)(v115 + v147 - 4) = *(int *)((char *)&v208[1] + v147);
            }
            else if ( (_DWORD)v116 != -1 )
            {
              *(_BYTE *)(v113 + 16) = v209[0];
              if ( (v147 & 2) != 0 )
                *(_WORD *)(v115 + v147 - 2) = *(_WORD *)((char *)&v208[1] + v147 + 2);
            }
          }
          else
          {
            *(_QWORD *)(v113 + 16) = *(_QWORD *)v209;
            *(_QWORD *)(v115 + v147 - 8) = *(_QWORD *)((char *)v208 + v147);
            v148 = (v113 + 24) & 0xFFFFFFFFFFFFFFF8LL;
            v149 = v115 - v148;
            v150 = (char *)v209 - v149;
            if ( (((_DWORD)v149 + v147) & 0xFFFFFFF8) >= 8 )
            {
              v151 = (v149 + v147) & 0xFFFFFFF8;
              v152 = 0;
              do
              {
                v153 = v152;
                v152 += 8;
                *(_QWORD *)(v148 + v153) = *(_QWORD *)&v150[v153];
              }
              while ( v152 < v151 );
            }
          }
        }
        else
        {
          *(_QWORD *)v113 = v114;
          *(_QWORD *)(v113 + 16) = *(_QWORD *)v209;
        }
        *(_QWORD *)(v113 + 8) = v116;
        v207 = v209;
        *(_QWORD *)v208 = 0;
        LOBYTE(v209[0]) = 0;
        *(_OWORD *)v218 = (unsigned __int64)v113;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v225,
          (const __m128i *)v215);
        *(_QWORD *)v226 = 0;
        v219 = 0;
        v220[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v219 = 3;
        v117 = operator new(0x20u);
        v118 = v196[0] <= 1uLL;
        *(_QWORD *)v117 = v117 + 16;
        v119 = "";
        if ( !v118 )
          v119 = v195;
        strcpy((char *)(v117 + 16), "description");
        *(_QWORD *)(v117 + 8) = 11;
        v221 = 0;
        *(_QWORD *)v222 = 0;
        *(_OWORD *)v220 = (unsigned __int64)v117;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v221 = 3;
        v120 = (__int64 *)operator new(0x20u);
        v121 = v120 + 2;
        v122 = v120;
        *v120 = (__int64)(v120 + 2);
        if ( !v119 )
          JUMPOUT(0xF5EDD);
        v123 = strlen(v119);
        *(_QWORD *)v188 = v123;
        v124 = v123;
        if ( v123 > 0xF )
        {
          v184 = v123;
          v136 = std::string::_M_create();
          *v122 = v136;
          v121 = (void *)v136;
          v124 = v184;
          v122[2] = *(_QWORD *)v188;
        }
        else
        {
          if ( v123 == 1 )
          {
            *((_BYTE *)v122 + 16) = *v119;
            goto LABEL_17;
          }
          if ( !v123 )
            goto LABEL_17;
        }
        memcpy(v121, v119, v124);
        v123 = *(_QWORD *)v188;
        v121 = (void *)*v122;
LABEL_17:
        v122[1] = v123;
        *((_BYTE *)v121 + v123) = 0;
        *(_OWORD *)v222 = (unsigned __int64)v122;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v227,
          (const __m128i *)&v219);
        *(_QWORD *)v228 = 0;
        v188[0] = 0;
        *(_QWORD *)&v188[8] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v188,
          &v223,
          3);
        if ( v186 )
        {
          if ( v186 != 2 )
            ida_mcp::tools::bookmarks::`anonymous namespace'::list_bookmarks_impl(
              (int)v188,
              (int)&v223,
              v186,
              v125,
              v126,
              v127,
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
              a39,
              a40,
              a41,
              a42,
              a43,
              a44,
              a45,
              a46,
              a47,
              a48,
              a49,
              a50,
              a51,
              a52,
              a53,
              a54,
              a55,
              a56,
              a57,
              a58,
              a59,
              a60,
              a61,
              a62,
              a63,
              a64,
              a65,
              a66,
              a67,
              a68,
              a69,
              a70,
              a71,
              a72,
              a73,
              a74,
              a75,
              a76,
              a77,
              a78,
              a79,
              a80,
              a81,
              a82,
              a83,
              a84,
              a85,
              a86,
              a87,
              a88,
              a89,
              a90,
              a91,
              a92,
              a93,
              a94,
              a95,
              a96,
              a97,
              a98,
              a99,
              a100,
              a101,
              a102,
              a103,
              a104,
              a105,
              a106,
              a107);
          v161 = *(_QWORD *)(v187 + 8);
          if ( v161 != *(_QWORD *)(v187 + 16) )
          {
            v162 = v161 + 16;
            v129 = 0;
            *(__m128i *)(v162 - 16) = _mm_load_si128((const __m128i *)v188);
            *(_QWORD *)(v187 + 8) = v162;
            v130 = 0;
LABEL_20:
            v188[0] = v129;
            v131 = (__m128i *)v229;
            *(_QWORD *)&v188[8] = v130;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            do
            {
              v131 = (__m128i *)((char *)v131 - 24);
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v131 != &v223 );
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v207 != v209 )
              operator delete(v207, *(_QWORD *)v209 + 1LL);
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            goto LABEL_25;
          }
        }
        else
        {
          v186 = 2;
          v128 = operator new(0x18u);
          *(_QWORD *)(v128 + 16) = 0;
          v187 = v128;
          *(_OWORD *)v128 = 0;
        }
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v129 = v188[0];
        v130 = *(_QWORD *)&v188[8];
        goto LABEL_20;
      }
    }
    else if ( (v111 & 4) != 0 )
    {
      *v135 = *(_DWORD *)s;
      *(int *)((char *)v135 + v111 - 4) = *(_DWORD *)&v229[v111 + 4];
    }
    else if ( v111 )
    {
      *(_BYTE *)v135 = s[0];
      if ( (v111 & 2) != 0 )
        *(_WORD *)((char *)v135 + v111 - 2) = *(_WORD *)&v229[v111 + 6];
    }
    v110 = *(_QWORD *)v188;
    v112 = (int *)v207;
    goto LABEL_9;
  }
LABEL_29:
  v215[0] = 0;
  v216[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v215[0] = 3;
  v132 = operator new(0x20u);
  *(_DWORD *)(v132 + 16) = 1853189987;
  *(_QWORD *)v132 = v132 + 16;
  *(_BYTE *)(v132 + 20) = 116;
  *(_QWORD *)(v132 + 8) = 5;
  *(_BYTE *)(v132 + 21) = 0;
  *(_OWORD *)v216 = (unsigned __int64)v132;
  if ( v186 == 1 )
  {
    v133 = *(_QWORD *)(v187 + 40);
  }
  else if ( v186 == 2 )
  {
    v133 = (__int64)(*(_QWORD *)(v187 + 8) - *(_QWORD *)v187) >> 4;
  }
  else
  {
    v133 = v186 != 0;
  }
  v217 = 6;
  *(_QWORD *)v218 = v133;
  *(_QWORD *)&v218[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v223,
    (const __m128i *)v215);
  *(_QWORD *)v224 = 0;
  v219 = 0;
  v220[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v219 = 3;
  v134 = operator new(0x20u);
  *(_QWORD *)v134 = v134 + 16;
  strcpy((char *)(v134 + 16), "bookmarks");
  *(_QWORD *)(v134 + 8) = 9;
  *(_QWORD *)v222 = 0;
  v221 = v186;
  *(_OWORD *)v220 = (unsigned __int64)v134;
  switch ( v186 )
  {
    case 1u:
      v137 = operator new(0x30u);
      *(_QWORD *)(v137 + 16) = 0;
      v138 = *(int **)(v187 + 16);
      v139 = (_QWORD *)v137;
      *(_DWORD *)(v137 + 8) = 0;
      *(_QWORD *)(v137 + 24) = v137 + 8;
      *(_QWORD *)(v137 + 32) = v137 + 8;
      *(_QWORD *)(v137 + 40) = 0;
      if ( v138 )
      {
        v140 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v138,
                 v137 + 8);
        v141 = v140;
        do
        {
          v142 = v140;
          v140 = *(_QWORD *)(v140 + 16);
        }
        while ( v140 );
        v139[3] = v142;
        v143 = v141;
        do
        {
          v144 = v143;
          v143 = *(_QWORD *)(v143 + 24);
        }
        while ( v143 );
        v145 = *(_QWORD *)(v187 + 40);
        v139[4] = v144;
        v139[2] = v141;
        v139[5] = v145;
      }
      goto LABEL_51;
    case 2u:
      v163 = operator new(0x18u);
      v164 = *(_QWORD *)(v187 + 8) - *(_QWORD *)v187;
      v165 = (__m128i *)v163;
      *(_QWORD *)(v163 + 16) = 0;
      *(_OWORD *)v163 = 0;
      if ( v164 )
        v166 = (char *)operator new(v164);
      else
        v166 = nullptr;
      v165[1].m128i_i64[0] = (__int64)&v166[v164];
      *v165 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v166, (__m128i)(unsigned __int64)v166);
      v167 = *(_BYTE **)(v187 + 8);
      v168 = *(_BYTE **)v187;
      v195 = v166;
      for ( *(__m128i *)v202 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v166, (__m128i)(unsigned __int64)&v195);
            v167 != v168;
            v195 += 16 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v168 += 16;
        v166 = v195 + 16;
      }
      v165->m128i_i64[1] = (__int64)v166;
      *(_QWORD *)v222 = v165;
      goto LABEL_52;
    case 3u:
      v169 = *(_BYTE **)v187;
      v170 = *(_QWORD *)(v187 + 8);
      v171 = (_QWORD *)operator new(0x20u);
      v172 = v171 + 2;
      *(_QWORD *)v202 = v170;
      v139 = v171;
      *v171 = v171 + 2;
      if ( v170 <= 0xF )
      {
        v173 = v170 + 1;
        if ( v170 )
        {
LABEL_85:
          memcpy(v172, v169, v173);
          v174 = *(_QWORD *)v202;
          goto LABEL_86;
        }
        goto LABEL_95;
      }
      v181 = std::string::_M_create();
      *v139 = v181;
      v172 = (_BYTE *)v181;
      v182 = *(_QWORD *)v202;
      v139[2] = *(_QWORD *)v202;
      v173 = v182 + 1;
      if ( !v182 )
      {
LABEL_95:
        *v172 = *v169;
        v174 = *(_QWORD *)v202;
        goto LABEL_86;
      }
      v174 = -1;
      if ( v173 )
        goto LABEL_85;
LABEL_86:
      v139[1] = v174;
LABEL_51:
      *(_QWORD *)v222 = v139;
LABEL_52:
      *(_QWORD *)&v222[8] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v225,
        (const __m128i *)&v219);
      *(_QWORD *)v226 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v223);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v201 )
        qfree();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    case 4u:
      v222[0] = v187;
      goto LABEL_52;
    case 5u:
    case 6u:
      *(_QWORD *)v222 = v187;
      goto LABEL_52;
    case 7u:
      *(_QWORD *)v222 = v187;
      goto LABEL_52;
    case 8u:
      v175 = operator new(0x28u);
      v176 = *(_QWORD *)(v187 + 8) - *(_QWORD *)v187;
      v177 = (__m128i *)v175;
      *(_QWORD *)(v175 + 16) = 0;
      *(_OWORD *)v175 = 0;
      if ( v176 )
        v178 = (char *)operator new(v176);
      else
        v178 = nullptr;
      v177[1].m128i_i64[0] = (__int64)&v178[v176];
      *v177 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v178, (__m128i)(unsigned __int64)v178);
      if ( (__int64)(*(_QWORD *)(v187 + 8) - *(_QWORD *)v187) > 0 )
      {
        v179 = *(_QWORD *)(v187 + 8) - *(_QWORD *)v187;
        v178 = (char *)memcpy(v178, *(const void **)v187, v179) + v179;
      }
      v180 = *(_QWORD *)(v187 + 24);
      v177->m128i_i64[1] = (__int64)v178;
      v177[1].m128i_i64[1] = v180;
      v177[2].m128i_i8[0] = *(_BYTE *)(v187 + 32);
      *(_QWORD *)v222 = v177;
      goto LABEL_52;
    default:
      goto LABEL_52;
  }
}

