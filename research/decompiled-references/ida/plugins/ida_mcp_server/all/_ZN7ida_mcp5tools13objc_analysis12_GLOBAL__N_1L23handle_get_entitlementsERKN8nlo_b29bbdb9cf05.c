_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_get_entitlements(_QWORD *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  unsigned __int64 *segm_by_name; // rbx
  unsigned __int64 v3; // r13
  char byte; // r14
  char *v5; // rsi
  __int64 v6; // r12
  __int64 func; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // rax
  unsigned int v17; // r13d
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  size_t v22; // rsi
  __int64 v23; // rax
  char *v24; // r13
  _QWORD *v25; // rax
  _BYTE *v26; // r15
  __int64 *v27; // r12
  size_t v28; // rax
  size_t v29; // rcx
  __int8 v30; // al
  __m128i v31; // xmm0
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // r13
  __int8 v37; // si
  __int64 v38; // rax
  __m128i *v39; // r12
  _QWORD *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // edi
  unsigned __int64 v43; // rdx
  char *v44; // rax
  char *v45; // r12
  unsigned int v46; // r13d
  unsigned int v47; // r13d
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // r8
  char *v53; // rcx
  char *v54; // r9
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  char *v69; // r13
  __int64 *v70; // r12
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rbp
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 *v81; // rbp
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v87; // [rsp+0h] [rbp-278h]
  int v88; // [rsp+0h] [rbp-278h]
  int v89; // [rsp+0h] [rbp-278h]
  int v90; // [rsp+0h] [rbp-278h]
  int v91; // [rsp+8h] [rbp-270h]
  int v92; // [rsp+8h] [rbp-270h]
  int v93; // [rsp+8h] [rbp-270h]
  int v94; // [rsp+8h] [rbp-270h]
  __int64 v95; // [rsp+10h] [rbp-268h]
  __int64 v96; // [rsp+10h] [rbp-268h]
  __int64 v97; // [rsp+10h] [rbp-268h]
  __int64 v98; // [rsp+10h] [rbp-268h]
  int v99; // [rsp+18h] [rbp-260h]
  char v100; // [rsp+1Fh] [rbp-259h]
  char v101; // [rsp+1Fh] [rbp-259h]
  _QWORD *v102; // [rsp+50h] [rbp-228h]
  __int64 *v103; // [rsp+68h] [rbp-210h]
  char **v104; // [rsp+70h] [rbp-208h]
  size_t v105; // [rsp+78h] [rbp-200h]
  __m128i v107; // [rsp+B0h] [rbp-1C8h] BYREF
  __m128i v108; // [rsp+C0h] [rbp-1B8h] BYREF
  char *v109; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v110; // [rsp+D8h] [rbp-1A0h]
  void *v111; // [rsp+F0h] [rbp-188h] BYREF
  size_t v112; // [rsp+F8h] [rbp-180h]
  _QWORD v113[2]; // [rsp+100h] [rbp-178h] BYREF
  char v114; // [rsp+130h] [rbp-148h] BYREF
  __int128 v115; // [rsp+138h] [rbp-140h] BYREF
  char v116; // [rsp+148h] [rbp-130h]
  __int128 v117; // [rsp+150h] [rbp-128h] BYREF
  char v118; // [rsp+160h] [rbp-118h] BYREF
  __int128 v119; // [rsp+168h] [rbp-110h] BYREF
  char v120; // [rsp+178h] [rbp-100h]
  __int128 v121; // [rsp+180h] [rbp-F8h] BYREF
  char v122; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v123; // [rsp+198h] [rbp-E0h] BYREF
  _BYTE v124[24]; // [rsp+1A8h] [rbp-D0h]
  __m128i v125; // [rsp+1C0h] [rbp-B8h] BYREF
  __int64 v126; // [rsp+1D0h] [rbp-A8h]
  __int64 v127; // [rsp+1D8h] [rbp-A0h] BYREF
  __int64 v128; // [rsp+1E8h] [rbp-90h]
  _QWORD v129[3]; // [rsp+1F0h] [rbp-88h] BYREF
  char v130[8]; // [rsp+208h] [rbp-70h] BYREF
  char s[40]; // [rsp+210h] [rbp-68h] BYREF
  unsigned __int64 v132; // [rsp+238h] [rbp-40h]

  v132 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v100 = 0;
  v102 = nullptr;
  segm_by_name = (unsigned __int64 *)get_segm_by_name();
  if ( segm_by_name || (segm_by_name = (unsigned __int64 *)get_segm_by_name()) != nullptr )
  {
    v3 = *segm_by_name;
    v109 = nullptr;
    v110 = 0;
    if ( v3 < segm_by_name[1] )
    {
      do
      {
        byte = get_byte();
        if ( !byte )
          break;
        v5 = v109;
        v6 = ((_QWORD)v110 == 0) + (_QWORD)v110 - 1LL;
        if ( *((_QWORD *)&v110 + 1) < (unsigned __int64)(v6 + 2) )
        {
          v109 = (char *)qvector_reserve();
          v5 = v109;
        }
        *(_QWORD *)&v110 = v6 + 2;
        ++v3;
        v5[v6] = byte;
        v109[v6 + 1] = 0;
      }
      while ( v3 < segm_by_name[1] );
      if ( (unsigned __int64)v110 > 1 )
      {
        v118 = 0;
        *(_QWORD *)&v119 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v118 = 3;
        v58 = operator new(0x20u);
        *(_QWORD *)v58 = v58 + 16;
        strcpy((char *)(v58 + 16), "type");
        *(_QWORD *)(v58 + 8) = 4;
        v120 = 0;
        *(_QWORD *)&v121 = 0;
        v119 = (unsigned __int64)v58;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v120 = 3;
        v59 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v59, "info_plist", v60, v61, v62, v63, v87, v91, v95);
        v121 = (unsigned __int64)v59;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v125,
          (const __m128i *)&v118);
        v126 = 0;
        v122 = 0;
        *(_QWORD *)&v123 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v122 = 3;
        v64 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v64, "content", v65, v66, v67, v68, v88, v92, v96);
        v123 = (unsigned __int64)v64;
        if ( (_QWORD)v110 )
          v69 = v109;
        else
          v69 = _qstring<char>::c_str(void)const::nullstr;
        v124[0] = 0;
        *(_QWORD *)&v124[8] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v124[0] = 3;
        v70 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v70, v69, v71, v72, v73, v74, v89, v93, v97);
        *(_OWORD *)&v124[8] = (unsigned __int64)v70;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v127,
          (const __m128i *)&v122);
        v128 = 0;
        v108.m128i_i8[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v108,
          &v125);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
        v100 = 0;
        v102 = nullptr;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
    }
  }
  if ( getinf() != -1 )
  {
    v104 = &v109;
    while ( find_text() != -1 )
    {
      func = get_func();
      v109 = nullptr;
      v110 = 0;
      if ( func )
        get_func_name();
      v114 = 0;
      *(_QWORD *)&v115 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v114 = 3;
      v8 = operator new(0x20u);
      *(_QWORD *)v8 = v8 + 16;
      strcpy((char *)(v8 + 16), "type");
      *(_QWORD *)(v8 + 8) = 4;
      v116 = 0;
      *(_QWORD *)&v117 = 0;
      v115 = (unsigned __int64)v8;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v116 = 3;
      v9 = (__int64 *)operator new(0x20u);
      v108.m128i_i64[0] = 17;
      *v9 = (__int64)(v9 + 2);
      v10 = std::string::_M_create();
      v11 = v108.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E26C0);
      *v9 = v10;
      v9[2] = v11;
      *(__m128i *)v10 = si128;
      *(_BYTE *)(v10 + 16) = 107;
      v13 = v108.m128i_i64[0];
      v14 = *v9;
      v9[1] = v108.m128i_i64[0];
      *(_BYTE *)(v14 + v13) = 0;
      v117 = (unsigned __int64)v9;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v125,
        (const __m128i *)&v114);
      v126 = 0;
      v118 = 0;
      *(_QWORD *)&v119 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v118 = 3;
      v15 = operator new(0x20u);
      *(_QWORD *)v15 = v15 + 16;
      strcpy((char *)(v15 + 16), "address");
      *(_QWORD *)(v15 + 8) = 7;
      v119 = (unsigned __int64)v15;
      qsnprintf();
      v111 = v113;
      v16 = strlen(s);
      v108.m128i_i64[0] = v16;
      v17 = v16;
      if ( v16 > 0xF )
      {
        v40 = (_QWORD *)std::string::_M_create();
        v111 = v40;
        v113[0] = v108.m128i_i64[0];
      }
      else
      {
        if ( v16 == 1 )
        {
          LOBYTE(v113[0]) = s[0];
LABEL_19:
          v18 = v113;
          goto LABEL_20;
        }
        if ( !v16 )
          goto LABEL_19;
        v40 = v113;
      }
      if ( v17 >= 8 )
      {
        *v40 = *(_QWORD *)s;
        *(_QWORD *)((char *)v40 + v17 - 8) = *(_QWORD *)&v130[v17];
        v43 = (unsigned __int64)(v40 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v44 = (char *)v40 - v43;
        v45 = (char *)(s - v44);
        v46 = ((_DWORD)v44 + v17) & 0xFFFFFFF8;
        if ( v46 >= 8 )
        {
          v47 = v46 & 0xFFFFFFF8;
          v48 = 0;
          do
          {
            v49 = v48;
            v48 += 8;
            *(_QWORD *)(v43 + v49) = *(_QWORD *)&v45[v49];
          }
          while ( v48 < v47 );
        }
      }
      else if ( (v17 & 4) != 0 )
      {
        *(_DWORD *)v40 = *(_DWORD *)s;
        *(_DWORD *)((char *)v40 + v17 - 4) = *(_DWORD *)&v130[v17 + 4];
      }
      else if ( v17 )
      {
        *(_BYTE *)v40 = s[0];
        if ( (v17 & 2) != 0 )
          *(_WORD *)((char *)v40 + v17 - 2) = *(_WORD *)&v130[v17 + 6];
      }
      v16 = v108.m128i_i64[0];
      v18 = v111;
LABEL_20:
      v112 = v16;
      *((_BYTE *)v18 + v16) = 0;
      v120 = 0;
      *(_QWORD *)&v121 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v120 = 3;
      v19 = (_QWORD *)operator new(0x20u);
      v20 = v111;
      v21 = v19 + 2;
      v22 = v112;
      *v19 = v19 + 2;
      if ( v20 == v113 )
      {
        v42 = v22 + 1;
        if ( (unsigned int)(v22 + 1) >= 8 )
        {
          v19[2] = v113[0];
          *(_QWORD *)((char *)v21 + v42 - 8) = *(_QWORD *)((char *)&v113[-1] + v42);
          v52 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v53 = (char *)v21 - v52;
          v54 = (char *)((char *)v113 - v53);
          if ( (((_DWORD)v53 + v42) & 0xFFFFFFF8) >= 8 )
          {
            v55 = ((_DWORD)v53 + v42) & 0xFFFFFFF8;
            v56 = 0;
            do
            {
              v57 = v56;
              v56 += 8;
              *(_QWORD *)(v52 + v57) = *(_QWORD *)&v54[v57];
            }
            while ( v56 < v55 );
          }
        }
        else if ( (v42 & 4) != 0 )
        {
          *((_DWORD *)v19 + 4) = v113[0];
          *(_DWORD *)((char *)v21 + v42 - 4) = *(_DWORD *)((char *)&v112 + v42 + 4);
        }
        else if ( (_DWORD)v22 != -1 )
        {
          *((_BYTE *)v19 + 16) = v113[0];
          if ( (v42 & 2) != 0 )
            *(_WORD *)((char *)v21 + v42 - 2) = *(_WORD *)((char *)&v112 + v42 + 6);
        }
      }
      else
      {
        *v19 = v20;
        v19[2] = v113[0];
      }
      v19[1] = v22;
      v111 = v113;
      v112 = 0;
      LOBYTE(v113[0]) = 0;
      v121 = (unsigned __int64)v19;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v127,
        (const __m128i *)&v118);
      v128 = 0;
      v122 = 0;
      *(_QWORD *)&v123 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v122 = 3;
      v23 = operator new(0x20u);
      *(_QWORD *)v23 = v23 + 16;
      strcpy((char *)(v23 + 16), "function");
      *(_QWORD *)(v23 + 8) = 8;
      v123 = (unsigned __int64)v23;
      if ( (unsigned __int64)v110 > 1 )
      {
        v107 = 0u;
        v24 = v109;
        v103 = &v107.m128i_i64[1];
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v25 = (_QWORD *)operator new(0x20u);
        v26 = v25 + 2;
        v27 = v25;
        *v25 = v25 + 2;
        if ( !v24 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v28 = strlen(v24);
        v108.m128i_i64[0] = v28;
        v29 = v28;
        if ( v28 > 0xF )
        {
          v105 = v28;
          v41 = std::string::_M_create();
          *v27 = v41;
          v26 = (_BYTE *)v41;
          v29 = v105;
          v27[2] = v108.m128i_i64[0];
        }
        else
        {
          if ( v28 == 1 )
          {
            *((_BYTE *)v27 + 16) = *v24;
            goto LABEL_27;
          }
          if ( !v28 )
          {
LABEL_27:
            v27[1] = v28;
            v26[v28] = 0;
            v30 = 3;
            goto LABEL_28;
          }
        }
        memcpy(v26, v24, v29);
        v28 = v108.m128i_i64[0];
        v26 = (_BYTE *)*v27;
        goto LABEL_27;
      }
      v27 = nullptr;
      v30 = 0;
LABEL_28:
      v107.m128i_i64[1] = (__int64)v27;
      v107.m128i_i8[0] = v30;
      v31 = _mm_load_si128(&v107);
      *(_QWORD *)&v124[16] = 0;
      *(__m128i *)v124 = v31;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v129,
        (const __m128i *)&v122);
      v108.m128i_i8[0] = 0;
      v129[2] = 0;
      v108.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v108,
        (__int64)&v125,
        3,
        v32,
        v33,
        v34,
        (int)&v125,
        3,
        (int)&v108,
        v99,
        (int)&v119,
        (int)&v123,
        (__int64)&v121,
        (int)&v115,
        (int)&v117,
        (int)&v111,
        (int)v102,
        (char)&v118,
        (__int64)&v114,
        (int)v103,
        (__int64)v104);
      LODWORD(v103) = v108.m128i_i32[2];
      if ( v101 )
      {
        if ( v101 != 2 )
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
        v50 = v102[1];
        if ( v102[2] != v50 )
        {
          v51 = v50 + 16;
          v37 = 0;
          *(__m128i *)(v51 - 16) = _mm_load_si128(&v108);
          v102[1] = v51;
          v38 = 0;
          goto LABEL_31;
        }
        v36 = v102;
      }
      else
      {
        v35 = operator new(0x18u);
        *(_QWORD *)(v35 + 16) = 0;
        v36 = (_QWORD *)v35;
        *(_OWORD *)v35 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v102 = v36;
      v37 = v108.m128i_i8[0];
      v38 = v108.m128i_i64[1];
LABEL_31:
      v108.m128i_i8[0] = v37;
      v39 = (__m128i *)v130;
      v108.m128i_i64[1] = v38;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      do
      {
        v39 = (__m128i *)((char *)v39 - 24);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v39 != &v125 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v111 != v113 )
        operator delete(v111, v113[0] + 1LL);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      getinf();
      if ( next_head() == -1 )
      {
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree();
        }
        v100 = 2;
        break;
      }
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree();
      }
      v100 = 2;
    }
  }
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "entitlement_count", v76, v77, v78, v79, v87, v91, v95);
  v119 = (unsigned __int64)v75;
  if ( v100 == 2 )
    v80 = (__int64)(v102[1] - *v102) >> 4;
  else
    v80 = v100 != 0;
  v120 = 6;
  v121 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v125,
    (const __m128i *)&v118);
  v126 = 0;
  v122 = 0;
  *(_QWORD *)&v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v81 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v81, "entitlements", v82, v83, v84, v85, v90, v94, v98);
  v123 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)&v124[16] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v127,
    (const __m128i *)&v122);
  v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v125);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

