__int64 __fastcall ida_mcp::tools::problems::`anonymous namespace'::handle_check_problem_exists(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        char a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        char a48,
        int a49,
        char a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        int a69,
        int a70,
        char a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        __int64 a77)
{
  __int64 v77; // rdx
  __int64 v78; // rcx
  double *v79; // rbp
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned __int8 v82; // al
  _BYTE *v83; // r13
  int *v84; // rax
  int *v85; // r15
  __int64 v86; // r12
  std::runtime_error *exception; // rax
  unsigned __int8 v88; // r14
  __int64 *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  _QWORD *v100; // rcx
  __int64 v101; // rsi
  __int64 *v102; // r12
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 *v107; // rbp
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 problem_name; // rax
  const char *v113; // r12
  __int64 *v114; // rbp
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // rbp
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 *v124; // rbp
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 *v129; // rbp
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  char *v137; // rbp
  unsigned int v139; // edx
  unsigned __int64 v140; // rdi
  char *v141; // rcx
  char *v142; // r8
  unsigned int v143; // edx
  unsigned int v144; // edx
  unsigned int v145; // ecx
  __int64 v146; // r9
  int v147; // [rsp+0h] [rbp-278h]
  int v148; // [rsp+0h] [rbp-278h]
  int v149; // [rsp+0h] [rbp-278h]
  int v150; // [rsp+0h] [rbp-278h]
  int v151; // [rsp+0h] [rbp-278h]
  int v152; // [rsp+0h] [rbp-278h]
  int v153; // [rsp+0h] [rbp-278h]
  int v154; // [rsp+0h] [rbp-278h]
  int v155; // [rsp+0h] [rbp-278h]
  int v156; // [rsp+8h] [rbp-270h]
  int v157; // [rsp+8h] [rbp-270h]
  int v158; // [rsp+8h] [rbp-270h]
  int v159; // [rsp+8h] [rbp-270h]
  int v160; // [rsp+8h] [rbp-270h]
  int v161; // [rsp+8h] [rbp-270h]
  int v162; // [rsp+8h] [rbp-270h]
  const __m128i *v163; // [rsp+8h] [rbp-270h]
  __int64 v164; // [rsp+10h] [rbp-268h]
  __int64 v165; // [rsp+10h] [rbp-268h]
  __int64 v166; // [rsp+10h] [rbp-268h]
  __int64 v167; // [rsp+10h] [rbp-268h]
  __int64 v168; // [rsp+10h] [rbp-268h]
  __int64 v169; // [rsp+10h] [rbp-268h]
  __int64 v170; // [rsp+10h] [rbp-268h]
  _QWORD *v171; // [rsp+10h] [rbp-268h]
  __int64 v172; // [rsp+10h] [rbp-268h]
  const char *v173; // [rsp+40h] [rbp-238h]
  _BYTE *v174; // [rsp+60h] [rbp-218h]
  __int64 v175; // [rsp+60h] [rbp-218h]
  void *v176; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v177; // [rsp+88h] [rbp-1F0h]
  _QWORD v178[2]; // [rsp+90h] [rbp-1E8h] BYREF
  char v179; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v180; // [rsp+A8h] [rbp-1D0h] BYREF
  char v181; // [rsp+B8h] [rbp-1C0h]
  __int128 v182; // [rsp+C0h] [rbp-1B8h] BYREF
  char v183; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v184; // [rsp+D8h] [rbp-1A0h] BYREF
  char v185; // [rsp+E8h] [rbp-190h]
  __int64 v186; // [rsp+F0h] [rbp-188h]
  __int64 v187; // [rsp+F8h] [rbp-180h]
  char v188; // [rsp+100h] [rbp-178h] BYREF
  __int128 v189; // [rsp+108h] [rbp-170h] BYREF
  char v190; // [rsp+118h] [rbp-160h]
  __int128 v191; // [rsp+120h] [rbp-158h]
  char v192; // [rsp+130h] [rbp-148h] BYREF
  __int128 v193; // [rsp+138h] [rbp-140h] BYREF
  char v194; // [rsp+148h] [rbp-130h]
  __int64 v195; // [rsp+150h] [rbp-128h]
  __int64 v196; // [rsp+158h] [rbp-120h]
  void *v197; // [rsp+160h] [rbp-118h] BYREF
  __int128 v198; // [rsp+168h] [rbp-110h] BYREF
  char v199; // [rsp+178h] [rbp-100h]
  __int128 v200; // [rsp+180h] [rbp-F8h]
  _QWORD v201[3]; // [rsp+190h] [rbp-E8h] BYREF
  _QWORD v202[3]; // [rsp+1A8h] [rbp-D0h] BYREF
  _QWORD v203[3]; // [rsp+1C0h] [rbp-B8h] BYREF
  _QWORD v204[3]; // [rsp+1D8h] [rbp-A0h] BYREF
  _QWORD v205[3]; // [rsp+1F0h] [rbp-88h] BYREF
  char v206; // [rsp+208h] [rbp-70h] BYREF
  char v207[40]; // [rsp+210h] [rbp-68h] BYREF
  unsigned __int64 v208; // [rsp+238h] [rbp-40h]

  v208 = __readfsqword(0x28u);
  v79 = (double *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v82 = *(_BYTE *)v79;
  if ( *(_BYTE *)v79 == 6 )
  {
LABEL_4:
    LOBYTE(v79) = *((_BYTE *)v79 + 8);
    goto LABEL_5;
  }
  if ( v82 <= 6u )
  {
    if ( v82 != 4 && v82 != 5 )
LABEL_30:
      ida_mcp::tools::problems::`anonymous namespace'::handle_check_problem_exists(
        a2,
        (__int64)"problem_type",
        v77,
        v78,
        v80,
        v81,
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
        a77);
    goto LABEL_4;
  }
  if ( v82 != 7 )
    goto LABEL_30;
  LODWORD(v79) = (int)v79[1];
LABEL_5:
  v197 = (char *)&v198 + 8;
  *(_QWORD *)&v198 = 0;
  BYTE8(v198) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xB9437);
  std::string::_M_assign();
  v83 = v197;
  v84 = __errno_location();
  *v84 = 0;
  v85 = v84;
  v86 = __isoc23_strtoull();
  if ( v83 == v174 || *v174 || *v85 == 34 && v86 == -1 )
  {
    if ( v197 != (char *)&v198 + 8 )
      operator delete(v197, *((_QWORD *)&v198 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xB93CA);
  }
  if ( v197 != (char *)&v198 + 8 )
    operator delete(v197, *((_QWORD *)&v198 + 1) + 1LL);
  if ( (unsigned __int8)((_BYTE)v79 - 1) > 0xFu )
    JUMPOUT(0xB9385);
  v88 = is_problem_present();
  if ( v88 )
    get_problem_desc();
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v89 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v89, "address", v90, v91, v92, v93, v147, (int)&v197, a1);
  v180 = (unsigned __int64)v89;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v176, v207, v94, v95, v96, v97, v148, v156, v164);
  v181 = 0;
  *(_QWORD *)&v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v98 = (_QWORD *)operator new(0x20u);
  v99 = v176;
  v100 = v98 + 2;
  v101 = v177;
  *v98 = v98 + 2;
  if ( v99 == v178 )
  {
    v139 = v101 + 1;
    if ( (unsigned int)(v101 + 1) >= 8 )
    {
      v98[2] = v178[0];
      *(_QWORD *)((char *)v100 + v139 - 8) = *(_QWORD *)((char *)&v178[-1] + v139);
      v140 = (unsigned __int64)(v98 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v141 = (char *)v100 - v140;
      v142 = (char *)((char *)v178 - v141);
      v143 = ((_DWORD)v141 + v139) & 0xFFFFFFF8;
      if ( v143 >= 8 )
      {
        v144 = v143 & 0xFFFFFFF8;
        v145 = 0;
        do
        {
          v146 = v145;
          v145 += 8;
          *(_QWORD *)(v140 + v146) = *(_QWORD *)&v142[v146];
        }
        while ( v145 < v144 );
      }
    }
    else if ( (v139 & 4) != 0 )
    {
      *((_DWORD *)v98 + 4) = v178[0];
      *(_DWORD *)((char *)v100 + v139 - 4) = *(_DWORD *)((char *)&v177 + v139 + 4);
    }
    else if ( (_DWORD)v101 != -1 )
    {
      *((_BYTE *)v98 + 16) = v178[0];
      if ( (v139 & 2) != 0 )
        *(_WORD *)((char *)v100 + v139 - 2) = *(_WORD *)((char *)&v177 + v139 + 6);
    }
  }
  else
  {
    *v98 = v99;
    v98[2] = v178[0];
  }
  v98[1] = v101;
  v176 = v178;
  v177 = 0;
  LOBYTE(v178[0]) = 0;
  v182 = (unsigned __int64)v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v201,
    (const __m128i *)&v179);
  v201[2] = 0;
  v183 = 0;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "problem_type", v103, v104, v105, v106, v149, v157, v165);
  v185 = 5;
  v186 = (unsigned __int8)v79;
  v187 = 0;
  v184 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v202,
    (const __m128i *)&v183);
  v202[2] = 0;
  v188 = 0;
  *(_QWORD *)&v189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v188 = 3;
  v107 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v107, "problem_type_name", v108, v109, v110, v111, v150, v158, v166);
  v189 = (unsigned __int64)v107;
  problem_name = get_problem_name();
  v190 = 0;
  v113 = (const char *)problem_name;
  *(_QWORD *)&v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v190 = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, v113, v115, v116, v117, v118, v151, v159, v167);
  v191 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v203,
    (const __m128i *)&v188);
  v203[2] = 0;
  v192 = 0;
  *(_QWORD *)&v193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v119 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v119, "exists", v120, v121, v122, v123, v152, v160, v168);
  v194 = 4;
  v195 = v88;
  v196 = 0;
  v193 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v204,
    (const __m128i *)&v192);
  v204[2] = 0;
  LOBYTE(v197) = 0;
  *(_QWORD *)&v198 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v197) = 3;
  v124 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v124, "description", v125, v126, v127, v128, v153, v161, v169);
  v198 = (unsigned __int64)v124;
  if ( v88 )
    v173 = _qstring<char>::c_str(void)const::nullstr;
  else
    v173 = "";
  v199 = 0;
  *(_QWORD *)&v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v199 = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, v173, v130, v131, v132, v133, v154, v162, v170);
  v200 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v205,
    v163);
  v205[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v171,
    (__int64)v201,
    5,
    v134,
    v135,
    v136,
    v155,
    (__int64)v163,
    (int)v171,
    (int)&v180,
    (int)&v182,
    (int)&v184,
    (__int64)&v189,
    (int)&v193,
    (int)v173,
    (int)&v179,
    (int)&v188,
    (char)&v176,
    0,
    0,
    0);
  v137 = &v206;
  do
  {
    v137 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v137 != (char *)v201 );
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
  if ( v176 != v178 )
    operator delete(v176, v178[0] + 1LL);
  if ( v175 )
    qfree();
  return v172;
}

