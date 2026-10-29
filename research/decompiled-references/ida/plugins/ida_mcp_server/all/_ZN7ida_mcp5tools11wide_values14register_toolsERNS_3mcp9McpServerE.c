unsigned __int64 __fastcall ida_mcp::tools::wide_values::register_tools(
        ida_mcp::tools::wide_values *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __m128 v16; // xmm1
  __m128i v17; // xmm0
  char v18; // si
  __m128i *v19; // r13
  __int64 v20; // rdx
  __m128i v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  const __m128i *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i si128; // xmm0
  const __m128i *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdi
  __m128i v48; // xmm0
  __m128i *v49; // r15
  __int64 v50; // rax
  __m128i v51; // xmm3
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  const __m128i *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  const __m128i *v61; // rsi
  _QWORD *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __m128i v65; // xmm0
  __m128i *v66; // r13
  __int64 v67; // rax
  __m128i v68; // xmm4
  int v70; // [rsp+0h] [rbp-4E8h]
  int v71; // [rsp+8h] [rbp-4E0h]
  __int64 v72; // [rsp+10h] [rbp-4D8h]
  __m128i v73; // [rsp+80h] [rbp-468h] BYREF
  char v74[8]; // [rsp+90h] [rbp-458h]
  ida_mcp::tools::wide_values *v75; // [rsp+98h] [rbp-450h]
  const __m128i *v76; // [rsp+A0h] [rbp-448h]
  const __m128i *v77; // [rsp+A8h] [rbp-440h]
  const __m128i *v78; // [rsp+B0h] [rbp-438h]
  char *v79; // [rsp+B8h] [rbp-430h]
  char *v80; // [rsp+C0h] [rbp-428h]
  char *v81; // [rsp+C8h] [rbp-420h]
  __int8 *v82; // [rsp+D0h] [rbp-418h]
  char *v83; // [rsp+D8h] [rbp-410h]
  char *v84; // [rsp+E0h] [rbp-408h]
  char v85[8]; // [rsp+E8h] [rbp-400h]
  char v86[8]; // [rsp+F0h] [rbp-3F8h]
  char v87[8]; // [rsp+F8h] [rbp-3F0h]
  void **v88; // [rsp+100h] [rbp-3E8h]
  __int64 *v89; // [rsp+108h] [rbp-3E0h]
  int v90[2]; // [rsp+110h] [rbp-3D8h]
  __int64 *v91; // [rsp+118h] [rbp-3D0h]
  char v92[8]; // [rsp+120h] [rbp-3C8h]
  char v93[8]; // [rsp+128h] [rbp-3C0h]
  __int128 *v94; // [rsp+130h] [rbp-3B8h]
  __int128 *v95; // [rsp+138h] [rbp-3B0h]
  __int128 *v96; // [rsp+140h] [rbp-3A8h]
  __int128 *v97; // [rsp+148h] [rbp-3A0h]
  __int128 *v98; // [rsp+150h] [rbp-398h]
  char *v99; // [rsp+158h] [rbp-390h]
  __m128i v100; // [rsp+160h] [rbp-388h] BYREF
  char v101[8]; // [rsp+170h] [rbp-378h] BYREF
  __int64 v102; // [rsp+178h] [rbp-370h] BYREF
  __m128i v103; // [rsp+180h] [rbp-368h] BYREF
  __int64 v104; // [rsp+190h] [rbp-358h]
  char v105; // [rsp+1A0h] [rbp-348h] BYREF
  __int128 v106; // [rsp+1A8h] [rbp-340h]
  char v107; // [rsp+1B8h] [rbp-330h]
  __int128 v108; // [rsp+1C0h] [rbp-328h] BYREF
  char v109; // [rsp+1D0h] [rbp-318h] BYREF
  __int128 v110; // [rsp+1D8h] [rbp-310h] BYREF
  char v111; // [rsp+1E8h] [rbp-300h]
  __int128 v112; // [rsp+1F0h] [rbp-2F8h] BYREF
  char v113; // [rsp+200h] [rbp-2E8h] BYREF
  int v114[4]; // [rsp+208h] [rbp-2E0h] BYREF
  char v115; // [rsp+218h] [rbp-2D0h]
  __int128 v116; // [rsp+220h] [rbp-2C8h] BYREF
  __int64 v117; // [rsp+230h] [rbp-2B8h] BYREF
  __int128 v118; // [rsp+238h] [rbp-2B0h]
  char v119; // [rsp+248h] [rbp-2A0h]
  __int128 v120; // [rsp+250h] [rbp-298h] BYREF
  __int64 v121; // [rsp+260h] [rbp-288h] BYREF
  int v122[4]; // [rsp+268h] [rbp-280h]
  __int64 v123; // [rsp+278h] [rbp-270h] BYREF
  int v124[4]; // [rsp+280h] [rbp-268h]
  char v125; // [rsp+290h] [rbp-258h] BYREF
  __int128 v126; // [rsp+298h] [rbp-250h]
  __int64 v127; // [rsp+2A8h] [rbp-240h] BYREF
  int v128[4]; // [rsp+2B0h] [rbp-238h]
  char v129; // [rsp+2C0h] [rbp-228h] BYREF
  int v130[4]; // [rsp+2C8h] [rbp-220h]
  char v131; // [rsp+2D8h] [rbp-210h]
  int v132[4]; // [rsp+2E0h] [rbp-208h]
  __int64 v133; // [rsp+2F0h] [rbp-1F8h] BYREF
  __int128 v134; // [rsp+2F8h] [rbp-1F0h]
  __int64 v135; // [rsp+308h] [rbp-1E0h] BYREF
  char v136; // [rsp+310h] [rbp-1D8h] BYREF
  __int64 v137; // [rsp+318h] [rbp-1D0h]
  __int64 v138; // [rsp+320h] [rbp-1C8h] BYREF
  int v139[4]; // [rsp+328h] [rbp-1C0h]
  __int64 v140; // [rsp+338h] [rbp-1B0h] BYREF
  char v141; // [rsp+340h] [rbp-1A8h] BYREF
  __int64 v142; // [rsp+348h] [rbp-1A0h]
  char v143; // [rsp+350h] [rbp-198h] BYREF
  int v144[4]; // [rsp+358h] [rbp-190h] BYREF
  __int64 v145; // [rsp+368h] [rbp-180h] BYREF
  char v146; // [rsp+370h] [rbp-178h] BYREF
  __int64 v147; // [rsp+378h] [rbp-170h]
  char v148; // [rsp+380h] [rbp-168h] BYREF
  int v149[4]; // [rsp+388h] [rbp-160h] BYREF
  __m128i v150; // [rsp+398h] [rbp-150h] BYREF
  __int64 v151; // [rsp+3A8h] [rbp-140h]
  __m128i v152; // [rsp+3B0h] [rbp-138h] BYREF
  void (__fastcall *v153[3])(__m128i *, __m128i *, __int64); // [rsp+3C0h] [rbp-128h] BYREF
  __int64 v154; // [rsp+3D8h] [rbp-110h]
  int v155[4]; // [rsp+3E0h] [rbp-108h] BYREF
  __int64 v156; // [rsp+3F0h] [rbp-F8h]
  char v157; // [rsp+3F8h] [rbp-F0h] BYREF
  void *v158; // [rsp+400h] [rbp-E8h]
  __int64 v159; // [rsp+408h] [rbp-E0h]
  _QWORD v160[2]; // [rsp+410h] [rbp-D8h] BYREF
  void *v161; // [rsp+420h] [rbp-C8h] BYREF
  __int64 v162; // [rsp+428h] [rbp-C0h]
  _QWORD v163[2]; // [rsp+430h] [rbp-B8h] BYREF
  char v164; // [rsp+440h] [rbp-A8h]
  __int64 v165; // [rsp+448h] [rbp-A0h] BYREF
  char v166; // [rsp+460h] [rbp-88h]
  ida_mcp::tools::wide_values *v167; // [rsp+468h] [rbp-80h]
  _QWORD v168[2]; // [rsp+478h] [rbp-70h] BYREF
  char v169; // [rsp+488h] [rbp-60h]
  char v170; // [rsp+498h] [rbp-50h]
  unsigned __int64 v171; // [rsp+4A8h] [rbp-40h]

  v75 = this;
  v171 = __readfsqword(0x28u);
  v158 = v160;
  v159 = 0;
  LOBYTE(v160[0]) = 0;
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v170 = 0;
  std::string::_M_replace();
  v88 = &v161;
  std::string::_M_replace();
  *(_QWORD *)v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v121) = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  LOBYTE(v123) = 0;
  *(_QWORD *)v124 = 0;
  *(_OWORD *)v122 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v123) = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  *(_OWORD *)v124 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    (const __m128i *)&v121,
    2,
    1);
  v153[0] = nullptr;
  v143 = 0;
  *(_QWORD *)v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 10;
  LOBYTE(v138) = 0;
  *(_QWORD *)v139 = 0;
  *(_OWORD *)v144 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v138) = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  *(_OWORD *)v139 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  LOBYTE(v127) = 0;
  *(_QWORD *)v128 = 0;
  v126 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v127) = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v78 = (const __m128i *)&v125;
  *(_OWORD *)v128 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v133,
    (const __m128i *)&v125,
    2,
    1);
  *((_QWORD *)&v134 + 1) = 0;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v131 = 0;
  *(_QWORD *)v132 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v9 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v9, "Hex address", v10, v11, v12, v13, (int)v144, v71, v72);
  *(_OWORD *)v132 = (unsigned __int64)v9;
  v79 = &v129;
  *(_QWORD *)v92 = &v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v135,
    (const __m128i *)&v129,
    2,
    1);
  *(_QWORD *)v93 = &v140;
  v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v140,
    (const __m128i *)&v133,
    2,
    1);
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v117,
    (const __m128i *)&v138,
    2,
    1);
  *((_QWORD *)&v118 + 1) = 0;
  *(_QWORD *)v85 = &v145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v145,
    (const __m128i *)&v117,
    1);
  v147 = 0;
  v76 = (const __m128i *)&v143;
  *(_QWORD *)v86 = &v153[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v153[1],
    (const __m128i *)&v143,
    2,
    1);
  v154 = 0;
  v148 = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "required");
  *(_QWORD *)(v14 + 8) = 8;
  *(_QWORD *)v114 = 0;
  *(_OWORD *)v149 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "address");
  v16 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v15 + 8) = 7;
  v83 = &v113;
  *(_QWORD *)v90 = &v100;
  v73 = (__m128i)v16;
  *(_OWORD *)v114 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v17 = _mm_load_si128(&v100);
  v77 = (const __m128i *)&v148;
  *(_QWORD *)v87 = v155;
  v151 = 0;
  v150 = v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v155,
    (const __m128i *)&v148,
    2,
    1);
  v156 = 0;
  v101[0] = 0;
  *(_QWORD *)v74 = v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    &v152,
    3);
  v18 = v164;
  v19 = (__m128i *)&v157;
  v20 = v102;
  v164 = v101[0];
  v101[0] = v18;
  v102 = v165;
  v165 = v20;
  v91 = &v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v19 = (__m128i *)((char *)v19 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v19 != &v152 );
  v82 = &v150.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v81 = &v146;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = &v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = &v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v21 = _mm_load_si128(&v73);
  v152.m128i_i64[1] = 0;
  v152.m128i_i64[0] = (__int64)ida_mcp::tools::wide_values::`anonymous namespace'::get_wide_value_impl;
  *(__m128i *)v153 = v21;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v153[0] )
    v153[0](&v152, &v152, 3);
  if ( v170 && v169 && v167 != (ida_mcp::tools::wide_values *)v168 )
    operator delete(v167, v168[0] + 1LL);
  if ( v166 )
  {
    v166 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v89 = &v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v161 != v163 )
    operator delete(v161, v163[0] + 1LL);
  if ( v158 != v160 )
    operator delete(v158, v160[0] + 1LL);
  v158 = v160;
  v159 = 0;
  LOBYTE(v160[0]) = 0;
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v170 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v109 = 0;
  v95 = &v110;
  *(_QWORD *)&v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "type");
  *(_QWORD *)(v22 + 8) = 4;
  v111 = 0;
  *(_QWORD *)&v112 = 0;
  v96 = &v112;
  v110 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "object");
  *(_QWORD *)(v23 + 8) = 6;
  v99 = &v109;
  v112 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    (const __m128i *)&v109,
    2,
    1);
  v153[0] = nullptr;
  v143 = 0;
  *(_QWORD *)v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "properties");
  *(_QWORD *)(v24 + 8) = 10;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  *(_OWORD *)v144 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "address");
  *(_QWORD *)(v25 + 8) = 7;
  v113 = 0;
  *(_QWORD *)v114 = 0;
  v126 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "type");
  *(_QWORD *)(v26 + 8) = 4;
  v115 = 0;
  *(_QWORD *)&v116 = 0;
  v97 = &v116;
  *(_OWORD *)v114 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v27 = operator new(0x20u);
  v28 = (const __m128i *)v83;
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "string");
  *(_QWORD *)(v27 + 8) = 6;
  v116 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v121,
    v28,
    2,
    1);
  *(_QWORD *)&v122[2] = 0;
  LOBYTE(v117) = 0;
  *(_QWORD *)&v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v117) = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "description");
  *(_QWORD *)(v29 + 8) = 11;
  v119 = 0;
  *(_QWORD *)&v120 = 0;
  v98 = &v120;
  v118 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "Hex address");
  *(_QWORD *)(v30 + 8) = 11;
  v120 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v123,
    (const __m128i *)&v117,
    2,
    1);
  *(_QWORD *)&v124[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v127,
    (const __m128i *)&v121,
    2,
    1);
  *(_QWORD *)&v128[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    v78,
    2,
    1);
  *(_QWORD *)&v139[2] = 0;
  LOBYTE(v133) = 0;
  *(_QWORD *)&v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v133) = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "value", v32, v33, v34, v35, v70, (int)v149, (__int64)v114);
  v129 = 0;
  *(_QWORD *)v130 = 0;
  v134 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "description");
  *(_QWORD *)(v36 + 8) = 11;
  v131 = 0;
  *(_QWORD *)v132 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v37 = (__int64 *)operator new(0x20u);
  *v37 = (__int64)(v37 + 2);
  *(_QWORD *)v101 = 38;
  v38 = std::string::_M_create();
  v39 = *(_QWORD *)v101;
  *v37 = v38;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2540);
  v41 = (const __m128i *)v79;
  v37[2] = v39;
  *(__m128i *)v38 = si128;
  *(__m128i *)(v38 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2550);
  *(_QWORD *)(v38 + 30) = 0x29676E6972747320LL;
  v42 = *v37;
  v43 = *(_QWORD *)v101;
  v37[1] = *(_QWORD *)v101;
  *(_BYTE *)(v42 + v43) = 0;
  *(_OWORD *)v132 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v103,
    v41,
    2,
    1);
  v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v92,
    &v103,
    1);
  v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v93,
    (const __m128i *)&v133,
    2,
    1);
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v85,
    (const __m128i *)&v138,
    2,
    1);
  v147 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v86,
    v76,
    2,
    1);
  v154 = 0;
  v148 = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "required");
  *(_QWORD *)(v44 + 8) = 8;
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  *(_OWORD *)v149 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v45 = operator new(0x20u);
  strcpy((char *)(v45 + 16), "address");
  *(_QWORD *)v45 = v45 + 16;
  *(_QWORD *)(v45 + 8) = 7;
  v107 = 0;
  *(_QWORD *)&v108 = 0;
  v94 = &v108;
  v106 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v46 = operator new(0x20u);
  *(_BYTE *)(v46 + 20) = 101;
  *(_QWORD *)v46 = v46 + 16;
  v47 = *(_QWORD **)v90;
  *(_DWORD *)(v46 + 16) = 1970037110;
  *(_QWORD *)(v46 + 8) = 5;
  *(_BYTE *)(v46 + 21) = 0;
  v108 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v47,
    (const __m128i *)&v105,
    2,
    0);
  v48 = _mm_load_si128(&v100);
  v151 = 0;
  v150 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v87,
    v77,
    2,
    1);
  v156 = 0;
  v101[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v74,
    &v152,
    3);
  LOBYTE(v41) = v164;
  v49 = (__m128i *)&v157;
  v164 = v101[0];
  v50 = v165;
  v101[0] = (char)v41;
  v165 = v102;
  v102 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v49 = (__m128i *)((char *)v49 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v49 != &v152 );
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v51 = _mm_load_si128(&v73);
  v152.m128i_i64[1] = 0;
  v152.m128i_i64[0] = (__int64)ida_mcp::tools::wide_values::`anonymous namespace'::set_wide_value_impl;
  *(__m128i *)v153 = v51;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v153[0] )
    v153[0](&v152, &v152, 3);
  if ( v170 && v169 && v167 != (ida_mcp::tools::wide_values *)v168 )
    operator delete(v167, v168[0] + 1LL);
  if ( v166 )
  {
    v166 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v161 != v163 )
    operator delete(v161, v163[0] + 1LL);
  if ( v158 != v160 )
    operator delete(v158, v160[0] + 1LL);
  v158 = v160;
  v159 = 0;
  LOBYTE(v160[0]) = 0;
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v170 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  LOBYTE(v121) = 0;
  *(_QWORD *)v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v121) = 3;
  v52 = operator new(0x20u);
  *(_QWORD *)v52 = v52 + 16;
  strcpy((char *)(v52 + 16), "type");
  *(_QWORD *)(v52 + 8) = 4;
  LOBYTE(v123) = 0;
  *(_QWORD *)v124 = 0;
  *(_OWORD *)v122 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v123) = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "object");
  *(_QWORD *)(v53 + 8) = 6;
  *(_OWORD *)v124 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v152,
    (const __m128i *)&v121,
    2);
  v153[0] = nullptr;
  v143 = 0;
  *(_QWORD *)v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  strcpy((char *)(v54 + 16), "properties");
  *(_QWORD *)(v54 + 8) = 10;
  LOBYTE(v138) = 0;
  *(_QWORD *)v139 = 0;
  *(_OWORD *)v144 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v138) = 3;
  v55 = operator new(0x20u);
  strcpy((char *)(v55 + 16), "address");
  *(_QWORD *)v55 = v55 + 16;
  *(_QWORD *)(v55 + 8) = 7;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  *(_OWORD *)v139 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "type");
  *(_QWORD *)(v56 + 8) = 4;
  LOBYTE(v127) = 0;
  *(_QWORD *)v128 = 0;
  v126 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v127) = 3;
  v57 = operator new(0x20u);
  v58 = v78;
  *(_QWORD *)v57 = v57 + 16;
  strcpy((char *)(v57 + 16), "string");
  *(_QWORD *)(v57 + 8) = 6;
  *(_OWORD *)v128 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v133,
    v58,
    2);
  *((_QWORD *)&v134 + 1) = 0;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v59 = operator new(0x20u);
  *(_QWORD *)v59 = v59 + 16;
  strcpy((char *)(v59 + 16), "description");
  *(_QWORD *)(v59 + 8) = 11;
  v131 = 0;
  *(_QWORD *)v132 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v60 = operator new(0x20u);
  v61 = (const __m128i *)v79;
  *(_QWORD *)v60 = v60 + 16;
  v62 = *(_QWORD **)v92;
  strcpy((char *)(v60 + 16), "Hex address");
  *(_QWORD *)(v60 + 8) = 11;
  *(_OWORD *)v132 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v62,
    v61,
    2);
  v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v93,
    (const __m128i *)&v133,
    2);
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v117,
    (const __m128i *)&v138,
    2);
  *((_QWORD *)&v118 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v85,
    (const __m128i *)&v117,
    1);
  v147 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v86,
    v76,
    2);
  v154 = 0;
  v148 = 0;
  *(_QWORD *)v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v63 = operator new(0x20u);
  *(_QWORD *)v63 = v63 + 16;
  strcpy((char *)(v63 + 16), "required");
  *(_QWORD *)(v63 + 8) = 8;
  v113 = 0;
  *(_QWORD *)v114 = 0;
  *(_OWORD *)v149 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v64 = operator new(0x20u);
  *(_QWORD *)v64 = v64 + 16;
  strcpy((char *)(v64 + 16), "address");
  *(_QWORD *)(v64 + 8) = 7;
  *(_OWORD *)v114 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v65 = _mm_load_si128(&v100);
  v151 = 0;
  v150 = v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v87,
    v77,
    2);
  v156 = 0;
  v101[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v74,
    &v152,
    3);
  LOBYTE(v61) = v164;
  v66 = (__m128i *)&v157;
  v164 = v101[0];
  v67 = v165;
  v101[0] = (char)v61;
  v165 = v102;
  v102 = v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v66 = (__m128i *)((char *)v66 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v66 != &v152 );
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = _mm_load_si128(&v73);
  v152.m128i_i64[1] = 0;
  v152.m128i_i64[0] = (__int64)ida_mcp::tools::wide_values::`anonymous namespace'::del_wide_value_impl;
  *(__m128i *)v153 = v68;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v153[0] )
    v153[0](&v152, &v152, 3);
  if ( v170 && v169 && v167 != (ida_mcp::tools::wide_values *)v168 )
    operator delete(v167, v168[0] + 1LL);
  if ( v166 )
  {
    v166 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v161 != v163 )
    operator delete(v161, v163[0] + 1LL);
  if ( v158 != v160 )
    operator delete(v158, v160[0] + 1LL);
  return v171 - __readfsqword(0x28u);
}

