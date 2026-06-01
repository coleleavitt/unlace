unsigned __int64 __fastcall ida_mcp::tools::strings::register_tools(
        ida_mcp::tools::strings *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __m128 v22; // xmm1
  char v23; // si
  int *v24; // r12
  __int64 v25; // rdx
  __int64 *v26; // r12
  __int64 *v27; // r12
  __m128i v28; // xmm2
  __int64 v29; // rax
  __int64 v30; // rax
  const __m128i *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  const __m128i *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  const __m128i *v39; // rsi
  _QWORD *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  int *v44; // rbp
  __int64 v45; // rax
  __m128i v46; // xmm3
  __m128i v48; // [rsp+70h] [rbp-5C8h] BYREF
  ida_mcp::tools::strings *v49; // [rsp+80h] [rbp-5B8h]
  char *v50; // [rsp+88h] [rbp-5B0h]
  char *v51; // [rsp+90h] [rbp-5A8h]
  char *v52; // [rsp+98h] [rbp-5A0h]
  char *v53; // [rsp+A0h] [rbp-598h]
  __int64 *v54; // [rsp+A8h] [rbp-590h]
  __int128 *v55; // [rsp+B0h] [rbp-588h]
  __int128 *v56; // [rsp+B8h] [rbp-580h]
  char *v57; // [rsp+C0h] [rbp-578h]
  __int128 *v58; // [rsp+C8h] [rbp-570h]
  __int128 *v59; // [rsp+D0h] [rbp-568h]
  __int128 *v60; // [rsp+D8h] [rbp-560h]
  __int128 *v61; // [rsp+E0h] [rbp-558h]
  __int128 *v62; // [rsp+E8h] [rbp-550h]
  __int128 *v63; // [rsp+F0h] [rbp-548h]
  __int128 *v64; // [rsp+F8h] [rbp-540h]
  __int128 *v65; // [rsp+100h] [rbp-538h]
  __int128 *v66; // [rsp+108h] [rbp-530h]
  __int128 *v67; // [rsp+110h] [rbp-528h]
  char *v68; // [rsp+118h] [rbp-520h]
  char *v69; // [rsp+120h] [rbp-518h]
  int v70[2]; // [rsp+128h] [rbp-510h]
  int v71[2]; // [rsp+130h] [rbp-508h]
  __int64 *v72; // [rsp+138h] [rbp-500h]
  int v73[2]; // [rsp+140h] [rbp-4F8h]
  int *v74; // [rsp+148h] [rbp-4F0h]
  __int64 *v75; // [rsp+150h] [rbp-4E8h]
  __int64 *v76; // [rsp+158h] [rbp-4E0h]
  void **v77; // [rsp+160h] [rbp-4D8h]
  char *v78; // [rsp+168h] [rbp-4D0h]
  __m128i v79; // [rsp+170h] [rbp-4C8h] BYREF
  __int64 v80; // [rsp+180h] [rbp-4B8h] BYREF
  __int64 v81; // [rsp+188h] [rbp-4B0h] BYREF
  char v82; // [rsp+190h] [rbp-4A8h] BYREF
  __int128 v83; // [rsp+198h] [rbp-4A0h] BYREF
  char v84; // [rsp+1A8h] [rbp-490h]
  __int128 v85; // [rsp+1B0h] [rbp-488h] BYREF
  char v86; // [rsp+1C0h] [rbp-478h] BYREF
  __int128 v87; // [rsp+1C8h] [rbp-470h] BYREF
  char v88; // [rsp+1D8h] [rbp-460h]
  __int128 v89; // [rsp+1E0h] [rbp-458h] BYREF
  char v90; // [rsp+1F0h] [rbp-448h] BYREF
  __int128 v91; // [rsp+1F8h] [rbp-440h] BYREF
  char v92; // [rsp+208h] [rbp-430h]
  __int128 v93; // [rsp+210h] [rbp-428h] BYREF
  __m128i v94; // [rsp+220h] [rbp-418h] BYREF
  __int64 v95; // [rsp+230h] [rbp-408h]
  _QWORD v96[3]; // [rsp+238h] [rbp-400h] BYREF
  char v97; // [rsp+250h] [rbp-3E8h] BYREF
  __int128 v98; // [rsp+258h] [rbp-3E0h] BYREF
  _QWORD v99[3]; // [rsp+268h] [rbp-3D0h] BYREF
  char v100; // [rsp+280h] [rbp-3B8h] BYREF
  __int128 v101; // [rsp+288h] [rbp-3B0h] BYREF
  char v102; // [rsp+298h] [rbp-3A0h]
  __int128 v103; // [rsp+2A0h] [rbp-398h] BYREF
  char v104; // [rsp+2B0h] [rbp-388h] BYREF
  __int128 v105; // [rsp+2B8h] [rbp-380h] BYREF
  char v106; // [rsp+2C8h] [rbp-370h]
  __int128 v107; // [rsp+2D0h] [rbp-368h] BYREF
  char v108; // [rsp+2E0h] [rbp-358h] BYREF
  __int128 v109; // [rsp+2E8h] [rbp-350h] BYREF
  __int64 v110; // [rsp+2F8h] [rbp-340h]
  __int64 v111; // [rsp+300h] [rbp-338h]
  __int64 v112; // [rsp+308h] [rbp-330h]
  char v113; // [rsp+310h] [rbp-328h] BYREF
  int v114[4]; // [rsp+318h] [rbp-320h]
  __int64 v115; // [rsp+338h] [rbp-300h]
  __int64 v116; // [rsp+340h] [rbp-2F8h] BYREF
  int v117[4]; // [rsp+348h] [rbp-2F0h]
  char v118; // [rsp+358h] [rbp-2E0h]
  __int128 v119; // [rsp+360h] [rbp-2D8h] BYREF
  char v120; // [rsp+370h] [rbp-2C8h] BYREF
  int v121[4]; // [rsp+378h] [rbp-2C0h]
  char v122; // [rsp+388h] [rbp-2B0h]
  int v123[4]; // [rsp+390h] [rbp-2A8h]
  char v124; // [rsp+3A0h] [rbp-298h] BYREF
  int v125[4]; // [rsp+3A8h] [rbp-290h]
  __int64 v126; // [rsp+3B8h] [rbp-280h]
  __int128 v127; // [rsp+3C0h] [rbp-278h]
  char v128; // [rsp+3D0h] [rbp-268h] BYREF
  int v129[4]; // [rsp+3D8h] [rbp-260h]
  char v130; // [rsp+3E8h] [rbp-250h]
  __int128 v131; // [rsp+3F0h] [rbp-248h] BYREF
  __int64 v132; // [rsp+400h] [rbp-238h] BYREF
  char v133[16]; // [rsp+408h] [rbp-230h]
  char v134; // [rsp+418h] [rbp-220h] BYREF
  char v135; // [rsp+420h] [rbp-218h] BYREF
  __int64 v136; // [rsp+428h] [rbp-210h]
  __int64 v137; // [rsp+430h] [rbp-208h] BYREF
  __int128 v138; // [rsp+438h] [rbp-200h]
  __int64 v139; // [rsp+448h] [rbp-1F0h] BYREF
  char v140; // [rsp+450h] [rbp-1E8h] BYREF
  __int64 v141; // [rsp+458h] [rbp-1E0h]
  __int64 v142; // [rsp+460h] [rbp-1D8h] BYREF
  __int128 v143; // [rsp+468h] [rbp-1D0h]
  __int64 v144; // [rsp+478h] [rbp-1C0h] BYREF
  __int64 v145; // [rsp+488h] [rbp-1B0h]
  _QWORD v146[3]; // [rsp+490h] [rbp-1A8h] BYREF
  char v147; // [rsp+4A8h] [rbp-190h] BYREF
  __int64 v148; // [rsp+4B0h] [rbp-188h] BYREF
  __int128 v149; // [rsp+4B8h] [rbp-180h]
  int v150[4]; // [rsp+4C8h] [rbp-170h] BYREF
  __int64 v151; // [rsp+4D8h] [rbp-160h]
  _QWORD v152[3]; // [rsp+4E0h] [rbp-158h] BYREF
  char v153; // [rsp+4F8h] [rbp-140h] BYREF
  int v154[2]; // [rsp+500h] [rbp-138h] BYREF
  __int64 v155; // [rsp+508h] [rbp-130h]
  void (__fastcall *v156[3])(int *, int *, __int64); // [rsp+510h] [rbp-128h] BYREF
  __int64 v157; // [rsp+528h] [rbp-110h]
  int v158[4]; // [rsp+530h] [rbp-108h] BYREF
  __int64 v159; // [rsp+540h] [rbp-F8h]
  char v160; // [rsp+548h] [rbp-F0h] BYREF
  void *v161; // [rsp+550h] [rbp-E8h]
  __int64 v162; // [rsp+558h] [rbp-E0h]
  _QWORD v163[2]; // [rsp+560h] [rbp-D8h] BYREF
  void *v164; // [rsp+570h] [rbp-C8h] BYREF
  __int64 v165; // [rsp+578h] [rbp-C0h]
  int v166[2]; // [rsp+580h] [rbp-B8h] BYREF
  char v167; // [rsp+590h] [rbp-A8h]
  __int64 v168; // [rsp+598h] [rbp-A0h] BYREF
  char v169; // [rsp+5B0h] [rbp-88h]
  ida_mcp::tools::strings *v170; // [rsp+5B8h] [rbp-80h]
  _QWORD v171[2]; // [rsp+5C8h] [rbp-70h] BYREF
  char v172; // [rsp+5D8h] [rbp-60h]
  char v173; // [rsp+5E8h] [rbp-50h]
  unsigned __int64 v174; // [rsp+5F8h] [rbp-40h]

  v49 = this;
  v174 = __readfsqword(0x28u);
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v164 = v166;
  v165 = 0;
  LOBYTE(v166[0]) = 0;
  v167 = 0;
  v168 = 0;
  v169 = 0;
  v173 = 0;
  std::string::_M_replace();
  v77 = &v164;
  std::string::_M_replace();
  v58 = &v83;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  v59 = &v85;
  v83 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v3 = operator new(0x20u);
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)v3 = v3 + 16;
  *(_QWORD *)(v3 + 8) = 6;
  v50 = &v82;
  v85 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v137,
    (const __m128i *)&v82);
  *((_QWORD *)&v138 + 1) = 0;
  LOBYTE(v132) = 0;
  *(_QWORD *)v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v132) = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v97 = 0;
  *(_QWORD *)&v98 = 0;
  v64 = &v98;
  *(_OWORD *)v133 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v5 = operator new(0x20u);
  *(_DWORD *)(v5 + 16) = 1919251825;
  *(_QWORD *)v5 = v5 + 16;
  *(_BYTE *)(v5 + 20) = 121;
  *(_QWORD *)(v5 + 8) = 5;
  *(_BYTE *)(v5 + 21) = 0;
  v86 = 0;
  *(_QWORD *)&v87 = 0;
  v60 = &v87;
  v98 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v88 = 0;
  *(_QWORD *)&v89 = 0;
  v61 = &v89;
  v87 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v88 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)(v7 + 8) = 6;
  v89 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v94,
    (const __m128i *)&v86);
  v95 = 0;
  v90 = 0;
  *(_QWORD *)&v91 = 0;
  v62 = &v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v92 = 0;
  *(_QWORD *)&v93 = 0;
  v63 = &v93;
  v91 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = v9 + 16;
  strcpy((char *)(v9 + 16), "Search query");
  *(_QWORD *)(v9 + 8) = 12;
  v93 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v90);
  v96[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v99,
    &v94);
  v99[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (const __m128i *)&v97);
  v156[0] = nullptr;
  v113 = 0;
  *(_QWORD *)v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v10 = operator new(0x20u);
  *(_DWORD *)(v10 + 16) = 1768778092;
  *(_QWORD *)v10 = v10 + 16;
  *(_BYTE *)(v10 + 20) = 116;
  *(_QWORD *)(v10 + 8) = 5;
  *(_BYTE *)(v10 + 21) = 0;
  v100 = 0;
  *(_QWORD *)&v101 = 0;
  v65 = &v101;
  *(_OWORD *)v114 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v11 = operator new(0x20u);
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "type");
  *(_QWORD *)(v11 + 8) = 4;
  v102 = 0;
  *(_QWORD *)&v103 = 0;
  v66 = &v103;
  v101 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v102 = 3;
  v12 = operator new(0x20u);
  strcpy((char *)(v12 + 16), "integer");
  *(_QWORD *)v12 = v12 + 16;
  *(_QWORD *)(v12 + 8) = 7;
  v103 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v142,
    (const __m128i *)&v100);
  *((_QWORD *)&v143 + 1) = 0;
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  v67 = &v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "description");
  *(_QWORD *)(v13 + 8) = 11;
  v106 = 0;
  *(_QWORD *)&v107 = 0;
  v54 = (__int64 *)&v107;
  v105 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "Max results");
  *(_QWORD *)(v14 + 8) = 11;
  v78 = &v104;
  v72 = &v144;
  v107 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v144,
    (const __m128i *)&v104);
  v145 = 0;
  v108 = 0;
  *(_QWORD *)&v109 = 0;
  v55 = &v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = 3;
  v15 = operator new(0x20u);
  strcpy((char *)(v15 + 16), "default");
  *(_QWORD *)v15 = v15 + 16;
  *(_QWORD *)(v15 + 8) = 7;
  v110 = 5;
  v111 = 100;
  v112 = 0;
  v109 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v146,
    (const __m128i *)&v108);
  v146[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v115 = 0;
  v52 = &v113;
  *(_QWORD *)v73 = &v156[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v156[1],
    (const __m128i *)&v113);
  v157 = 0;
  v128 = 0;
  *(_QWORD *)v129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v16 = operator new(0x20u);
  strcpy((char *)(v16 + 16), "case_sensitive");
  *(_QWORD *)v16 = v16 + 16;
  *(_QWORD *)(v16 + 8) = 14;
  LOBYTE(v116) = 0;
  *(_QWORD *)v117 = 0;
  *(_OWORD *)v129 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v116) = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "type");
  *(_QWORD *)(v17 + 8) = 4;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  v56 = &v119;
  *(_OWORD *)v117 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v18 = operator new(0x20u);
  strcpy((char *)(v18 + 16), "boolean");
  *(_QWORD *)v18 = v18 + 16;
  *(_QWORD *)(v18 + 8) = 7;
  v119 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v148,
    (const __m128i *)&v116);
  *((_QWORD *)&v149 + 1) = 0;
  v120 = 0;
  *(_QWORD *)v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "description");
  *(_QWORD *)(v19 + 8) = 11;
  v122 = 0;
  *(_QWORD *)v123 = 0;
  *(_OWORD *)v121 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v20 = operator new(0x20u);
  strcpy((char *)(v20 + 16), "Case sensitive");
  *(_QWORD *)v20 = v20 + 16;
  *(_QWORD *)(v20 + 8) = 14;
  v53 = &v120;
  *(_OWORD *)v123 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (const __m128i *)&v120);
  v151 = 0;
  v124 = 0;
  *(_QWORD *)v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v21 = operator new(0x20u);
  strcpy((char *)(v21 + 16), "default");
  *(_QWORD *)v21 = v21 + 16;
  v22 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v21 + 8) = 7;
  v126 = 4;
  v127 = 0u;
  v57 = &v124;
  v48 = (__m128i)v22;
  *(_OWORD *)v125 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (const __m128i *)&v124);
  v152[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v131 + 1) = 0;
  v51 = &v128;
  v74 = v158;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v158,
    (const __m128i *)&v128);
  v159 = 0;
  *(_QWORD *)v70 = &v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v136 = 0;
  *(_QWORD *)v71 = &v139;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v139,
    (const __m128i *)&v132);
  v141 = 0;
  LOBYTE(v80) = 0;
  v75 = &v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v80,
    (const __m128i *)&v137);
  v23 = v167;
  v24 = (int *)&v160;
  v25 = v81;
  v167 = v80;
  LOBYTE(v80) = v23;
  v81 = v168;
  v168 = v25;
  v76 = &v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = &v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = &v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v24 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v24 != v154 );
  v26 = (__int64 *)&v153;
  v50 = (char *)&v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v26 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v26 != &v148 );
  v27 = (__int64 *)&v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v27 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v27 != &v142 );
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
  v28 = _mm_load_si128(&v48);
  v155 = 0;
  *(_QWORD *)v154 = ida_mcp::tools::strings::list_strings;
  *(__m128i *)v156 = v28;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v156[0] )
    v156[0](v154, v154, 3);
  if ( v173 && v172 && v170 != (ida_mcp::tools::strings *)v171 )
    operator delete(v170, v171[0] + 1LL);
  if ( v169 )
  {
    v169 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v54 = &v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v164 != v166 )
    operator delete(v164, *(_QWORD *)v166 + 1LL);
  if ( v161 != v163 )
    operator delete(v161, v163[0] + 1LL);
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v164 = v166;
  v165 = 0;
  LOBYTE(v166[0]) = 0;
  v167 = 0;
  v168 = 0;
  v169 = 0;
  v173 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v120 = 0;
  *(_QWORD *)v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "type");
  *(_QWORD *)(v29 + 8) = 4;
  v122 = 0;
  *(_QWORD *)v123 = 0;
  *(_OWORD *)v121 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  v31 = (const __m128i *)v53;
  strcpy((char *)(v30 + 16), "object");
  *(_QWORD *)(v30 + 8) = 6;
  *(_OWORD *)v123 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    v31);
  v156[0] = nullptr;
  LOBYTE(v142) = 0;
  *(_QWORD *)&v143 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v142) = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "properties");
  *(_QWORD *)(v32 + 8) = 10;
  LOBYTE(v137) = 0;
  *(_QWORD *)&v138 = 0;
  v143 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v137) = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "address");
  *(_QWORD *)(v33 + 8) = 7;
  v124 = 0;
  *(_QWORD *)v125 = 0;
  v138 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v34 = operator new(0x20u);
  *(_QWORD *)v34 = v34 + 16;
  strcpy((char *)(v34 + 16), "type");
  *(_QWORD *)(v34 + 8) = 4;
  LOBYTE(v126) = 0;
  *(_QWORD *)&v127 = 0;
  *(_OWORD *)v125 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v126) = 3;
  v35 = operator new(0x20u);
  v36 = (const __m128i *)v57;
  *(_QWORD *)v35 = v35 + 16;
  strcpy((char *)(v35 + 16), "string");
  *(_QWORD *)(v35 + 8) = 6;
  v127 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v132,
    v36);
  *(_QWORD *)&v133[8] = 0;
  v128 = 0;
  *(_QWORD *)v129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "description");
  *(_QWORD *)(v37 + 8) = 11;
  v130 = 0;
  *(_QWORD *)&v131 = 0;
  *(_OWORD *)v129 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v38 = operator new(0x20u);
  v39 = (const __m128i *)v51;
  *(_QWORD *)v38 = v38 + 16;
  v40 = *(_QWORD **)v70;
  strcpy((char *)(v38 + 16), "Hex address");
  *(_QWORD *)(v38 + 8) = 11;
  v131 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v40,
    v39);
  v136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v71,
    (const __m128i *)&v132);
  v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v116,
    (const __m128i *)&v137);
  *(_QWORD *)&v117[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v145 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v73,
    (const __m128i *)&v142);
  v157 = 0;
  LOBYTE(v148) = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v148) = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "required");
  *(_QWORD *)(v41 + 8) = 8;
  v113 = 0;
  *(_QWORD *)v114 = 0;
  v149 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v42 = operator new(0x20u);
  *(_QWORD *)v42 = v42 + 16;
  strcpy((char *)(v42 + 16), "address");
  *(_QWORD *)(v42 + 8) = 7;
  *(_OWORD *)v114 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v43 = _mm_load_si128(&v79);
  v151 = 0;
  *(__m128i *)v150 = v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v80) = 0;
  v159 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v39) = v167;
  v44 = (int *)&v160;
  v167 = v80;
  v45 = v168;
  LOBYTE(v80) = (_BYTE)v39;
  v168 = v81;
  v81 = v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v44 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != v154 );
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
  v46 = _mm_load_si128(&v48);
  v155 = 0;
  *(_QWORD *)v154 = ida_mcp::tools::strings::get_string_at;
  *(__m128i *)v156 = v46;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v156[0] )
    v156[0](v154, v154, 3);
  if ( v173 && v172 && v170 != (ida_mcp::tools::strings *)v171 )
    operator delete(v170, v171[0] + 1LL);
  if ( v169 )
  {
    v169 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v164 != v166 )
    operator delete(v164, *(_QWORD *)v166 + 1LL);
  if ( v161 != v163 )
    operator delete(v161, v163[0] + 1LL);
  return v174 - __readfsqword(0x28u);
}

