__int64 __fastcall ida_mcp::tools::database::get_database_info(int a1)
{
  int func_qty; // r13d
  __int64 segm_qty; // r12
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rbx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // r15
  __int64 *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  _QWORD *v53; // rcx
  __int64 v54; // rsi
  __int64 *v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  _QWORD *v65; // rdx
  _QWORD *v66; // rcx
  __int64 v67; // rsi
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  _QWORD *v77; // rbp
  unsigned int v79; // edx
  unsigned int v80; // edx
  unsigned int v81; // edx
  unsigned __int64 v82; // rdi
  char *v83; // rcx
  char *v84; // r8
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // ecx
  __int64 v88; // r9
  unsigned __int64 v89; // rdi
  char *v90; // rcx
  char *v91; // r8
  unsigned int v92; // edx
  unsigned int v93; // edx
  unsigned int v94; // ecx
  __int64 v95; // r9
  unsigned __int64 v96; // rdi
  char *v97; // rcx
  char *v98; // r8
  unsigned int v99; // edx
  unsigned int v100; // edx
  unsigned int v101; // ecx
  __int64 v102; // r9
  const char *v103; // [rsp+0h] [rbp-1418h]
  int v104; // [rsp+0h] [rbp-1418h]
  int v105; // [rsp+0h] [rbp-1418h]
  int v106; // [rsp+0h] [rbp-1418h]
  int v107; // [rsp+0h] [rbp-1418h]
  int v108; // [rsp+0h] [rbp-1418h]
  int v109; // [rsp+0h] [rbp-1418h]
  int v110; // [rsp+0h] [rbp-1418h]
  int v111; // [rsp+0h] [rbp-1418h]
  int v112; // [rsp+0h] [rbp-1418h]
  int v113; // [rsp+0h] [rbp-1418h]
  _QWORD *v114; // [rsp+0h] [rbp-1418h]
  int v115; // [rsp+8h] [rbp-1410h]
  int v116; // [rsp+8h] [rbp-1410h]
  int v117; // [rsp+8h] [rbp-1410h]
  int v118; // [rsp+8h] [rbp-1410h]
  int v119; // [rsp+8h] [rbp-1410h]
  int v120; // [rsp+8h] [rbp-1410h]
  int v121; // [rsp+8h] [rbp-1410h]
  int v122; // [rsp+8h] [rbp-1410h]
  int v123; // [rsp+8h] [rbp-1410h]
  int v124; // [rsp+8h] [rbp-1410h]
  _QWORD *v125; // [rsp+8h] [rbp-1410h]
  __int64 v126; // [rsp+8h] [rbp-1410h]
  __int64 v127; // [rsp+10h] [rbp-1408h]
  __int64 v128; // [rsp+10h] [rbp-1408h]
  __int64 v129; // [rsp+10h] [rbp-1408h]
  __int64 v130; // [rsp+10h] [rbp-1408h]
  __int64 v131; // [rsp+10h] [rbp-1408h]
  __int64 v132; // [rsp+10h] [rbp-1408h]
  __int64 v133; // [rsp+10h] [rbp-1408h]
  __int64 v134; // [rsp+10h] [rbp-1408h]
  __int64 v135; // [rsp+10h] [rbp-1408h]
  __int64 v136; // [rsp+10h] [rbp-1408h]
  int v137; // [rsp+10h] [rbp-1408h]
  void *v138; // [rsp+B0h] [rbp-1368h]
  size_t v139; // [rsp+B8h] [rbp-1360h]
  void *v140; // [rsp+D0h] [rbp-1348h] BYREF
  __int64 v141; // [rsp+D8h] [rbp-1340h]
  _QWORD v142[2]; // [rsp+E0h] [rbp-1338h] BYREF
  void *v143; // [rsp+F0h] [rbp-1328h] BYREF
  __int64 v144; // [rsp+F8h] [rbp-1320h]
  _QWORD v145[2]; // [rsp+100h] [rbp-1318h] BYREF
  void *v146; // [rsp+110h] [rbp-1308h] BYREF
  __int64 v147; // [rsp+118h] [rbp-1300h]
  _QWORD v148[2]; // [rsp+120h] [rbp-12F8h] BYREF
  char v149; // [rsp+130h] [rbp-12E8h] BYREF
  __int128 v150; // [rsp+138h] [rbp-12E0h] BYREF
  char v151; // [rsp+148h] [rbp-12D0h]
  __int128 v152; // [rsp+150h] [rbp-12C8h] BYREF
  char v153; // [rsp+160h] [rbp-12B8h] BYREF
  __int128 v154; // [rsp+168h] [rbp-12B0h] BYREF
  char v155; // [rsp+178h] [rbp-12A0h]
  __int128 v156; // [rsp+180h] [rbp-1298h] BYREF
  char v157; // [rsp+190h] [rbp-1288h] BYREF
  __int128 v158; // [rsp+198h] [rbp-1280h] BYREF
  char v159; // [rsp+1A8h] [rbp-1270h]
  __int64 v160; // [rsp+1B0h] [rbp-1268h]
  __int64 v161; // [rsp+1B8h] [rbp-1260h]
  char v162; // [rsp+1C0h] [rbp-1258h] BYREF
  __int128 v163; // [rsp+1C8h] [rbp-1250h] BYREF
  char v164; // [rsp+1D8h] [rbp-1240h]
  __int64 v165; // [rsp+1E0h] [rbp-1238h]
  __int64 v166; // [rsp+1E8h] [rbp-1230h]
  char v167; // [rsp+1F0h] [rbp-1228h] BYREF
  __int128 v168; // [rsp+1F8h] [rbp-1220h] BYREF
  char v169; // [rsp+208h] [rbp-1210h]
  __int128 v170; // [rsp+210h] [rbp-1208h] BYREF
  char v171; // [rsp+220h] [rbp-11F8h] BYREF
  __int128 v172; // [rsp+228h] [rbp-11F0h] BYREF
  char v173; // [rsp+238h] [rbp-11E0h]
  __int128 v174; // [rsp+240h] [rbp-11D8h] BYREF
  char v175; // [rsp+250h] [rbp-11C8h] BYREF
  __int128 v176; // [rsp+258h] [rbp-11C0h] BYREF
  char v177; // [rsp+268h] [rbp-11B0h]
  __int128 v178; // [rsp+270h] [rbp-11A8h] BYREF
  char v179; // [rsp+280h] [rbp-1198h] BYREF
  __int128 v180; // [rsp+288h] [rbp-1190h]
  char v181; // [rsp+298h] [rbp-1180h]
  unsigned __int64 v182; // [rsp+2A0h] [rbp-1178h]
  __int64 v183; // [rsp+2A8h] [rbp-1170h]
  _QWORD v184[3]; // [rsp+2B0h] [rbp-1168h] BYREF
  _QWORD v185[3]; // [rsp+2C8h] [rbp-1150h] BYREF
  _QWORD v186[3]; // [rsp+2E0h] [rbp-1138h] BYREF
  _QWORD v187[3]; // [rsp+2F8h] [rbp-1120h] BYREF
  _QWORD v188[3]; // [rsp+310h] [rbp-1108h] BYREF
  _QWORD v189[3]; // [rsp+328h] [rbp-10F0h] BYREF
  _QWORD v190[3]; // [rsp+340h] [rbp-10D8h] BYREF
  _QWORD v191[3]; // [rsp+358h] [rbp-10C0h] BYREF
  _QWORD v192[512]; // [rsp+370h] [rbp-10A8h] BYREF
  char v193[32]; // [rsp+1370h] [rbp-A8h] BYREF
  char v194[32]; // [rsp+1390h] [rbp-88h] BYREF
  char s[40]; // [rsp+13B0h] [rbp-68h] BYREF
  unsigned __int64 v196; // [rsp+13D8h] [rbp-40h]

  v196 = __readfsqword(0x28u);
  memset(v192, 0, sizeof(v192));
  getinf_buf();
  func_qty = get_func_qty();
  segm_qty = (int)get_segm_qty();
  v127 = getinf();
  getinf();
  getinf();
  if ( !getinf_buf() )
    s[0] = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  v138 = (void *)qvector_reserve();
  v139 = v4;
  memmove(v138, s, v5);
  *((_BYTE *)v138 + v5) = 0;
  *(_QWORD *)&v150 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v149 = 3;
  v6 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v6, "database_path", v7, v8, v9, v10, (int)v192, a1, v127);
  v151 = 0;
  *(_QWORD *)&v152 = 0;
  v150 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v151 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, v103, v12, v13, v14, v15, (int)v103, v115, v128);
  v152 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v184,
    (const __m128i *)&v149);
  v184[2] = 0;
  v153 = 0;
  *(_QWORD *)&v154 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "processor", v17, v18, v19, v20, v104, v116, v129);
  v154 = (unsigned __int64)v16;
  if ( v139 )
    v21 = (const char *)v138;
  else
    v21 = (const char *)&_qstring<char>::c_str(void)const::nullstr;
  v155 = 0;
  *(_QWORD *)&v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v155 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, v21, v23, v24, v25, v26, v105, v117, v130);
  v156 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v185,
    (const __m128i *)&v153);
  v185[2] = 0;
  v157 = 0;
  *(_QWORD *)&v158 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "function_count", v28, v29, v30, v31, v106, v118, v131);
  v159 = 5;
  v160 = func_qty;
  v161 = 0;
  v158 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v186,
    (const __m128i *)&v157);
  v186[2] = 0;
  v162 = 0;
  *(_QWORD *)&v163 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v162 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "segment_count", v33, v34, v35, v36, v107, v119, v132);
  v164 = 5;
  v165 = segm_qty;
  v166 = 0;
  v163 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v187,
    (const __m128i *)&v162);
  v187[2] = 0;
  v167 = 0;
  *(_QWORD *)&v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "min_ea");
  *(_QWORD *)(v37 + 8) = 6;
  v168 = (unsigned __int64)v37;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v140, v193, v38, v39, v40, v41, v108, v120, v133);
  v169 = 0;
  *(_QWORD *)&v170 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v169 = 3;
  v42 = (_QWORD *)operator new(0x20u);
  v43 = v140;
  v44 = v42 + 2;
  v45 = v141;
  *v42 = v42 + 2;
  if ( v43 == v142 )
  {
    v79 = v45 + 1;
    if ( (unsigned int)(v45 + 1) >= 8 )
    {
      v42[2] = v142[0];
      *(_QWORD *)((char *)v44 + v79 - 8) = *(_QWORD *)((char *)&v142[-1] + v79);
      v82 = (unsigned __int64)(v42 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v83 = (char *)v44 - v82;
      v84 = (char *)((char *)v142 - v83);
      v85 = ((_DWORD)v83 + v79) & 0xFFFFFFF8;
      if ( v85 >= 8 )
      {
        v86 = v85 & 0xFFFFFFF8;
        v87 = 0;
        do
        {
          v88 = v87;
          v87 += 8;
          *(_QWORD *)(v82 + v88) = *(_QWORD *)&v84[v88];
        }
        while ( v87 < v86 );
      }
    }
    else if ( (v79 & 4) != 0 )
    {
      *((_DWORD *)v42 + 4) = v142[0];
      *(_DWORD *)((char *)v44 + v79 - 4) = *(_DWORD *)((char *)&v141 + v79 + 4);
    }
    else if ( (_DWORD)v45 != -1 )
    {
      *((_BYTE *)v42 + 16) = v142[0];
      if ( (v79 & 2) != 0 )
        *(_WORD *)((char *)v44 + v79 - 2) = *(_WORD *)((char *)&v141 + v79 + 6);
    }
  }
  else
  {
    *v42 = v43;
    v42[2] = v142[0];
  }
  v42[1] = v45;
  v140 = v142;
  v141 = 0;
  LOBYTE(v142[0]) = 0;
  v170 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v188,
    (const __m128i *)&v167);
  v188[2] = 0;
  v171 = 0;
  *(_QWORD *)&v172 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v171 = 3;
  v46 = operator new(0x20u);
  strcpy((char *)(v46 + 16), "max_ea");
  *(_QWORD *)v46 = v46 + 16;
  *(_QWORD *)(v46 + 8) = 6;
  v172 = (unsigned __int64)v46;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v143,
    v194,
    v47,
    v48,
    v49,
    v50,
    v109,
    v121,
    (__int64)&v172);
  v173 = 0;
  *(_QWORD *)&v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v51 = (_QWORD *)operator new(0x20u);
  v52 = v143;
  v53 = v51 + 2;
  v54 = v144;
  *v51 = v51 + 2;
  if ( v52 == v145 )
  {
    v80 = v54 + 1;
    if ( (unsigned int)(v54 + 1) >= 8 )
    {
      v51[2] = v145[0];
      *(_QWORD *)((char *)v53 + v80 - 8) = *(_QWORD *)((char *)&v145[-1] + v80);
      v89 = (unsigned __int64)(v51 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v90 = (char *)v53 - v89;
      v91 = (char *)((char *)v145 - v90);
      v92 = ((_DWORD)v90 + v80) & 0xFFFFFFF8;
      if ( v92 >= 8 )
      {
        v93 = v92 & 0xFFFFFFF8;
        v94 = 0;
        do
        {
          v95 = v94;
          v94 += 8;
          *(_QWORD *)(v89 + v95) = *(_QWORD *)&v91[v95];
        }
        while ( v94 < v93 );
      }
    }
    else if ( (v80 & 4) != 0 )
    {
      *((_DWORD *)v51 + 4) = v145[0];
      *(_DWORD *)((char *)v53 + v80 - 4) = *(_DWORD *)((char *)&v144 + v80 + 4);
    }
    else if ( (_DWORD)v54 != -1 )
    {
      *((_BYTE *)v51 + 16) = v145[0];
      if ( (v80 & 2) != 0 )
        *(_WORD *)((char *)v53 + v80 - 2) = *(_WORD *)((char *)&v144 + v80 + 6);
    }
  }
  else
  {
    *v51 = v52;
    v51[2] = v145[0];
  }
  v51[1] = v54;
  v143 = v145;
  v144 = 0;
  LOBYTE(v145[0]) = 0;
  v174 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v189,
    (const __m128i *)&v171);
  v189[2] = 0;
  v175 = 0;
  *(_QWORD *)&v176 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v175 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "entry_point", v56, v57, v58, v59, v110, v122, v134);
  v176 = (unsigned __int64)v55;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v146, s, v60, v61, v62, v63, v111, v123, v135);
  v177 = 0;
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v64 = (_QWORD *)operator new(0x20u);
  v65 = v146;
  v66 = v64 + 2;
  v67 = v147;
  *v64 = v64 + 2;
  if ( v65 == v148 )
  {
    v81 = v67 + 1;
    if ( (unsigned int)(v67 + 1) >= 8 )
    {
      v64[2] = v148[0];
      *(_QWORD *)((char *)v66 + v81 - 8) = *(_QWORD *)((char *)&v148[-1] + v81);
      v96 = (unsigned __int64)(v64 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v97 = (char *)v66 - v96;
      v98 = (char *)((char *)v148 - v97);
      v99 = ((_DWORD)v97 + v81) & 0xFFFFFFF8;
      if ( v99 >= 8 )
      {
        v100 = v99 & 0xFFFFFFF8;
        v101 = 0;
        do
        {
          v102 = v101;
          v101 += 8;
          *(_QWORD *)(v96 + v102) = *(_QWORD *)&v98[v102];
        }
        while ( v101 < v100 );
      }
    }
    else if ( (v81 & 4) != 0 )
    {
      *((_DWORD *)v64 + 4) = v148[0];
      *(_DWORD *)((char *)v66 + v81 - 4) = *(_DWORD *)((char *)&v147 + v81 + 4);
    }
    else if ( (_DWORD)v67 != -1 )
    {
      *((_BYTE *)v64 + 16) = v148[0];
      if ( (v81 & 2) != 0 )
        *(_WORD *)((char *)v66 + v81 - 2) = *(_WORD *)((char *)&v147 + v81 + 6);
    }
  }
  else
  {
    *v64 = v65;
    v64[2] = v148[0];
  }
  v64[1] = v67;
  v146 = v148;
  v147 = 0;
  LOBYTE(v148[0]) = 0;
  v178 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v175);
  v190[2] = 0;
  v179 = 0;
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "bitness", v69, v70, v71, v72, v112, v124, v136);
  v180 = (unsigned __int64)v68;
  if ( (unsigned __int8)getinf_flag() )
    v73 = 64;
  else
    v73 = (-(__int64)((unsigned __int8)getinf_flag() == 0) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  v181 = 5;
  v182 = v73;
  v183 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v191,
    (const __m128i *)&v179);
  v191[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v125,
    (__int64)v184,
    8,
    v74,
    v75,
    v76,
    v113,
    (__int64)v125,
    v137,
    (int)&v174,
    (int)&v176,
    (int)&v178,
    (__int64)&v150,
    (int)&v152,
    (int)&v154,
    (int)&v156,
    (int)&v158,
    (char)&v163,
    (__int64)&v168,
    (int)&v170,
    (__int64)&v175);
  v77 = v114;
  do
  {
    v77 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v77 != v184 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v146 != v148 )
    operator delete(v146, v148[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v143 != v145 )
    operator delete(v143, v145[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v140 != v142 )
    operator delete(v140, v142[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v138 )
    qfree();
  return v126;
}

