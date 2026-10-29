unsigned __int64 __fastcall ida_mcp::tools::bin_search::register_tools(
        ida_mcp::tools::bin_search *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __m128 v49; // xmm1
  __m128i v50; // xmm0
  char v51; // si
  int *v52; // rbp
  __int64 v53; // rax
  int *v54; // rbp
  __m128i v55; // xmm2
  __m128i v57; // [rsp+110h] [rbp-6F8h] BYREF
  _QWORD *v58; // [rsp+120h] [rbp-6E8h]
  void **v59; // [rsp+128h] [rbp-6E0h]
  ida_mcp::tools::bin_search *v60; // [rsp+130h] [rbp-6D8h]
  char *v61; // [rsp+138h] [rbp-6D0h]
  char *v62; // [rsp+140h] [rbp-6C8h]
  char *v63; // [rsp+148h] [rbp-6C0h]
  char *v64; // [rsp+150h] [rbp-6B8h]
  char *v65; // [rsp+158h] [rbp-6B0h]
  char *v66; // [rsp+160h] [rbp-6A8h]
  char *v67; // [rsp+168h] [rbp-6A0h]
  char *v68; // [rsp+170h] [rbp-698h]
  char *v69; // [rsp+178h] [rbp-690h]
  char *v70; // [rsp+180h] [rbp-688h]
  char *v71; // [rsp+188h] [rbp-680h]
  char *v72; // [rsp+190h] [rbp-678h]
  char *v73; // [rsp+198h] [rbp-670h]
  char *v74; // [rsp+1A0h] [rbp-668h]
  char *v75; // [rsp+1A8h] [rbp-660h]
  char *v76; // [rsp+1B0h] [rbp-658h]
  char *v77; // [rsp+1B8h] [rbp-650h]
  __m128i v78; // [rsp+1C0h] [rbp-648h] BYREF
  __int64 v79; // [rsp+1D0h] [rbp-638h]
  __int64 v80; // [rsp+1D8h] [rbp-630h]
  char v81; // [rsp+1E0h] [rbp-628h]
  __int128 v82; // [rsp+1E8h] [rbp-620h]
  char v83; // [rsp+200h] [rbp-608h] BYREF
  __int128 v84; // [rsp+208h] [rbp-600h]
  char v85; // [rsp+218h] [rbp-5F0h]
  __int128 v86; // [rsp+220h] [rbp-5E8h]
  char v87; // [rsp+230h] [rbp-5D8h] BYREF
  __int128 v88; // [rsp+238h] [rbp-5D0h]
  char v89; // [rsp+248h] [rbp-5C0h]
  __int128 v90; // [rsp+250h] [rbp-5B8h]
  char v91; // [rsp+260h] [rbp-5A8h] BYREF
  __int128 v92; // [rsp+268h] [rbp-5A0h]
  char v93; // [rsp+278h] [rbp-590h]
  __int128 v94; // [rsp+280h] [rbp-588h]
  __m128i v95; // [rsp+290h] [rbp-578h] BYREF
  __int64 v96; // [rsp+2A0h] [rbp-568h]
  _QWORD v97[3]; // [rsp+2A8h] [rbp-560h] BYREF
  char v98; // [rsp+2C0h] [rbp-548h] BYREF
  __int128 v99; // [rsp+2C8h] [rbp-540h]
  _QWORD v100[3]; // [rsp+2D8h] [rbp-530h] BYREF
  char v101; // [rsp+2F0h] [rbp-518h] BYREF
  __int128 v102; // [rsp+2F8h] [rbp-510h]
  char v103; // [rsp+308h] [rbp-500h]
  __int128 v104; // [rsp+310h] [rbp-4F8h]
  char v105; // [rsp+320h] [rbp-4E8h] BYREF
  __int128 v106; // [rsp+328h] [rbp-4E0h]
  char v107; // [rsp+338h] [rbp-4D0h]
  __int128 v108; // [rsp+340h] [rbp-4C8h]
  __m128i v109; // [rsp+350h] [rbp-4B8h] BYREF
  __int64 v110; // [rsp+360h] [rbp-4A8h]
  _QWORD v111[3]; // [rsp+368h] [rbp-4A0h] BYREF
  char v112; // [rsp+380h] [rbp-488h] BYREF
  __int128 v113; // [rsp+388h] [rbp-480h]
  _QWORD v114[3]; // [rsp+398h] [rbp-470h] BYREF
  char v115; // [rsp+3B0h] [rbp-458h] BYREF
  __int128 v116; // [rsp+3B8h] [rbp-450h]
  char v117; // [rsp+3C8h] [rbp-440h]
  __int128 v118; // [rsp+3D0h] [rbp-438h]
  char v119; // [rsp+3E0h] [rbp-428h] BYREF
  __int128 v120; // [rsp+3E8h] [rbp-420h]
  char v121; // [rsp+3F8h] [rbp-410h]
  __int128 v122; // [rsp+400h] [rbp-408h]
  __m128i v123; // [rsp+410h] [rbp-3F8h] BYREF
  __int64 v124; // [rsp+420h] [rbp-3E8h]
  _QWORD v125[3]; // [rsp+428h] [rbp-3E0h] BYREF
  char v126; // [rsp+440h] [rbp-3C8h] BYREF
  __int64 v127[2]; // [rsp+448h] [rbp-3C0h]
  _QWORD v128[3]; // [rsp+458h] [rbp-3B0h] BYREF
  char v129; // [rsp+470h] [rbp-398h] BYREF
  int v130[4]; // [rsp+478h] [rbp-390h]
  char v131; // [rsp+488h] [rbp-380h]
  int v132[4]; // [rsp+490h] [rbp-378h]
  char v133; // [rsp+4A0h] [rbp-368h] BYREF
  int v134[4]; // [rsp+4A8h] [rbp-360h]
  char v135; // [rsp+4B8h] [rbp-350h]
  int v136[4]; // [rsp+4C0h] [rbp-348h]
  __m128i v137; // [rsp+4D0h] [rbp-338h] BYREF
  __int64 v138; // [rsp+4E0h] [rbp-328h]
  _QWORD v139[3]; // [rsp+4E8h] [rbp-320h] BYREF
  char v140; // [rsp+500h] [rbp-308h] BYREF
  int v141[4]; // [rsp+508h] [rbp-300h]
  _QWORD v142[3]; // [rsp+518h] [rbp-2F0h] BYREF
  char v143; // [rsp+530h] [rbp-2D8h] BYREF
  char v144[16]; // [rsp+538h] [rbp-2D0h]
  char v145; // [rsp+548h] [rbp-2C0h]
  __int128 v146; // [rsp+550h] [rbp-2B8h]
  char v147; // [rsp+560h] [rbp-2A8h] BYREF
  __int128 v148; // [rsp+568h] [rbp-2A0h]
  char v149; // [rsp+578h] [rbp-290h]
  __int128 v150; // [rsp+580h] [rbp-288h]
  __m128i v151; // [rsp+590h] [rbp-278h] BYREF
  __int64 v152; // [rsp+5A0h] [rbp-268h]
  _QWORD v153[3]; // [rsp+5A8h] [rbp-260h] BYREF
  char v154; // [rsp+5C0h] [rbp-248h] BYREF
  __int128 v155; // [rsp+5C8h] [rbp-240h]
  _QWORD v156[3]; // [rsp+5D8h] [rbp-230h] BYREF
  char v157; // [rsp+5F0h] [rbp-218h] BYREF
  __int128 v158; // [rsp+5F8h] [rbp-210h]
  __int64 v159; // [rsp+618h] [rbp-1F0h]
  char v160; // [rsp+620h] [rbp-1E8h] BYREF
  __int128 v161; // [rsp+628h] [rbp-1E0h]
  __m128i v162; // [rsp+638h] [rbp-1D0h]
  __int64 v163; // [rsp+648h] [rbp-1C0h]
  int v164[4]; // [rsp+650h] [rbp-1B8h] BYREF
  __int64 v165; // [rsp+660h] [rbp-1A8h]
  _QWORD v166[3]; // [rsp+668h] [rbp-1A0h] BYREF
  _QWORD v167[3]; // [rsp+680h] [rbp-188h] BYREF
  char v168; // [rsp+698h] [rbp-170h] BYREF
  int v169[2]; // [rsp+6A0h] [rbp-168h] BYREF
  __int64 v170; // [rsp+6A8h] [rbp-160h]
  void (__fastcall *v171[3])(int *, int *, __int64); // [rsp+6B0h] [rbp-158h] BYREF
  __int64 v172; // [rsp+6C8h] [rbp-140h]
  _QWORD v173[3]; // [rsp+6D0h] [rbp-138h] BYREF
  _QWORD v174[3]; // [rsp+6E8h] [rbp-120h] BYREF
  _QWORD v175[3]; // [rsp+700h] [rbp-108h] BYREF
  char v176; // [rsp+718h] [rbp-F0h] BYREF
  void *v177[2]; // [rsp+720h] [rbp-E8h] BYREF
  _QWORD v178[2]; // [rsp+730h] [rbp-D8h] BYREF
  void *v179; // [rsp+740h] [rbp-C8h]
  __int64 v180; // [rsp+748h] [rbp-C0h]
  _QWORD v181[2]; // [rsp+750h] [rbp-B8h] BYREF
  char v182; // [rsp+760h] [rbp-A8h]
  __int64 v183; // [rsp+768h] [rbp-A0h]
  char v184; // [rsp+780h] [rbp-88h]
  ida_mcp::tools::bin_search *v185; // [rsp+788h] [rbp-80h]
  __int64 v186; // [rsp+798h] [rbp-70h] BYREF
  char v187; // [rsp+7A8h] [rbp-60h]
  char v188; // [rsp+7B8h] [rbp-50h]
  unsigned __int64 v189; // [rsp+7C8h] [rbp-40h]

  v60 = this;
  v189 = __readfsqword(0x28u);
  v58 = v178;
  v177[0] = v178;
  v177[1] = nullptr;
  LOBYTE(v178[0]) = 0;
  v179 = v181;
  v180 = 0;
  v59 = v177;
  LOBYTE(v181[0]) = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v188 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v83 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v85 = 0;
  *(_QWORD *)&v86 = 0;
  v84 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v71 = &v83;
  v86 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v164,
    (const __m128i *)&v83);
  v165 = 0;
  v157 = 0;
  *(_QWORD *)&v158 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v157 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v98 = 0;
  *(_QWORD *)&v99 = 0;
  v158 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "pattern");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v87 = 0;
  *(_QWORD *)&v88 = 0;
  v99 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v89 = 0;
  *(_QWORD *)&v90 = 0;
  v88 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "string");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 6;
  v72 = &v87;
  v90 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v95,
    (const __m128i *)&v87);
  v96 = 0;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v93 = 0;
  *(_QWORD *)&v94 = 0;
  v92 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v9 = (__int64 *)operator new(0x20u);
  v79 = 57;
  *v9 = (__int64)(v9 + 2);
  v10 = std::string::_M_create();
  v11 = v79;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E24D0);
  *v9 = v10;
  v9[2] = v11;
  *(__m128i *)v10 = si128;
  *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E24E0);
  *(__m128i *)(v10 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E24F0);
  *(__m128i *)(v10 + 41) = _mm_load_si128((const __m128i *)&xmmword_3E2500);
  v13 = v79;
  v14 = *v9;
  v9[1] = v79;
  *(_BYTE *)(v14 + v13) = 0;
  v73 = &v91;
  v94 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v91);
  v97[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v100,
    &v95);
  v100[2] = 0;
  v64 = &v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v169,
    (const __m128i *)&v98);
  v171[0] = nullptr;
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v15 = operator new(0x20u);
  strcpy((char *)(v15 + 16), "start_address");
  *(_QWORD *)v15 = v15 + 16;
  *(_QWORD *)(v15 + 8) = 13;
  v101 = 0;
  *(_QWORD *)&v102 = 0;
  v113 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "type");
  *(_QWORD *)(v16 + 8) = 4;
  v103 = 0;
  *(_QWORD *)&v104 = 0;
  v102 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v17 = operator new(0x20u);
  strcpy((char *)(v17 + 16), "string");
  *(_QWORD *)v17 = v17 + 16;
  *(_QWORD *)(v17 + 8) = 6;
  v74 = &v101;
  v104 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v109,
    (const __m128i *)&v101);
  v110 = 0;
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "description");
  *(_QWORD *)(v18 + 8) = 11;
  v107 = 0;
  *(_QWORD *)&v108 = 0;
  v106 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v19 = (__int64 *)operator new(0x20u);
  *v19 = (__int64)(v19 + 2);
  v79 = 17;
  v20 = std::string::_M_create();
  v21 = _mm_load_si128((const __m128i *)&xmmword_3E2380);
  *v19 = v20;
  v19[2] = 17;
  *(__m128i *)v20 = v21;
  *(_BYTE *)(v20 + 16) = 115;
  v22 = v79;
  v23 = *v19;
  v19[1] = v79;
  *(_BYTE *)(v23 + v22) = 0;
  v75 = &v105;
  v108 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    (const __m128i *)&v105);
  v111[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v114,
    &v109);
  v114[2] = 0;
  v65 = &v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v171[1],
    (const __m128i *)&v112);
  v172 = 0;
  v126 = 0;
  v127[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "end_address");
  *(_QWORD *)(v24 + 8) = 11;
  v115 = 0;
  *(_QWORD *)&v116 = 0;
  *(_OWORD *)v127 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "type");
  *(_QWORD *)(v25 + 8) = 4;
  v117 = 0;
  *(_QWORD *)&v118 = 0;
  v116 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v117 = 3;
  v26 = operator new(0x20u);
  strcpy((char *)(v26 + 16), "string");
  *(_QWORD *)v26 = v26 + 16;
  *(_QWORD *)(v26 + 8) = 6;
  v76 = &v115;
  v118 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v123,
    (const __m128i *)&v115);
  v124 = 0;
  v119 = 0;
  *(_QWORD *)&v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "description");
  *(_QWORD *)(v27 + 8) = 11;
  v121 = 0;
  *(_QWORD *)&v122 = 0;
  v120 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v28 = operator new(0x20u);
  strcpy((char *)(v28 + 16), "Hex end address");
  *(_QWORD *)v28 = v28 + 16;
  *(_QWORD *)(v28 + 8) = 15;
  v77 = &v119;
  v122 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v125,
    (const __m128i *)&v119);
  v125[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v128,
    &v123);
  v128[2] = 0;
  v61 = &v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v173,
    (const __m128i *)&v126);
  v173[2] = 0;
  v140 = 0;
  *(_QWORD *)v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v29 = operator new(0x20u);
  *(_DWORD *)(v29 + 16) = 1768186226;
  *(_QWORD *)v29 = v29 + 16;
  *(_BYTE *)(v29 + 20) = 120;
  *(_QWORD *)(v29 + 8) = 5;
  *(_BYTE *)(v29 + 21) = 0;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  *(_OWORD *)v141 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "type");
  *(_QWORD *)(v30 + 8) = 4;
  v131 = 0;
  *(_QWORD *)v132 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v31 = operator new(0x20u);
  strcpy((char *)(v31 + 16), "integer");
  *(_QWORD *)v31 = v31 + 16;
  *(_QWORD *)(v31 + 8) = 7;
  v67 = &v129;
  *(_OWORD *)v132 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v137,
    (const __m128i *)&v129);
  v138 = 0;
  v133 = 0;
  *(_QWORD *)v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v133 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "description");
  *(_QWORD *)(v32 + 8) = 11;
  v135 = 0;
  *(_QWORD *)v136 = 0;
  *(_OWORD *)v134 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = 3;
  v33 = (__int64 *)operator new(0x20u);
  *v33 = (__int64)(v33 + 2);
  v79 = 25;
  v34 = std::string::_M_create();
  v35 = _mm_load_si128((const __m128i *)&xmmword_3E2510);
  *v33 = v34;
  v33[2] = 25;
  *(__m128i *)v34 = v35;
  *(__m128i *)(v34 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2520);
  v36 = v79;
  v37 = *v33;
  v33[1] = v79;
  *(_BYTE *)(v37 + v36) = 0;
  v68 = &v133;
  *(_OWORD *)v136 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v139,
    (const __m128i *)&v133);
  v139[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v142,
    &v137);
  v142[2] = 0;
  v62 = &v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    (const __m128i *)&v140);
  v174[2] = 0;
  v154 = 0;
  *(_QWORD *)&v155 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v154 = 3;
  v38 = operator new(0x20u);
  *(_DWORD *)(v38 + 16) = 1768778092;
  *(_QWORD *)v38 = v38 + 16;
  *(_BYTE *)(v38 + 20) = 116;
  *(_QWORD *)(v38 + 8) = 5;
  *(_BYTE *)(v38 + 21) = 0;
  v143 = 0;
  *(_QWORD *)v144 = 0;
  v155 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "type");
  *(_QWORD *)(v39 + 8) = 4;
  v145 = 0;
  *(_QWORD *)&v146 = 0;
  *(_OWORD *)v144 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v145 = 3;
  v40 = operator new(0x20u);
  strcpy((char *)(v40 + 16), "integer");
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 7;
  v69 = &v143;
  v146 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v151,
    (const __m128i *)&v143);
  v152 = 0;
  v147 = 0;
  *(_QWORD *)&v148 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v147 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "description");
  *(_QWORD *)(v41 + 8) = 11;
  v149 = 0;
  *(_QWORD *)&v150 = 0;
  v148 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v149 = 3;
  v42 = (__int64 *)operator new(0x20u);
  *v42 = (__int64)(v42 + 2);
  v79 = 26;
  v43 = std::string::_M_create();
  v44 = _mm_load_si128((const __m128i *)&xmmword_3E24B0);
  *v42 = v43;
  v42[2] = 26;
  *(__m128i *)v43 = v44;
  *(__m128i *)(v43 + 10) = _mm_load_si128((const __m128i *)&xmmword_3E2530);
  v45 = v79;
  v46 = *v42;
  v42[1] = v79;
  *(_BYTE *)(v46 + v45) = 0;
  v70 = &v147;
  v150 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v153,
    (const __m128i *)&v147);
  v153[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    &v151);
  v156[2] = 0;
  v63 = &v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v175,
    (const __m128i *)&v154);
  v175[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v159 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v166,
    (const __m128i *)&v157);
  v166[2] = 0;
  v160 = 0;
  *(_QWORD *)&v161 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v160 = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  strcpy((char *)(v47 + 16), "required");
  *(_QWORD *)(v47 + 8) = 8;
  *(_QWORD *)&v82 = 0;
  v161 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v81 = 3;
  v48 = operator new(0x20u);
  *(_QWORD *)v48 = v48 + 16;
  strcpy((char *)(v48 + 16), "pattern");
  v49 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v48 + 8) = 7;
  v57 = (__m128i)v49;
  v82 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v50 = _mm_load_si128(&v78);
  v66 = &v160;
  v163 = 0;
  v162 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v167,
    (const __m128i *)&v160);
  LOBYTE(v79) = 0;
  v167[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v51 = v182;
  v52 = (int *)&v168;
  v182 = v79;
  v53 = v183;
  LOBYTE(v79) = v51;
  v183 = v80;
  v80 = v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v52 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v52 != v164 );
  v54 = (int *)&v176;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v54 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != v169 );
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
  v55 = _mm_load_si128(&v57);
  v170 = 0;
  *(_QWORD *)v169 = ida_mcp::tools::bin_search::`anonymous namespace'::search_binary_pattern_impl;
  *(__m128i *)v171 = v55;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v171[0] )
    v171[0](v169, v169, 3);
  if ( v188 && v187 && v185 != (ida_mcp::tools::bin_search *)&v186 )
    operator delete(v185, v186 + 1);
  if ( v184 )
  {
    v184 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v179 != v181 )
    operator delete(v179, v181[0] + 1LL);
  if ( v177[0] != v58 )
    operator delete(v177[0], v178[0] + 1LL);
  return v189 - __readfsqword(0x28u);
}

