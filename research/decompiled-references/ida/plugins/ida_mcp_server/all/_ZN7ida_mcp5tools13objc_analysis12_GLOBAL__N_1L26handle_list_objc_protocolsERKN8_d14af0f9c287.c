_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_protocols(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // r12
  size_t v3; // rax
  unsigned int v4; // r15d
  size_t *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // si
  __int64 v12; // rdx
  size_t v13; // rax
  unsigned int v14; // r14d
  size_t *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rdx
  __int64 *v23; // rbp
  char v24; // r13
  const char *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char v31; // si
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 *v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // rsi
  char *v50; // rdx
  char *v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rdi
  unsigned int v56; // eax
  unsigned __int64 v57; // rsi
  char *v58; // rdx
  char *v59; // r8
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rdi
  unsigned __int64 v64; // rdx
  char *v65; // rax
  char *v66; // r13
  unsigned int v67; // r14d
  unsigned int v68; // r14d
  unsigned int v69; // eax
  __int64 v70; // rcx
  unsigned __int64 v71; // rdx
  char *v72; // rax
  char *v73; // r13
  unsigned int v74; // r15d
  unsigned int v75; // r15d
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 *v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __m128i v93; // xmm0
  int v94; // [rsp+0h] [rbp-1A8h]
  int v95; // [rsp+0h] [rbp-1A8h]
  int v96; // [rsp+0h] [rbp-1A8h]
  int v97; // [rsp+0h] [rbp-1A8h]
  char *v98; // [rsp+8h] [rbp-1A0h]
  int v99; // [rsp+8h] [rbp-1A0h]
  int v100; // [rsp+8h] [rbp-1A0h]
  int v101; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 *segm_by_name; // [rsp+10h] [rbp-198h]
  __int64 v103; // [rsp+10h] [rbp-198h]
  __int64 v104; // [rsp+10h] [rbp-198h]
  __int64 v105; // [rsp+10h] [rbp-198h]
  char v106; // [rsp+23h] [rbp-185h]
  int v107; // [rsp+24h] [rbp-184h]
  char v109; // [rsp+50h] [rbp-158h] BYREF
  __int64 v110; // [rsp+58h] [rbp-150h]
  size_t v111; // [rsp+60h] [rbp-148h]
  __int64 v112; // [rsp+68h] [rbp-140h]
  __m128i v113; // [rsp+70h] [rbp-138h] BYREF
  char v114; // [rsp+90h] [rbp-118h] BYREF
  __int128 v115; // [rsp+98h] [rbp-110h]
  char v116; // [rsp+A8h] [rbp-100h]
  __int128 v117; // [rsp+B0h] [rbp-F8h]
  char v118; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v119; // [rsp+C8h] [rbp-E0h]
  __m128i v120; // [rsp+D8h] [rbp-D0h]
  __int64 v121; // [rsp+E8h] [rbp-C0h]
  __m128i v122; // [rsp+F0h] [rbp-B8h] BYREF
  size_t v123; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v124; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v125; // [rsp+118h] [rbp-90h]
  char s[24]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v127[8]; // [rsp+138h] [rbp-70h]
  char v128[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v129; // [rsp+168h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  v113.m128i_i32[0] = 100;
  v107 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v1 = nullptr;
  v106 = 0;
  segm_by_name = (unsigned __int64 *)get_segm_by_name();
  if ( !segm_by_name )
  {
    segm_by_name = (unsigned __int64 *)get_segm_by_name();
    if ( !segm_by_name )
    {
      segm_by_name = (unsigned __int64 *)get_segm_by_name();
      if ( !segm_by_name )
      {
        v114 = 0;
        *(_QWORD *)&v115 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v114 = 3;
        v78 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v78, "error", v79, v80, v81, v82, v94, (int)v98, 0);
        v116 = 0;
        v115 = (unsigned __int64)v78;
        *(_QWORD *)&v117 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v116 = 3;
        v83 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v83,
          "No __objc_protolist segment",
          v84,
          v85,
          v86,
          v87,
          v96,
          v100,
          v104);
        v117 = (unsigned __int64)v83;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v122,
          (const __m128i *)&v114);
        v123 = 0;
        v118 = 0;
        *(_QWORD *)&v119 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v118 = 3;
        v88 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v88, "protocols", v89, v90, v91, v92, v97, v101, v105);
        v119 = (unsigned __int64)v88;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v93 = _mm_load_si128(&v113);
        v121 = 0;
        v120 = v93;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v124,
          (const __m128i *)&v118);
        v125 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          a1,
          &v122);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_36;
      }
    }
  }
  v2 = *segm_by_name;
  if ( *segm_by_name < segm_by_name[1] )
  {
LABEL_5:
    if ( v106 != 2 )
    {
      if ( v107 > (v106 != 0) )
        goto LABEL_7;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v106 = 2;
      if ( v107 <= (int)((__int64)(v1[1] - *v1) >> 4) )
        break;
LABEL_7:
      if ( (unsigned __int64)(get_qword() - 1) > 0xFFFFFFFFFFFFFFFDLL )
      {
        v2 += 8LL;
        if ( v2 >= segm_by_name[1] )
          break;
        goto LABEL_5;
      }
      memset(&v113, 0, 24);
      get_ea_name();
      v110 = 0;
      qsnprintf();
      v122.m128i_i64[0] = (__int64)&v123;
      v3 = strlen(s);
      v111 = v3;
      v4 = v3;
      if ( v3 > 0xF )
      {
        v46 = (_QWORD *)std::string::_M_create();
        v122.m128i_i64[0] = (__int64)v46;
        v123 = v111;
      }
      else
      {
        if ( v3 == 1 )
        {
          LOBYTE(v123) = s[0];
LABEL_11:
          v5 = &v123;
          goto LABEL_12;
        }
        if ( !v3 )
          goto LABEL_11;
        v46 = &v123;
      }
      if ( v4 >= 8 )
      {
        *v46 = *(_QWORD *)s;
        *(_QWORD *)((char *)v46 + v4 - 8) = *(_QWORD *)&s[v4 - 8];
        v71 = (unsigned __int64)(v46 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v72 = (char *)v46 - v71;
        v73 = (char *)(s - v72);
        v74 = ((_DWORD)v72 + v4) & 0xFFFFFFF8;
        if ( v74 >= 8 )
        {
          v75 = v74 & 0xFFFFFFF8;
          v76 = 0;
          do
          {
            v77 = v76;
            v76 += 8;
            *(_QWORD *)(v71 + v77) = *(_QWORD *)&v73[v77];
          }
          while ( v76 < v75 );
        }
      }
      else if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)v46 = *(_DWORD *)s;
        *(_DWORD *)((char *)v46 + v4 - 4) = *(_DWORD *)&s[v4 - 4];
      }
      else if ( v4 )
      {
        *(_BYTE *)v46 = s[0];
        if ( (v4 & 2) != 0 )
          *(_WORD *)((char *)v46 + v4 - 2) = *(_WORD *)&s[v4 - 2];
      }
      v3 = v111;
      v5 = (size_t *)v122.m128i_i64[0];
LABEL_12:
      v122.m128i_i64[1] = v3;
      *((_BYTE *)v5 + v3) = 0;
      v111 = 0;
      v112 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v6 = (_QWORD *)operator new(0x20u);
      v7 = v6 + 2;
      v8 = v6;
      v9 = v122.m128i_i64[1];
      *v6 = v6 + 2;
      if ( (size_t *)v122.m128i_i64[0] == &v123 )
      {
        v48 = v9 + 1;
        if ( (unsigned int)(v9 + 1) < 8 )
        {
          if ( (v48 & 4) != 0 )
          {
            *((_DWORD *)v8 + 4) = v123;
            *(_DWORD *)((char *)v7 + v48 - 4) = *(__int32 *)((char *)&v122.m128i_i32[3] + v48);
          }
          else if ( (_DWORD)v9 != -1 )
          {
            *((_BYTE *)v8 + 16) = v123;
            if ( (v48 & 2) != 0 )
              *(_WORD *)((char *)v7 + v48 - 2) = *(__int16 *)((char *)&v122.m128i_i16[7] + v48);
          }
        }
        else
        {
          v8[2] = v123;
          *(_QWORD *)((char *)v7 + v48 - 8) = *(__int64 *)((char *)&v122.m128i_i64[1] + v48);
          v49 = (unsigned __int64)(v8 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v50 = (char *)v7 - v49;
          v51 = (char *)((char *)&v123 - v50);
          v52 = ((_DWORD)v50 + v48) & 0xFFFFFFF8;
          if ( v52 >= 8 )
          {
            v53 = v52 & 0xFFFFFFF8;
            v54 = 0;
            do
            {
              v55 = v54;
              v54 += 8;
              *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
            }
            while ( v54 < v53 );
          }
        }
      }
      else
      {
        *v6 = v122.m128i_i64[0];
        v6[2] = v123;
      }
      v8[1] = v9;
      v122.m128i_i64[0] = (__int64)&v123;
      v122.m128i_i64[1] = 0;
      LOBYTE(v123) = 0;
      v109 = 0;
      v98 = &v109;
      v10 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v11 = *(_BYTE *)v10;
      v12 = *(_QWORD *)(v10 + 8);
      *(_BYTE *)v10 = 3;
      *(_QWORD *)(v10 + 8) = v8;
      LOBYTE(v111) = v11;
      v112 = v12;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (size_t *)v122.m128i_i64[0] != &v123 )
        operator delete((void *)v122.m128i_i64[0], v123 + 1);
      qsnprintf();
      v122.m128i_i64[0] = (__int64)&v123;
      v13 = strlen(v128);
      v111 = v13;
      v14 = v13;
      if ( v13 > 0xF )
      {
        v47 = (_QWORD *)std::string::_M_create();
        v122.m128i_i64[0] = (__int64)v47;
        v123 = v111;
      }
      else
      {
        if ( v13 == 1 )
        {
          LOBYTE(v123) = v128[0];
LABEL_19:
          v15 = &v123;
          goto LABEL_20;
        }
        if ( !v13 )
          goto LABEL_19;
        v47 = &v123;
      }
      if ( v14 >= 8 )
      {
        *v47 = *(_QWORD *)v128;
        *(_QWORD *)((char *)v47 + v14 - 8) = *(_QWORD *)&v127[v14];
        v64 = (unsigned __int64)(v47 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v65 = (char *)v47 - v64;
        v66 = (char *)(v128 - v65);
        v67 = ((_DWORD)v65 + v14) & 0xFFFFFFF8;
        if ( v67 >= 8 )
        {
          v68 = v67 & 0xFFFFFFF8;
          v69 = 0;
          do
          {
            v70 = v69;
            v69 += 8;
            *(_QWORD *)(v64 + v70) = *(_QWORD *)&v66[v70];
          }
          while ( v69 < v68 );
        }
      }
      else if ( (v14 & 4) != 0 )
      {
        *(_DWORD *)v47 = *(_DWORD *)v128;
        *(_DWORD *)((char *)v47 + v14 - 4) = *(_DWORD *)&v127[v14 + 4];
      }
      else if ( v14 )
      {
        *(_BYTE *)v47 = v128[0];
        if ( (v14 & 2) != 0 )
          *(_WORD *)((char *)v47 + v14 - 2) = *(_WORD *)&v127[v14 + 6];
      }
      v13 = v111;
      v15 = (size_t *)v122.m128i_i64[0];
LABEL_20:
      v122.m128i_i64[1] = v13;
      *((_BYTE *)v15 + v13) = 0;
      v111 = 0;
      v112 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v16 = (_QWORD *)operator new(0x20u);
      v17 = v16 + 2;
      v18 = v16;
      v19 = v122.m128i_i64[1];
      *v16 = v16 + 2;
      if ( (size_t *)v122.m128i_i64[0] == &v123 )
      {
        v56 = v19 + 1;
        if ( (unsigned int)(v19 + 1) < 8 )
        {
          if ( (v56 & 4) != 0 )
          {
            *((_DWORD *)v18 + 4) = v123;
            *(_DWORD *)((char *)v17 + v56 - 4) = *(__int32 *)((char *)&v122.m128i_i32[3] + v56);
          }
          else if ( (_DWORD)v19 != -1 )
          {
            *((_BYTE *)v18 + 16) = v123;
            if ( (v56 & 2) != 0 )
              *(_WORD *)((char *)v17 + v56 - 2) = *(__int16 *)((char *)&v122.m128i_i16[7] + v56);
          }
        }
        else
        {
          v18[2] = v123;
          *(_QWORD *)((char *)v17 + v56 - 8) = *(__int64 *)((char *)&v122.m128i_i64[1] + v56);
          v57 = (unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v58 = (char *)v17 - v57;
          v59 = (char *)((char *)&v123 - v58);
          v60 = ((_DWORD)v58 + v56) & 0xFFFFFFF8;
          if ( v60 >= 8 )
          {
            v61 = v60 & 0xFFFFFFF8;
            v62 = 0;
            do
            {
              v63 = v62;
              v62 += 8;
              *(_QWORD *)(v57 + v63) = *(_QWORD *)&v59[v63];
            }
            while ( v62 < v61 );
          }
        }
      }
      else
      {
        *v16 = v122.m128i_i64[0];
        v16[2] = v123;
      }
      v18[1] = v19;
      v122.m128i_i64[0] = (__int64)&v123;
      v122.m128i_i64[1] = 0;
      LOBYTE(v123) = 0;
      v20 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v21 = *(_BYTE *)v20;
      v22 = *(_QWORD *)(v20 + 8);
      *(_BYTE *)v20 = 3;
      *(_QWORD *)(v20 + 8) = v18;
      LOBYTE(v111) = v21;
      LOBYTE(v94) = v109;
      v112 = v22;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (size_t *)v122.m128i_i64[0] != &v123 )
        operator delete((void *)v122.m128i_i64[0], v123 + 1);
      v23 = nullptr;
      v24 = 0;
      if ( v113.m128i_i64[1] > 1uLL )
      {
        v111 = 0;
        v25 = (const char *)v113.m128i_i64[0];
        v112 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v23 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v23,
          v25,
          v26,
          v27,
          v28,
          v29,
          v94,
          (int)&v109,
          (__int64)segm_by_name);
        v24 = 3;
      }
      v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v31 = *(_BYTE *)v30;
      v32 = *(_QWORD *)(v30 + 8);
      *(_BYTE *)v30 = v24;
      *(_QWORD *)(v30 + 8) = v23;
      LOBYTE(v111) = v31;
      LOBYTE(v94) = v109;
      v112 = v32;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v106 )
      {
        if ( v1[2] != v1[1] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v1[1] += 16LL;
          goto LABEL_29;
        }
      }
      else
      {
        v33 = operator new(0x18u);
        *(_QWORD *)(v33 + 16) = 0;
        v1 = (_QWORD *)v33;
        *(_OWORD *)v33 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_29:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v113.m128i_i64[0] )
      {
        v113.m128i_i64[1] = 0;
        qfree();
      }
      v2 += 8LL;
      if ( v2 >= segm_by_name[1] )
      {
        v106 = 2;
        break;
      }
    }
  }
LABEL_33:
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v34,
    "protocol_count",
    v35,
    v36,
    v37,
    v38,
    v94,
    (int)v98,
    (__int64)segm_by_name);
  v115 = (unsigned __int64)v34;
  if ( v106 == 2 )
    v39 = (__int64)(v1[1] - *v1) >> 4;
  else
    v39 = v106 != 0;
  v116 = 6;
  v117 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v122,
    (const __m128i *)&v114);
  v123 = 0;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "protocols", v41, v42, v43, v44, v95, v99, v103);
  v119 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v124,
    (const __m128i *)&v118);
  v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v122);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_36:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

