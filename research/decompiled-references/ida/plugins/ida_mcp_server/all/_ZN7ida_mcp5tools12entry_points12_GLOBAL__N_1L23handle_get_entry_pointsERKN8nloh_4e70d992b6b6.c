__int64 __fastcall ida_mcp::tools::entry_points::`anonymous namespace'::handle_get_entry_points(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // r14
  int v17; // eax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r15
  char v21; // si
  __int64 v22; // rdx
  size_t v23; // rax
  unsigned int v24; // r15d
  char *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r15
  _QWORD *v31; // r14
  size_t v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // r15
  size_t v36; // rdx
  int v37; // eax
  _QWORD *v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  char v42; // si
  __int64 v43; // rax
  __int64 v44; // r13
  _QWORD *v45; // r14
  size_t v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // r13
  size_t v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  const void *v53; // r15
  _QWORD *v54; // r13
  const void *v55; // rdx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  char v59; // si
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // r15
  __m128i *v67; // r14
  __int64 v68; // rdi
  __int64 v69; // r15
  __int64 v70; // rbx
  _QWORD *v71; // rax
  void *v72; // rdi
  void *v73; // rdi
  _QWORD *v74; // rdi
  unsigned int v75; // eax
  unsigned __int64 v76; // rdx
  char *v77; // rax
  char *v78; // r13
  unsigned int v79; // r15d
  unsigned int v80; // r15d
  unsigned int v81; // eax
  __int64 v82; // rcx
  _QWORD *v83; // r13
  __int64 v84; // rax
  int *v85; // rdi
  _QWORD *v86; // rbp
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // rax
  unsigned __int64 v94; // rsi
  char *v95; // rdx
  char *v96; // r11
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // edx
  __int64 v100; // rdi
  unsigned __int64 v101; // r14
  size_t v102; // rax
  unsigned __int64 v103; // r14
  size_t v104; // rax
  unsigned __int64 v105; // r15
  size_t v106; // rax
  __int64 i; // [rsp+18h] [rbp-1E0h]
  __int64 entry_ordinal; // [rsp+20h] [rbp-1D8h]
  _QWORD *s1; // [rsp+28h] [rbp-1D0h]
  __int64 entry_qty; // [rsp+38h] [rbp-1C0h]
  size_t v112; // [rsp+58h] [rbp-1A0h]
  char v113; // [rsp+60h] [rbp-198h]
  __int64 v114; // [rsp+68h] [rbp-190h]
  __int64 v115; // [rsp+80h] [rbp-178h] BYREF
  __int64 v116; // [rsp+88h] [rbp-170h]
  __m128i s; // [rsp+90h] [rbp-168h] BYREF
  char v118; // [rsp+B0h] [rbp-148h]
  __int128 v119; // [rsp+B8h] [rbp-140h]
  __int64 v120; // [rsp+C8h] [rbp-130h]
  __int128 v121; // [rsp+D0h] [rbp-128h]
  char v122; // [rsp+E0h] [rbp-118h]
  __int128 v123; // [rsp+E8h] [rbp-110h]
  __m128i v124; // [rsp+F8h] [rbp-100h]
  __int64 v125; // [rsp+108h] [rbp-F0h]
  void *v126; // [rsp+110h] [rbp-E8h]
  __int128 v127; // [rsp+118h] [rbp-E0h] BYREF
  char v128; // [rsp+128h] [rbp-D0h]
  __int128 v129; // [rsp+130h] [rbp-C8h]
  void *p_s2; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v131; // [rsp+148h] [rbp-B0h]
  __int64 s2; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v133; // [rsp+168h] [rbp-90h]
  __int64 v134; // [rsp+180h] [rbp-78h]
  char v135[8]; // [rsp+188h] [rbp-70h] BYREF
  char v136[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v137; // [rsp+1B8h] [rbp-40h]

  v137 = __readfsqword(0x28u);
  entry_qty = get_entry_qty();
  if ( !entry_qty )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v118 = 3;
    v1 = operator new(0x20u);
    strcpy((char *)(v1 + 16), "entry_count");
    *(_QWORD *)v1 = v1 + 16;
    *(_QWORD *)(v1 + 8) = 11;
    v119 = (unsigned __int64)v1;
    v120 = 5;
    v121 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v122 = 3;
    v2 = operator new(0x20u);
    *(_QWORD *)v2 = v2 + 16;
    strcpy((char *)(v2 + 16), "entry_points");
    *(_QWORD *)(v2 + 8) = 12;
    v123 = (unsigned __int64)v2;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v3 = _mm_load_si128(&s);
    v125 = 0;
    v124 = v3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v133 = 0;
    LOBYTE(v126) = 0;
    *(_QWORD *)&v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v126) = 3;
    v4 = operator new(0x20u);
    *(_QWORD *)v4 = v4 + 16;
    strcpy((char *)(v4 + 16), "note");
    *(_QWORD *)(v4 + 8) = 4;
    v128 = 0;
    *(_QWORD *)&v129 = 0;
    v127 = (unsigned __int64)v4;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v128 = 3;
    v5 = (__int64 *)operator new(0x20u);
    v115 = 45;
    *v5 = (__int64)(v5 + 2);
    v6 = std::string::_M_create();
    v7 = v115;
    *v5 = v6;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E23E0);
    v5[2] = v7;
    *(__m128i *)v6 = si128;
    *(__m128i *)(v6 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E23F0);
    *(__m128i *)(v6 + 29) = _mm_load_si128((const __m128i *)&xmmword_3E2290);
    v9 = v115;
    v10 = *v5;
    v5[1] = v115;
    *(_BYTE *)(v10 + v9) = 0;
    v129 = (unsigned __int64)v5;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v134 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v11 = v135;
    do
    {
      v11 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v11 != (char *)&p_s2 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return a1;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  for ( i = 0; i != entry_qty; ++i )
  {
    while ( 1 )
    {
      entry_ordinal = get_entry_ordinal();
      get_entry();
      memset(&s, 0, 24);
      get_entry_name();
      strcpy((char *)&s2, "name");
      p_s2 = &s2;
      v131 = 4;
      v13 = operator new(0x30u);
      v14 = (_QWORD *)(v13 + 8);
      v15 = (_QWORD *)v13;
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = v13 + 8;
      *(_QWORD *)(v13 + 32) = v13 + 8;
      *(_QWORD *)(v13 + 40) = 0;
      v16 = operator new(0x50u);
      *(_QWORD *)(v16 + 32) = v16 + 48;
      v17 = s2;
      *(_QWORD *)(v16 + 40) = 4;
      *(_DWORD *)(v16 + 48) = v17;
      LOBYTE(v17) = BYTE4(s2);
      *(_QWORD *)(v16 + 64) = 0;
      *(_BYTE *)(v16 + 52) = v17;
      *(_QWORD *)(v16 + 72) = 0;
      p_s2 = &s2;
      v131 = 0;
      LOBYTE(s2) = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v15,
                                 v14,
                                 (const void *)(v16 + 48),
                                 4u);
      v20 = insert_hint_unique_pos;
      if ( v19 )
      {
        if ( v14 != (_QWORD *)v19 && !insert_hint_unique_pos )
        {
          v105 = *(_QWORD *)(v19 + 40);
          if ( v105 )
          {
            v106 = 4;
            if ( v105 <= 4 )
              v106 = *(_QWORD *)(v19 + 40);
            memcmp((const void *)(v16 + 48), *(const void **)(v19 + 32), v106);
          }
        }
        v20 = (_QWORD *)v16;
        std::_Rb_tree_insert_and_rebalance();
        ++v15[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v72 = *(void **)(v16 + 32);
        if ( (void *)(v16 + 48) != v72 )
          operator delete(v72, *(_QWORD *)(v16 + 48) + 1LL);
        operator delete((void *)v16, 0x50u);
      }
      if ( p_s2 != &s2 )
        operator delete(p_s2, s2 + 1);
      v21 = *((_BYTE *)v20 + 64);
      v22 = v20[9];
      v20[9] = 0;
      *((_BYTE *)v20 + 64) = 0;
      LOBYTE(v115) = v21;
      v116 = v22;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v126 = (char *)&v127 + 8;
      v23 = strlen(v136);
      v112 = v23;
      v24 = v23;
      if ( v23 > 0xF )
      {
        v71 = (_QWORD *)std::string::_M_create();
        v126 = v71;
        *((_QWORD *)&v127 + 1) = v112;
LABEL_81:
        if ( v24 >= 8 )
        {
          *v71 = *(_QWORD *)v136;
          *(_QWORD *)((char *)v71 + v24 - 8) = *(_QWORD *)&v135[v24];
          v76 = (unsigned __int64)(v71 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v77 = (char *)v71 - v76;
          v78 = (char *)(v136 - v77);
          v79 = ((_DWORD)v77 + v24) & 0xFFFFFFF8;
          if ( v79 >= 8 )
          {
            v80 = v79 & 0xFFFFFFF8;
            v81 = 0;
            do
            {
              v82 = v81;
              v81 += 8;
              *(_QWORD *)(v76 + v82) = *(_QWORD *)&v78[v82];
            }
            while ( v81 < v80 );
          }
        }
        else if ( (v24 & 4) != 0 )
        {
          *(_DWORD *)v71 = *(_DWORD *)v136;
          *(_DWORD *)((char *)v71 + v24 - 4) = *(_DWORD *)&v135[v24 + 4];
        }
        else if ( v24 )
        {
          *(_BYTE *)v71 = v136[0];
          if ( (v24 & 2) != 0 )
            *(_WORD *)((char *)v71 + v24 - 2) = *(_WORD *)&v135[v24 + 6];
        }
        v23 = v112;
        v25 = (char *)v126;
        goto LABEL_17;
      }
      if ( v23 == 1 )
      {
        BYTE8(v127) = v136[0];
        goto LABEL_16;
      }
      if ( v23 )
      {
        v71 = (_QWORD *)&v127 + 1;
        goto LABEL_81;
      }
LABEL_16:
      v25 = (char *)&v127 + 8;
LABEL_17:
      *(_QWORD *)&v127 = v23;
      v25[v23] = 0;
      v115 = 0;
      v116 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v26 = (_QWORD *)operator new(0x20u);
      v27 = v26 + 2;
      v28 = v26;
      v29 = v127;
      *v26 = v26 + 2;
      if ( v126 == (char *)&v127 + 8 )
      {
        v75 = v29 + 1;
        if ( (unsigned int)(v29 + 1) >= 8 )
        {
          v28[2] = *((_QWORD *)&v127 + 1);
          *(_QWORD *)((char *)v27 + v75 - 8) = *(_QWORD *)((char *)&v127 + v75);
          v94 = (unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v95 = (char *)v27 - v94;
          v96 = (char *)((char *)&v127 + 8 - v95);
          v97 = ((_DWORD)v95 + v75) & 0xFFFFFFF8;
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
        else if ( (v75 & 4) != 0 )
        {
          *((_DWORD *)v28 + 4) = DWORD2(v127);
          *(_DWORD *)((char *)v27 + v75 - 4) = *(_DWORD *)((char *)&v127 + v75 + 4);
        }
        else if ( (_DWORD)v29 != -1 )
        {
          *((_BYTE *)v28 + 16) = BYTE8(v127);
          if ( (v75 & 2) != 0 )
            *(_WORD *)((char *)v27 + v75 - 2) = *(_WORD *)((char *)&v127 + v75 + 6);
        }
      }
      else
      {
        *v26 = v126;
        v26[2] = *((_QWORD *)&v127 + 1);
      }
      v30 = v15[2];
      v28[1] = v29;
      v31 = v14;
      strcpy((char *)&s2, "address");
      v126 = (char *)&v127 + 8;
      *(_QWORD *)&v127 = 0;
      BYTE8(v127) = 0;
      p_s2 = &s2;
      v131 = 7;
      if ( !v30 )
        goto LABEL_36;
      s1 = v14;
      do
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v30 + 40);
          if ( !v34 )
            break;
          v32 = 7;
          if ( v34 <= 7 )
            v32 = *(_QWORD *)(v30 + 40);
          v33 = memcmp(*(const void **)(v30 + 32), &s2, v32);
          if ( v33 || (v33 = v34 - 7, (__int64)(v34 - 7) <= 0x7FFFFFFF) )
          {
            if ( v33 < 0 )
              break;
          }
          v31 = (_QWORD *)v30;
          v30 = *(_QWORD *)(v30 + 16);
          if ( !v30 )
            goto LABEL_29;
        }
        v30 = *(_QWORD *)(v30 + 24);
      }
      while ( v30 );
LABEL_29:
      v14 = s1;
      if ( s1 == v31 )
        goto LABEL_36;
      v35 = v31[5];
      if ( v35 )
      {
        v36 = 7;
        if ( v35 <= 7 )
          v36 = v31[5];
        if ( (v37 = memcmp(&s2, (const void *)v31[4], v36)) == 0
          && (v37 = 7 - v35, (__int64)(7 - v35) < (__int64)0xFFFFFFFF80000000LL)
          || v37 < 0 )
        {
LABEL_36:
          v38 = (_QWORD *)operator new(0x50u);
          v38[4] = v38 + 6;
          v39 = s2;
          v38[5] = 7;
          v38[6] = v39;
          v38[8] = 0;
          v38[9] = 0;
          p_s2 = &s2;
          v131 = 0;
          LOBYTE(s2) = 0;
          v40 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v15,
                  v31,
                  v38 + 6,
                  7u);
          v31 = v40;
          if ( v41 )
          {
            if ( v14 != (_QWORD *)v41 && !v40 )
            {
              v103 = *(_QWORD *)(v41 + 40);
              if ( v103 )
              {
                v104 = 7;
                if ( v103 <= 7 )
                  v104 = *(_QWORD *)(v41 + 40);
                memcmp(v38 + 6, *(const void **)(v41 + 32), v104);
              }
            }
            v31 = v38;
            std::_Rb_tree_insert_and_rebalance();
            ++v15[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v74 = (_QWORD *)v38[4];
            if ( v38 + 6 != v74 )
              operator delete(v74, v38[6] + 1LL);
            operator delete(v38, 0x50u);
          }
          if ( p_s2 != &s2 )
            operator delete(p_s2, s2 + 1);
        }
      }
      v42 = *((_BYTE *)v31 + 64);
      v43 = v31[9];
      *((_BYTE *)v31 + 64) = 3;
      v31[9] = v28;
      LOBYTE(v115) = v42;
      v116 = v43;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v126 != (char *)&v127 + 8 )
        operator delete(v126, *((_QWORD *)&v127 + 1) + 1LL);
      v44 = v15[2];
      v45 = v14;
      strcpy((char *)&s2, "ordinal");
      p_s2 = &s2;
      v131 = 7;
      if ( !v44 )
        goto LABEL_61;
      do
      {
        while ( 1 )
        {
          v48 = *(_QWORD *)(v44 + 40);
          if ( !v48 )
            break;
          v46 = 7;
          if ( v48 <= 7 )
            v46 = *(_QWORD *)(v44 + 40);
          v47 = memcmp(*(const void **)(v44 + 32), &s2, v46);
          if ( v47 || (v47 = v48 - 7, (__int64)(v48 - 7) <= 0x7FFFFFFF) )
          {
            if ( v47 < 0 )
              break;
          }
          v45 = (_QWORD *)v44;
          v44 = *(_QWORD *)(v44 + 16);
          if ( !v44 )
            goto LABEL_54;
        }
        v44 = *(_QWORD *)(v44 + 24);
      }
      while ( v44 );
LABEL_54:
      if ( v14 == v45 )
        goto LABEL_61;
      v49 = v45[5];
      if ( v49 )
      {
        v50 = 7;
        if ( v49 <= 7 )
          v50 = v45[5];
        if ( (v51 = memcmp(&s2, (const void *)v45[4], v50)) == 0
          && (v51 = 7 - v49, (__int64)(7 - v49) < (__int64)0xFFFFFFFF80000000LL)
          || v51 < 0 )
        {
LABEL_61:
          v52 = operator new(0x50u);
          v53 = (const void *)(v52 + 48);
          v54 = (_QWORD *)v52;
          *(_QWORD *)(v52 + 32) = v52 + 48;
          v55 = (const void *)(v52 + 48);
          v56 = s2;
          v54[5] = 7;
          v54[6] = v56;
          v54[8] = 0;
          v54[9] = 0;
          p_s2 = &s2;
          v131 = 0;
          LOBYTE(s2) = 0;
          v57 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v15,
                  v45,
                  v55,
                  7u);
          v45 = v57;
          if ( v58 )
          {
            if ( !v57 && v14 != (_QWORD *)v58 )
            {
              v101 = *(_QWORD *)(v58 + 40);
              if ( v101 )
              {
                v102 = 7;
                if ( v101 <= 7 )
                  v102 = *(_QWORD *)(v58 + 40);
                memcmp(v53, *(const void **)(v58 + 32), v102);
              }
            }
            v45 = v54;
            std::_Rb_tree_insert_and_rebalance();
            ++v15[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v73 = (void *)v54[4];
            if ( v53 != v73 )
              operator delete(v73, v54[6] + 1LL);
            operator delete(v54, 0x50u);
          }
          if ( p_s2 != &s2 )
            operator delete(p_s2, s2 + 1);
        }
      }
      v59 = *((_BYTE *)v45 + 64);
      *((_BYTE *)v45 + 64) = 6;
      v60 = v45[9];
      LOBYTE(v115) = v59;
      v45[9] = entry_ordinal;
      v116 = v60;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !v113 )
      {
        v113 = 2;
        v61 = operator new(0x18u);
        *(_QWORD *)(v61 + 16) = 0;
        v62 = (__int64 *)v61;
        v114 = v61;
        *(_OWORD *)v61 = 0;
LABEL_69:
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        goto LABEL_70;
      }
      if ( v113 != 2 )
        JUMPOUT(0xD36AE);
      v62 = (__int64 *)v114;
      v83 = *(_QWORD **)(v114 + 8);
      if ( *(_QWORD **)(v114 + 16) == v83 )
        goto LABEL_69;
      *v83 = 1;
      v83[1] = 0;
      v84 = operator new(0x30u);
      v85 = (int *)v15[2];
      *(_DWORD *)(v84 + 8) = 0;
      v86 = (_QWORD *)v84;
      *(_QWORD *)(v84 + 16) = 0;
      *(_QWORD *)(v84 + 24) = v84 + 8;
      *(_QWORD *)(v84 + 32) = v84 + 8;
      *(_QWORD *)(v84 + 40) = 0;
      if ( v85 )
      {
        v87 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v85,
                v84 + 8);
        v88 = v87;
        do
        {
          v89 = v87;
          v87 = *(_QWORD *)(v87 + 16);
        }
        while ( v87 );
        v86[3] = v89;
        v90 = v88;
        do
        {
          v91 = v90;
          v90 = *(_QWORD *)(v90 + 24);
        }
        while ( v90 );
        v92 = v15[5];
        v86[4] = v91;
        v86[2] = v88;
        v86[5] = v92;
        v93 = *(_QWORD **)(v114 + 8);
      }
      else
      {
        v93 = v83;
      }
      v83[1] = v86;
      *(_QWORD *)(v114 + 8) = v93 + 2;
LABEL_70:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !s.m128i_i64[0] )
        break;
      s.m128i_i64[1] = 0;
      qfree();
      if ( entry_qty == ++i )
        goto LABEL_72;
    }
  }
LABEL_72:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v63 = operator new(0x20u);
  strcpy((char *)(v63 + 16), "entry_count");
  *(_QWORD *)v63 = v63 + 16;
  *(_QWORD *)(v63 + 8) = 11;
  v124.m128i_i8[0] = 6;
  v124.m128i_i64[1] = entry_qty;
  v125 = 0;
  v123 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  s2 = 0;
  LOBYTE(v126) = 0;
  *(_QWORD *)&v127 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v126) = 3;
  v64 = operator new(0x20u);
  *(_QWORD *)v64 = v64 + 16;
  strcpy((char *)(v64 + 16), "entry_points");
  *(_QWORD *)(v64 + 8) = 12;
  *(_QWORD *)&v129 = 0;
  v128 = 2;
  v127 = (unsigned __int64)v64;
  v65 = operator new(0x18u);
  v66 = v62[1] - *v62;
  v67 = (__m128i *)v65;
  *(_QWORD *)(v65 + 16) = 0;
  *(_OWORD *)v65 = 0;
  if ( v66 )
    v68 = operator new(v66);
  else
    v68 = 0;
  v67[1].m128i_i64[0] = v68 + v66;
  *v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v68);
  v69 = v62[1];
  v70 = *v62;
  v115 = v68;
  for ( s = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)&v115); v69 != v70; v115 += 16 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v70 += 16;
    v68 = v115 + 16;
  }
  v67->m128i_i64[1] = v68;
  v129 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

