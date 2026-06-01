_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_methods(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        char a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        int a26,
        int a27,
        __int64 a28,
        __int64 a29,
        int a30,
        int a31,
        __int64 a32,
        __int64 a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        char a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        __int64 a63)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v64; // rax
  const char *v66; // rsi
  const void *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  _QWORD *v73; // rbx
  _QWORD *v74; // r13
  _QWORD *v75; // r12
  unsigned __int64 v76; // rbp
  size_t v77; // rdx
  int v78; // eax
  unsigned __int64 v79; // rbx
  size_t v80; // rdx
  int v81; // eax
  __int64 v82; // rbx
  _QWORD *v83; // r14
  __int64 func_name; // rax
  char *v85; // r12
  char *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rax
  _QWORD *v92; // rcx
  _QWORD *v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rax
  char v96; // si
  __int64 v97; // rcx
  __int64 *v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  char v104; // si
  __int64 v105; // rdx
  __int64 v106; // rax
  char v107; // si
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  char v111; // si
  __int64 v112; // rdx
  __int64 v113; // r14
  __int64 v114; // rax
  char v115; // si
  __int64 v116; // rdx
  char v117; // cl
  const void *v118; // r15
  char *v119; // rax
  const char *v120; // r14
  signed __int64 v121; // r8
  size_t v122; // r12
  const char *v123; // r15
  __int64 *v124; // r12
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  char v130; // si
  __int64 v131; // rdx
  char v132; // cl
  char *v133; // rax
  signed __int64 v134; // rax
  signed __int64 v135; // r12
  size_t v136; // r15
  const char *v137; // r15
  __int64 *v138; // r14
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rax
  char v144; // si
  __int64 v145; // rdx
  __int64 *v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  void *v157; // rdi
  signed __int64 v158; // rdx
  unsigned int v159; // eax
  void *v160; // rdi
  unsigned __int64 v161; // rdi
  char *v162; // rcx
  char *v163; // r8
  unsigned int v164; // eax
  unsigned int v165; // eax
  unsigned int v166; // ecx
  __int64 v167; // r9
  int v168; // [rsp+0h] [rbp-208h]
  int v169; // [rsp+0h] [rbp-208h]
  int v170; // [rsp+0h] [rbp-208h]
  int v171; // [rsp+8h] [rbp-200h]
  __int64 func_qty; // [rsp+8h] [rbp-200h]
  int v173; // [rsp+8h] [rbp-200h]
  int v174; // [rsp+8h] [rbp-200h]
  __int64 v175; // [rsp+10h] [rbp-1F8h]
  __int64 v176; // [rsp+10h] [rbp-1F8h]
  char v177; // [rsp+20h] [rbp-1E8h]
  signed __int64 v179; // [rsp+40h] [rbp-1C8h]
  signed __int64 v180; // [rsp+40h] [rbp-1C8h]
  signed __int64 v181; // [rsp+58h] [rbp-1B0h]
  char v182[8]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v183; // [rsp+78h] [rbp-190h]
  __int64 v184; // [rsp+80h] [rbp-188h]
  __int64 v185; // [rsp+88h] [rbp-180h]
  char *haystack; // [rsp+90h] [rbp-178h]
  __int128 v187; // [rsp+98h] [rbp-170h]
  __int64 v188; // [rsp+B0h] [rbp-158h]
  __int128 v189; // [rsp+B8h] [rbp-150h]
  __int64 v190; // [rsp+D0h] [rbp-138h]
  __int128 v191; // [rsp+D8h] [rbp-130h]
  char *needle; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v193; // [rsp+F8h] [rbp-110h]
  _QWORD v194[2]; // [rsp+100h] [rbp-108h] BYREF
  char v195; // [rsp+110h] [rbp-F8h] BYREF
  __int128 v196; // [rsp+118h] [rbp-F0h]
  char v197; // [rsp+128h] [rbp-E0h]
  __int64 v198; // [rsp+130h] [rbp-D8h]
  __int64 v199; // [rsp+138h] [rbp-D0h]
  char v200; // [rsp+140h] [rbp-C8h] BYREF
  __int128 v201; // [rsp+148h] [rbp-C0h]
  __int64 v202; // [rsp+168h] [rbp-A0h]
  __m128i v203; // [rsp+170h] [rbp-98h] BYREF
  __int64 v204; // [rsp+180h] [rbp-88h] BYREF
  _QWORD v205[3]; // [rsp+188h] [rbp-80h] BYREF
  char v206[40]; // [rsp+1A0h] [rbp-68h] BYREF
  unsigned __int64 v207; // [rsp+1C8h] [rbp-40h]

  v207 = __readfsqword(0x28u);
  v66 = "limit";
  LODWORD(v190) = 200;
  v67 = a2;
  v168 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v64 = "null";
        break;
      case 1:
        v64 = "object";
        break;
      case 2:
        v64 = (char *)"array";
        break;
      case 3:
        v64 = "string";
        break;
      case 4:
        v64 = "boolean";
        break;
      case 8:
        v64 = "binary";
        break;
      case 9:
        v64 = "discarded";
        break;
      default:
        v64 = "number";
        break;
    }
    v190 = (__int64)v64;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v72 = a2[1];
  v73 = *(_QWORD **)(v72 + 16);
  if ( !v73 )
    goto LABEL_19;
  v74 = (_QWORD *)(v72 + 8);
  v75 = (_QWORD *)(v72 + 8);
  do
  {
    v76 = v73[5];
    if ( !v76 )
      goto LABEL_52;
    v77 = 12;
    v67 = (const void *)v73[4];
    v66 = "class_filter";
    if ( v76 <= 0xC )
      v77 = v73[5];
    if ( ((v78 = memcmp(v67, "class_filter", v77)) != 0 || (v78 = v76 - 12, (__int64)(v76 - 12) <= 0x7FFFFFFF))
      && v78 < 0 )
    {
LABEL_52:
      v73 = (_QWORD *)v73[3];
    }
    else
    {
      v75 = v73;
      v73 = (_QWORD *)v73[2];
    }
  }
  while ( v73 );
  if ( v74 == v75 )
    goto LABEL_19;
  v79 = v75[5];
  if ( !v79 )
    goto LABEL_59;
  v80 = 12;
  v67 = (const void *)v75[4];
  v66 = "class_filter";
  if ( v79 <= 0xC )
    v80 = v75[5];
  if ( ((v81 = memcmp(v67, "class_filter", v80)) != 0 || (v81 = v79 - 12, (__int64)(v79 - 12) <= 0x7FFFFFFF))
    && v81 <= 0 )
  {
LABEL_59:
    LOBYTE(v194[0]) = 0;
    needle = (char *)v194;
    v193 = 0;
    if ( *((_BYTE *)v75 + 64) != 3 )
      ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_methods(
        (__int64)v67,
        (__int64)v66,
        v68,
        v69,
        v70,
        v71,
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
        a63);
    std::string::_M_assign();
  }
  else
  {
LABEL_19:
    std::string::basic_string<std::allocator<char>>((__int64 *)&needle, "", v68, v69, v70, v71, v168, v171, v175);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  func_qty = get_func_qty();
  v82 = 0;
  if ( func_qty )
  {
    do
    {
      if ( v168 <= 0 )
        break;
      v83 = (_QWORD *)getn_func();
      if ( v83 )
      {
        haystack = nullptr;
        v187 = 0;
        func_name = get_func_name();
        v85 = haystack;
        if ( func_name > 0 && (_QWORD)v187 )
        {
          if ( ((*haystack - 43) & 0xFD) == 0
            && haystack[1] == 91
            && (!v193 || (v86 = strstr(haystack, needle)) != nullptr && v86 - v85 != -1) )
          {
            v183 = 0;
            qsnprintf();
            std::string::basic_string<std::allocator<char>>(
              v203.m128i_i64,
              v206,
              v87,
              v88,
              v89,
              v90,
              v168,
              func_qty,
              v175);
            v190 = 0;
            *(_QWORD *)&v191 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v91 = (_QWORD *)operator new(0x20u);
            v92 = v91 + 2;
            v93 = v91;
            v94 = v203.m128i_i64[1];
            *v91 = v91 + 2;
            if ( (__int64 *)v203.m128i_i64[0] == &v204 )
            {
              v159 = v94 + 1;
              if ( (unsigned int)(v94 + 1) >= 8 )
              {
                v93[2] = v204;
                *(_QWORD *)((char *)v92 + v159 - 8) = *(__int64 *)((char *)&v203.m128i_i64[1] + v159);
                v161 = (unsigned __int64)(v93 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v162 = (char *)v92 - v161;
                v163 = (char *)((char *)&v204 - v162);
                v164 = ((_DWORD)v162 + v159) & 0xFFFFFFF8;
                if ( v164 >= 8 )
                {
                  v165 = v164 & 0xFFFFFFF8;
                  v166 = 0;
                  do
                  {
                    v167 = v166;
                    v166 += 8;
                    *(_QWORD *)(v161 + v167) = *(_QWORD *)&v163[v167];
                  }
                  while ( v166 < v165 );
                }
              }
              else if ( (v159 & 4) != 0 )
              {
                *((_DWORD *)v93 + 4) = v204;
                *(_DWORD *)((char *)v92 + v159 - 4) = *(__int32 *)((char *)&v203.m128i_i32[3] + v159);
              }
              else if ( (_DWORD)v94 != -1 )
              {
                *((_BYTE *)v93 + 16) = v204;
                if ( (v159 & 2) != 0 )
                  *(_WORD *)((char *)v92 + v159 - 2) = *(__int16 *)((char *)&v203.m128i_i16[7] + v159);
              }
            }
            else
            {
              *v91 = v203.m128i_i64[0];
              v91[2] = v204;
            }
            v93[1] = v94;
            v203.m128i_i64[0] = (__int64)&v204;
            v203.m128i_i64[1] = 0;
            LOBYTE(v204) = 0;
            v182[0] = 0;
            v95 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v96 = *(_BYTE *)v95;
            *(_BYTE *)v95 = 3;
            v97 = *(_QWORD *)(v95 + 8);
            *(_QWORD *)(v95 + 8) = v93;
            LOBYTE(v190) = v96;
            *(_QWORD *)&v191 = v97;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( (__int64 *)v203.m128i_i64[0] != &v204 )
              operator delete((void *)v203.m128i_i64[0], v204 + 1);
            v190 = 0;
            *(_QWORD *)&v191 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v98 = (__int64 *)operator new(0x20u);
            std::string::basic_string<std::allocator<char>>(v98, v85, v99, v100, v101, v102, v169, v173, (__int64)v182);
            v103 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v104 = *(_BYTE *)v103;
            v105 = *(_QWORD *)(v103 + 8);
            *(_BYTE *)v103 = 3;
            *(_QWORD *)(v103 + 8) = v98;
            LOBYTE(v190) = v104;
            *(_QWORD *)&v191 = v105;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            *(_QWORD *)&v191 = *v85 == 43;
            v106 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v107 = *(_BYTE *)v106;
            v108 = v191;
            *(_BYTE *)v106 = 4;
            v109 = *(_QWORD *)(v106 + 8);
            LOBYTE(v190) = v107;
            *(_QWORD *)(v106 + 8) = v108;
            *(_QWORD *)&v191 = v109;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            *(_QWORD *)&v191 = *v85 == 45;
            v110 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v111 = *(_BYTE *)v110;
            v112 = *(_QWORD *)(v110 + 8);
            *(_BYTE *)v110 = 4;
            LOBYTE(v190) = v111;
            *(_QWORD *)(v110 + 8) = v191;
            *(_QWORD *)&v191 = v112;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v113 = v83[1] - *v83;
            v114 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v115 = *(_BYTE *)v114;
            v116 = *(_QWORD *)(v114 + 8);
            *(_BYTE *)v114 = 6;
            v117 = v182[0];
            v118 = v85 + 2;
            LOBYTE(v190) = v115;
            *(_QWORD *)(v114 + 8) = v113;
            v177 = v117;
            *(_QWORD *)&v191 = v116;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v119 = strchr(v85 + 2, 32);
            v120 = v119;
            if ( v119 )
            {
              v188 = 0;
              v121 = v119 - v85;
              v189 = 0;
              v122 = v119 - v85 - 2;
              if ( !v122 )
                goto LABEL_37;
              v157 = nullptr;
              v158 = v121 - 1;
              if ( v121 != 1 )
              {
                v181 = v121;
                v180 = v121 - 1;
                v188 = qvector_reserve();
                v121 = v181;
                v157 = (void *)v188;
                v158 = v180;
              }
              *(_QWORD *)&v189 = v158;
              v179 = v121;
              memmove(v157, v118, v122);
              *(_BYTE *)(v188 + v179 - 2) = 0;
              if ( (_QWORD)v189 )
                v123 = (const char *)v188;
              else
LABEL_37:
                v123 = _qstring<char>::c_str(void)const::nullstr;
              v190 = 0;
              *(_QWORD *)&v191 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v124 = (__int64 *)operator new(0x20u);
              std::string::basic_string<std::allocator<char>>(v124, v123, v125, v126, v127, v128, v168, func_qty, v175);
              v129 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v130 = *(_BYTE *)v129;
              v131 = *(_QWORD *)(v129 + 8);
              *(_BYTE *)v129 = 3;
              v132 = v182[0];
              *(_QWORD *)(v129 + 8) = v124;
              LOBYTE(v190) = v130;
              v177 = v132;
              *(_QWORD *)&v191 = v131;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v133 = strchr(v120, 93);
              if ( v133 )
              {
                v134 = v133 - v120;
                v190 = 0;
                v135 = v134;
                v191 = 0;
                v136 = v134 - 1;
                if ( v134 == 1 )
                  goto LABEL_40;
                v160 = nullptr;
                if ( v134 )
                {
                  v190 = qvector_reserve();
                  v160 = (void *)v190;
                }
                *(_QWORD *)&v191 = v135;
                memmove(v160, v120 + 1, v136);
                *(_BYTE *)(v190 + v135 - 1) = 0;
                if ( !(_QWORD)v191 )
LABEL_40:
                  v137 = _qstring<char>::c_str(void)const::nullstr;
                else
                  v137 = (const char *)v190;
                v184 = 0;
                v185 = 0;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                v138 = (__int64 *)operator new(0x20u);
                std::string::basic_string<std::allocator<char>>(
                  v138,
                  v137,
                  v139,
                  v140,
                  v141,
                  v142,
                  v168,
                  func_qty,
                  v175);
                v143 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v144 = *(_BYTE *)v143;
                v145 = *(_QWORD *)(v143 + 8);
                *(_BYTE *)v143 = 3;
                *(_QWORD *)(v143 + 8) = v138;
                LOBYTE(v184) = v144;
                v177 = v182[0];
                v185 = v145;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                if ( v190 )
                {
                  *(_QWORD *)&v191 = 0;
                  qfree();
                }
              }
              if ( v188 )
              {
                *(_QWORD *)&v189 = 0;
                qfree();
              }
            }
            v182[0] = v177;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( !haystack )
              goto LABEL_47;
          }
        }
        else if ( !haystack )
        {
          goto LABEL_47;
        }
        *(_QWORD *)&v187 = 0;
        qfree();
      }
LABEL_47:
      ++v82;
    }
    while ( func_qty != v82 );
  }
  v195 = 0;
  *(_QWORD *)&v196 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v195 = 3;
  v146 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v146, "method_count", v147, v148, v149, v150, v168, func_qty, v175);
  v196 = (unsigned __int64)v146;
  v198 = 0;
  v197 = 6;
  v199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v203,
    (const __m128i *)&v195);
  v204 = 0;
  v200 = 0;
  *(_QWORD *)&v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200 = 3;
  v151 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v151, "methods", v152, v153, v154, v155, v170, v174, v176);
  v201 = (unsigned __int64)v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v202 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v205,
    (const __m128i *)&v200);
  v205[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v203);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( needle != (char *)v194 )
    operator delete(needle, v194[0] + 1LL);
  return a1;
}

