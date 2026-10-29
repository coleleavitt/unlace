_QWORD *__fastcall ida_mcp::tools::xref_manipulation::register_tools(ida_mcp::mcp::McpServer &)::{lambda(std::initializer_list<std::pair<char const*,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>)#1}::operator()(
        _QWORD *a1,
        const char **a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const char **v19; // r12
  char v20; // bl
  const char *v21; // r15
  size_t v22; // rax
  size_t v23; // r14
  size_t *v24; // rdx
  size_t *v25; // rbx
  size_t v26; // r14
  __int64 v27; // r13
  _QWORD *v28; // rbp
  size_t v29; // r15
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // r15
  size_t v33; // r15
  size_t v34; // rdx
  signed __int64 v35; // rax
  __int8 v36; // si
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 *v59; // rbp
  __int64 v61; // rax
  __int64 v62; // rax
  size_t *v63; // r13
  __int64 v64; // r15
  _QWORD *insert_hint_unique_pos; // rax
  _QWORD *v66; // rdx
  _QWORD *v67; // r11
  size_t *v68; // rdi
  size_t *v69; // rdi
  unsigned int v70; // eax
  unsigned __int64 v71; // rdx
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rdi
  size_t v76; // rdx
  int v77; // [rsp+0h] [rbp-218h]
  int v78; // [rsp+0h] [rbp-218h]
  int v79; // [rsp+0h] [rbp-218h]
  int v80; // [rsp+0h] [rbp-218h]
  int v81; // [rsp+0h] [rbp-218h]
  int v82; // [rsp+0h] [rbp-218h]
  int v83; // [rsp+8h] [rbp-210h]
  int v84; // [rsp+8h] [rbp-210h]
  __int64 v85; // [rsp+8h] [rbp-210h]
  _QWORD *v86; // [rsp+8h] [rbp-210h]
  int v87; // [rsp+8h] [rbp-210h]
  int v88; // [rsp+8h] [rbp-210h]
  __int64 v89; // [rsp+8h] [rbp-210h]
  __int64 v90; // [rsp+10h] [rbp-208h]
  __int64 v91; // [rsp+10h] [rbp-208h]
  int v92; // [rsp+10h] [rbp-208h]
  _QWORD *v93; // [rsp+10h] [rbp-208h]
  __int64 v94; // [rsp+10h] [rbp-208h]
  __int64 v95; // [rsp+10h] [rbp-208h]
  int v96; // [rsp+10h] [rbp-208h]
  int v97; // [rsp+18h] [rbp-200h]
  int v98; // [rsp+18h] [rbp-200h]
  __int8 v99; // [rsp+1Fh] [rbp-1F9h]
  int v100; // [rsp+20h] [rbp-1F8h]
  const char **v101; // [rsp+20h] [rbp-1F8h]
  int v102; // [rsp+28h] [rbp-1F0h]
  __m128i *v103; // [rsp+30h] [rbp-1E8h]
  _QWORD *v104; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 *v105; // [rsp+38h] [rbp-1E0h]
  int v106; // [rsp+40h] [rbp-1D8h]
  const __m128i *v107; // [rsp+48h] [rbp-1D0h]
  int v108; // [rsp+50h] [rbp-1C8h]
  char v109; // [rsp+58h] [rbp-1C0h]
  __int64 v110; // [rsp+60h] [rbp-1B8h]
  int v111; // [rsp+68h] [rbp-1B0h]
  __int64 v112; // [rsp+70h] [rbp-1A8h]
  size_t v114; // [rsp+B8h] [rbp-160h]
  __int64 v115; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD *v116; // [rsp+C8h] [rbp-150h]
  __m128i v117; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v118; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v119; // [rsp+E8h] [rbp-130h] BYREF
  char v120; // [rsp+100h] [rbp-118h] BYREF
  __int128 v121; // [rsp+108h] [rbp-110h] BYREF
  _BYTE v122[24]; // [rsp+118h] [rbp-100h] BYREF
  __int64 v123; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v124; // [rsp+138h] [rbp-E0h] BYREF
  char v125; // [rsp+148h] [rbp-D0h]
  __int128 v126; // [rsp+150h] [rbp-C8h] BYREF
  __m128i s2; // [rsp+160h] [rbp-B8h] BYREF
  size_t v128; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v129; // [rsp+178h] [rbp-A0h] BYREF
  __int128 v130; // [rsp+180h] [rbp-98h] BYREF
  char v131; // [rsp+190h] [rbp-88h] BYREF
  __int128 v132; // [rsp+198h] [rbp-80h]
  __int64 v133; // [rsp+1A8h] [rbp-70h] BYREF
  __int64 v134; // [rsp+1B8h] [rbp-60h]
  _QWORD v135[3]; // [rsp+1C0h] [rbp-58h] BYREF
  unsigned __int64 v136; // [rsp+1D8h] [rbp-40h] BYREF

  v136 = __readfsqword(0x28u);
  *(_QWORD *)&v132 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "address");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 7;
  v132 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v123);
  *((_QWORD *)&v124 + 1) = 0;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v5 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v5, "string", v6, v7, v8, v9, v77, v83, v90);
  v126 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s2,
    (const __m128i *)&v123,
    2,
    1);
  v128 = 0;
  *(_QWORD *)&v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "description");
  *(_QWORD *)(v10 + 8) = 11;
  v122[0] = 0;
  *(_QWORD *)&v122[8] = 0;
  v121 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122[0] = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "Hex address", v12, v13, v14, v15, v78, v84, v91);
  *(_OWORD *)&v122[8] = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v129,
    (const __m128i *)&v120,
    2,
    1);
  *((_QWORD *)&v130 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v133,
    &s2,
    2,
    1);
  v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v118,
    (const __m128i *)&v131,
    2,
    1);
  *((_QWORD *)&v119 + 1) = 0;
  LOBYTE(v115) = 0;
  v116 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v115,
    (__int64)&v118,
    1,
    v16,
    v17,
    v18,
    v79,
    v85,
    v92,
    v97,
    v100,
    v102,
    (__int64)&s2,
    (int)&v131,
    (int)&v121,
    (int)&v123,
    (int)&v122[8],
    (char)&v126,
    v110,
    v111,
    v112);
  v19 = a2;
  v20 = v115;
  v93 = v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = &a2[3 * a3];
  if ( a2 == v101 )
    goto LABEL_32;
  do
  {
    v117.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v21 = *v19;
    v99 = v117.m128i_i8[0];
    s2.m128i_i64[0] = (__int64)&v128;
    if ( !v21 )
      JUMPOUT(0x12FE78);
    v22 = strlen(v21);
    v114 = v22;
    v23 = v22;
    if ( v22 > 0xF )
    {
      s2.m128i_i64[0] = std::string::_M_create();
      v68 = (size_t *)s2.m128i_i64[0];
      v128 = v114;
    }
    else
    {
      if ( v22 == 1 )
      {
        LOBYTE(v128) = *v21;
LABEL_6:
        v24 = &v128;
        goto LABEL_7;
      }
      if ( !v22 )
        goto LABEL_6;
      v68 = &v128;
    }
    memcpy(v68, v21, v23);
    v22 = v114;
    v24 = (size_t *)s2.m128i_i64[0];
LABEL_7:
    s2.m128i_i64[1] = v22;
    *((_BYTE *)v24 + v22) = 0;
    if ( !v20 )
    {
      v61 = operator new(0x30u);
      *(_DWORD *)(v61 + 8) = 0;
      v25 = (size_t *)s2.m128i_i64[0];
      *(_QWORD *)(v61 + 24) = v61 + 8;
      v26 = s2.m128i_u64[1];
      v28 = (_QWORD *)(v61 + 8);
      *(_QWORD *)(v61 + 16) = 0;
      *(_QWORD *)(v61 + 32) = v61 + 8;
      *(_QWORD *)(v61 + 40) = 0;
      v93 = (_QWORD *)v61;
      v86 = (_QWORD *)(v61 + 8);
      goto LABEL_36;
    }
    if ( v20 != 1 )
      JUMPOUT(0x12F985);
    v26 = s2.m128i_u64[1];
    v25 = (size_t *)s2.m128i_i64[0];
    v27 = v93[2];
    v28 = v93 + 1;
    v86 = v93 + 1;
    if ( !v27 )
    {
LABEL_36:
      v62 = operator new(0x50u);
      v63 = (size_t *)(v62 + 48);
      v64 = v62;
      *(_QWORD *)(v62 + 32) = v62 + 48;
      if ( v25 == &v128 )
      {
        v70 = v26 + 1;
        if ( (unsigned int)(v26 + 1) < 8 )
        {
          if ( (v70 & 4) != 0 )
          {
            *(_DWORD *)(v64 + 48) = v128;
            *(_DWORD *)((char *)v63 + v70 - 4) = *(__int32 *)((char *)&s2.m128i_i32[3] + v70);
          }
          else if ( (_DWORD)v26 != -1 )
          {
            *(_BYTE *)(v64 + 48) = v128;
            if ( (v70 & 2) != 0 )
              *(_WORD *)((char *)v63 + v70 - 2) = *(__int16 *)((char *)&s2.m128i_i16[7] + v70);
          }
        }
        else
        {
          *(_QWORD *)(v64 + 48) = v128;
          *(size_t *)((char *)v63 + v70 - 8) = *(unsigned __int64 *)((char *)&s2.m128i_u64[1] + v70);
          v71 = (v64 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          v72 = ((_DWORD)v63 - v71 + v70) & 0xFFFFFFF8;
          if ( v72 >= 8 )
          {
            v73 = v72 & 0xFFFFFFF8;
            v74 = 0;
            do
            {
              v75 = v74;
              v74 += 8;
              *(_QWORD *)(v71 + v75) = *(_QWORD *)((char *)&v128 - ((char *)v63 - v71) + v75);
            }
            while ( v74 < v73 );
          }
        }
        v25 = v63;
      }
      else
      {
        *(_QWORD *)(v62 + 32) = v25;
        *(_QWORD *)(v62 + 48) = v128;
      }
      *(_QWORD *)(v64 + 40) = v26;
      *(_QWORD *)(v64 + 64) = 0;
      *(_QWORD *)(v64 + 72) = 0;
      s2.m128i_i64[0] = (__int64)&v128;
      s2.m128i_i64[1] = 0;
      LOBYTE(v128) = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v93,
                                 v28,
                                 v25,
                                 v26);
      v67 = v66;
      v28 = insert_hint_unique_pos;
      if ( v66 )
      {
        if ( !insert_hint_unique_pos && v86 != v66 )
        {
          v76 = v66[5];
          if ( v26 <= v76 )
            v76 = v26;
          if ( v76 )
            memcmp(v25, (const void *)v67[4], v76);
        }
        v28 = (_QWORD *)v64;
        std::_Rb_tree_insert_and_rebalance();
        ++v93[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v69 = *(size_t **)(v64 + 32);
        if ( v63 != v69 )
          operator delete(v69, *(_QWORD *)(v64 + 48) + 1LL);
        operator delete((void *)v64, 0x50u);
      }
      v25 = (size_t *)s2.m128i_i64[0];
      goto LABEL_29;
    }
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v27 + 40);
        v30 = v29;
        if ( v26 <= v29 )
          v30 = v26;
        if ( v30 )
        {
          v31 = memcmp(*(const void **)(v27 + 32), v25, v30);
          if ( v31 )
            goto LABEL_19;
        }
        v32 = v29 - v26;
        if ( v32 <= 0x7FFFFFFF )
          break;
LABEL_11:
        v28 = (_QWORD *)v27;
        v27 = *(_QWORD *)(v27 + 16);
        if ( !v27 )
          goto LABEL_21;
      }
      if ( v32 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_20;
      v31 = v32;
LABEL_19:
      if ( v31 >= 0 )
        goto LABEL_11;
LABEL_20:
      v27 = *(_QWORD *)(v27 + 24);
    }
    while ( v27 );
LABEL_21:
    if ( v86 == v28 )
      goto LABEL_36;
    v33 = v28[5];
    v34 = v33;
    if ( v26 <= v33 )
      v34 = v26;
    if ( v34 && (LODWORD(v35) = memcmp(v25, (const void *)v28[4], v34), (_DWORD)v35) )
    {
LABEL_28:
      if ( (int)v35 < 0 )
        goto LABEL_36;
    }
    else
    {
      v35 = v26 - v33;
      if ( (__int64)(v26 - v33) <= 0x7FFFFFFF )
      {
        if ( v35 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_28;
        goto LABEL_36;
      }
    }
LABEL_29:
    if ( v25 != &v128 )
      operator delete(v25, v128 + 1);
    v36 = *((_BYTE *)v28 + 64);
    v19 += 3;
    v37 = v117.m128i_i64[1];
    v20 = 1;
    *((_BYTE *)v28 + 64) = v99;
    v38 = v28[9];
    v28[9] = v37;
    v117.m128i_i64[1] = v38;
    v117.m128i_i8[0] = v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v101 != v19 );
LABEL_32:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v103);
  v128 = 0;
  LOBYTE(v129) = 0;
  *(_QWORD *)&v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v129) = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "object", v40, v41, v42, v43, (int)&v128, (int)v86, (__int64)v93);
  v130 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v104,
    v103,
    2,
    1);
  *((_QWORD *)&v132 + 1) = 0;
  LOBYTE(v123) = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v123) = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "properties", v45, v46, v47, v48, v80, v87, v94);
  LOBYTE(v115) = v20;
  v116 = (_QWORD *)v95;
  v124 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v126 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v133,
    v107,
    2,
    1);
  v134 = 0;
  v120 = 0;
  *(_QWORD *)&v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, "required", v50, v51, v52, v53, v81, v88, v95);
  LOBYTE(v118) = 0;
  *(_QWORD *)&v119 = 0;
  v121 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v118) = 3;
  v54 = operator new(0x20u);
  *(_QWORD *)v54 = v54 + 16;
  strcpy((char *)(v54 + 16), "address");
  *(_QWORD *)(v54 + 8) = 7;
  v119 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v55 = _mm_load_si128(&v117);
  *(_QWORD *)&v122[16] = 0;
  *(__m128i *)v122 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v135,
    (const __m128i *)&v120,
    2,
    1);
  v135[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v104,
    3,
    v56,
    v57,
    v58,
    v82,
    v89,
    v96,
    v98,
    (int)v101,
    (int)&v117,
    (__int64)v103,
    (int)v104,
    v106,
    (int)v107,
    v108,
    v109,
    (__int64)&v119,
    (int)&v124,
    (__int64)&v130);
  v59 = &v136;
  do
  {
    v59 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v59 != v105 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

