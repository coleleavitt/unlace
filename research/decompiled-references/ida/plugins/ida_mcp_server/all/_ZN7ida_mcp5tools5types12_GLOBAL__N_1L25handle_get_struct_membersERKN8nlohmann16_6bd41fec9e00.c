__int64 __fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_struct_members(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r13
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  __int64 idati; // rax
  unsigned __int64 v13; // r14
  const char *v14; // r15
  __int64 *v15; // rax
  __int64 *v16; // r13
  char *v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  char v25; // si
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rax
  char v29; // si
  __int64 v30; // rdx
  char *v31; // r15
  __int64 *v32; // rax
  __int64 *v33; // r13
  size_t v34; // rax
  void *v35; // rcx
  size_t v36; // r8
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // rdx
  char v40; // r12
  const char *v41; // r15
  __int64 *v42; // rax
  __int64 *v43; // r13
  size_t v44; // rax
  void *v45; // rcx
  size_t v46; // r8
  __int64 v47; // rax
  char v48; // si
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rbx
  __int64 v52; // rax
  char v53; // si
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rdx
  const char *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  char v65; // dl
  void *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  char v69; // si
  char v70; // dl
  __int64 v71; // rdx
  char v72; // r15
  __int64 v73; // rax
  __int64 v74; // rcx
  char v75; // si
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  _BYTE *v85; // r14
  unsigned __int64 v86; // r12
  _QWORD *v87; // rax
  _BYTE *v88; // rdi
  __int64 *v89; // rbx
  __m128i si128; // xmm0
  size_t v91; // rdx
  __int64 v92; // rax
  __int64 *v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  char tinfo_property; // al
  __int64 *v99; // r12
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  void *v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __m128i v114; // xmm0
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdi
  __int64 v119; // r12
  __int64 v120; // r14
  _QWORD *v121; // rbx
  __int64 v123; // rax
  void *v124; // rax
  int v125; // [rsp+0h] [rbp-320h]
  int v126; // [rsp+0h] [rbp-320h]
  int v127; // [rsp+0h] [rbp-320h]
  int v128; // [rsp+0h] [rbp-320h]
  int v129; // [rsp+0h] [rbp-320h]
  int v130; // [rsp+0h] [rbp-320h]
  int v131; // [rsp+8h] [rbp-318h]
  int v132; // [rsp+8h] [rbp-318h]
  int v133; // [rsp+8h] [rbp-318h]
  int v134; // [rsp+8h] [rbp-318h]
  __int64 v135; // [rsp+8h] [rbp-318h]
  __int64 v136; // [rsp+10h] [rbp-310h]
  __int64 v137; // [rsp+10h] [rbp-310h]
  __int64 v138; // [rsp+10h] [rbp-310h]
  __int64 v139; // [rsp+10h] [rbp-310h]
  int v140; // [rsp+10h] [rbp-310h]
  void *v141; // [rsp+28h] [rbp-2F8h]
  __int64 v143; // [rsp+40h] [rbp-2E0h]
  void *desta; // [rsp+50h] [rbp-2D0h]
  void *destb; // [rsp+50h] [rbp-2D0h]
  void *destc; // [rsp+50h] [rbp-2D0h]
  char dest; // [rsp+50h] [rbp-2D0h]
  void *destd; // [rsp+50h] [rbp-2D0h]
  char *deste; // [rsp+50h] [rbp-2D0h]
  void *destf; // [rsp+50h] [rbp-2D0h]
  _QWORD *v151; // [rsp+58h] [rbp-2C8h]
  __int64 v152; // [rsp+60h] [rbp-2C0h]
  void *v153[2]; // [rsp+70h] [rbp-2B0h] BYREF
  __int64 v154; // [rsp+88h] [rbp-298h] BYREF
  __int64 v155; // [rsp+90h] [rbp-290h] BYREF
  _QWORD *v156; // [rsp+98h] [rbp-288h]
  _QWORD v157[3]; // [rsp+A0h] [rbp-280h] BYREF
  __int64 v158; // [rsp+B8h] [rbp-268h]
  __int64 v159; // [rsp+C0h] [rbp-260h] BYREF
  size_t v160; // [rsp+D0h] [rbp-250h]
  __int64 v161; // [rsp+D8h] [rbp-248h]
  char *s; // [rsp+E0h] [rbp-240h]
  __int128 v163; // [rsp+E8h] [rbp-238h]
  void *v164; // [rsp+100h] [rbp-220h]
  __int128 v165; // [rsp+108h] [rbp-218h] BYREF
  __int64 v166; // [rsp+120h] [rbp-200h] BYREF
  __int128 v167; // [rsp+128h] [rbp-1F8h]
  __int128 v168; // [rsp+138h] [rbp-1E8h]
  __int64 v169; // [rsp+148h] [rbp-1D8h]
  int v170; // [rsp+150h] [rbp-1D0h]
  void *src; // [rsp+160h] [rbp-1C0h] BYREF
  unsigned __int64 v172; // [rsp+168h] [rbp-1B8h]
  _QWORD v173[2]; // [rsp+170h] [rbp-1B0h] BYREF
  char v174; // [rsp+180h] [rbp-1A0h] BYREF
  __int128 v175; // [rsp+188h] [rbp-198h] BYREF
  char v176; // [rsp+198h] [rbp-188h]
  __m128i v177; // [rsp+1A0h] [rbp-180h] BYREF
  char v178; // [rsp+1B0h] [rbp-170h] BYREF
  __int128 v179; // [rsp+1B8h] [rbp-168h]
  char v180; // [rsp+1C8h] [rbp-158h]
  _BOOL8 v181; // [rsp+1D0h] [rbp-150h]
  __int64 v182; // [rsp+1D8h] [rbp-148h]
  char v183; // [rsp+1E0h] [rbp-140h] BYREF
  __int128 v184; // [rsp+1E8h] [rbp-138h]
  char v185; // [rsp+1F8h] [rbp-128h]
  __int64 tinfo_size; // [rsp+200h] [rbp-120h]
  __int64 v187; // [rsp+208h] [rbp-118h]
  char v188; // [rsp+210h] [rbp-110h] BYREF
  __int128 v189; // [rsp+218h] [rbp-108h]
  char v190; // [rsp+228h] [rbp-F8h]
  __int64 v191; // [rsp+230h] [rbp-F0h]
  __int64 v192; // [rsp+238h] [rbp-E8h]
  char v193; // [rsp+240h] [rbp-E0h] BYREF
  __m128i v194; // [rsp+248h] [rbp-D8h]
  __int64 v195; // [rsp+268h] [rbp-B8h]
  _QWORD v196[3]; // [rsp+270h] [rbp-B0h] BYREF
  _QWORD v197[3]; // [rsp+288h] [rbp-98h] BYREF
  _QWORD v198[3]; // [rsp+2A0h] [rbp-80h] BYREF
  _QWORD v199[3]; // [rsp+2B8h] [rbp-68h] BYREF
  _QWORD v200[3]; // [rsp+2D0h] [rbp-50h] BYREF
  unsigned __int64 v201; // [rsp+2E8h] [rbp-38h] BYREF

  v201 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_121;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    goto LABEL_121;
  v4 = v2 + 8;
  v5 = v2 + 8;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 40);
      if ( !v8 )
        break;
      v6 = 4;
      if ( v8 <= 4 )
        v6 = *(_QWORD *)(v3 + 40);
      v7 = memcmp(*(const void **)(v3 + 32), "name", v6);
      if ( v7 || (v7 = v8 - 4, (__int64)(v8 - 4) <= 0x7FFFFFFF) )
      {
        if ( v7 < 0 )
          break;
      }
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        goto LABEL_12;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v3 );
LABEL_12:
  if ( v4 == v5 )
    goto LABEL_121;
  v9 = *(_QWORD *)(v5 + 40);
  if ( v9 )
  {
    v10 = 4;
    if ( v9 <= 4 )
      v10 = *(_QWORD *)(v5 + 40);
    v11 = memcmp(*(const void **)(v5 + 32), "name", v10);
    if ( !v11 )
    {
      v11 = v9 - 4;
      if ( (__int64)(v9 - 4) > 0x7FFFFFFF )
        goto LABEL_121;
    }
    if ( v11 > 0 )
      goto LABEL_121;
  }
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
LABEL_121:
    JUMPOUT(0x938B4);
  LOBYTE(v173[0]) = 0;
  v172 = 0;
  src = v173;
  LOBYTE(v136) = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  if ( (_BYTE)v136 != 3 )
    JUMPOUT(0x9371D);
  std::string::_M_assign();
  idati = get_idati();
  if ( !idati )
    JUMPOUT(0x93A12);
  v154 = 0;
  if ( !src || (v166 = idati, *(_QWORD *)&v167 = src, WORD4(v167) = 256, !(unsigned __int8)create_tinfo()) )
    JUMPOUT(0x935AE);
  if ( (get_tinfo_property() & 0x2F) != 0xD )
    JUMPOUT(0x938F9);
  v166 = 0;
  v169 = 0;
  v170 = 1;
  v167 = 0;
  v168 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    JUMPOUT(0x93B35);
  LOBYTE(v155) = 0;
  v156 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v155,
    nullptr,
    0,
    2);
  HIBYTE(v152) = v155;
  v151 = v156;
  if ( (_QWORD)v167 )
  {
    v13 = 0;
    do
    {
      LOBYTE(v157[0]) = 0;
      v51 = (_QWORD *)(v166 + 144 * v13);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v157,
        nullptr,
        0,
        1);
      if ( v51[3] )
        v14 = (const char *)v51[2];
      else
        v14 = _qstring<char>::c_str(void)const::nullstr;
      v164 = nullptr;
      v153[0] = &v165;
      *(_QWORD *)&v165 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v15 = (__int64 *)operator new(0x20u);
      v16 = v15;
      *v15 = (__int64)(v15 + 2);
      if ( !v14 )
        JUMPOUT(0x934FD);
      desta = v15 + 2;
      v17 = (char *)strlen(v14);
      v18 = (__int64)desta;
      s = v17;
      v19 = (size_t)v17;
      if ( (unsigned __int64)v17 > 0xF )
      {
        deste = v17;
        v78 = std::string::_M_create();
        *v16 = v78;
        v18 = v78;
        v19 = (size_t)deste;
        v16[2] = (__int64)s;
      }
      else
      {
        if ( v17 == (_BYTE *)&dword_0 + 1 )
        {
          *((_BYTE *)v16 + 16) = *v14;
          goto LABEL_33;
        }
        if ( !v17 )
          goto LABEL_33;
      }
      memcpy((void *)v18, v14, v19);
      v17 = s;
      v18 = *v16;
LABEL_33:
      v16[1] = (__int64)v17;
      v17[v18] = 0;
      v20 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v21 = *(_BYTE *)v20;
      v22 = *(_QWORD *)(v20 + 8);
      *(_BYTE *)v20 = 3;
      *(_QWORD *)(v20 + 8) = v16;
      LOBYTE(v164) = v21;
      *(_QWORD *)&v165 = v22;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v23 = *v51 >> 3;
      v24 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v25 = *(_BYTE *)v24;
      v26 = *(_QWORD *)(v24 + 8);
      *(_BYTE *)v24 = 6;
      LOBYTE(v164) = v25;
      *(_QWORD *)(v24 + 8) = v23;
      *(_QWORD *)&v165 = v26;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v27 = v51[1] >> 3;
      v28 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v29 = *(_BYTE *)v28;
      v30 = *(_QWORD *)(v28 + 8);
      *(_BYTE *)v28 = 6;
      LOBYTE(v164) = v29;
      *(_QWORD *)(v28 + 8) = v27;
      *(_QWORD *)&v165 = v30;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v163 = 0;
      s = nullptr;
      print_tinfo();
      v31 = s;
      if ( !(_QWORD)v163 )
        v31 = _qstring<char>::c_str(void)const::nullstr;
      v164 = nullptr;
      *(_QWORD *)&v165 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v32 = (__int64 *)operator new(0x20u);
      v33 = v32;
      *v32 = (__int64)(v32 + 2);
      if ( !v31 )
        JUMPOUT(0x937B3);
      destb = v32 + 2;
      v34 = strlen(v31);
      v35 = destb;
      v160 = v34;
      v36 = v34;
      if ( v34 > 0xF )
      {
        destd = (void *)v34;
        v77 = std::string::_M_create();
        *v33 = v77;
        v35 = (void *)v77;
        v36 = (size_t)destd;
        v33[2] = v160;
      }
      else
      {
        if ( v34 == 1 )
        {
          *((_BYTE *)v33 + 16) = *v31;
          goto LABEL_39;
        }
        if ( !v34 )
          goto LABEL_39;
      }
      memcpy(v35, v31, v36);
      v34 = v160;
      v35 = (void *)*v33;
LABEL_39:
      v33[1] = v34;
      *((_BYTE *)v35 + v34) = 0;
      v37 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v38 = *(_BYTE *)v37;
      v39 = *(_QWORD *)(v37 + 8);
      *(_BYTE *)v37 = 3;
      *(_QWORD *)(v37 + 8) = v33;
      LOBYTE(v164) = v38;
      v40 = v157[0];
      *(_QWORD *)&v165 = v39;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v51[6] <= 1u )
        goto LABEL_45;
      v41 = (const char *)v51[5];
      v164 = nullptr;
      *(_QWORD *)&v165 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v42 = (__int64 *)operator new(0x20u);
      v43 = v42;
      *v42 = (__int64)(v42 + 2);
      if ( !v41 )
        JUMPOUT(0x9384F);
      destc = v42 + 2;
      v44 = strlen(v41);
      v45 = destc;
      v160 = v44;
      v46 = v44;
      if ( v44 > 0xF )
      {
        destf = (void *)v44;
        v79 = std::string::_M_create();
        *v43 = v79;
        v45 = (void *)v79;
        v46 = (size_t)destf;
        v43[2] = v160;
LABEL_74:
        memcpy(v45, v41, v46);
        v44 = v160;
        v45 = (void *)*v43;
        goto LABEL_44;
      }
      if ( v44 == 1 )
      {
        *((_BYTE *)v43 + 16) = *v41;
      }
      else if ( v44 )
      {
        goto LABEL_74;
      }
LABEL_44:
      v43[1] = v44;
      *((_BYTE *)v45 + v44) = 0;
      v47 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v48 = *(_BYTE *)v47;
      v49 = *(_QWORD *)(v47 + 8);
      *(_BYTE *)v47 = 3;
      *(_QWORD *)(v47 + 8) = v43;
      LOBYTE(v164) = v48;
      v40 = v157[0];
      *(_QWORD *)&v165 = v49;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_45:
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        v157[2] = 0;
        v158 = 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          LOBYTE(v159) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            &v159,
            nullptr,
            0,
            1);
          *(_QWORD *)&v165 = 1;
          v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v53 = *(_BYTE *)v52;
          v54 = *(_QWORD *)(v52 + 8);
          *(_BYTE *)v52 = 4;
          LOBYTE(v164) = v53;
          *(_QWORD *)(v52 + 8) = v165;
          *(_QWORD *)&v165 = v54;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v55 = HIDWORD(v158);
          v56 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v57 = *(_BYTE *)v56;
          v58 = *(_QWORD *)(v56 + 8);
          *(_BYTE *)v56 = 6;
          LOBYTE(v164) = v57;
          *(_QWORD *)(v56 + 8) = v55;
          *(_QWORD *)&v165 = v58;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v165 = 0;
          v164 = nullptr;
          print_tinfo();
          if ( (_QWORD)v165 )
            v153[0] = v164;
          else
            v153[0] = _qstring<char>::c_str(void)const::nullstr;
          v160 = 0;
          v161 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v59 = (const char *)v153[0];
          v153[0] = (void *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>((__int64 *)v153[0], v59, v60, v61, v62, v63, v125, v131, v136);
          v64 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v65 = v159;
          v66 = v153[0];
          LOBYTE(v59) = *(_BYTE *)v64;
          *(_BYTE *)v64 = 3;
          dest = v65;
          v67 = *(_QWORD *)(v64 + 8);
          *(_QWORD *)(v64 + 8) = v66;
          LOBYTE(v160) = (_BYTE)v59;
          v161 = v67;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v153[0] = (void *)get_tinfo_size();
          if ( v153[0] != (void *)-1LL )
          {
            v68 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v69 = *(_BYTE *)v68;
            v70 = v159;
            *(_BYTE *)v68 = 6;
            dest = v70;
            v71 = *(_QWORD *)(v68 + 8);
            LOBYTE(v160) = v69;
            *(void **)(v68 + 8) = v153[0];
            v161 = v71;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          LOBYTE(v160) = 0;
          LOBYTE(v159) = dest;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          LOBYTE(v157[0]) = v40;
          v72 = v160;
          v73 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v74 = v161;
          v75 = *(_BYTE *)v73;
          *(_BYTE *)v73 = v72;
          v76 = *(_QWORD *)(v73 + 8);
          v40 = v157[0];
          *(_QWORD *)(v73 + 8) = v74;
          v161 = v76;
          LOBYTE(v160) = v75;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v164 )
          {
            *(_QWORD *)&v165 = 0;
            qfree();
          }
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        clear_tinfo_t();
        if ( !HIBYTE(v152) )
        {
LABEL_47:
          v50 = operator new(0x18u);
          *(_QWORD *)(v50 + 16) = 0;
          v151 = (_QWORD *)v50;
          *(_OWORD *)v50 = 0;
          goto LABEL_48;
        }
      }
      else if ( !HIBYTE(v152) )
      {
        goto LABEL_47;
      }
      if ( HIBYTE(v152) != 2 )
        ida_mcp::tools::types::`anonymous namespace'::handle_get_struct_members();
      if ( v151[1] != v151[2] )
      {
        LOBYTE(v157[0]) = v40;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v151[1] += 16LL;
        goto LABEL_49;
      }
LABEL_48:
      LOBYTE(v157[0]) = v40;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_49:
      if ( s )
      {
        *(_QWORD *)&v163 = 0;
        qfree();
      }
      LOBYTE(v157[0]) = v40;
      ++v13;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      HIBYTE(v152) = 2;
    }
    while ( v13 < (unsigned __int64)v167 );
  }
  v174 = 0;
  *(_QWORD *)&v175 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v174 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v80, "name", v81, v82, v83, v84, v125, v131, v136);
  v176 = 0;
  v177.m128i_i64[0] = 0;
  v175 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = 3;
  v85 = src;
  v86 = v172;
  v87 = (_QWORD *)operator new(0x20u);
  v88 = v87 + 2;
  v164 = (void *)v86;
  v89 = v87;
  *v87 = v87 + 2;
  if ( v86 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v87;
    v91 = v86 + 1;
    if ( v86 )
    {
LABEL_77:
      *(__m128i *)v153 = si128;
      memcpy(v88, v85, v91);
      v92 = (__int64)v164;
      si128 = _mm_load_si128((const __m128i *)v153);
      goto LABEL_78;
    }
    goto LABEL_97;
  }
  v123 = std::string::_M_create();
  *v89 = v123;
  v88 = (_BYTE *)v123;
  v124 = v164;
  si128 = (__m128i)(unsigned __int64)v89;
  v89[2] = (__int64)v164;
  v91 = (size_t)v124 + 1;
  if ( !v124 )
  {
LABEL_97:
    *v88 = *v85;
    v92 = (__int64)v164;
    goto LABEL_78;
  }
  v92 = -1;
  if ( v91 )
    goto LABEL_77;
LABEL_78:
  v89[1] = v92;
  v177 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v196,
    (const __m128i *)&v174);
  v178 = 0;
  v196[2] = 0;
  *(_QWORD *)&v179 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v178 = 3;
  v93 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v93, "is_union", v94, v95, v96, v97, v126, v132, v137);
  v179 = (unsigned __int64)v93;
  tinfo_property = get_tinfo_property();
  v180 = 4;
  v182 = 0;
  v181 = (tinfo_property & 0x3F) == 29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v197,
    (const __m128i *)&v178);
  v183 = 0;
  v197[2] = 0;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v99, "size", v100, v101, v102, v103, v127, v133, (__int64)&v178);
  v184 = (unsigned __int64)v99;
  tinfo_size = get_tinfo_size();
  v185 = 6;
  v187 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (const __m128i *)&v183);
  v198[2] = 0;
  v188 = 0;
  *(_QWORD *)&v189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v188 = 3;
  v153[0] = (void *)operator new(0x20u);
  v104 = v153[0];
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v153[0],
    "member_count",
    v105,
    v106,
    v107,
    v108,
    v128,
    (int)&v183,
    v138);
  v189 = (unsigned __int64)v104;
  if ( HIBYTE(v152) == 1 )
  {
    v109 = v151[5];
  }
  else if ( HIBYTE(v152) == 2 )
  {
    v109 = (__int64)(v151[1] - *v151) >> 4;
  }
  else
  {
    v109 = HIBYTE(v152) != 0;
  }
  v190 = 6;
  v191 = v109;
  v192 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v199,
    (const __m128i *)&v188);
  v199[2] = 0;
  v193 = 0;
  v194.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v193 = 3;
  v153[0] = (void *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v153[0],
    "members",
    v110,
    v111,
    v112,
    v113,
    v129,
    v134,
    v139);
  v114 = _mm_loadl_epi64((const __m128i *)v153);
  LOBYTE(v155) = HIBYTE(v152);
  v194 = v114;
  v156 = v151;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v195 = 0;
  v153[0] = &v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v200,
    (const __m128i *)&v193);
  v200[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v196,
    5,
    v115,
    v116,
    v117,
    v130,
    v135,
    v140,
    (int)&v166,
    (int)&v154,
    (int)v173,
    (__int64)&v155,
    (int)&src,
    (int)a1,
    (int)&v174,
    (int)&v177,
    (char)v151,
    v152,
    (int)&v175,
    (__int64)v153[0]);
  v153[0] = &v201;
  do
  {
    v153[0] = (char *)v153[0] - 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v153[0] != v196 );
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
  v118 = v166;
  if ( v166 )
  {
    if ( (_QWORD)v167 )
    {
      v119 = 0;
      v120 = v167;
      do
      {
        while ( 1 )
        {
          v121 = (_QWORD *)(v118 + 144 * v119);
          clear_tinfo_t();
          if ( v121[5] )
          {
            v121[6] = 0;
            qfree();
          }
          if ( !v121[2] )
            break;
          v121[3] = 0;
          ++v119;
          qfree();
          v118 = v166;
          if ( v119 == v120 )
            goto LABEL_90;
        }
        ++v119;
        v118 = v166;
      }
      while ( v120 != v119 );
    }
LABEL_90:
    *(_QWORD *)&v167 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src != v141 )
    operator delete(src, v173[0] + 1LL);
  return v143;
}

