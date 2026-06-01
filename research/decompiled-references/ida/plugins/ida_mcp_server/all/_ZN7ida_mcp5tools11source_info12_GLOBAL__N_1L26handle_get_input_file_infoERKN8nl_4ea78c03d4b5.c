__int64 __fastcall ida_mcp::tools::source_info::`anonymous namespace'::handle_get_input_file_info(_QWORD *a1)
{
  int v1; // r13d
  __int64 v2; // rax
  __int64 *v3; // rax
  _QWORD *v4; // r12
  __int64 *v5; // rbx
  size_t v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // r12
  __int64 *v11; // rbp
  size_t v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  unsigned int v17; // r14d
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  size_t v22; // rdi
  __int64 v23; // rax
  size_t v24; // rax
  unsigned int v25; // r14d
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  size_t v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  char *v45; // rax
  char *v46; // r13
  unsigned int v47; // r14d
  unsigned int v48; // r14d
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  char *v52; // rax
  char *v53; // r13
  unsigned int v54; // r14d
  unsigned int v55; // r14d
  unsigned int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // esi
  unsigned int v59; // esi
  unsigned __int64 v60; // r8
  char *v61; // rcx
  char *v62; // r9
  unsigned int v63; // edx
  unsigned int v64; // ecx
  __int64 v65; // rsi
  unsigned __int64 v66; // r8
  char *v67; // rcx
  char *v68; // r9
  unsigned int v69; // edx
  unsigned int v70; // ecx
  __int64 v71; // rsi
  __int64 v73; // [rsp+0h] [rbp-1508h]
  unsigned int v74; // [rsp+8h] [rbp-1500h]
  unsigned int v75; // [rsp+10h] [rbp-14F8h]
  int segm_qty; // [rsp+40h] [rbp-14C8h]
  size_t v77; // [rsp+A8h] [rbp-1460h]
  size_t v78; // [rsp+A8h] [rbp-1460h]
  size_t v79; // [rsp+A8h] [rbp-1460h]
  size_t v80; // [rsp+A8h] [rbp-1460h]
  void *v81; // [rsp+B0h] [rbp-1458h] BYREF
  size_t v82; // [rsp+B8h] [rbp-1450h]
  _QWORD v83[2]; // [rsp+C0h] [rbp-1448h] BYREF
  void *v84; // [rsp+D0h] [rbp-1438h] BYREF
  size_t v85; // [rsp+D8h] [rbp-1430h]
  _QWORD v86[2]; // [rsp+E0h] [rbp-1428h] BYREF
  char v87; // [rsp+F0h] [rbp-1418h] BYREF
  __int128 v88; // [rsp+F8h] [rbp-1410h] BYREF
  char v89; // [rsp+108h] [rbp-1400h]
  __int128 v90; // [rsp+110h] [rbp-13F8h] BYREF
  char v91; // [rsp+120h] [rbp-13E8h] BYREF
  __int128 v92; // [rsp+128h] [rbp-13E0h] BYREF
  char v93; // [rsp+138h] [rbp-13D0h]
  __int128 v94; // [rsp+140h] [rbp-13C8h] BYREF
  char v95; // [rsp+150h] [rbp-13B8h] BYREF
  __int128 v96; // [rsp+158h] [rbp-13B0h] BYREF
  char v97; // [rsp+168h] [rbp-13A0h]
  __int64 v98; // [rsp+170h] [rbp-1398h]
  __int64 v99; // [rsp+178h] [rbp-1390h]
  char v100; // [rsp+180h] [rbp-1388h] BYREF
  __int128 v101; // [rsp+188h] [rbp-1380h] BYREF
  char v102; // [rsp+198h] [rbp-1370h]
  __int128 v103; // [rsp+1A0h] [rbp-1368h] BYREF
  char v104; // [rsp+1B0h] [rbp-1358h] BYREF
  __int128 v105; // [rsp+1B8h] [rbp-1350h] BYREF
  char v106; // [rsp+1C8h] [rbp-1340h]
  __int128 v107; // [rsp+1D0h] [rbp-1338h] BYREF
  char v108; // [rsp+1E0h] [rbp-1328h] BYREF
  __int128 v109; // [rsp+1E8h] [rbp-1320h] BYREF
  char v110; // [rsp+1F8h] [rbp-1310h]
  __int64 v111; // [rsp+200h] [rbp-1308h]
  __int64 v112; // [rsp+208h] [rbp-1300h]
  char v113; // [rsp+210h] [rbp-12F8h] BYREF
  __int128 v114; // [rsp+218h] [rbp-12F0h] BYREF
  char v115; // [rsp+228h] [rbp-12E0h]
  __int64 v116; // [rsp+230h] [rbp-12D8h]
  __int64 v117; // [rsp+238h] [rbp-12D0h]
  char v118; // [rsp+240h] [rbp-12C8h] BYREF
  __int128 v119; // [rsp+248h] [rbp-12C0h]
  char v120; // [rsp+258h] [rbp-12B0h]
  __int64 v121; // [rsp+260h] [rbp-12A8h]
  __int64 v122; // [rsp+268h] [rbp-12A0h]
  char v123; // [rsp+270h] [rbp-1298h] BYREF
  __int128 v124; // [rsp+278h] [rbp-1290h]
  char v125; // [rsp+288h] [rbp-1280h]
  __int64 v126; // [rsp+290h] [rbp-1278h]
  __int64 v127; // [rsp+298h] [rbp-1270h]
  _QWORD v128[3]; // [rsp+2A0h] [rbp-1268h] BYREF
  _QWORD v129[3]; // [rsp+2B8h] [rbp-1250h] BYREF
  _QWORD v130[3]; // [rsp+2D0h] [rbp-1238h] BYREF
  _QWORD v131[3]; // [rsp+2E8h] [rbp-1220h] BYREF
  _QWORD v132[3]; // [rsp+300h] [rbp-1208h] BYREF
  _QWORD v133[3]; // [rsp+318h] [rbp-11F0h] BYREF
  _QWORD v134[3]; // [rsp+330h] [rbp-11D8h] BYREF
  _QWORD v135[3]; // [rsp+348h] [rbp-11C0h] BYREF
  _QWORD v136[3]; // [rsp+360h] [rbp-11A8h] BYREF
  char v137[8]; // [rsp+378h] [rbp-1190h] BYREF
  char v138[24]; // [rsp+380h] [rbp-1188h] BYREF
  _BYTE v139[8]; // [rsp+398h] [rbp-1170h]
  char v140[24]; // [rsp+3A0h] [rbp-1168h] BYREF
  _BYTE v141[8]; // [rsp+3B8h] [rbp-1150h]
  char v142[16]; // [rsp+3C0h] [rbp-1148h] BYREF
  __int128 v143; // [rsp+3D0h] [rbp-1138h]
  __int128 v144; // [rsp+3E0h] [rbp-1128h]
  __int128 v145; // [rsp+3F0h] [rbp-1118h]
  __int128 v146; // [rsp+400h] [rbp-1108h]
  __int128 v147; // [rsp+410h] [rbp-10F8h]
  __int128 v148; // [rsp+420h] [rbp-10E8h]
  __int128 v149; // [rsp+430h] [rbp-10D8h]
  __int128 v150; // [rsp+440h] [rbp-10C8h]
  __int128 v151; // [rsp+450h] [rbp-10B8h]
  __int128 v152; // [rsp+460h] [rbp-10A8h]
  __int128 v153; // [rsp+470h] [rbp-1098h]
  __int128 v154; // [rsp+480h] [rbp-1088h]
  __int128 v155; // [rsp+490h] [rbp-1078h]
  __int128 v156; // [rsp+4A0h] [rbp-1068h]
  __int128 v157; // [rsp+4B0h] [rbp-1058h]
  char s[4104]; // [rsp+4C0h] [rbp-1048h] BYREF
  unsigned __int64 v159; // [rsp+14C8h] [rbp-40h]

  v159 = __readfsqword(0x28u);
  memset(s, 0, 0x1000u);
  get_root_filename();
  *(_OWORD *)v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  get_loader_name();
  v1 = getinf();
  getinf();
  getinf();
  segm_qty = get_segm_qty();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "filename");
  *(_QWORD *)(v2 + 8) = 8;
  *(_QWORD *)&v90 = 0;
  v88 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v3 = (__int64 *)operator new(0x20u);
  v4 = v3 + 2;
  v5 = v3;
  *v3 = (__int64)(v3 + 2);
  v6 = strlen(s);
  v77 = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v74 = v6;
    v43 = std::string::_M_create();
    *v5 = v43;
    v4 = (_QWORD *)v43;
    v7 = v74;
    v5[2] = v77;
LABEL_49:
    if ( v7 >= 8 )
    {
      *v4 = *(_QWORD *)s;
      *(_QWORD *)((char *)v4 + v7 - 8) = *(_QWORD *)&s[v7 - 8];
      qmemcpy(
        (void *)((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(s - ((char *)v4 - ((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((_DWORD)v4 - (((_DWORD)v4 + 8) & 0xFFFFFFF8) + v7) >> 3));
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_DWORD *)v4 = *(_DWORD *)s;
      *(_DWORD *)((char *)v4 + v7 - 4) = *(_DWORD *)&s[v7 - 4];
    }
    else if ( v7 )
    {
      *(_BYTE *)v4 = s[0];
      if ( (v7 & 2) != 0 )
        *(_WORD *)((char *)v4 + v7 - 2) = *(_WORD *)&s[v7 - 2];
    }
    v6 = v77;
    v4 = (_QWORD *)*v5;
    goto LABEL_4;
  }
  if ( v6 == 1 )
  {
    *((_BYTE *)v5 + 16) = s[0];
    goto LABEL_4;
  }
  if ( v6 )
    goto LABEL_49;
LABEL_4:
  v5[1] = v6;
  *((_BYTE *)v4 + v6) = 0;
  v90 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v128,
    (const __m128i *)&v87);
  v128[2] = 0;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = v8 + 16;
  strcpy((char *)(v8 + 16), "loader");
  *(_QWORD *)(v8 + 8) = 6;
  v93 = 0;
  *(_QWORD *)&v94 = 0;
  v92 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v9 = (__int64 *)operator new(0x20u);
  v10 = v9 + 2;
  v11 = v9;
  *v9 = (__int64)(v9 + 2);
  v12 = strlen(v142);
  v78 = v12;
  v13 = v12;
  if ( v12 > 0xF )
  {
    v75 = v12;
    v42 = std::string::_M_create();
    *v11 = v42;
    v10 = (_QWORD *)v42;
    v13 = v75;
    v11[2] = v78;
LABEL_35:
    if ( v13 >= 8 )
    {
      *v10 = *(_QWORD *)v142;
      *(_QWORD *)((char *)v10 + v13 - 8) = *(_QWORD *)&v141[v13];
      qmemcpy(
        (void *)((unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v142 - ((char *)v10 - ((unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((_DWORD)v10 - (((_DWORD)v10 + 8) & 0xFFFFFFF8) + v13) >> 3));
    }
    else if ( (v13 & 4) != 0 )
    {
      *(_DWORD *)v10 = *(_DWORD *)v142;
      *(_DWORD *)((char *)v10 + v13 - 4) = *(_DWORD *)&v141[v13 + 4];
    }
    else if ( v13 )
    {
      *(_BYTE *)v10 = v142[0];
      if ( (v13 & 2) != 0 )
        *(_WORD *)((char *)v10 + v13 - 2) = *(_WORD *)&v141[v13 + 6];
    }
    v12 = v78;
    v10 = (_QWORD *)*v11;
    goto LABEL_7;
  }
  if ( v12 == 1 )
  {
    *((_BYTE *)v11 + 16) = v142[0];
    goto LABEL_7;
  }
  if ( v12 )
    goto LABEL_35;
LABEL_7:
  v11[1] = v12;
  *((_BYTE *)v10 + v12) = 0;
  v94 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (const __m128i *)&v91);
  v129[2] = 0;
  v95 = 0;
  *(_QWORD *)&v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v95 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "filetype");
  *(_QWORD *)(v14 + 8) = 8;
  v97 = 5;
  v98 = v1;
  v99 = 0;
  v96 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v130,
    (const __m128i *)&v95);
  v130[2] = 0;
  v100 = 0;
  *(_QWORD *)&v101 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "imagebase");
  *(_QWORD *)(v15 + 8) = 9;
  v101 = (unsigned __int64)v15;
  qsnprintf();
  v81 = v83;
  v16 = strlen(v138);
  v79 = v16;
  v17 = v16;
  if ( v16 > 0xF )
  {
    v41 = (_QWORD *)std::string::_M_create();
    v81 = v41;
    v83[0] = v79;
  }
  else
  {
    if ( v16 == 1 )
    {
      LOBYTE(v83[0]) = v138[0];
LABEL_10:
      v18 = v83;
      goto LABEL_11;
    }
    if ( !v16 )
      goto LABEL_10;
    v41 = v83;
  }
  if ( v17 >= 8 )
  {
    *v41 = *(_QWORD *)v138;
    *(_QWORD *)((char *)v41 + v17 - 8) = *(_QWORD *)&v137[v17];
    v51 = (unsigned __int64)(v41 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v52 = (char *)v41 - v51;
    v53 = (char *)(v138 - v52);
    v54 = ((_DWORD)v52 + v17) & 0xFFFFFFF8;
    if ( v54 >= 8 )
    {
      v55 = v54 & 0xFFFFFFF8;
      v56 = 0;
      do
      {
        v57 = v56;
        v56 += 8;
        *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
      }
      while ( v56 < v55 );
    }
  }
  else if ( (v17 & 4) != 0 )
  {
    *(_DWORD *)v41 = *(_DWORD *)v138;
    *(_DWORD *)((char *)v41 + v17 - 4) = *(_DWORD *)&v137[v17 + 4];
  }
  else if ( v17 )
  {
    *(_BYTE *)v41 = v138[0];
    if ( (v17 & 2) != 0 )
      *(_WORD *)((char *)v41 + v17 - 2) = *(_WORD *)&v137[v17 + 6];
  }
  v16 = v79;
  v18 = v81;
LABEL_11:
  v82 = v16;
  *((_BYTE *)v18 + v16) = 0;
  v102 = 0;
  *(_QWORD *)&v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v102 = 3;
  v19 = (_QWORD *)operator new(0x20u);
  v20 = v81;
  v21 = v19 + 2;
  v22 = v82;
  *v19 = v19 + 2;
  if ( v20 == v83 )
  {
    v59 = v22 + 1;
    if ( (unsigned int)(v22 + 1) >= 8 )
    {
      v19[2] = v83[0];
      *(_QWORD *)((char *)v21 + v59 - 8) = *(_QWORD *)((char *)&v83[-1] + v59);
      v66 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v67 = (char *)v21 - v66;
      v68 = (char *)((char *)v83 - v67);
      if ( (((_DWORD)v67 + v59) & 0xFFFFFFF8) >= 8 )
      {
        v69 = ((_DWORD)v67 + v59) & 0xFFFFFFF8;
        v70 = 0;
        do
        {
          v71 = v70;
          v70 += 8;
          *(_QWORD *)(v66 + v71) = *(_QWORD *)&v68[v71];
        }
        while ( v70 < v69 );
      }
    }
    else if ( (v59 & 4) != 0 )
    {
      *((_DWORD *)v19 + 4) = v83[0];
      *(_DWORD *)((char *)v21 + v59 - 4) = *(_DWORD *)((char *)&v82 + v59 + 4);
    }
    else if ( (_DWORD)v22 != -1 )
    {
      *((_BYTE *)v19 + 16) = v83[0];
      if ( (v59 & 2) != 0 )
        *(_WORD *)((char *)v21 + v59 - 2) = *(_WORD *)((char *)&v82 + v59 + 6);
    }
  }
  else
  {
    *v19 = v20;
    v19[2] = v83[0];
  }
  v19[1] = v22;
  v81 = v83;
  v82 = 0;
  LOBYTE(v83[0]) = 0;
  v103 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v131,
    (const __m128i *)&v100);
  v131[2] = 0;
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "start_address");
  *(_QWORD *)(v23 + 8) = 13;
  v105 = (unsigned __int64)v23;
  qsnprintf();
  v84 = v86;
  v24 = strlen(v140);
  v80 = v24;
  v25 = v24;
  if ( v24 > 0xF )
  {
    v40 = (_QWORD *)std::string::_M_create();
    v84 = v40;
    v86[0] = v80;
  }
  else
  {
    if ( v24 == 1 )
    {
      LOBYTE(v86[0]) = v140[0];
LABEL_16:
      v26 = v86;
      goto LABEL_17;
    }
    if ( !v24 )
      goto LABEL_16;
    v40 = v86;
  }
  if ( v25 >= 8 )
  {
    *v40 = *(_QWORD *)v140;
    *(_QWORD *)((char *)v40 + v25 - 8) = *(_QWORD *)&v139[v25];
    v44 = (unsigned __int64)(v40 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v45 = (char *)v40 - v44;
    v46 = (char *)(v140 - v45);
    v47 = ((_DWORD)v45 + v25) & 0xFFFFFFF8;
    if ( v47 >= 8 )
    {
      v48 = v47 & 0xFFFFFFF8;
      v49 = 0;
      do
      {
        v50 = v49;
        v49 += 8;
        *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
      }
      while ( v49 < v48 );
    }
  }
  else if ( (v25 & 4) != 0 )
  {
    *(_DWORD *)v40 = *(_DWORD *)v140;
    *(_DWORD *)((char *)v40 + v25 - 4) = *(_DWORD *)&v139[v25 + 4];
  }
  else if ( v25 )
  {
    *(_BYTE *)v40 = v140[0];
    if ( (v25 & 2) != 0 )
      *(_WORD *)((char *)v40 + v25 - 2) = *(_WORD *)&v139[v25 + 6];
  }
  v24 = v80;
  v26 = v84;
LABEL_17:
  v85 = v24;
  *((_BYTE *)v26 + v24) = 0;
  v106 = 0;
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v27 = (_QWORD *)operator new(0x20u);
  v28 = v84;
  v29 = v27 + 2;
  v30 = v85;
  *v27 = v27 + 2;
  if ( v28 == v86 )
  {
    v58 = v30 + 1;
    if ( (unsigned int)(v30 + 1) >= 8 )
    {
      v27[2] = v86[0];
      *(_QWORD *)((char *)v29 + v58 - 8) = *(_QWORD *)((char *)&v86[-1] + v58);
      v60 = (unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v61 = (char *)v29 - v60;
      v62 = (char *)((char *)v86 - v61);
      if ( (((_DWORD)v61 + v58) & 0xFFFFFFF8) >= 8 )
      {
        v63 = ((_DWORD)v61 + v58) & 0xFFFFFFF8;
        v64 = 0;
        do
        {
          v65 = v64;
          v64 += 8;
          *(_QWORD *)(v60 + v65) = *(_QWORD *)&v62[v65];
        }
        while ( v64 < v63 );
      }
    }
    else if ( (v58 & 4) != 0 )
    {
      *((_DWORD *)v27 + 4) = v86[0];
      *(_DWORD *)((char *)v29 + v58 - 4) = *(_DWORD *)((char *)&v85 + v58 + 4);
    }
    else if ( (_DWORD)v30 != -1 )
    {
      *((_BYTE *)v27 + 16) = v86[0];
      if ( (v58 & 2) != 0 )
        *(_WORD *)((char *)v29 + v58 - 2) = *(_WORD *)((char *)&v85 + v58 + 6);
    }
  }
  else
  {
    *v27 = v28;
    v27[2] = v86[0];
  }
  v27[1] = v30;
  v84 = v86;
  v85 = 0;
  LOBYTE(v86[0]) = 0;
  v107 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v104);
  v132[2] = 0;
  v108 = 0;
  *(_QWORD *)&v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = 3;
  v31 = operator new(0x20u);
  strcpy((char *)(v31 + 16), "segment_count");
  *(_QWORD *)v31 = v31 + 16;
  *(_QWORD *)(v31 + 8) = 13;
  v110 = 5;
  v111 = segm_qty;
  v112 = 0;
  v109 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v133,
    (const __m128i *)&v108);
  v133[2] = 0;
  v113 = 0;
  *(_QWORD *)&v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "is_64bit");
  *(_QWORD *)(v32 + 8) = 8;
  v114 = (unsigned __int64)v32;
  v116 = (unsigned __int8)getinf_flag();
  v115 = 4;
  v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v134,
    (const __m128i *)&v113);
  v134[2] = 0;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "is_32bit");
  *(_QWORD *)(v33 + 8) = 8;
  v119 = (unsigned __int64)v33;
  v121 = (unsigned __int8)getinf_flag();
  v120 = 4;
  v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v135,
    (const __m128i *)&v118);
  v135[2] = 0;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v34 = operator new(0x20u);
  strcpy((char *)(v34 + 16), "is_big_endian");
  *(_QWORD *)v34 = v34 + 16;
  *(_QWORD *)(v34 + 8) = 13;
  v124 = (unsigned __int64)v34;
  v126 = (unsigned __int8)getinf_flag();
  v125 = 4;
  v127 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v136,
    (const __m128i *)&v123);
  v136[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v128,
    9,
    v35,
    v36,
    v37,
    (int)a1,
    (__int64)&v94,
    (int)&v96,
    (int)&v101,
    (int)&v103,
    (int)&v105,
    (__int64)&v107,
    (int)&v109,
    (int)&v114,
    (int)&v88,
    (int)&v90,
    (char)&v92,
    (__int64)&v81,
    (int)&v84,
    (__int64)&v104);
  v38 = v137;
  do
  {
    v38 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v38 != (char *)v128 );
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
  if ( v84 != v86 )
    operator delete(v84, v86[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v81 != v83 )
    operator delete(v81, v83[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v73;
}

