_QWORD *__fastcall ida_mcp::tools::signatures::`anonymous namespace'::handle_list_signatures(_QWORD *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  int idasgn_qty; // ebx
  __int64 v3; // rax
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rax
  const void *v7; // r15
  _QWORD *v8; // r13
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _BYTE *v13; // r15
  __int64 *v14; // r13
  size_t v15; // rax
  size_t v16; // r8
  __int64 v17; // r14
  _QWORD *v18; // r15
  size_t v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r14
  size_t v23; // rdx
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  const char *v29; // r15
  __int64 *v30; // rax
  void *v31; // r14
  __int64 *v32; // r13
  size_t v33; // rax
  size_t v34; // r8
  __int64 v35; // r14
  _QWORD *v36; // r15
  size_t v37; // rdx
  int v38; // eax
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r14
  size_t v41; // rdx
  int v42; // eax
  __int64 v43; // r14
  int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  char *v47; // r15
  __int64 *v48; // rax
  void *v49; // r14
  __int64 *v50; // r13
  size_t v51; // rax
  size_t v52; // r8
  __int64 v53; // r14
  _QWORD *v54; // r15
  size_t v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rbp
  unsigned __int64 v58; // r14
  size_t v59; // rdx
  int v60; // eax
  _QWORD *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // r14
  __int64 v67; // r13
  size_t v68; // rdx
  int v69; // eax
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // r13
  size_t v72; // rdx
  int v73; // eax
  _QWORD *v74; // rax
  const void *v75; // r15
  _QWORD *v76; // r13
  _QWORD *v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // r14
  __int64 v80; // r13
  size_t v81; // rdx
  int v82; // eax
  unsigned __int64 v83; // r15
  unsigned __int64 v84; // r13
  size_t v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  const void *v88; // r15
  _QWORD *v89; // r13
  _QWORD *v90; // rax
  __int64 v91; // rdx
  const char *v92; // r14
  _QWORD *v93; // rax
  _QWORD *v94; // r15
  _QWORD *v95; // r13
  size_t v96; // rax
  unsigned __int64 v97; // rdx
  char *v98; // r15
  const char *v99; // r14
  unsigned int v100; // r15d
  unsigned int v101; // r15d
  unsigned int v102; // ecx
  __int64 v103; // rsi
  __int64 v104; // r14
  _QWORD *v105; // r15
  size_t v106; // rdx
  int v107; // eax
  unsigned __int64 v108; // rbp
  unsigned __int64 v109; // r14
  size_t v110; // rdx
  int v111; // eax
  __int64 v112; // r14
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  char v117; // bl
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  void *v121; // rdi
  void *v122; // rdi
  _QWORD *v123; // rdi
  void *v124; // rdi
  void *v125; // rdi
  void *v126; // rdi
  void *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // r12
  __int64 v131; // rax
  int *v132; // rdi
  _QWORD *v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  _QWORD *v140; // rax
  unsigned __int64 v142; // r14
  size_t v143; // rax
  unsigned __int64 v144; // r15
  size_t v145; // rax
  unsigned __int64 v146; // r14
  size_t v147; // rax
  unsigned __int64 v148; // r14
  size_t v149; // rax
  unsigned __int64 v150; // r15
  size_t v151; // rax
  unsigned __int64 v152; // r15
  size_t v153; // rax
  unsigned __int64 v154; // r15
  size_t v155; // rax
  __int64 v156; // rax
  unsigned __int64 v157; // r14
  char *v158; // rdi
  _BYTE *v159; // r14
  _BYTE *v160; // rcx
  _BYTE *v161; // r15
  __int64 v162; // rax
  int *v163; // rdi
  __m128i *v164; // r14
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 *v172; // r8
  __m128i *v173; // r14
  unsigned __int64 v174; // r15
  __int64 v175; // rax
  char *v176; // rcx
  __int64 v177; // r15
  char *v178; // rax
  __int64 v179; // rax
  _BYTE *v180; // r15
  __m128i *v181; // rax
  _BYTE *m128i_i8; // rdi
  size_t v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // [rsp+8h] [rbp-1F0h]
  __m128i *v188; // [rsp+8h] [rbp-1F0h]
  __int64 *v189; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v190; // [rsp+8h] [rbp-1F0h]
  _QWORD *s1; // [rsp+18h] [rbp-1E0h]
  _QWORD *v192; // [rsp+20h] [rbp-1D8h]
  char v193; // [rsp+20h] [rbp-1D8h]
  char v194; // [rsp+20h] [rbp-1D8h]
  void *v195; // [rsp+20h] [rbp-1D8h]
  void *v196; // [rsp+20h] [rbp-1D8h]
  void *v197; // [rsp+20h] [rbp-1D8h]
  int idasgn_desc; // [rsp+2Ch] [rbp-1CCh]
  _QWORD *v199; // [rsp+30h] [rbp-1C8h]
  _QWORD *v200; // [rsp+30h] [rbp-1C8h]
  __int64 v201; // [rsp+38h] [rbp-1C0h]
  int v203; // [rsp+58h] [rbp-1A0h]
  int v204; // [rsp+5Ch] [rbp-19Ch]
  char v205; // [rsp+60h] [rbp-198h]
  __m128i *v206; // [rsp+68h] [rbp-190h]
  size_t v207; // [rsp+B0h] [rbp-148h]
  size_t v208; // [rsp+B0h] [rbp-148h]
  size_t v209; // [rsp+B0h] [rbp-148h]
  char *v210; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v211; // [rsp+E8h] [rbp-110h]
  __m128i s; // [rsp+100h] [rbp-F8h] BYREF
  char v213; // [rsp+120h] [rbp-D8h] BYREF
  __int128 v214; // [rsp+128h] [rbp-D0h]
  char v215; // [rsp+138h] [rbp-C0h]
  __int64 v216; // [rsp+140h] [rbp-B8h]
  __int64 v217; // [rsp+148h] [rbp-B0h]
  char v218; // [rsp+150h] [rbp-A8h] BYREF
  __int128 v219; // [rsp+158h] [rbp-A0h]
  char v220; // [rsp+168h] [rbp-90h]
  __m128i *v221; // [rsp+170h] [rbp-88h]
  __int64 v222; // [rsp+178h] [rbp-80h]
  __m128i v223; // [rsp+180h] [rbp-78h] BYREF
  _QWORD s2[13]; // [rsp+190h] [rbp-68h] BYREF

  s2[5] = __readfsqword(0x28u);
  idasgn_qty = get_idasgn_qty();
  v204 = idasgn_qty;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  if ( idasgn_qty > 0 )
  {
    v187 = 0;
    v201 = idasgn_qty;
    while ( 1 )
    {
      v211 = 0;
      v210 = nullptr;
      idasgn_desc = get_idasgn_desc();
      v203 = calc_idasgn_state();
      memset(&s, 0, 24);
      strcpy((char *)s2, "index");
      v3 = operator new(0x30u);
      v4 = (_QWORD *)(v3 + 8);
      v5 = (_QWORD *)v3;
      *(_DWORD *)(v3 + 8) = 0;
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 24) = v3 + 8;
      *(_QWORD *)(v3 + 32) = v3 + 8;
      *(_QWORD *)(v3 + 40) = 0;
      v6 = operator new(0x50u);
      v7 = (const void *)(v6 + 48);
      v8 = (_QWORD *)v6;
      *(_QWORD *)(v6 + 32) = v6 + 48;
      v223.m128i_i64[0] = (__int64)s2;
      *(_DWORD *)(v6 + 48) = s2[0];
      v223.m128i_i64[1] = 0;
      *(_WORD *)(v6 + 52) = WORD2(s2[0]);
      *(_QWORD *)(v6 + 40) = 5;
      *(_QWORD *)(v6 + 64) = 0;
      *(_QWORD *)(v6 + 72) = 0;
      LOBYTE(s2[0]) = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v5,
                                 v4,
                                 (const void *)(v6 + 48),
                                 5u);
      v11 = insert_hint_unique_pos;
      if ( v10 )
      {
        if ( !insert_hint_unique_pos && v4 != (_QWORD *)v10 )
        {
          v142 = *(_QWORD *)(v10 + 40);
          if ( v142 )
          {
            v143 = 5;
            if ( v142 <= 5 )
              v143 = *(_QWORD *)(v10 + 40);
            memcmp(v7, *(const void **)(v10 + 32), v143);
          }
        }
        v11 = v8;
        std::_Rb_tree_insert_and_rebalance();
        ++v5[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v126 = (void *)v8[4];
        if ( v7 != v126 )
          operator delete(v126, v8[6] + 1LL);
        operator delete(v8, 0x50u);
      }
      if ( (_QWORD *)v223.m128i_i64[0] != s2 )
        operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
      *((_BYTE *)v11 + 64) = 5;
      v11[9] = v187;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v12 = (_QWORD *)operator new(0x20u);
      v13 = v12 + 2;
      v14 = v12;
      *v12 = v12 + 2;
      if ( !_qstring<char>::c_str(void)const::nullstr )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v15 = strlen(_qstring<char>::c_str(void)const::nullstr);
      v207 = v15;
      v16 = v15;
      if ( v15 > 0xF )
        break;
      if ( v15 == 1 )
      {
        *((_BYTE *)v14 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      }
      else if ( v15 )
      {
        goto LABEL_192;
      }
LABEL_13:
      v14[1] = v15;
      v13[v15] = 0;
      v17 = v5[2];
      v18 = v4;
      v223.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "short_name");
      v223.m128i_i64[1] = 10;
      if ( !v17 )
        goto LABEL_30;
      v192 = v5;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v17 + 40);
          if ( !v21 )
            break;
          v19 = 10;
          if ( v21 <= 0xA )
            v19 = *(_QWORD *)(v17 + 40);
          v20 = memcmp(*(const void **)(v17 + 32), s2, v19);
          if ( v20 || (v20 = v21 - 10, (__int64)(v21 - 10) <= 0x7FFFFFFF) )
          {
            if ( v20 < 0 )
              break;
          }
          v18 = (_QWORD *)v17;
          v17 = *(_QWORD *)(v17 + 16);
          if ( !v17 )
            goto LABEL_23;
        }
        v17 = *(_QWORD *)(v17 + 24);
      }
      while ( v17 );
LABEL_23:
      v5 = v192;
      if ( v4 == v18 )
        goto LABEL_30;
      v22 = v18[5];
      if ( v22 )
      {
        v23 = 10;
        if ( v22 <= 0xA )
          v23 = v18[5];
        if ( (v24 = memcmp(s2, (const void *)v18[4], v23)) == 0
          && (v24 = 10 - v22, (__int64)(10 - v22) < (__int64)0xFFFFFFFF80000000LL)
          || v24 < 0 )
        {
LABEL_30:
          v25 = operator new(0x50u);
          *(_QWORD *)(v25 + 32) = v25 + 48;
          v26 = s2[0];
          *(_QWORD *)(v25 + 40) = 10;
          *(_QWORD *)(v25 + 48) = v26;
          LODWORD(v26) = *(_DWORD *)((char *)s2 + 7);
          *(_QWORD *)(v25 + 64) = 0;
          *(_DWORD *)(v25 + 55) = v26;
          *(_QWORD *)(v25 + 72) = 0;
          v223.m128i_i64[0] = (__int64)s2;
          v223.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v27 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v5,
                  v18,
                  (const void *)(v25 + 48),
                  0xAu);
          v18 = v27;
          if ( v28 )
          {
            if ( !v27 && v4 != (_QWORD *)v28 )
            {
              v154 = *(_QWORD *)(v28 + 40);
              if ( v154 )
              {
                v155 = 10;
                if ( v154 <= 0xA )
                  v155 = *(_QWORD *)(v28 + 40);
                memcmp((const void *)(v25 + 48), *(const void **)(v28 + 32), v155);
              }
            }
            v18 = (_QWORD *)v25;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v125 = *(void **)(v25 + 32);
            if ( (void *)(v25 + 48) != v125 )
              operator delete(v125, *(_QWORD *)(v25 + 48) + 1LL);
            operator delete((void *)v25, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v18 + 64) = 3;
      v18[9] = v14;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( s.m128i_i64[1] <= 1uLL )
      {
        v193 = 0;
        v32 = nullptr;
        goto LABEL_42;
      }
      v29 = (const char *)s.m128i_i64[0];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v30 = (__int64 *)operator new(0x20u);
      v31 = v30 + 2;
      v32 = v30;
      *v30 = (__int64)(v30 + 2);
      if ( !v29 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v33 = strlen(v29);
      v208 = v33;
      v34 = v33;
      if ( v33 > 0xF )
      {
        v196 = (void *)v33;
        v128 = std::string::_M_create();
        *v32 = v128;
        v31 = (void *)v128;
        v34 = (size_t)v196;
        v32[2] = v208;
LABEL_217:
        memcpy(v31, v29, v34);
        v33 = v208;
        v31 = (void *)*v32;
        goto LABEL_41;
      }
      if ( v33 == 1 )
      {
        *((_BYTE *)v32 + 16) = *v29;
      }
      else if ( v33 )
      {
        goto LABEL_217;
      }
LABEL_41:
      v32[1] = v33;
      v193 = 3;
      *((_BYTE *)v31 + v33) = 0;
LABEL_42:
      v35 = v5[2];
      v223.m128i_i64[0] = (__int64)s2;
      v36 = v4;
      strcpy((char *)s2, "title");
      v223.m128i_i64[1] = 5;
      if ( !v35 )
        goto LABEL_59;
      v199 = v5;
      do
      {
        while ( 1 )
        {
          v39 = *(_QWORD *)(v35 + 40);
          if ( !v39 )
            break;
          v37 = 5;
          if ( v39 <= 5 )
            v37 = *(_QWORD *)(v35 + 40);
          v38 = memcmp(*(const void **)(v35 + 32), s2, v37);
          if ( v38 || (v38 = v39 - 5, (__int64)(v39 - 5) <= 0x7FFFFFFF) )
          {
            if ( v38 < 0 )
              break;
          }
          v36 = (_QWORD *)v35;
          v35 = *(_QWORD *)(v35 + 16);
          if ( !v35 )
            goto LABEL_52;
        }
        v35 = *(_QWORD *)(v35 + 24);
      }
      while ( v35 );
LABEL_52:
      v5 = v199;
      if ( v4 == v36 )
        goto LABEL_59;
      v40 = v36[5];
      if ( v40 )
      {
        v41 = 5;
        if ( v40 <= 5 )
          v41 = v36[5];
        if ( (v42 = memcmp(s2, (const void *)v36[4], v41)) == 0
          && (v42 = 5 - v40, (__int64)(5 - v40) < (__int64)0xFFFFFFFF80000000LL)
          || v42 < 0 )
        {
LABEL_59:
          v43 = operator new(0x50u);
          *(_QWORD *)(v43 + 32) = v43 + 48;
          v44 = s2[0];
          *(_QWORD *)(v43 + 40) = 5;
          *(_DWORD *)(v43 + 48) = v44;
          LOWORD(v44) = WORD2(s2[0]);
          *(_QWORD *)(v43 + 64) = 0;
          *(_WORD *)(v43 + 52) = v44;
          *(_QWORD *)(v43 + 72) = 0;
          v223.m128i_i64[0] = (__int64)s2;
          v223.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v45 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v5,
                  v36,
                  (const void *)(v43 + 48),
                  5u);
          v36 = v45;
          if ( v46 )
          {
            if ( !v45 && v4 != (_QWORD *)v46 )
            {
              v152 = *(_QWORD *)(v46 + 40);
              if ( v152 )
              {
                v153 = 5;
                if ( v152 <= 5 )
                  v153 = *(_QWORD *)(v46 + 40);
                memcmp((const void *)(v43 + 48), *(const void **)(v46 + 32), v153);
              }
            }
            v36 = (_QWORD *)v43;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v127 = *(void **)(v43 + 32);
            if ( (void *)(v43 + 48) != v127 )
              operator delete(v127, *(_QWORD *)(v43 + 48) + 1LL);
            operator delete((void *)v43, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v36 + 64) = v193;
      v36[9] = v32;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (unsigned __int64)v211 <= 1 )
      {
        v194 = 0;
        v50 = nullptr;
        goto LABEL_71;
      }
      v47 = v210;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v48 = (__int64 *)operator new(0x20u);
      v49 = v48 + 2;
      v50 = v48;
      *v48 = (__int64)(v48 + 2);
      if ( !v47 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v51 = strlen(v47);
      v209 = v51;
      v52 = v51;
      if ( v51 > 0xF )
      {
        v197 = (void *)v51;
        v129 = std::string::_M_create();
        *v50 = v129;
        v49 = (void *)v129;
        v52 = (size_t)v197;
        v50[2] = v209;
LABEL_219:
        memcpy(v49, v47, v52);
        v51 = v209;
        v49 = (void *)*v50;
        goto LABEL_70;
      }
      if ( v51 == 1 )
      {
        *((_BYTE *)v50 + 16) = *v47;
      }
      else if ( v51 )
      {
        goto LABEL_219;
      }
LABEL_70:
      v50[1] = v51;
      v194 = 3;
      *((_BYTE *)v49 + v51) = 0;
LABEL_71:
      v53 = v5[2];
      v54 = v4;
      v223.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "optional_libs");
      v223.m128i_i64[1] = 13;
      if ( !v53 )
        goto LABEL_88;
      v200 = v5;
      do
      {
        while ( 1 )
        {
          v57 = *(_QWORD *)(v53 + 40);
          if ( !v57 )
            break;
          v55 = 13;
          if ( v57 <= 0xD )
            v55 = *(_QWORD *)(v53 + 40);
          v56 = memcmp(*(const void **)(v53 + 32), s2, v55);
          if ( v56 || (v56 = v57 - 13, (__int64)(v57 - 13) <= 0x7FFFFFFF) )
          {
            if ( v56 < 0 )
              break;
          }
          v54 = (_QWORD *)v53;
          v53 = *(_QWORD *)(v53 + 16);
          if ( !v53 )
            goto LABEL_81;
        }
        v53 = *(_QWORD *)(v53 + 24);
      }
      while ( v53 );
LABEL_81:
      v5 = v200;
      if ( v4 == v54 )
        goto LABEL_88;
      v58 = v54[5];
      if ( v58 )
      {
        v59 = 13;
        if ( v58 <= 0xD )
          v59 = v54[5];
        if ( (v60 = memcmp(s2, (const void *)v54[4], v59)) == 0
          && (v60 = 13 - v58, (__int64)(13 - v58) < (__int64)0xFFFFFFFF80000000LL)
          || v60 < 0 )
        {
LABEL_88:
          v61 = (_QWORD *)operator new(0x50u);
          v61[4] = v61 + 6;
          v62 = s2[0];
          v61[5] = 13;
          v61[6] = v62;
          v63 = *(_QWORD *)((char *)s2 + 6);
          v61[8] = 0;
          *(_QWORD *)((char *)v61 + 54) = v63;
          v61[9] = 0;
          v223.m128i_i64[0] = (__int64)s2;
          v223.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v64 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v5,
                  v54,
                  v61 + 6,
                  0xDu);
          v54 = v64;
          if ( v65 )
          {
            if ( !v64 && v4 != (_QWORD *)v65 )
            {
              v150 = *(_QWORD *)(v65 + 40);
              if ( v150 )
              {
                v151 = 13;
                if ( v150 <= 0xD )
                  v151 = *(_QWORD *)(v65 + 40);
                memcmp(v61 + 6, *(const void **)(v65 + 32), v151);
              }
            }
            v54 = v61;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v123 = (_QWORD *)v61[4];
            if ( v61 + 6 != v123 )
              operator delete(v123, v61[6] + 1LL);
            operator delete(v61, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      v66 = v4;
      *((_BYTE *)v54 + 64) = v194;
      v54[9] = v50;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v67 = v5[2];
      v223.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "matched_count");
      v223.m128i_i64[1] = 13;
      if ( !v67 )
        goto LABEL_111;
      do
      {
        while ( 1 )
        {
          v70 = *(_QWORD *)(v67 + 40);
          if ( !v70 )
            break;
          v68 = 13;
          if ( v70 <= 0xD )
            v68 = *(_QWORD *)(v67 + 40);
          v69 = memcmp(*(const void **)(v67 + 32), s2, v68);
          if ( v69 || (v69 = v70 - 13, (__int64)(v70 - 13) <= 0x7FFFFFFF) )
          {
            if ( v69 < 0 )
              break;
          }
          v66 = (_QWORD *)v67;
          v67 = *(_QWORD *)(v67 + 16);
          if ( !v67 )
            goto LABEL_104;
        }
        v67 = *(_QWORD *)(v67 + 24);
      }
      while ( v67 );
LABEL_104:
      if ( v4 == v66 )
        goto LABEL_111;
      v71 = v66[5];
      if ( v71 )
      {
        v72 = 13;
        if ( v71 <= 0xD )
          v72 = v66[5];
        if ( (v73 = memcmp(s2, (const void *)v66[4], v72)) == 0
          && (v73 = 13 - v71, (__int64)(13 - v71) < (__int64)0xFFFFFFFF80000000LL)
          || v73 < 0 )
        {
LABEL_111:
          v74 = (_QWORD *)operator new(0x50u);
          v75 = v74 + 6;
          v76 = v74;
          v74[4] = v74 + 6;
          v223.m128i_i64[0] = (__int64)s2;
          v74[6] = s2[0];
          v223.m128i_i64[1] = 0;
          *(_QWORD *)((char *)v74 + 54) = *(_QWORD *)((char *)s2 + 6);
          v74[5] = 13;
          v74[8] = 0;
          v74[9] = 0;
          LOBYTE(s2[0]) = 0;
          v77 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v5,
                  v66,
                  v74 + 6,
                  0xDu);
          v66 = v77;
          if ( v78 )
          {
            if ( !v77 && v4 != (_QWORD *)v78 )
            {
              v148 = *(_QWORD *)(v78 + 40);
              if ( v148 )
              {
                v149 = 13;
                if ( v148 <= 0xD )
                  v149 = *(_QWORD *)(v78 + 40);
                memcmp(v75, *(const void **)(v78 + 32), v149);
              }
            }
            v66 = v76;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v122 = (void *)v76[4];
            if ( v75 != v122 )
              operator delete(v122, v76[6] + 1LL);
            operator delete(v76, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v66 + 64) = 5;
      v66[9] = idasgn_desc;
      v79 = v4;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v80 = v5[2];
      v223.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "state");
      v223.m128i_i64[1] = 5;
      if ( !v80 )
        goto LABEL_134;
      do
      {
        while ( 1 )
        {
          v83 = *(_QWORD *)(v80 + 40);
          if ( !v83 )
            break;
          v81 = 5;
          if ( v83 <= 5 )
            v81 = *(_QWORD *)(v80 + 40);
          v82 = memcmp(*(const void **)(v80 + 32), s2, v81);
          if ( v82 || (v82 = v83 - 5, (__int64)(v83 - 5) <= 0x7FFFFFFF) )
          {
            if ( v82 < 0 )
              break;
          }
          v79 = (_QWORD *)v80;
          v80 = *(_QWORD *)(v80 + 16);
          if ( !v80 )
            goto LABEL_127;
        }
        v80 = *(_QWORD *)(v80 + 24);
      }
      while ( v80 );
LABEL_127:
      if ( v4 == v79 )
        goto LABEL_134;
      v84 = v79[5];
      if ( v84 )
      {
        v85 = 5;
        if ( v84 <= 5 )
          v85 = v79[5];
        if ( (v86 = memcmp(s2, (const void *)v79[4], v85)) == 0
          && (v86 = 5 - v84, (__int64)(5 - v84) < (__int64)0xFFFFFFFF80000000LL)
          || v86 < 0 )
        {
LABEL_134:
          v87 = operator new(0x50u);
          v88 = (const void *)(v87 + 48);
          v89 = (_QWORD *)v87;
          *(_QWORD *)(v87 + 32) = v87 + 48;
          v223.m128i_i64[0] = (__int64)s2;
          *(_DWORD *)(v87 + 48) = s2[0];
          v223.m128i_i64[1] = 0;
          *(_WORD *)(v87 + 52) = WORD2(s2[0]);
          *(_QWORD *)(v87 + 40) = 5;
          *(_QWORD *)(v87 + 64) = 0;
          *(_QWORD *)(v87 + 72) = 0;
          LOBYTE(s2[0]) = 0;
          v90 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v5,
                  v79,
                  (const void *)(v87 + 48),
                  5u);
          v79 = v90;
          if ( v91 )
          {
            if ( !v90 && v4 != (_QWORD *)v91 )
            {
              v146 = *(_QWORD *)(v91 + 40);
              if ( v146 )
              {
                v147 = 5;
                if ( v146 <= 5 )
                  v147 = *(_QWORD *)(v91 + 40);
                memcmp(v88, *(const void **)(v91 + 32), v147);
              }
            }
            v79 = v89;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v121 = (void *)v89[4];
            if ( v88 != v121 )
              operator delete(v121, v89[6] + 1LL);
            operator delete(v89, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v79 + 64) = 5;
      v79[9] = v203;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      switch ( v203 )
      {
        case 0:
          v92 = "applied";
          break;
        case 1:
          v92 = "bad_argument";
          break;
        case 2:
          v92 = "already_applied";
          break;
        case 3:
          v92 = "current";
          break;
        case 4:
          v92 = "planned";
          break;
        default:
          v92 = "unknown";
          break;
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v93 = (_QWORD *)operator new(0x20u);
      v94 = v93 + 2;
      v95 = v93;
      *v93 = v93 + 2;
      v96 = strlen(v92);
      if ( (unsigned int)v96 < 8 )
      {
        if ( (v96 & 4) != 0 )
        {
          *((_DWORD *)v95 + 4) = *(_DWORD *)v92;
          *(_DWORD *)((char *)v94 + (unsigned int)v96 - 4) = *(_DWORD *)&v92[(unsigned int)v96 - 4];
        }
        else if ( (_DWORD)v96 )
        {
          *((_BYTE *)v95 + 16) = *v92;
          if ( (v96 & 2) != 0 )
            *(_WORD *)((char *)v94 + (unsigned int)v96 - 2) = *(_WORD *)&v92[(unsigned int)v96 - 2];
        }
      }
      else
      {
        v95[2] = *(_QWORD *)v92;
        *(_QWORD *)((char *)v94 + (unsigned int)v96 - 8) = *(_QWORD *)&v92[(unsigned int)v96 - 8];
        v97 = (unsigned __int64)(v95 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v98 = (char *)v94 - v97;
        v99 = (const char *)(v92 - v98);
        v100 = (v96 + (_DWORD)v98) & 0xFFFFFFF8;
        if ( v100 >= 8 )
        {
          v101 = v100 & 0xFFFFFFF8;
          v102 = 0;
          do
          {
            v103 = v102;
            v102 += 8;
            *(_QWORD *)(v97 + v103) = *(_QWORD *)&v99[v103];
          }
          while ( v102 < v101 );
        }
      }
      v104 = v5[2];
      v95[1] = v96;
      v105 = v4;
      *((_BYTE *)v95 + v96 + 16) = 0;
      v223.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "state_name");
      v223.m128i_i64[1] = 10;
      if ( !v104 )
        goto LABEL_163;
      s1 = v5;
      do
      {
        while ( 1 )
        {
          v108 = *(_QWORD *)(v104 + 40);
          if ( !v108 )
            break;
          v106 = 10;
          if ( v108 <= 0xA )
            v106 = *(_QWORD *)(v104 + 40);
          v107 = memcmp(*(const void **)(v104 + 32), s2, v106);
          if ( v107 || (v107 = v108 - 10, (__int64)(v108 - 10) <= 0x7FFFFFFF) )
          {
            if ( v107 < 0 )
              break;
          }
          v105 = (_QWORD *)v104;
          v104 = *(_QWORD *)(v104 + 16);
          if ( !v104 )
            goto LABEL_156;
        }
        v104 = *(_QWORD *)(v104 + 24);
      }
      while ( v104 );
LABEL_156:
      v5 = s1;
      if ( v4 == v105 )
        goto LABEL_163;
      v109 = v105[5];
      if ( v109 )
      {
        v110 = 10;
        if ( v109 <= 0xA )
          v110 = v105[5];
        if ( (v111 = memcmp(s2, (const void *)v105[4], v110)) == 0
          && (v111 = 10 - v109, (__int64)(10 - v109) < (__int64)0xFFFFFFFF80000000LL)
          || v111 < 0 )
        {
LABEL_163:
          v112 = operator new(0x50u);
          *(_QWORD *)(v112 + 32) = v112 + 48;
          v113 = s2[0];
          *(_QWORD *)(v112 + 40) = 10;
          *(_QWORD *)(v112 + 48) = v113;
          LODWORD(v113) = *(_DWORD *)((char *)s2 + 7);
          *(_QWORD *)(v112 + 64) = 0;
          *(_DWORD *)(v112 + 55) = v113;
          *(_QWORD *)(v112 + 72) = 0;
          v223.m128i_i64[0] = (__int64)s2;
          v223.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v114 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                   v5,
                   v105,
                   (const void *)(v112 + 48),
                   0xAu);
          v105 = v114;
          if ( v115 )
          {
            if ( !v114 && v4 != (_QWORD *)v115 )
            {
              v144 = *(_QWORD *)(v115 + 40);
              if ( v144 )
              {
                v145 = 10;
                if ( v144 <= 0xA )
                  v145 = *(_QWORD *)(v115 + 40);
                memcmp((const void *)(v112 + 48), *(const void **)(v115 + 32), v145);
              }
            }
            v105 = (_QWORD *)v112;
            std::_Rb_tree_insert_and_rebalance();
            ++v5[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v124 = *(void **)(v112 + 32);
            if ( (void *)(v112 + 48) != v124 )
              operator delete(v124, *(_QWORD *)(v112 + 48) + 1LL);
            operator delete((void *)v112, 0x50u);
          }
          if ( (_QWORD *)v223.m128i_i64[0] != s2 )
            operator delete((void *)v223.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v105 + 64) = 3;
      v105[9] = v95;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v205 )
      {
        if ( v205 != 2 )
        {
          exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            exception,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        v130 = (_QWORD *)v206->m128i_i64[1];
        if ( (_QWORD *)v206[1].m128i_i64[0] != v130 )
        {
          *v130 = 1;
          v130[1] = 0;
          v131 = operator new(0x30u);
          v132 = (int *)v5[2];
          *(_DWORD *)(v131 + 8) = 0;
          v133 = (_QWORD *)v131;
          *(_QWORD *)(v131 + 16) = 0;
          *(_QWORD *)(v131 + 24) = v131 + 8;
          *(_QWORD *)(v131 + 32) = v131 + 8;
          *(_QWORD *)(v131 + 40) = 0;
          if ( v132 )
          {
            v134 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                     v132,
                     v131 + 8);
            v135 = v134;
            do
            {
              v136 = v134;
              v134 = *(_QWORD *)(v134 + 16);
            }
            while ( v134 );
            v133[3] = v136;
            v137 = v135;
            do
            {
              v138 = v137;
              v137 = *(_QWORD *)(v137 + 24);
            }
            while ( v137 );
            v139 = v5[5];
            v133[4] = v138;
            v133[2] = v135;
            v133[5] = v139;
            v140 = (_QWORD *)v206->m128i_i64[1];
          }
          else
          {
            v140 = v130;
          }
          v130[1] = v133;
          v206->m128i_i64[1] = (__int64)(v140 + 2);
          goto LABEL_172;
        }
      }
      else
      {
        v205 = 2;
        v116 = operator new(0x18u);
        *(_QWORD *)(v116 + 16) = 0;
        v206 = (__m128i *)v116;
        *(_OWORD *)v116 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_172:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( s.m128i_i64[0] )
      {
        s.m128i_i64[1] = 0;
        qfree();
      }
      if ( v210 )
      {
        *(_QWORD *)&v211 = 0;
        qfree();
      }
      if ( v201 == ++v187 )
      {
        v117 = 2;
        goto LABEL_177;
      }
    }
    v195 = (void *)v15;
    v120 = std::string::_M_create();
    *v14 = v120;
    v13 = (_BYTE *)v120;
    v16 = (size_t)v195;
    v14[2] = v207;
LABEL_192:
    memcpy(v13, _qstring<char>::c_str(void)const::nullstr, v16);
    v15 = v207;
    v13 = (_BYTE *)*v14;
    goto LABEL_13;
  }
  v117 = v205;
LABEL_177:
  v213 = 0;
  *(_QWORD *)&v214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v213 = 3;
  v118 = operator new(0x20u);
  strcpy((char *)(v118 + 16), "signature_count");
  *(_QWORD *)v118 = v118 + 16;
  *(_QWORD *)(v118 + 8) = 15;
  v215 = 5;
  v216 = v204;
  v217 = 0;
  v214 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v223,
    (const __m128i *)&v213,
    2);
  s2[0] = 0;
  v218 = 0;
  *(_QWORD *)&v219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v218 = 3;
  v119 = operator new(0x20u);
  *(_QWORD *)v119 = v119 + 16;
  strcpy((char *)(v119 + 16), "signatures");
  *(_QWORD *)(v119 + 8) = 10;
  v221 = nullptr;
  v220 = v117;
  v219 = (unsigned __int64)v119;
  switch ( v117 )
  {
    case 1:
      v162 = operator new(0x30u);
      *(_QWORD *)(v162 + 16) = 0;
      v163 = (int *)v206[1].m128i_i64[0];
      v164 = (__m128i *)v162;
      *(_DWORD *)(v162 + 8) = 0;
      *(_QWORD *)(v162 + 24) = v162 + 8;
      *(_QWORD *)(v162 + 32) = v162 + 8;
      *(_QWORD *)(v162 + 40) = 0;
      if ( v163 )
      {
        v165 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v163,
                 v162 + 8);
        v166 = v165;
        do
        {
          v167 = v165;
          v165 = *(_QWORD *)(v165 + 16);
        }
        while ( v165 );
        v164[1].m128i_i64[1] = v167;
        v168 = v166;
        do
        {
          v169 = v168;
          v168 = *(_QWORD *)(v168 + 24);
        }
        while ( v168 );
        v170 = v206[2].m128i_i64[1];
        v164[2].m128i_i64[0] = v169;
        v164[1].m128i_i64[0] = v166;
        v164[2].m128i_i64[1] = v170;
      }
      goto LABEL_274;
    case 2:
      v156 = operator new(0x18u);
      v157 = v206->m128i_i64[1] - v206->m128i_i64[0];
      v188 = (__m128i *)v156;
      *(_QWORD *)(v156 + 16) = 0;
      *(_OWORD *)v156 = 0;
      if ( v157 )
        v158 = (char *)operator new(v157);
      else
        v158 = nullptr;
      *v188 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v158, (__m128i)(unsigned __int64)v158);
      v188[1].m128i_i64[0] = (__int64)&v158[v157];
      v159 = (_BYTE *)v206->m128i_i64[1];
      v160 = (_BYTE *)v206->m128i_i64[0];
      v210 = v158;
      s = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v158, (__m128i)(unsigned __int64)&v210);
      if ( v159 != v160 )
      {
        v161 = v160;
        do
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v161 += 16;
          v158 = v210 + 16;
          v210 += 16;
        }
        while ( v159 != v161 );
      }
      v188->m128i_i64[1] = (__int64)v158;
      v221 = v188;
      goto LABEL_231;
    case 3:
      v180 = (_BYTE *)v206->m128i_i64[0];
      v190 = v206->m128i_u64[1];
      v181 = (__m128i *)operator new(0x20u);
      m128i_i8 = v181[1].m128i_i8;
      v164 = v181;
      v181->m128i_i64[0] = (__int64)v181[1].m128i_i64;
      s.m128i_i64[0] = v190;
      if ( v190 <= 0xF )
      {
        v183 = v190 + 1;
        if ( v190 )
        {
LABEL_284:
          memcpy(m128i_i8, v180, v183);
          v184 = s.m128i_i64[0];
          goto LABEL_285;
        }
        goto LABEL_295;
      }
      v185 = std::string::_M_create();
      v164->m128i_i64[0] = v185;
      m128i_i8 = (_BYTE *)v185;
      v186 = s.m128i_i64[0];
      v164[1].m128i_i64[0] = s.m128i_i64[0];
      v183 = v186 + 1;
      if ( !v186 )
      {
LABEL_295:
        *m128i_i8 = *v180;
        v184 = s.m128i_i64[0];
        goto LABEL_285;
      }
      v184 = -1;
      if ( v183 )
        goto LABEL_284;
LABEL_285:
      v164->m128i_i64[1] = v184;
LABEL_274:
      v221 = v164;
LABEL_231:
      v222 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &s2[1],
        (const __m128i *)&v218,
        2);
      s2[3] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v223,
        2);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    case 4:
      LOBYTE(v221) = (_BYTE)v206;
      goto LABEL_231;
    case 5:
    case 6:
      v221 = v206;
      goto LABEL_231;
    case 7:
      v221 = v206;
      goto LABEL_231;
    case 8:
      v171 = operator new(0x28u);
      v172 = (__int64 *)v206;
      v173 = (__m128i *)v171;
      v174 = v172[1] - *v172;
      *(_QWORD *)(v171 + 16) = 0;
      *(_OWORD *)v171 = 0;
      if ( v174 )
      {
        v175 = operator new(v174);
        v172 = (__int64 *)v206;
        v176 = (char *)v175;
      }
      else
      {
        v176 = nullptr;
      }
      v173[1].m128i_i64[0] = (__int64)&v176[v174];
      *v173 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v176, (__m128i)(unsigned __int64)v176);
      v177 = v172[1] - *v172;
      if ( v177 > 0 )
      {
        v189 = v172;
        v178 = (char *)memcpy(v176, (const void *)*v172, v172[1] - *v172);
        v172 = v189;
        v176 = &v178[v177];
      }
      v179 = v172[3];
      v173->m128i_i64[1] = (__int64)v176;
      v173[1].m128i_i64[1] = v179;
      v173[2].m128i_i8[0] = *((_BYTE *)v172 + 32);
      v221 = v173;
      goto LABEL_231;
    default:
      goto LABEL_231;
  }
}

