__int64 __fastcall ida_mcp::tools::import_entry::`anonymous namespace'::handle_get_import_entry(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  __m128i si128; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r15
  size_t v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbx
  size_t v21; // rdx
  int v22; // eax
  __int64 v23; // r15
  size_t v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rbx
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int *v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rax
  char *v41; // rdx
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rdx
  char *v45; // rax
  int *v46; // rbx
  __int64 v47; // r13
  __int64 v48; // r12
  unsigned __int64 v49; // r15
  __int8 v50; // si
  __int64 i; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  bool v57; // cc
  char *v58; // r13
  _QWORD *v59; // rax
  _BYTE *v60; // r15
  __int64 *v61; // rbx
  size_t v62; // rax
  size_t v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // r13
  __int64 *v68; // rax
  __int64 *v69; // rbx
  size_t v70; // rax
  _BYTE *v71; // r8
  size_t v72; // rcx
  int *v73; // r12
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int v76; // edx
  int *v77; // r8
  int *v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rdi
  unsigned __int64 v81; // rdi
  char *v82; // rcx
  char *v83; // r8
  unsigned int v84; // edx
  unsigned int v85; // edx
  unsigned int v86; // ecx
  __int64 v87; // r9
  __int64 v88; // rsi
  __int64 v89; // rdi
  int v90[2]; // [rsp+10h] [rbp-398h]
  _BYTE *dest; // [rsp+48h] [rbp-360h]
  void *desta; // [rsp+48h] [rbp-360h]
  __m128i v93; // [rsp+70h] [rbp-338h] BYREF
  char *v94; // [rsp+80h] [rbp-328h]
  __int128 v95; // [rsp+88h] [rbp-320h]
  char *s; // [rsp+A0h] [rbp-308h]
  __int128 v97; // [rsp+A8h] [rbp-300h]
  __int64 *v98; // [rsp+B8h] [rbp-2F0h]
  __int128 v99; // [rsp+C0h] [rbp-2E8h]
  int v100; // [rsp+D0h] [rbp-2D8h]
  char v101; // [rsp+E0h] [rbp-2C8h] BYREF
  __int64 v102[2]; // [rsp+E8h] [rbp-2C0h]
  __int64 v103; // [rsp+F8h] [rbp-2B0h]
  __int64 v104; // [rsp+100h] [rbp-2A8h]
  __int64 v105; // [rsp+108h] [rbp-2A0h]
  void *v106; // [rsp+110h] [rbp-298h] BYREF
  __int64 v107[2]; // [rsp+118h] [rbp-290h] BYREF
  char v108; // [rsp+128h] [rbp-280h]
  __int64 v109; // [rsp+130h] [rbp-278h]
  __int64 v110; // [rsp+138h] [rbp-270h]
  void *v111; // [rsp+140h] [rbp-268h] BYREF
  int v112[4]; // [rsp+148h] [rbp-260h] BYREF
  char v113; // [rsp+158h] [rbp-250h]
  int v114[4]; // [rsp+160h] [rbp-248h]
  char *v115; // [rsp+170h] [rbp-238h] BYREF
  __int128 v116; // [rsp+178h] [rbp-230h]
  __int64 v117; // [rsp+188h] [rbp-220h]
  __int64 v118; // [rsp+190h] [rbp-218h]
  __int64 v119; // [rsp+198h] [rbp-210h]
  int v120; // [rsp+1A0h] [rbp-208h] BYREF
  int v121[4]; // [rsp+1A8h] [rbp-200h]
  char v122; // [rsp+1B8h] [rbp-1F0h]
  __int128 v123; // [rsp+1C0h] [rbp-1E8h]
  __int64 v124; // [rsp+1D0h] [rbp-1D8h] BYREF
  int v125[4]; // [rsp+1D8h] [rbp-1D0h]
  char v126; // [rsp+1E8h] [rbp-1C0h] BYREF
  int v127[4]; // [rsp+1F0h] [rbp-1B8h]
  __int64 v128; // [rsp+200h] [rbp-1A8h] BYREF
  __int128 s2; // [rsp+208h] [rbp-1A0h] BYREF
  __int64 v130; // [rsp+218h] [rbp-190h] BYREF
  __int128 v131; // [rsp+220h] [rbp-188h]
  int v132[4]; // [rsp+230h] [rbp-178h] BYREF
  __int64 v133; // [rsp+240h] [rbp-168h]
  int v134[4]; // [rsp+248h] [rbp-160h] BYREF
  __int64 v135; // [rsp+258h] [rbp-150h]
  _QWORD v136[3]; // [rsp+260h] [rbp-148h] BYREF
  int v137[4]; // [rsp+278h] [rbp-130h] BYREF
  __int64 v138; // [rsp+288h] [rbp-120h]
  __m128i v139; // [rsp+290h] [rbp-118h]
  __m128i v140; // [rsp+2A0h] [rbp-108h]
  __m128i v141; // [rsp+2B0h] [rbp-F8h]
  __m128i v142; // [rsp+2C0h] [rbp-E8h]
  __m128i v143; // [rsp+2D0h] [rbp-D8h]
  __m128i v144; // [rsp+2E0h] [rbp-C8h]
  __m128i v145; // [rsp+2F0h] [rbp-B8h]
  __m128i v146; // [rsp+300h] [rbp-A8h]
  __m128i v147; // [rsp+310h] [rbp-98h]
  __m128i v148; // [rsp+320h] [rbp-88h]
  __m128i v149; // [rsp+330h] [rbp-78h]
  __m128i v150[2]; // [rsp+340h] [rbp-68h]
  unsigned __int64 v151; // [rsp+368h] [rbp-40h]

  v151 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(v12 + 16);
  if ( !v13 )
    goto LABEL_2;
  v14 = v12 + 8;
  v15 = v13;
  v16 = v14;
  do
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v15 + 40);
      if ( !v19 )
        break;
      v17 = 5;
      if ( v19 <= 5 )
        v17 = *(_QWORD *)(v15 + 40);
      v18 = memcmp(*(const void **)(v15 + 32), "index", v17);
      if ( v18 || (v18 = v19 - 5, (__int64)(v19 - 5) <= 0x7FFFFFFF) )
      {
        if ( v18 < 0 )
          break;
      }
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v15 )
        goto LABEL_14;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v15 );
LABEL_14:
  if ( v14 == v16 )
    goto LABEL_2;
  v20 = *(_QWORD *)(v16 + 40);
  if ( v20 )
  {
    v21 = 5;
    if ( v20 <= 5 )
      v21 = *(_QWORD *)(v16 + 40);
    if ( (v22 = memcmp(*(const void **)(v16 + 32), "index", v21)) == 0
      && (v22 = v20 - 5, (__int64)(v20 - 5) > 0x7FFFFFFF)
      || v22 > 0 )
    {
LABEL_2:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v128) = 3;
      v3 = operator new(0x20u);
      *(_DWORD *)(v3 + 16) = 1869771365;
      *(_QWORD *)v3 = v3 + 16;
      *(_BYTE *)(v3 + 20) = 114;
      *(_QWORD *)(v3 + 8) = 5;
      *(_BYTE *)(v3 + 21) = 0;
      *(_QWORD *)&v131 = 0;
      s2 = (unsigned __int64)v3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v130) = 3;
      v4 = (__int64 *)operator new(0x20u);
      s = (_BYTE *)(&qword_20 + 1);
      *v4 = (__int64)(v4 + 2);
      v5 = std::string::_M_create();
      v6 = s;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E25E0);
      *v4 = v5;
      v4[2] = (__int64)v6;
      *(__m128i *)v5 = si128;
      v8 = _mm_load_si128((const __m128i *)&xmmword_3E25F0);
      *(_BYTE *)(v5 + 32) = 120;
      *(__m128i *)(v5 + 16) = v8;
      v9 = *v4;
      v10 = s;
      v4[1] = (__int64)s;
      v10[v9] = 0;
      v131 = (unsigned __int64)v4;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v124,
        (const __m128i *)&v128);
      *(_QWORD *)&v125[2] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    }
  }
  DWORD2(s2) = 1701080681;
  v23 = v14;
  WORD6(s2) = 120;
  do
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(v13 + 40);
      if ( !v26 )
        break;
      v24 = 5;
      if ( v26 <= 5 )
        v24 = *(_QWORD *)(v13 + 40);
      v25 = memcmp(*(const void **)(v13 + 32), (char *)&s2 + 8, v24);
      if ( v25 || (v25 = v26 - 5, (__int64)(v26 - 5) <= 0x7FFFFFFF) )
      {
        if ( v25 < 0 )
          break;
      }
      v23 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_30;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v13 );
LABEL_30:
  if ( v14 != v23 )
  {
    v27 = *(_QWORD *)(v23 + 40);
    if ( v27 )
    {
      v28 = 5;
      if ( v27 <= 5 )
        v28 = *(_QWORD *)(v23 + 40);
      memcmp((char *)&s2 + 8, *(const void **)(v23 + 32), v28);
    }
  }
  nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
  s = nullptr;
  v97 = 0;
  v98 = nullptr;
  v99 = 0;
  if ( (unsigned __int8)get_import_entry() )
  {
    v94 = nullptr;
    v95 = 0;
    get_import_module_name();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    if ( (_QWORD)v99 )
    {
      v47 = *v98;
      v48 = operator new(0x18u);
      v49 = 0;
      *(_QWORD *)(v48 + 16) = 0;
      *(_OWORD *)v48 = 0;
LABEL_49:
      v93.m128i_i8[0] = 6;
      v93.m128i_i64[1] = v47;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v50 = v93.m128i_i8[0];
      for ( i = v93.m128i_i64[1]; ; i = 0 )
      {
        v93.m128i_i8[0] = v50;
        ++v49;
        v93.m128i_i64[1] = i;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v49 >= (unsigned __int64)v99 )
          break;
        v47 = v98[v49];
        v52 = *(_QWORD *)(v48 + 8);
        if ( *(_QWORD *)(v48 + 16) == v52 )
          goto LABEL_49;
        v93.m128i_i8[0] = 6;
        v53 = v52 + 16;
        v50 = 0;
        v93.m128i_i64[1] = v47;
        *(__m128i *)(v53 - 16) = _mm_load_si128(&v93);
        *(_QWORD *)(v48 + 8) = v53;
      }
    }
    v101 = 0;
    v102[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v101 = 3;
    v54 = operator new(0x20u);
    strcpy((char *)(v54 + 16), "success");
    *(_QWORD *)v54 = v54 + 16;
    *(_QWORD *)(v54 + 8) = 7;
    v103 = 4;
    v104 = 1;
    v105 = 0;
    *(_OWORD *)v102 = (unsigned __int64)v54;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v128,
      (const __m128i *)&v101);
    *((_QWORD *)&s2 + 1) = 0;
    LOBYTE(v106) = 0;
    v107[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v106) = 3;
    v55 = operator new(0x20u);
    *(_DWORD *)(v55 + 16) = 1701080681;
    *(_QWORD *)v55 = v55 + 16;
    *(_BYTE *)(v55 + 20) = 120;
    *(_QWORD *)(v55 + 8) = 5;
    *(_BYTE *)(v55 + 21) = 0;
    v108 = 6;
    v109 = 0;
    v110 = 0;
    *(_OWORD *)v107 = (unsigned __int64)v55;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v130,
      (const __m128i *)&v106);
    *((_QWORD *)&v131 + 1) = 0;
    LOBYTE(v111) = 0;
    *(_QWORD *)v112 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v111) = 3;
    v56 = operator new(0x20u);
    *(_DWORD *)(v56 + 16) = 1701667182;
    v57 = (unsigned __int64)v97 <= 1;
    *(_QWORD *)v56 = v56 + 16;
    v58 = "";
    if ( !v57 )
      v58 = s;
    *(_QWORD *)(v56 + 8) = 4;
    *(_BYTE *)(v56 + 20) = 0;
    v113 = 0;
    *(_QWORD *)v114 = 0;
    *(_OWORD *)v112 = (unsigned __int64)v56;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v113 = 3;
    v59 = (_QWORD *)operator new(0x20u);
    v60 = v59 + 2;
    v61 = v59;
    *v59 = v59 + 2;
    if ( !v58 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v62 = strlen(v58);
    v93.m128i_i64[0] = v62;
    v63 = v62;
    if ( v62 > 0xF )
    {
      *(_QWORD *)v90 = v62;
      v75 = std::string::_M_create();
      *v61 = v75;
      v60 = (_BYTE *)v75;
      v63 = *(_QWORD *)v90;
      v61[2] = v93.m128i_i64[0];
    }
    else
    {
      if ( v62 == 1 )
      {
        *((_BYTE *)v61 + 16) = *v58;
        goto LABEL_59;
      }
      if ( !v62 )
      {
LABEL_59:
        v61[1] = v62;
        v60[v62] = 0;
        *(_OWORD *)v114 = (unsigned __int64)v61;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v132,
          (const __m128i *)&v111);
        v133 = 0;
        LOBYTE(v115) = 0;
        *(_QWORD *)&v116 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v115) = 3;
        v64 = operator new(0x20u);
        *(_QWORD *)v64 = v64 + 16;
        strcpy((char *)(v64 + 16), "ordinals");
        *(_QWORD *)(v64 + 8) = 8;
        v116 = (unsigned __int64)v64;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v119 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v134,
          (const __m128i *)&v115);
        v135 = 0;
        LOBYTE(v120) = 0;
        *(_QWORD *)v121 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v120) = 3;
        v65 = operator new(0x20u);
        *(_QWORD *)v65 = v65 + 16;
        strcpy((char *)(v65 + 16), "mod_index");
        *(_QWORD *)(v65 + 8) = 9;
        v122 = 5;
        v123 = (unsigned __int64)v100;
        *(_OWORD *)v121 = (unsigned __int64)v65;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v136,
          (const __m128i *)&v120);
        v136[2] = 0;
        LOBYTE(v124) = 0;
        *(_QWORD *)v125 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v124) = 3;
        v66 = operator new(0x20u);
        v57 = (unsigned __int64)v95 <= 1;
        *(_QWORD *)v66 = v66 + 16;
        v67 = "";
        if ( !v57 )
          v67 = v94;
        strcpy((char *)(v66 + 16), "module_name");
        *(_QWORD *)(v66 + 8) = 11;
        v126 = 0;
        *(_QWORD *)v127 = 0;
        *(_OWORD *)v125 = (unsigned __int64)v66;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v126 = 3;
        v68 = (__int64 *)operator new(0x20u);
        v69 = v68;
        *v68 = (__int64)(v68 + 2);
        if ( !v67 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        dest = v68 + 2;
        v70 = strlen(v67);
        v71 = dest;
        v93.m128i_i64[0] = v70;
        v72 = v70;
        if ( v70 > 0xF )
        {
          desta = (void *)v70;
          v74 = std::string::_M_create();
          *v69 = v74;
          v71 = (_BYTE *)v74;
          v72 = (size_t)desta;
          v69[2] = v93.m128i_i64[0];
        }
        else
        {
          if ( v70 == 1 )
          {
            *((_BYTE *)v69 + 16) = *v67;
LABEL_65:
            v69[1] = v70;
            v71[v70] = 0;
            *(_OWORD *)v127 = (unsigned __int64)v69;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v137,
              (const __m128i *)&v124);
            v138 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v73 = v137;
            do
            {
              v73 -= 6;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v73 != (int *)&v126 );
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
            if ( v94 )
            {
              *(_QWORD *)&v95 = 0;
              qfree();
            }
            goto LABEL_69;
          }
          if ( !v70 )
            goto LABEL_65;
        }
        memcpy(v71, v67, v72);
        v70 = v93.m128i_i64[0];
        v71 = (_BYTE *)*v69;
        goto LABEL_65;
      }
    }
    memcpy(v60, v58, v63);
    v62 = v93.m128i_i64[0];
    v60 = (_BYTE *)*v61;
    goto LABEL_59;
  }
  *(_QWORD *)&v116 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v115) = 3;
  v29 = operator new(0x20u);
  strcpy((char *)(v29 + 16), "success");
  *(_QWORD *)v29 = v29 + 16;
  *(_QWORD *)(v29 + 8) = 7;
  v117 = 4;
  v118 = 0;
  v119 = 0;
  v116 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v128,
    (const __m128i *)&v115);
  *((_QWORD *)&s2 + 1) = 0;
  LOBYTE(v120) = 0;
  *(_QWORD *)v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v120) = 3;
  v30 = operator new(0x20u);
  *(_BYTE *)(v30 + 20) = 114;
  *(_QWORD *)v30 = v30 + 16;
  *(_DWORD *)(v30 + 16) = 1869771365;
  *(_QWORD *)(v30 + 8) = 5;
  *(_BYTE *)(v30 + 21) = 0;
  *(_OWORD *)v121 = (unsigned __int64)v30;
  v106 = &v107[1];
  LOBYTE(v107[1]) = 0;
  std::string::reserve();
  v139 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v140 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v141 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v142 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v143 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v144 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v145 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v146 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v147 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v148 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v149 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v150[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v150 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  LOWORD(v107[1]) = 48;
  v107[0] = 1;
  v31 = std::string::_M_replace();
  v32 = v31 + 16;
  v111 = &v112[2];
  if ( *(_QWORD *)v31 == v31 + 16 )
  {
    v77 = &v112[2];
    v78 = (int *)(v31 + 16);
    v79 = *(_QWORD *)(v31 + 8) + 1LL;
    if ( (unsigned int)v79 >= 8 )
    {
      LODWORD(v88) = 0;
      do
      {
        v89 = (unsigned int)v88;
        v88 = (unsigned int)(v88 + 8);
        *(_QWORD *)((char *)&v112[2] + v89) = *(_QWORD *)(v32 + v89);
      }
      while ( (unsigned int)v88 < ((unsigned int)v79 & 0xFFFFFFF8) );
      v77 = (int *)((char *)&v112[2] + v88);
      v78 = (int *)(v32 + v88);
    }
    v80 = 0;
    if ( (v79 & 4) != 0 )
    {
      *v77 = *v78;
      v80 = 4;
    }
    if ( (v79 & 2) != 0 )
    {
      *(_WORD *)((char *)v77 + v80) = *(_WORD *)((char *)v78 + v80);
      v80 += 2;
    }
    if ( (v79 & 1) != 0 )
      *((_BYTE *)v77 + v80) = *((_BYTE *)v78 + v80);
  }
  else
  {
    v111 = *(void **)v31;
    *(_QWORD *)&v112[2] = *(_QWORD *)(v31 + 16);
  }
  v33 = *(_QWORD *)(v31 + 8);
  *(_QWORD *)v31 = v32;
  *(_QWORD *)(v31 + 8) = 0;
  *(_QWORD *)v112 = v33;
  *(_BYTE *)(v31 + 16) = 0;
  v122 = 0;
  *(_QWORD *)&v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v34 = (_QWORD *)operator new(0x20u);
  v35 = (int *)v111;
  v36 = v34 + 2;
  v37 = *(_QWORD *)v112;
  *v34 = v34 + 2;
  if ( v35 == &v112[2] )
  {
    v76 = v37 + 1;
    if ( (unsigned int)(v37 + 1) >= 8 )
    {
      v34[2] = *(_QWORD *)&v112[2];
      *(_QWORD *)((char *)v36 + v76 - 8) = *(_QWORD *)((char *)v112 + v76);
      v81 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v82 = (char *)v36 - v81;
      v83 = (char *)((char *)&v112[2] - v82);
      v84 = ((_DWORD)v82 + v76) & 0xFFFFFFF8;
      if ( v84 >= 8 )
      {
        v85 = v84 & 0xFFFFFFF8;
        v86 = 0;
        do
        {
          v87 = v86;
          v86 += 8;
          *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
        }
        while ( v86 < v85 );
      }
    }
    else if ( (v76 & 4) != 0 )
    {
      *((_DWORD *)v34 + 4) = v112[2];
      *(_DWORD *)((char *)v36 + v76 - 4) = *(int *)((char *)&v112[1] + v76);
    }
    else if ( (_DWORD)v37 != -1 )
    {
      *((_BYTE *)v34 + 16) = v112[2];
      if ( (v76 & 2) != 0 )
        *(_WORD *)((char *)v36 + v76 - 2) = *(_WORD *)((char *)&v112[1] + v76 + 2);
    }
  }
  else
  {
    *v34 = v35;
    v34[2] = *(_QWORD *)&v112[2];
  }
  v34[1] = v37;
  v111 = &v112[2];
  *(_QWORD *)v112 = 0;
  LOBYTE(v112[2]) = 0;
  v123 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v130,
    (const __m128i *)&v120);
  *((_QWORD *)&v131 + 1) = 0;
  LOBYTE(v124) = 0;
  *(_QWORD *)v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v124) = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "note");
  *(_QWORD *)(v38 + 8) = 4;
  v126 = 0;
  *(_QWORD *)v127 = 0;
  *(_OWORD *)v125 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v126 = 3;
  v39 = (__int64 *)operator new(0x20u);
  v94 = (_BYTE *)(&dword_30 + 2);
  *v39 = (__int64)(v39 + 2);
  v40 = std::string::_M_create();
  v41 = v94;
  *v39 = v40;
  v42 = _mm_load_si128((const __m128i *)&xmmword_3E2600);
  v39[2] = (__int64)v41;
  *(__m128i *)v40 = v42;
  v43 = _mm_load_si128((const __m128i *)&xmmword_3E2610);
  *(_WORD *)(v40 + 48) = 11891;
  *(__m128i *)(v40 + 16) = v43;
  *(__m128i *)(v40 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E2620);
  v44 = *v39;
  v45 = v94;
  v39[1] = (__int64)v94;
  v45[v44] = 0;
  *(_OWORD *)v127 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v124);
  v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v46 = v134;
  do
  {
    v46 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v46 != (int *)&v128 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v111 != &v112[2] )
    operator delete(v111, *(_QWORD *)&v112[2] + 1LL);
  if ( v106 != &v107[1] )
    operator delete(v106, v107[1] + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_69:
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v97 = 0;
    qfree();
  }
  return a1;
}

