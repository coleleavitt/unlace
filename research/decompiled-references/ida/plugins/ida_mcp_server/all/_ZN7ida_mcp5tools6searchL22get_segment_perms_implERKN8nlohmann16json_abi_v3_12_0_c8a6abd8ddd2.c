__int64 __fastcall ida_mcp::tools::search::get_segment_perms_impl(__int64 a1)
{
  _BYTE *v1; // rbx
  int *v2; // rax
  int *v3; // r14
  __int64 v4; // rbp
  std::runtime_error *exception; // rax
  __int64 v6; // rbx
  char v7; // r12
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 *v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  void **v82; // rbx
  unsigned int v84; // edx
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned __int64 v87; // rdi
  char *v88; // rcx
  char *v89; // r11
  unsigned int v90; // edx
  unsigned int v91; // edx
  unsigned int v92; // ecx
  __int64 v93; // r9
  unsigned __int64 v94; // rdi
  char *v95; // rcx
  char *v96; // r8
  unsigned int v97; // edx
  unsigned int v98; // edx
  unsigned int v99; // ecx
  __int64 v100; // r9
  unsigned __int64 v101; // rdi
  char *v102; // rcx
  char *v103; // r8
  unsigned int v104; // edx
  unsigned int v105; // edx
  unsigned int v106; // ecx
  __int64 v107; // r9
  int v108; // [rsp+0h] [rbp-478h]
  int v109; // [rsp+0h] [rbp-478h]
  int v110; // [rsp+0h] [rbp-478h]
  int v111; // [rsp+0h] [rbp-478h]
  int v112; // [rsp+0h] [rbp-478h]
  int v113; // [rsp+0h] [rbp-478h]
  int v114; // [rsp+0h] [rbp-478h]
  int v115; // [rsp+0h] [rbp-478h]
  int v116; // [rsp+0h] [rbp-478h]
  int v117; // [rsp+0h] [rbp-478h]
  int v118; // [rsp+0h] [rbp-478h]
  int v119; // [rsp+0h] [rbp-478h]
  void *v120; // [rsp+0h] [rbp-478h]
  int v121; // [rsp+8h] [rbp-470h]
  int v122; // [rsp+8h] [rbp-470h]
  int v123; // [rsp+8h] [rbp-470h]
  int v124; // [rsp+8h] [rbp-470h]
  int v125; // [rsp+8h] [rbp-470h]
  int v126; // [rsp+8h] [rbp-470h]
  int v127; // [rsp+8h] [rbp-470h]
  int v128; // [rsp+8h] [rbp-470h]
  int v129; // [rsp+8h] [rbp-470h]
  __int64 v130; // [rsp+8h] [rbp-470h]
  int v131; // [rsp+8h] [rbp-470h]
  __int64 v132; // [rsp+8h] [rbp-470h]
  __int64 v133; // [rsp+8h] [rbp-470h]
  __int64 v134; // [rsp+10h] [rbp-468h]
  __int64 v135; // [rsp+10h] [rbp-468h]
  __int64 v136; // [rsp+10h] [rbp-468h]
  __int64 v137; // [rsp+10h] [rbp-468h]
  __int64 v138; // [rsp+10h] [rbp-468h]
  __int64 v139; // [rsp+10h] [rbp-468h]
  __int64 v140; // [rsp+10h] [rbp-468h]
  __int64 v141; // [rsp+10h] [rbp-468h]
  __int64 v142; // [rsp+10h] [rbp-468h]
  int v143; // [rsp+10h] [rbp-468h]
  __int64 v144; // [rsp+10h] [rbp-468h]
  _QWORD *v145; // [rsp+10h] [rbp-468h]
  __int64 v146; // [rsp+10h] [rbp-468h]
  int v147; // [rsp+18h] [rbp-460h]
  int v148; // [rsp+20h] [rbp-458h]
  int v149; // [rsp+28h] [rbp-450h]
  __int64 v150; // [rsp+30h] [rbp-448h]
  int v151; // [rsp+38h] [rbp-440h]
  int v152; // [rsp+40h] [rbp-438h]
  int v153; // [rsp+48h] [rbp-430h]
  int v154; // [rsp+50h] [rbp-428h]
  char v155; // [rsp+58h] [rbp-420h]
  __int64 v156; // [rsp+60h] [rbp-418h]
  int v157; // [rsp+68h] [rbp-410h]
  __int64 v158; // [rsp+70h] [rbp-408h]
  _BYTE *v159; // [rsp+C0h] [rbp-3B8h]
  void *v160; // [rsp+E0h] [rbp-398h] BYREF
  __int64 v161; // [rsp+E8h] [rbp-390h]
  _QWORD v162[2]; // [rsp+F0h] [rbp-388h] BYREF
  void *v163; // [rsp+100h] [rbp-378h] BYREF
  __int64 v164; // [rsp+108h] [rbp-370h]
  _QWORD v165[2]; // [rsp+110h] [rbp-368h] BYREF
  void *v166; // [rsp+120h] [rbp-358h] BYREF
  __int64 v167; // [rsp+128h] [rbp-350h]
  _QWORD v168[2]; // [rsp+130h] [rbp-348h] BYREF
  char v169; // [rsp+140h] [rbp-338h] BYREF
  __int128 v170; // [rsp+148h] [rbp-330h] BYREF
  char v171; // [rsp+158h] [rbp-320h]
  __int128 v172; // [rsp+160h] [rbp-318h] BYREF
  char v173; // [rsp+170h] [rbp-308h] BYREF
  __int128 v174; // [rsp+178h] [rbp-300h] BYREF
  char v175; // [rsp+188h] [rbp-2F0h]
  __int128 v176; // [rsp+190h] [rbp-2E8h] BYREF
  char v177; // [rsp+1A0h] [rbp-2D8h] BYREF
  __int128 v178; // [rsp+1A8h] [rbp-2D0h] BYREF
  char v179; // [rsp+1B8h] [rbp-2C0h]
  __int128 v180; // [rsp+1C0h] [rbp-2B8h] BYREF
  char v181; // [rsp+1D0h] [rbp-2A8h] BYREF
  __int128 v182; // [rsp+1D8h] [rbp-2A0h] BYREF
  char v183; // [rsp+1E8h] [rbp-290h]
  __int128 v184; // [rsp+1F0h] [rbp-288h] BYREF
  char v185; // [rsp+200h] [rbp-278h] BYREF
  __int128 v186; // [rsp+208h] [rbp-270h] BYREF
  __int64 v187; // [rsp+218h] [rbp-260h]
  __int64 v188; // [rsp+220h] [rbp-258h]
  __int64 v189; // [rsp+228h] [rbp-250h]
  char v190; // [rsp+230h] [rbp-248h] BYREF
  __int128 v191; // [rsp+238h] [rbp-240h] BYREF
  char v192; // [rsp+248h] [rbp-230h]
  _BOOL8 v193; // [rsp+250h] [rbp-228h]
  __int64 v194; // [rsp+258h] [rbp-220h]
  char v195; // [rsp+260h] [rbp-218h] BYREF
  __int128 v196; // [rsp+268h] [rbp-210h] BYREF
  char v197; // [rsp+278h] [rbp-200h]
  __int64 v198; // [rsp+280h] [rbp-1F8h]
  __int64 v199; // [rsp+288h] [rbp-1F0h]
  char v200; // [rsp+290h] [rbp-1E8h] BYREF
  __int128 v201; // [rsp+298h] [rbp-1E0h] BYREF
  _QWORD v202[3]; // [rsp+2A8h] [rbp-1D0h] BYREF
  char v203; // [rsp+2C0h] [rbp-1B8h] BYREF
  __int128 v204; // [rsp+2C8h] [rbp-1B0h]
  char v205; // [rsp+2D8h] [rbp-1A0h]
  __int64 v206; // [rsp+2E0h] [rbp-198h]
  __int64 v207; // [rsp+2E8h] [rbp-190h]
  void *v208[2]; // [rsp+2F0h] [rbp-188h] BYREF
  __int64 v209; // [rsp+300h] [rbp-178h] BYREF
  _QWORD v210[3]; // [rsp+308h] [rbp-170h] BYREF
  _QWORD v211[3]; // [rsp+320h] [rbp-158h] BYREF
  char v212; // [rsp+338h] [rbp-140h] BYREF
  _QWORD v213[3]; // [rsp+340h] [rbp-138h] BYREF
  _QWORD v214[3]; // [rsp+358h] [rbp-120h] BYREF
  _QWORD v215[3]; // [rsp+370h] [rbp-108h] BYREF
  _QWORD v216[3]; // [rsp+388h] [rbp-F0h] BYREF
  _QWORD v217[3]; // [rsp+3A0h] [rbp-D8h] BYREF
  _QWORD v218[3]; // [rsp+3B8h] [rbp-C0h] BYREF
  char v219[32]; // [rsp+3D0h] [rbp-A8h] BYREF
  char v220[32]; // [rsp+3F0h] [rbp-88h] BYREF
  char v221[40]; // [rsp+410h] [rbp-68h] BYREF
  unsigned __int64 v222; // [rsp+438h] [rbp-40h]

  v222 = __readfsqword(0x28u);
  v208[0] = &v209;
  v208[1] = nullptr;
  LOBYTE(v209) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x6E4AB);
  std::string::_M_assign();
  v1 = v208[0];
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = __isoc23_strtoull();
  if ( v1 == v159 || *v159 || *v3 == 34 && v4 == -1 )
  {
    if ( v208[0] != &v209 )
      operator delete(v208[0], v209 + 1);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x6E053);
  }
  if ( v208[0] != &v209 )
    operator delete(v208[0], v209 + 1);
  v6 = getseg();
  if ( !v6 )
    JUMPOUT(0x6E133);
  get_segm_name();
  v169 = 0;
  v7 = *(_BYTE *)(v6 + 42);
  *(_QWORD *)&v170 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v169 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "address", v9, v10, v11, v12, v108, v121, a1);
  v170 = (unsigned __int64)v8;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v160, v219, v13, v14, v15, v16, v109, v122, v134);
  v171 = 0;
  *(_QWORD *)&v172 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v171 = 3;
  v17 = (_QWORD *)operator new(0x20u);
  v18 = v160;
  v19 = v17 + 2;
  v20 = v161;
  *v17 = v17 + 2;
  if ( v18 == v162 )
  {
    v84 = v20 + 1;
    if ( (unsigned int)(v20 + 1) >= 8 )
    {
      v17[2] = v162[0];
      *(_QWORD *)((char *)v19 + v84 - 8) = *(_QWORD *)((char *)&v162[-1] + v84);
      v87 = (unsigned __int64)(v17 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v88 = (char *)v19 - v87;
      v89 = (char *)((char *)v162 - v88);
      v90 = ((_DWORD)v88 + v84) & 0xFFFFFFF8;
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
    else if ( (v84 & 4) != 0 )
    {
      *((_DWORD *)v17 + 4) = v162[0];
      *(_DWORD *)((char *)v19 + v84 - 4) = *(_DWORD *)((char *)&v161 + v84 + 4);
    }
    else if ( (_DWORD)v20 != -1 )
    {
      *((_BYTE *)v17 + 16) = v162[0];
      if ( (v84 & 2) != 0 )
        *(_WORD *)((char *)v19 + v84 - 2) = *(_WORD *)((char *)&v161 + v84 + 6);
    }
  }
  else
  {
    *v17 = v18;
    v17[2] = v162[0];
  }
  v17[1] = v20;
  v161 = 0;
  v160 = v162;
  LOBYTE(v162[0]) = 0;
  v172 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v213,
    (const __m128i *)&v169);
  v213[2] = 0;
  v173 = 0;
  *(_QWORD *)&v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v173 = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "segment_name", v22, v23, v24, v25, (int)v162, (int)v213, v135);
  v174 = (unsigned __int64)v21;
  v175 = 0;
  *(_QWORD *)&v176 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v175 = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v26,
    _qstring<char>::c_str(void)const::nullstr,
    v27,
    v28,
    v29,
    v30,
    v110,
    v123,
    v136);
  v176 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v214,
    (const __m128i *)&v173);
  v214[2] = 0;
  v177 = 0;
  *(_QWORD *)&v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "segment_start", v32, v33, v34, v35, v111, v124, v137);
  v178 = (unsigned __int64)v31;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v163, v220, v36, v37, v38, v39, v112, v125, v138);
  v179 = 0;
  *(_QWORD *)&v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v40 = (_QWORD *)operator new(0x20u);
  v41 = v163;
  v42 = v40 + 2;
  v43 = v164;
  *v40 = v40 + 2;
  if ( v41 == v165 )
  {
    v86 = v43 + 1;
    if ( (unsigned int)(v43 + 1) >= 8 )
    {
      v40[2] = v165[0];
      *(_QWORD *)((char *)v42 + v86 - 8) = *(_QWORD *)((char *)&v165[-1] + v86);
      v101 = (unsigned __int64)(v40 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v102 = (char *)v42 - v101;
      v103 = (char *)((char *)v165 - v102);
      v104 = ((_DWORD)v102 + v86) & 0xFFFFFFF8;
      if ( v104 >= 8 )
      {
        v105 = v104 & 0xFFFFFFF8;
        v106 = 0;
        do
        {
          v107 = v106;
          v106 += 8;
          *(_QWORD *)(v101 + v107) = *(_QWORD *)&v103[v107];
        }
        while ( v106 < v105 );
      }
    }
    else if ( (v86 & 4) != 0 )
    {
      *((_DWORD *)v40 + 4) = v165[0];
      *(_DWORD *)((char *)v42 + v86 - 4) = *(_DWORD *)((char *)&v164 + v86 + 4);
    }
    else if ( (_DWORD)v43 != -1 )
    {
      *((_BYTE *)v40 + 16) = v165[0];
      if ( (v86 & 2) != 0 )
        *(_WORD *)((char *)v42 + v86 - 2) = *(_WORD *)((char *)&v164 + v86 + 6);
    }
  }
  else
  {
    *v40 = v41;
    v40[2] = v165[0];
  }
  v40[1] = v43;
  v163 = v165;
  v164 = 0;
  LOBYTE(v165[0]) = 0;
  v180 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v215,
    (const __m128i *)&v177);
  v215[2] = 0;
  v181 = 0;
  *(_QWORD *)&v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "segment_end");
  *(_QWORD *)(v44 + 8) = 11;
  v182 = (unsigned __int64)v44;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v166, v221, v45, v46, v47, v48, v113, v126, v139);
  v183 = 0;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v49 = (_QWORD *)operator new(0x20u);
  v50 = v166;
  v51 = v49 + 2;
  v52 = v167;
  *v49 = v49 + 2;
  if ( v50 == v168 )
  {
    v85 = v52 + 1;
    if ( (unsigned int)(v52 + 1) >= 8 )
    {
      v49[2] = v168[0];
      *(_QWORD *)((char *)v51 + v85 - 8) = *(_QWORD *)((char *)&v168[-1] + v85);
      v94 = (unsigned __int64)(v49 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v95 = (char *)v51 - v94;
      v96 = (char *)((char *)v168 - v95);
      v97 = ((_DWORD)v95 + v85) & 0xFFFFFFF8;
      if ( v97 >= 8 )
      {
        v98 = v97 & 0xFFFFFFF8;
        v99 = 0;
        do
        {
          v100 = v99;
          v99 += 8;
          *(_QWORD *)(v94 + v100) = *(_QWORD *)&v96[v100];
        }
        while ( v99 < v98 );
      }
    }
    else if ( (v85 & 4) != 0 )
    {
      *((_DWORD *)v49 + 4) = v168[0];
      *(_DWORD *)((char *)v51 + v85 - 4) = *(_DWORD *)((char *)&v167 + v85 + 4);
    }
    else if ( (_DWORD)v52 != -1 )
    {
      *((_BYTE *)v49 + 16) = v168[0];
      if ( (v85 & 2) != 0 )
        *(_WORD *)((char *)v51 + v85 - 2) = *(_WORD *)((char *)&v167 + v85 + 6);
    }
  }
  else
  {
    *v49 = v50;
    v49[2] = v168[0];
  }
  v49[1] = v52;
  v166 = v168;
  LOBYTE(v168[0]) = 0;
  v167 = 0;
  v184 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v216,
    (const __m128i *)&v181);
  v216[2] = 0;
  v200 = 0;
  *(_QWORD *)&v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "permissions");
  *(_QWORD *)(v53 + 8) = 11;
  v185 = 0;
  *(_QWORD *)&v186 = 0;
  v201 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v54, "read", v55, v56, v57, v58, v114, v127, v140);
  v187 = 4;
  v188 = 1;
  v189 = 0;
  v186 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v208,
    (const __m128i *)&v185);
  v209 = 0;
  v190 = 0;
  *(_QWORD *)&v191 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v190 = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "write", v60, v61, v62, v63, v115, v128, v141);
  v192 = 4;
  v193 = (v7 & 2) != 0;
  v194 = 0;
  v191 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v210,
    (const __m128i *)&v190);
  v210[2] = 0;
  v195 = 0;
  *(_QWORD *)&v196 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v195 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "execute", v65, v66, v67, v68, v116, v129, v142);
  v197 = 4;
  v198 = v7 & 1;
  v199 = 0;
  v196 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v211,
    (const __m128i *)&v195);
  v211[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v202,
    (__int64)v208,
    3,
    v69,
    v70,
    v71,
    v117,
    v130,
    v143,
    (int)&v170,
    (int)&v172,
    (int)&v174,
    (__int64)&v176,
    (int)&v178,
    (int)&v180,
    (int)&v182,
    (int)&v184,
    (char)&v186,
    (__int64)&v191,
    (int)&v196,
    (__int64)&v201);
  v202[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v217,
    (const __m128i *)&v200);
  v217[2] = 0;
  v203 = 0;
  *(_QWORD *)&v204 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v203 = 3;
  v72 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v72, "perm_value", v73, v74, v75, v76, v118, v131, v144);
  v77 = *(unsigned __int8 *)(v6 + 42);
  v78 = v218;
  v205 = 6;
  v206 = v77;
  v207 = 0;
  v204 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v218,
    (const __m128i *)&v203);
  v218[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v145,
    v132,
    6,
    v79,
    v80,
    v81,
    v119,
    v132,
    (int)v145,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  do
  {
    v78 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v78 != (_QWORD *)(v133 - 24) );
  v82 = (void **)&v212;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v82 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v82 != v208 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v166 != v168 )
    operator delete(v166, v168[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v163 != v165 )
    operator delete(v163, v165[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v160 != v120 )
    operator delete(v160, v162[0] + 1LL);
  return v146;
}

