unsigned __int64 __fastcall ida_mcp::tools::import_entry::register_tools(
        ida_mcp::tools::import_entry *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __m128 v17; // xmm1
  __m128i v18; // xmm0
  char v19; // si
  int *v20; // r15
  __int64 v21; // rdx
  __m128i v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm0
  const __m128i *v45; // rsi
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  const __m128i *v50; // rsi
  _QWORD *v51; // rdi
  int *v52; // r14
  __int64 v53; // rax
  __int64 *v54; // r14
  __m128i v55; // xmm3
  __m128i v57; // [rsp+70h] [rbp-4D8h] BYREF
  __int128 *v58; // [rsp+80h] [rbp-4C8h]
  ida_mcp::tools::import_entry *v59; // [rsp+88h] [rbp-4C0h]
  const __m128i *v60; // [rsp+90h] [rbp-4B8h]
  char *v61; // [rsp+98h] [rbp-4B0h]
  const __m128i *v62; // [rsp+A0h] [rbp-4A8h]
  char *v63; // [rsp+A8h] [rbp-4A0h]
  void **v64; // [rsp+B0h] [rbp-498h]
  __int128 *v65; // [rsp+B8h] [rbp-490h]
  __int128 *v66; // [rsp+C0h] [rbp-488h]
  __int128 *v67; // [rsp+C8h] [rbp-480h]
  __int128 *v68; // [rsp+D0h] [rbp-478h]
  __int128 *v69; // [rsp+D8h] [rbp-470h]
  __int128 *v70; // [rsp+E0h] [rbp-468h]
  const __m128i *v71; // [rsp+E8h] [rbp-460h]
  __int64 *v72; // [rsp+F0h] [rbp-458h]
  char *v73; // [rsp+F8h] [rbp-450h]
  char *v74; // [rsp+100h] [rbp-448h]
  char *v75; // [rsp+108h] [rbp-440h]
  int v76[2]; // [rsp+110h] [rbp-438h]
  __int64 *v77; // [rsp+118h] [rbp-430h]
  __int64 *v78; // [rsp+120h] [rbp-428h]
  int v79[2]; // [rsp+128h] [rbp-420h]
  int v80[2]; // [rsp+130h] [rbp-418h]
  int v81[2]; // [rsp+138h] [rbp-410h]
  int v82[2]; // [rsp+140h] [rbp-408h]
  char *v83; // [rsp+148h] [rbp-400h]
  char *v84; // [rsp+150h] [rbp-3F8h]
  char *v85; // [rsp+158h] [rbp-3F0h]
  __m128i v86; // [rsp+160h] [rbp-3E8h] BYREF
  int v87[2]; // [rsp+170h] [rbp-3D8h] BYREF
  __int64 v88; // [rsp+178h] [rbp-3D0h] BYREF
  char v89; // [rsp+180h] [rbp-3C8h] BYREF
  __int128 v90; // [rsp+188h] [rbp-3C0h] BYREF
  char v91; // [rsp+198h] [rbp-3B0h]
  __int128 v92; // [rsp+1A0h] [rbp-3A8h] BYREF
  char v93; // [rsp+1B0h] [rbp-398h] BYREF
  __int128 v94; // [rsp+1B8h] [rbp-390h] BYREF
  char v95; // [rsp+1C8h] [rbp-380h]
  __int128 v96; // [rsp+1D0h] [rbp-378h] BYREF
  char v97; // [rsp+1E0h] [rbp-368h] BYREF
  __int128 v98; // [rsp+1E8h] [rbp-360h] BYREF
  char v99; // [rsp+1F8h] [rbp-350h]
  __int128 v100; // [rsp+200h] [rbp-348h] BYREF
  char v101; // [rsp+210h] [rbp-338h] BYREF
  __int128 v102; // [rsp+218h] [rbp-330h] BYREF
  __int64 v103; // [rsp+228h] [rbp-320h]
  __int128 v104; // [rsp+230h] [rbp-318h]
  char v105; // [rsp+240h] [rbp-308h] BYREF
  int v106[4]; // [rsp+248h] [rbp-300h]
  __int64 v107; // [rsp+268h] [rbp-2E0h]
  __int64 v108; // [rsp+270h] [rbp-2D8h] BYREF
  __int128 v109; // [rsp+278h] [rbp-2D0h] BYREF
  char v110; // [rsp+288h] [rbp-2C0h]
  __int128 v111; // [rsp+290h] [rbp-2B8h]
  char v112; // [rsp+2A0h] [rbp-2A8h] BYREF
  int v113[4]; // [rsp+2A8h] [rbp-2A0h]
  char v114; // [rsp+2B8h] [rbp-290h]
  int v115[4]; // [rsp+2C0h] [rbp-288h]
  char v116; // [rsp+2D0h] [rbp-278h] BYREF
  __int64 v117[2]; // [rsp+2D8h] [rbp-270h]
  __int64 v118; // [rsp+2E8h] [rbp-260h]
  int v119[4]; // [rsp+2F0h] [rbp-258h]
  char v120; // [rsp+300h] [rbp-248h] BYREF
  int v121[4]; // [rsp+308h] [rbp-240h]
  char v122; // [rsp+318h] [rbp-230h]
  char v123[16]; // [rsp+320h] [rbp-228h]
  __m128i v124; // [rsp+330h] [rbp-218h] BYREF
  __int64 v125; // [rsp+340h] [rbp-208h]
  __int64 v126; // [rsp+348h] [rbp-200h] BYREF
  char v127; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v128; // [rsp+358h] [rbp-1F0h]
  char v129; // [rsp+360h] [rbp-1E8h] BYREF
  int v130[4]; // [rsp+368h] [rbp-1E0h]
  __int64 v131; // [rsp+378h] [rbp-1D0h] BYREF
  char v132; // [rsp+380h] [rbp-1C8h] BYREF
  __int64 v133; // [rsp+388h] [rbp-1C0h]
  __int64 v134; // [rsp+390h] [rbp-1B8h] BYREF
  __int128 v135; // [rsp+398h] [rbp-1B0h]
  char v136; // [rsp+3A8h] [rbp-1A0h] BYREF
  char v137; // [rsp+3B0h] [rbp-198h] BYREF
  __int64 v138; // [rsp+3B8h] [rbp-190h]
  __int64 v139; // [rsp+3C0h] [rbp-188h] BYREF
  __int128 v140; // [rsp+3C8h] [rbp-180h]
  int v141[4]; // [rsp+3D8h] [rbp-170h] BYREF
  __int64 v142; // [rsp+3E8h] [rbp-160h]
  _QWORD v143[3]; // [rsp+3F0h] [rbp-158h] BYREF
  char v144; // [rsp+408h] [rbp-140h] BYREF
  int v145[2]; // [rsp+410h] [rbp-138h] BYREF
  __int64 v146; // [rsp+418h] [rbp-130h]
  void (__fastcall *v147[3])(int *, int *, __int64); // [rsp+420h] [rbp-128h] BYREF
  __int64 v148; // [rsp+438h] [rbp-110h]
  int v149[4]; // [rsp+440h] [rbp-108h] BYREF
  __int64 v150; // [rsp+450h] [rbp-F8h]
  char v151; // [rsp+458h] [rbp-F0h] BYREF
  void *v152; // [rsp+460h] [rbp-E8h]
  __int64 v153; // [rsp+468h] [rbp-E0h]
  _QWORD v154[2]; // [rsp+470h] [rbp-D8h] BYREF
  void *v155; // [rsp+480h] [rbp-C8h] BYREF
  __int64 v156; // [rsp+488h] [rbp-C0h]
  _QWORD v157[2]; // [rsp+490h] [rbp-B8h] BYREF
  char v158; // [rsp+4A0h] [rbp-A8h]
  __int64 v159; // [rsp+4A8h] [rbp-A0h] BYREF
  char v160; // [rsp+4C0h] [rbp-88h]
  ida_mcp::tools::import_entry *v161; // [rsp+4C8h] [rbp-80h]
  _QWORD v162[2]; // [rsp+4D8h] [rbp-70h] BYREF
  char v163; // [rsp+4E8h] [rbp-60h]
  char v164; // [rsp+4F8h] [rbp-50h]
  unsigned __int64 v165; // [rsp+508h] [rbp-40h]

  v59 = this;
  v165 = __readfsqword(0x28u);
  v152 = v154;
  v153 = 0;
  LOBYTE(v154[0]) = 0;
  v155 = v157;
  v156 = 0;
  LOBYTE(v157[0]) = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v164 = 0;
  std::string::_M_replace();
  v64 = &v155;
  std::string::_M_replace();
  *(_QWORD *)v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v114 = 0;
  *(_QWORD *)v115 = 0;
  *(_OWORD *)v113 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v61 = &v112;
  *(_OWORD *)v115 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v145,
    (const __m128i *)&v112);
  v147[0] = nullptr;
  LOBYTE(v134) = 0;
  *(_QWORD *)&v135 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v134) = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  v135 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v5 = operator new(0x20u);
  *(_DWORD *)(v5 + 16) = 1701080681;
  *(_QWORD *)v5 = v5 + 16;
  *(_BYTE *)(v5 + 20) = 120;
  *(_QWORD *)(v5 + 8) = 5;
  *(_BYTE *)(v5 + 21) = 0;
  v116 = 0;
  v117[0] = 0;
  *(_OWORD *)v130 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  LOBYTE(v118) = 0;
  *(_QWORD *)v119 = 0;
  *(_OWORD *)v117 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v118) = 3;
  v7 = operator new(0x20u);
  strcpy((char *)(v7 + 16), "number");
  *(_QWORD *)v7 = v7 + 16;
  *(_QWORD *)(v7 + 8) = 6;
  v63 = &v116;
  *(_OWORD *)v119 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v124,
    (const __m128i *)&v116);
  v125 = 0;
  v120 = 0;
  *(_QWORD *)v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "description");
  *(_QWORD *)(v8 + 8) = 11;
  v122 = 0;
  *(_QWORD *)v123 = 0;
  *(_OWORD *)v121 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v9 = (__int64 *)operator new(0x20u);
  *(_QWORD *)v87 = 18;
  *v9 = (__int64)(v9 + 2);
  v10 = std::string::_M_create();
  v11 = *(_QWORD *)v87;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2580);
  *v9 = v10;
  v9[2] = v11;
  *(__m128i *)v10 = si128;
  *(_WORD *)(v10 + 16) = 30821;
  v13 = *(_QWORD *)v87;
  v14 = *v9;
  v9[1] = *(_QWORD *)v87;
  *(_BYTE *)(v14 + v13) = 0;
  v62 = (const __m128i *)&v120;
  *(_QWORD *)v79 = &v126;
  *(_OWORD *)v123 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v126,
    (const __m128i *)&v120);
  v128 = 0;
  *(_QWORD *)v80 = &v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v131,
    &v124);
  v133 = 0;
  v60 = (const __m128i *)&v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v108,
    (const __m128i *)&v129);
  *((_QWORD *)&v109 + 1) = 0;
  *(_QWORD *)v81 = &v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v138 = 0;
  *(_QWORD *)v82 = &v147[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v147[1],
    (const __m128i *)&v134);
  v148 = 0;
  LOBYTE(v139) = 0;
  *(_QWORD *)&v140 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v139) = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "required");
  *(_QWORD *)(v15 + 8) = 8;
  v105 = 0;
  *(_QWORD *)v106 = 0;
  v140 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v16 = operator new(0x20u);
  *(_BYTE *)(v16 + 20) = 120;
  *(_QWORD *)v16 = v16 + 16;
  *(_DWORD *)(v16 + 16) = 1701080681;
  v17 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v16 + 8) = 5;
  *(_BYTE *)(v16 + 21) = 0;
  v71 = (const __m128i *)&v105;
  v57 = (__m128i)v17;
  *(_OWORD *)v106 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v18 = _mm_load_si128(&v86);
  v142 = 0;
  *(_QWORD *)v76 = v149;
  *(__m128i *)v141 = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v149,
    (const __m128i *)&v139);
  LOBYTE(v87[0]) = 0;
  v150 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v19 = v158;
  v20 = (int *)&v151;
  v21 = v88;
  v158 = v87[0];
  LOBYTE(v87[0]) = v19;
  v88 = v159;
  v159 = v21;
  v78 = &v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v20 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v20 != v145 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = &v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = &v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = &v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = &v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72 = &v124.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = _mm_load_si128(&v57);
  v146 = 0;
  *(_QWORD *)v145 = ida_mcp::tools::import_entry::`anonymous namespace'::handle_get_import_entry;
  *(__m128i *)v147 = v22;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v147[0] )
    v147[0](v145, v145, 3);
  if ( v164 && v163 && v161 != (ida_mcp::tools::import_entry *)v162 )
    operator delete(v161, v162[0] + 1LL);
  if ( v160 )
  {
    v160 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v77 = &v159;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v155 != v157 )
    operator delete(v155, v157[0] + 1LL);
  if ( v152 != v154 )
    operator delete(v152, v154[0] + 1LL);
  v152 = v154;
  v153 = 0;
  LOBYTE(v154[0]) = 0;
  v155 = v157;
  v156 = 0;
  LOBYTE(v157[0]) = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v164 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v89 = 0;
  v64 = (void **)&v90;
  *(_QWORD *)&v90 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "type");
  *(_QWORD *)(v23 + 8) = 4;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  v65 = &v92;
  v90 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "object");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 6;
  v83 = &v89;
  v92 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v134,
    (const __m128i *)&v89);
  *((_QWORD *)&v135 + 1) = 0;
  v129 = 0;
  *(_QWORD *)v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "properties");
  *(_QWORD *)(v25 + 8) = 10;
  v105 = 0;
  *(_QWORD *)v106 = 0;
  *(_OWORD *)v130 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v26 = operator new(0x20u);
  *(_DWORD *)(v26 + 16) = 1918989427;
  *(_QWORD *)v26 = v26 + 16;
  *(_BYTE *)(v26 + 20) = 116;
  *(_QWORD *)(v26 + 8) = 5;
  *(_BYTE *)(v26 + 21) = 0;
  v93 = 0;
  *(_QWORD *)&v94 = 0;
  v66 = &v94;
  *(_OWORD *)v106 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "type");
  *(_QWORD *)(v27 + 8) = 4;
  v95 = 0;
  *(_QWORD *)&v96 = 0;
  v67 = &v96;
  v94 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v95 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "number");
  *(_QWORD *)(v28 + 8) = 6;
  v84 = &v93;
  v96 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v139,
    (const __m128i *)&v93);
  *((_QWORD *)&v140 + 1) = 0;
  v97 = 0;
  *(_QWORD *)&v98 = 0;
  v68 = &v98;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "description");
  *(_QWORD *)(v29 + 8) = 11;
  v99 = 0;
  *(_QWORD *)&v100 = 0;
  v69 = &v100;
  v98 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = 3;
  v30 = (__int64 *)operator new(0x20u);
  *v30 = (__int64)(v30 + 2);
  *(_QWORD *)v87 = 27;
  v31 = std::string::_M_create();
  v32 = *(_QWORD *)v87;
  v33 = _mm_load_si128((const __m128i *)&xmmword_3E2590);
  *v30 = v31;
  v30[2] = v32;
  *(__m128i *)v31 = v33;
  *(__m128i *)(v31 + 11) = _mm_load_si128((const __m128i *)&xmmword_3E25A0);
  v34 = *(_QWORD *)v87;
  v35 = *v30;
  v30[1] = *(_QWORD *)v87;
  *(_BYTE *)(v35 + v34) = 0;
  v85 = &v97;
  v100 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v141,
    (const __m128i *)&v97);
  v142 = 0;
  v101 = 0;
  *(_QWORD *)&v102 = 0;
  v70 = &v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = 3;
  v36 = operator new(0x20u);
  strcpy((char *)(v36 + 16), "default");
  *(_QWORD *)v36 = v36 + 16;
  *(_QWORD *)(v36 + 8) = 7;
  v102 = (unsigned __int64)v36;
  v103 = 5;
  v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v143,
    (const __m128i *)&v101);
  v143[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v124,
    v71);
  v125 = 0;
  v120 = 0;
  *(_QWORD *)v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v37 = operator new(0x20u);
  *(_DWORD *)(v37 + 16) = 1853189987;
  *(_QWORD *)v37 = v37 + 16;
  *(_BYTE *)(v37 + 20) = 116;
  *(_QWORD *)(v37 + 8) = 5;
  *(_BYTE *)(v37 + 21) = 0;
  LOBYTE(v108) = 0;
  *(_QWORD *)&v109 = 0;
  *(_OWORD *)v121 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v108) = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "type");
  *(_QWORD *)(v38 + 8) = 4;
  v110 = 0;
  *(_QWORD *)&v111 = 0;
  v109 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "number");
  *(_QWORD *)(v39 + 8) = 6;
  v111 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v145,
    (const __m128i *)&v108);
  v147[0] = nullptr;
  v112 = 0;
  *(_QWORD *)v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v40 = operator new(0x20u);
  *(_QWORD *)v40 = v40 + 16;
  strcpy((char *)(v40 + 16), "description");
  *(_QWORD *)(v40 + 8) = 11;
  v114 = 0;
  *(_QWORD *)v115 = 0;
  *(_OWORD *)v113 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v41 = (__int64 *)operator new(0x20u);
  *v41 = (__int64)(v41 + 2);
  *(_QWORD *)v87 = 48;
  v42 = std::string::_M_create();
  v43 = *(_QWORD *)v87;
  v44 = _mm_load_si128((const __m128i *)&xmmword_3E25B0);
  *v41 = v42;
  v45 = (const __m128i *)v61;
  v46 = *(_QWORD **)v82;
  v41[2] = v43;
  *(__m128i *)v42 = v44;
  *(__m128i *)(v42 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E25C0);
  *(__m128i *)(v42 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E25D0);
  v47 = *(_QWORD *)v87;
  v48 = *v41;
  v41[1] = *(_QWORD *)v87;
  *(_BYTE *)(v48 + v47) = 0;
  *(_OWORD *)v115 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v46,
    v45);
  v148 = 0;
  v116 = 0;
  v117[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v49 = operator new(0x20u);
  strcpy((char *)(v49 + 16), "default");
  v50 = (const __m128i *)v63;
  *(_QWORD *)v49 = v49 + 16;
  v51 = *(_QWORD **)v76;
  *(_QWORD *)(v49 + 8) = 7;
  v118 = 5;
  *(_QWORD *)v119 = 100;
  *(_QWORD *)&v119[2] = 0;
  *(_OWORD *)v117 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v51,
    v50);
  v150 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)&v123[8] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v79,
    v62);
  v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v80,
    &v124);
  v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v81,
    v60);
  v138 = 0;
  LOBYTE(v87[0]) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v87,
    (const __m128i *)&v134);
  v52 = (int *)&v151;
  LOBYTE(v50) = v158;
  v158 = v87[0];
  v53 = v159;
  LOBYTE(v87[0]) = (_BYTE)v50;
  v159 = v88;
  v88 = v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
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
    v52 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v52 != v145 );
  v54 = (__int64 *)&v144;
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
    v54 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != &v139 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v55 = _mm_load_si128(&v57);
  v146 = 0;
  *(_QWORD *)v145 = ida_mcp::tools::import_entry::`anonymous namespace'::handle_get_import_entries_range;
  *(__m128i *)v147 = v55;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v147[0] )
    v147[0](v145, v145, 3);
  if ( v164 && v163 && v161 != (ida_mcp::tools::import_entry *)v162 )
    operator delete(v161, v162[0] + 1LL);
  if ( v160 )
  {
    v160 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v155 != v157 )
    operator delete(v155, v157[0] + 1LL);
  if ( v152 != v154 )
    operator delete(v152, v154[0] + 1LL);
  return v165 - __readfsqword(0x28u);
}

