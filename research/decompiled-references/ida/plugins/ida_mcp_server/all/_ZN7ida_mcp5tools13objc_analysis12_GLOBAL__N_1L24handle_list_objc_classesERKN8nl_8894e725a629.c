_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_classes(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  char v2; // al
  size_t v3; // rax
  unsigned int v4; // r14d
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int8 v11; // si
  __int64 v12; // rdx
  char *v13; // r15
  __int64 *v14; // rax
  __int64 *v15; // r13
  size_t v16; // rax
  void *v17; // rcx
  size_t v18; // r8
  __int64 v19; // rax
  __int8 v20; // si
  __int64 v21; // rdx
  char v22; // r14
  size_t v23; // rax
  unsigned int v24; // r15d
  __int64 *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rax
  __int8 v31; // si
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // r12
  __int64 v35; // rax
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rax
  unsigned __int64 v54; // rdx
  char *v55; // rax
  char *v56; // r13
  unsigned int v57; // r15d
  unsigned int v58; // r15d
  unsigned int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // esi
  unsigned __int64 v62; // rdi
  char *v63; // r8
  unsigned int v64; // eax
  unsigned int v65; // edx
  __int64 v66; // rsi
  unsigned __int64 v67; // rdx
  char *v68; // rax
  char *v69; // r13
  unsigned int v70; // r14d
  unsigned int v71; // r14d
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 *v76; // rbp
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __m128i v82; // xmm0
  unsigned __int64 v83; // rdi
  char *v84; // r8
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 *v89; // [rsp+0h] [rbp-1F8h]
  int v90; // [rsp+0h] [rbp-1F8h]
  char *v91; // [rsp+8h] [rbp-1F0h]
  int v92; // [rsp+8h] [rbp-1F0h]
  __int64 v93; // [rsp+10h] [rbp-1E8h]
  _QWORD *v94; // [rsp+10h] [rbp-1E8h]
  _QWORD *v95; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 *segm_by_name; // [rsp+20h] [rbp-1D8h]
  __int64 qword; // [rsp+28h] [rbp-1D0h]
  void *dest; // [rsp+30h] [rbp-1C8h]
  void *desta; // [rsp+30h] [rbp-1C8h]
  char v100; // [rsp+3Bh] [rbp-1BDh]
  int v101; // [rsp+3Ch] [rbp-1BCh]
  char v103; // [rsp+60h] [rbp-198h] BYREF
  __int64 v104; // [rsp+68h] [rbp-190h]
  size_t v105; // [rsp+70h] [rbp-188h]
  __int64 v106; // [rsp+78h] [rbp-180h]
  char *v107; // [rsp+80h] [rbp-178h]
  __int128 v108; // [rsp+88h] [rbp-170h]
  __int64 v109; // [rsp+A0h] [rbp-158h]
  __int128 v110; // [rsp+A8h] [rbp-150h]
  __m128i v111; // [rsp+C0h] [rbp-138h] BYREF
  char v112; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v113; // [rsp+E8h] [rbp-110h]
  char v114; // [rsp+F8h] [rbp-100h]
  __int128 v115; // [rsp+100h] [rbp-F8h]
  char v116; // [rsp+110h] [rbp-E8h] BYREF
  __int128 v117; // [rsp+118h] [rbp-E0h]
  __m128i v118; // [rsp+128h] [rbp-D0h]
  __int64 v119; // [rsp+138h] [rbp-C0h]
  __m128i v120; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v121; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v122; // [rsp+158h] [rbp-A0h] BYREF
  __int64 v123; // [rsp+168h] [rbp-90h]
  char s[24]; // [rsp+170h] [rbp-88h] BYREF
  _BYTE v125[8]; // [rsp+188h] [rbp-70h]
  char v126[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v127; // [rsp+1B8h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  segm_by_name = (unsigned __int64 *)get_segm_by_name();
  if ( !segm_by_name )
  {
    segm_by_name = (unsigned __int64 *)get_segm_by_name();
    if ( !segm_by_name )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v112 = 3;
      v75 = operator new(0x20u);
      *(_DWORD *)(v75 + 16) = 1869771365;
      *(_QWORD *)v75 = v75 + 16;
      *(_BYTE *)(v75 + 20) = 114;
      *(_QWORD *)(v75 + 8) = 5;
      *(_BYTE *)(v75 + 21) = 0;
      v113 = (unsigned __int64)v75;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v114 = 3;
      v76 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v76,
        "No __objc_classrefs segment",
        v77,
        v78,
        v79,
        v80,
        (int)v89,
        (int)v91,
        v93);
      v115 = (unsigned __int64)v76;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v120,
        (const __m128i *)&v112);
      v121 = 0;
      v116 = 0;
      *(_QWORD *)&v117 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v116 = 3;
      v81 = operator new(0x20u);
      strcpy((char *)(v81 + 16), "classes");
      *(_QWORD *)v81 = v81 + 16;
      *(_QWORD *)(v81 + 8) = 7;
      v117 = (unsigned __int64)v81;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v82 = _mm_load_si128(&v111);
      v119 = 0;
      v118 = v82;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v122,
        (const __m128i *)&v116);
      v123 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v120);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    }
  }
  v111.m128i_i32[0] = 100;
  v101 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v100 = 0;
  v94 = nullptr;
  v1 = *segm_by_name;
  if ( *segm_by_name < segm_by_name[1] )
  {
    v2 = 0;
LABEL_4:
    if ( v2 != 2 )
    {
      if ( v101 > (v2 != 0) )
        goto LABEL_6;
      goto LABEL_46;
    }
    while ( 1 )
    {
      v100 = 2;
      if ( v101 <= (int)((__int64)(v94[1] - *v94) >> 4) )
        goto LABEL_46;
LABEL_6:
      v108 = 0;
      v107 = nullptr;
      get_ea_name();
      if ( (unsigned __int64)v108 <= 1 )
      {
        if ( v107 )
        {
          *(_QWORD *)&v108 = 0;
          qfree();
        }
        v1 += 8LL;
        if ( v1 < segm_by_name[1] )
        {
          v2 = v100;
          goto LABEL_4;
        }
        goto LABEL_46;
      }
      qword = get_qword();
      v109 = 0;
      v110 = 0;
      if ( (unsigned __int64)(qword - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        get_ea_name();
      v104 = 0;
      qsnprintf();
      v120.m128i_i64[0] = (__int64)&v121;
      v3 = strlen(s);
      v111.m128i_i64[0] = v3;
      v4 = v3;
      if ( v3 > 0xF )
      {
        v51 = (__int64 *)std::string::_M_create();
        v120.m128i_i64[0] = (__int64)v51;
        v121 = v111.m128i_i64[0];
      }
      else
      {
        if ( v3 == 1 )
        {
          LOBYTE(v121) = s[0];
LABEL_12:
          v5 = &v121;
          goto LABEL_13;
        }
        if ( !v3 )
          goto LABEL_12;
        v51 = &v121;
      }
      if ( v4 < 8 )
        break;
      *v51 = *(_QWORD *)s;
      *(__int64 *)((char *)v51 + v4 - 8) = *(_QWORD *)&s[v4 - 8];
      v67 = (unsigned __int64)(v51 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v51 - v67;
      v69 = (char *)(s - v68);
      v70 = ((_DWORD)v68 + v4) & 0xFFFFFFF8;
      if ( v70 < 8 )
        goto LABEL_61;
      v71 = v70 & 0xFFFFFFF8;
      v72 = 0;
      do
      {
        v73 = v72;
        v72 += 8;
        *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
      }
      while ( v72 < v71 );
      v3 = v111.m128i_i64[0];
      v5 = (__int64 *)v120.m128i_i64[0];
LABEL_13:
      v120.m128i_i64[1] = v3;
      *((_BYTE *)v5 + v3) = 0;
      v89 = &v111.m128i_i64[1];
      v111 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v6 = operator new(0x20u);
      v7 = v6 + 16;
      v8 = v6;
      v9 = v120.m128i_i64[1];
      *(_QWORD *)v6 = v6 + 16;
      if ( (__int64 *)v120.m128i_i64[0] == &v121 )
      {
        v61 = v9 + 1;
        if ( (unsigned int)(v9 + 1) < 8 )
        {
          if ( (v61 & 4) != 0 )
          {
            *(_DWORD *)(v6 + 16) = v121;
            *(_DWORD *)(v7 + v61 - 4) = *(__int32 *)((char *)&v120.m128i_i32[3] + v61);
          }
          else if ( (_DWORD)v9 != -1 )
          {
            *(_BYTE *)(v6 + 16) = v121;
            if ( (v61 & 2) != 0 )
              *(_WORD *)(v7 + v61 - 2) = *(__int16 *)((char *)&v120.m128i_i16[7] + v61);
          }
        }
        else
        {
          *(_QWORD *)(v6 + 16) = v121;
          *(_QWORD *)(v7 + v61 - 8) = *(__int64 *)((char *)&v120.m128i_i64[1] + v61);
          v62 = (v6 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          v63 = (char *)&v121 - (v7 - v62);
          if ( ((v61 + (_DWORD)v7 - (_DWORD)v62) & 0xFFFFFFF8) >= 8 )
          {
            v64 = (v61 + v7 - v62) & 0xFFFFFFF8;
            v65 = 0;
            do
            {
              v66 = v65;
              v65 += 8;
              *(_QWORD *)(v62 + v66) = *(_QWORD *)&v63[v66];
            }
            while ( v65 < v64 );
          }
        }
      }
      else
      {
        *(_QWORD *)v6 = v120.m128i_i64[0];
        *(_QWORD *)(v6 + 16) = v121;
      }
      *(_QWORD *)(v8 + 8) = v9;
      v120.m128i_i64[0] = (__int64)&v121;
      v120.m128i_i64[1] = 0;
      LOBYTE(v121) = 0;
      v103 = 0;
      v91 = &v103;
      v10 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v11 = *(_BYTE *)v10;
      v12 = *(_QWORD *)(v10 + 8);
      *(_BYTE *)v10 = 3;
      *(_QWORD *)(v10 + 8) = v8;
      v111.m128i_i8[0] = v11;
      v111.m128i_i64[1] = v12;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (__int64 *)v120.m128i_i64[0] != &v121 )
        operator delete((void *)v120.m128i_i64[0], v121 + 1);
      v13 = v107;
      if ( !(_QWORD)v108 )
        v13 = _qstring<char>::c_str(void)const::nullstr;
      v111 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v14 = (__int64 *)operator new(0x20u);
      v15 = v14;
      *v14 = (__int64)(v14 + 2);
      if ( !v13 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      dest = v14 + 2;
      v16 = strlen(v13);
      v17 = dest;
      v105 = v16;
      v18 = v16;
      if ( v16 > 0xF )
      {
        desta = (void *)v16;
        v52 = std::string::_M_create();
        *v15 = v52;
        v17 = (void *)v52;
        v18 = (size_t)desta;
        v15[2] = v105;
      }
      else
      {
        if ( v16 == 1 )
        {
          *((_BYTE *)v15 + 16) = *v13;
          goto LABEL_23;
        }
        if ( !v16 )
          goto LABEL_23;
      }
      memcpy(v17, v13, v18);
      v16 = v105;
      v17 = (void *)*v15;
LABEL_23:
      v15[1] = v16;
      *((_BYTE *)v17 + v16) = 0;
      v19 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v20 = *(_BYTE *)v19;
      v21 = *(_QWORD *)(v19 + 8);
      *(_BYTE *)v19 = 3;
      v22 = v103;
      *(_QWORD *)(v19 + 8) = v15;
      v111.m128i_i8[0] = v20;
      v111.m128i_i64[1] = v21;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (unsigned __int64)v110 > 1 )
      {
        qsnprintf();
        v120.m128i_i64[0] = (__int64)&v121;
        v23 = strlen(v126);
        v111.m128i_i64[0] = v23;
        v24 = v23;
        if ( v23 <= 0xF )
        {
          if ( v23 == 1 )
          {
            LOBYTE(v121) = v126[0];
LABEL_27:
            v25 = &v121;
          }
          else
          {
            if ( !v23 )
              goto LABEL_27;
            v53 = &v121;
LABEL_67:
            if ( v24 < 8 )
            {
              if ( (v24 & 4) != 0 )
              {
                *(_DWORD *)v53 = *(_DWORD *)v126;
                *(_DWORD *)((char *)v53 + v24 - 4) = *(_DWORD *)&v125[v24 + 4];
              }
              else if ( v24 )
              {
                *(_BYTE *)v53 = v126[0];
                if ( (v24 & 2) != 0 )
                  *(_WORD *)((char *)v53 + v24 - 2) = *(_WORD *)&v125[v24 + 6];
              }
            }
            else
            {
              *v53 = *(_QWORD *)v126;
              *(__int64 *)((char *)v53 + v24 - 8) = *(_QWORD *)&v125[v24];
              v54 = (unsigned __int64)(v53 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v55 = (char *)v53 - v54;
              v56 = (char *)(v126 - v55);
              v57 = ((_DWORD)v55 + v24) & 0xFFFFFFF8;
              if ( v57 >= 8 )
              {
                v58 = v57 & 0xFFFFFFF8;
                v59 = 0;
                do
                {
                  v60 = v59;
                  v59 += 8;
                  *(_QWORD *)(v54 + v60) = *(_QWORD *)&v56[v60];
                }
                while ( v59 < v58 );
              }
            }
            v23 = v111.m128i_i64[0];
            v25 = (__int64 *)v120.m128i_i64[0];
          }
          v120.m128i_i64[1] = v23;
          *((_BYTE *)v25 + v23) = 0;
          v111 = 0u;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v26 = (_QWORD *)operator new(0x20u);
          v27 = v26 + 2;
          v28 = v26;
          v29 = v120.m128i_i64[1];
          *v26 = v26 + 2;
          if ( (__int64 *)v120.m128i_i64[0] == &v121 )
          {
            v74 = v29 + 1;
            if ( (unsigned int)(v29 + 1) >= 8 )
            {
              v26[2] = v121;
              *(_QWORD *)((char *)v27 + v74 - 8) = *(__int64 *)((char *)&v120.m128i_i64[1] + v74);
              v83 = (unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v84 = (char *)((char *)&v121 - ((char *)v27 - v83));
              v85 = ((_DWORD)v27 - v83 + v74) & 0xFFFFFFF8;
              if ( v85 >= 8 )
              {
                v86 = v85 & 0xFFFFFFF8;
                v87 = 0;
                do
                {
                  v88 = v87;
                  v87 += 8;
                  *(_QWORD *)(v83 + v88) = *(_QWORD *)&v84[v88];
                }
                while ( v87 < v86 );
              }
            }
            else if ( (v74 & 4) != 0 )
            {
              *((_DWORD *)v26 + 4) = v121;
              *(_DWORD *)((char *)v27 + v74 - 4) = *(__int32 *)((char *)&v120.m128i_i32[3] + v74);
            }
            else if ( (_DWORD)v29 != -1 )
            {
              *((_BYTE *)v26 + 16) = v121;
              if ( (v74 & 2) != 0 )
                *(_WORD *)((char *)v27 + v74 - 2) = *(__int16 *)((char *)&v120.m128i_i16[7] + v74);
            }
          }
          else
          {
            *v26 = v120.m128i_i64[0];
            v26[2] = v121;
          }
          v28[1] = v29;
          v120.m128i_i64[0] = (__int64)&v121;
          v120.m128i_i64[1] = 0;
          LOBYTE(v121) = 0;
          v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v31 = *(_BYTE *)v30;
          v32 = *(_QWORD *)(v30 + 8);
          *(_BYTE *)v30 = 3;
          v22 = v103;
          *(_QWORD *)(v30 + 8) = v28;
          v111.m128i_i8[0] = v31;
          v111.m128i_i64[1] = v32;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( (__int64 *)v120.m128i_i64[0] != &v121 )
            operator delete((void *)v120.m128i_i64[0], v121 + 1);
          goto LABEL_32;
        }
        v53 = (__int64 *)std::string::_M_create();
        v120.m128i_i64[0] = (__int64)v53;
        v121 = v111.m128i_i64[0];
        goto LABEL_67;
      }
LABEL_32:
      v33 = xrefblk_t_first_to();
      LODWORD(v34) = 0;
      while ( 1 )
      {
        if ( !v33 )
        {
          v34 = (int)v34;
          goto LABEL_37;
        }
        if ( (_DWORD)v34 == 50 )
          break;
        LODWORD(v34) = v34 + 1;
        v33 = xrefblk_t_next_to();
      }
      v34 = 50;
LABEL_37:
      v103 = v22;
      v35 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v36 = *(_BYTE *)v35;
      v37 = *(_QWORD *)(v35 + 8);
      *(_BYTE *)v35 = 5;
      LOBYTE(v105) = v36;
      *(_QWORD *)(v35 + 8) = v34;
      v106 = v37;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v100 )
      {
        if ( v94[2] != v94[1] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v94[1] += 16LL;
          goto LABEL_40;
        }
      }
      else
      {
        v38 = operator new(0x18u);
        *(_QWORD *)(v38 + 16) = 0;
        v94 = (_QWORD *)v38;
        *(_OWORD *)v38 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_40:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      if ( v107 )
      {
        *(_QWORD *)&v108 = 0;
        qfree();
      }
      v1 += 8LL;
      if ( v1 >= segm_by_name[1] )
      {
        v100 = 2;
        goto LABEL_46;
      }
    }
    if ( (v4 & 4) != 0 )
    {
      *(_DWORD *)v51 = *(_DWORD *)s;
      *(_DWORD *)((char *)v51 + v4 - 4) = *(_DWORD *)&s[v4 - 4];
    }
    else if ( v4 )
    {
      *(_BYTE *)v51 = s[0];
      if ( (v4 & 2) != 0 )
        *(_WORD *)((char *)v51 + v4 - 2) = *(_WORD *)&s[v4 - 2];
    }
LABEL_61:
    v3 = v111.m128i_i64[0];
    v5 = (__int64 *)v120.m128i_i64[0];
    goto LABEL_13;
  }
LABEL_46:
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v39,
    "class_count",
    v40,
    v41,
    v42,
    v43,
    (int)v89,
    (int)v91,
    (__int64)v94);
  v113 = (unsigned __int64)v39;
  if ( v100 == 2 )
    v44 = (__int64)(v95[1] - *v95) >> 4;
  else
    v44 = v100 != 0;
  v114 = 6;
  v115 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v120,
    (const __m128i *)&v112);
  v121 = 0;
  v116 = 0;
  *(_QWORD *)&v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "classes", v46, v47, v48, v49, v90, v92, (__int64)v95);
  v117 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v122,
    (const __m128i *)&v116);
  v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v120);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

