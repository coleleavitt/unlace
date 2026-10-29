ida_mcp::tools::xtensa_options::_anonymous_namespace_ *__fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::feature_summary(
        ida_mcp::tools::xtensa_options::_anonymous_namespace_ *this,
        unsigned int a2)
{
  size_t *v2; // rbx
  __int64 v3; // rax
  _BYTE *v4; // r13
  size_t v5; // rbp
  ida_mcp::tools::xtensa_options::_anonymous_namespace_ *v6; // rax
  _QWORD *v7; // rax
  ida_mcp::tools::xtensa_options::_anonymous_namespace_ *v8; // rdx
  _QWORD *v9; // rcx
  size_t v10; // rsi
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE *v15; // r14
  size_t v16; // r15
  char *v17; // rax
  _QWORD *v18; // rax
  _OWORD *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __m128i *v22; // r15
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  ida_mcp::tools::xtensa_options::_anonymous_namespace_ *v34; // rdx
  _QWORD *v35; // rcx
  size_t v36; // rsi
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128i *v55; // r15
  __int64 v57; // rax
  ida_mcp::tools::xtensa_options::_anonymous_namespace_ *v58; // rdi
  char *v59; // rdi
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned __int64 v69; // rdi
  char *v70; // rcx
  char *v71; // r8
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  __int64 v75; // r9
  unsigned int v76; // edx
  unsigned __int64 v77; // rdi
  char *v78; // rcx
  char *v79; // r8
  unsigned int v80; // edx
  unsigned int v81; // edx
  unsigned int v82; // ecx
  __int64 v83; // r9
  int v84; // [rsp+0h] [rbp-288h]
  int v85; // [rsp+0h] [rbp-288h]
  int v86; // [rsp+0h] [rbp-288h]
  int v87; // [rsp+0h] [rbp-288h]
  int v88; // [rsp+0h] [rbp-288h]
  int v89; // [rsp+8h] [rbp-280h]
  int v90; // [rsp+8h] [rbp-280h]
  int v91; // [rsp+8h] [rbp-280h]
  int v92; // [rsp+8h] [rbp-280h]
  __int64 v93; // [rsp+8h] [rbp-280h]
  __int64 v94; // [rsp+10h] [rbp-278h]
  __int64 v95; // [rsp+10h] [rbp-278h]
  __int64 v96; // [rsp+10h] [rbp-278h]
  __int64 v97; // [rsp+10h] [rbp-278h]
  __int64 v98; // [rsp+10h] [rbp-278h]
  int v99; // [rsp+10h] [rbp-278h]
  __int64 v100; // [rsp+48h] [rbp-240h]
  char v102; // [rsp+86h] [rbp-202h]
  char v103; // [rsp+87h] [rbp-201h]
  __int64 v104; // [rsp+88h] [rbp-200h]
  size_t v106; // [rsp+E0h] [rbp-1A8h] BYREF
  ida_mcp::tools::xtensa_options::_anonymous_namespace_ *v107; // [rsp+F0h] [rbp-198h] BYREF
  size_t v108; // [rsp+F8h] [rbp-190h]
  _QWORD v109[2]; // [rsp+100h] [rbp-188h] BYREF
  void *v110; // [rsp+110h] [rbp-178h] BYREF
  __int128 v111; // [rsp+118h] [rbp-170h] BYREF
  char v112; // [rsp+128h] [rbp-160h]
  __int128 v113; // [rsp+130h] [rbp-158h] BYREF
  char v114; // [rsp+140h] [rbp-148h] BYREF
  __int128 v115; // [rsp+148h] [rbp-140h] BYREF
  char v116; // [rsp+158h] [rbp-130h]
  __int128 v117; // [rsp+160h] [rbp-128h] BYREF
  char v118; // [rsp+170h] [rbp-118h] BYREF
  __int128 v119; // [rsp+178h] [rbp-110h] BYREF
  char v120; // [rsp+188h] [rbp-100h]
  __int64 v121; // [rsp+190h] [rbp-F8h]
  __int64 v122; // [rsp+198h] [rbp-F0h]
  char v123; // [rsp+1A0h] [rbp-E8h] BYREF
  __int128 v124; // [rsp+1A8h] [rbp-E0h] BYREF
  char v125; // [rsp+1B8h] [rbp-D0h]
  __int128 v126; // [rsp+1C0h] [rbp-C8h] BYREF
  __m128i v127; // [rsp+1D0h] [rbp-B8h] BYREF
  __int64 v128; // [rsp+1E0h] [rbp-A8h]
  _QWORD v129[2]; // [rsp+1E8h] [rbp-A0h] BYREF
  __int64 v130; // [rsp+1F8h] [rbp-90h]
  _QWORD v131[2]; // [rsp+200h] [rbp-88h] BYREF
  __int64 v132; // [rsp+210h] [rbp-78h]
  _QWORD v133[3]; // [rsp+218h] [rbp-70h] BYREF
  char v134[24]; // [rsp+230h] [rbp-58h] BYREF
  unsigned __int64 v135; // [rsp+248h] [rbp-40h]

  v135 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v103 = 0;
  v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v2 = (size_t *)&ida_mcp::tools::xtensa_options::`anonymous namespace'::kFeatures;
  v102 = 0;
  v100 = 0;
  do
  {
    v114 = 0;
    *(_QWORD *)&v115 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v114 = 3;
    v3 = operator new(0x20u);
    v4 = (_BYTE *)v2[1];
    v5 = *v2;
    *(_QWORD *)v3 = v3 + 16;
    strcpy((char *)(v3 + 16), "name");
    *(_QWORD *)(v3 + 8) = 4;
    v107 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109;
    v115 = (unsigned __int64)v3;
    if ( !v4 && v5 )
      std::string::basic_string(32, 0);
    v106 = v5;
    if ( v5 > 0xF )
    {
      v107 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)std::string::_M_create();
      v58 = v107;
      v109[0] = v106;
    }
    else
    {
      if ( v5 == 1 )
      {
        LOBYTE(v109[0]) = *v4;
LABEL_7:
        v6 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109;
        goto LABEL_8;
      }
      if ( !v5 )
        goto LABEL_7;
      v58 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109;
    }
    memcpy(v58, v4, v5);
    v5 = v106;
    v6 = v107;
LABEL_8:
    v108 = v5;
    *((_BYTE *)v6 + v5) = 0;
    v116 = 0;
    *(_QWORD *)&v117 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v116 = 3;
    v7 = (_QWORD *)operator new(0x20u);
    v8 = v107;
    v9 = v7 + 2;
    v10 = v108;
    *v7 = v7 + 2;
    if ( v8 == (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109 )
    {
      v60 = v10 + 1;
      if ( (unsigned int)(v10 + 1) >= 8 )
      {
        v7[2] = v109[0];
        *(_QWORD *)((char *)v9 + v60 - 8) = *(_QWORD *)((char *)&v109[-1] + v60);
        v62 = (unsigned __int64)(v7 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v63 = (char *)v9 - v62;
        v64 = (char *)((char *)v109 - v63);
        v65 = ((_DWORD)v63 + v60) & 0xFFFFFFF8;
        if ( v65 >= 8 )
        {
          v66 = v65 & 0xFFFFFFF8;
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
          }
          while ( v67 < v66 );
        }
      }
      else if ( (v60 & 4) != 0 )
      {
        *((_DWORD *)v7 + 4) = v109[0];
        *(_DWORD *)((char *)v9 + v60 - 4) = *(_DWORD *)((char *)&v108 + v60 + 4);
      }
      else if ( (_DWORD)v10 != -1 )
      {
        *((_BYTE *)v7 + 16) = v109[0];
        if ( (v60 & 2) != 0 )
          *(_WORD *)((char *)v9 + v60 - 2) = *(_WORD *)((char *)&v108 + v60 + 6);
      }
    }
    else
    {
      *v7 = v8;
      v7[2] = v109[0];
    }
    v7[1] = v10;
    v107 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109;
    v108 = 0;
    LOBYTE(v109[0]) = 0;
    v117 = (unsigned __int64)v7;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v127,
      (const __m128i *)&v114);
    v128 = 0;
    v118 = 0;
    *(_QWORD *)&v119 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v118 = 3;
    v11 = operator new(0x20u);
    v12 = (unsigned __int64)v11;
    *(_QWORD *)v11 = v11 + 16;
    strcpy((char *)(v11 + 16), "mask");
    *(_QWORD *)(v11 + 8) = 4;
    v13 = *((unsigned int *)v2 + 4);
    v120 = 6;
    v121 = v13;
    v122 = 0;
    v119 = v12;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v129,
      (const __m128i *)&v118);
    v130 = 0;
    v123 = 0;
    *(_QWORD *)&v124 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v123 = 3;
    v14 = operator new(0x20u);
    v15 = (_BYTE *)v2[4];
    strcpy((char *)(v14 + 16), "display");
    v16 = v2[3];
    *(_QWORD *)v14 = v14 + 16;
    *(_QWORD *)(v14 + 8) = 7;
    v110 = (char *)&v111 + 8;
    v124 = (unsigned __int64)v14;
    if ( !v15 && v16 )
      std::string::basic_string(32, 0);
    v106 = v16;
    if ( v16 > 0xF )
    {
      v110 = (void *)std::string::_M_create();
      v59 = (char *)v110;
      *((_QWORD *)&v111 + 1) = v106;
    }
    else
    {
      if ( v16 == 1 )
      {
        BYTE8(v111) = *v15;
LABEL_15:
        v17 = (char *)&v111 + 8;
        goto LABEL_16;
      }
      if ( !v16 )
        goto LABEL_15;
      v59 = (char *)&v111 + 8;
    }
    memcpy(v59, v15, v16);
    v16 = v106;
    v17 = (char *)v110;
LABEL_16:
    *(_QWORD *)&v111 = v16;
    v17[v16] = 0;
    v125 = 0;
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v18 = (_QWORD *)operator new(0x20u);
    v19 = v110;
    v20 = v18 + 2;
    v21 = v111;
    *v18 = v18 + 2;
    if ( v19 == (__int128 *)((char *)&v111 + 8) )
    {
      v61 = v21 + 1;
      if ( (unsigned int)(v21 + 1) >= 8 )
      {
        v18[2] = *((_QWORD *)&v111 + 1);
        *(_QWORD *)((char *)v20 + v61 - 8) = *(_QWORD *)((char *)&v111 + v61);
        v69 = (unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v70 = (char *)v20 - v69;
        v71 = (char *)((char *)&v111 + 8 - v70);
        v72 = ((_DWORD)v70 + v61) & 0xFFFFFFF8;
        if ( v72 >= 8 )
        {
          v73 = v72 & 0xFFFFFFF8;
          v74 = 0;
          do
          {
            v75 = v74;
            v74 += 8;
            *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
          }
          while ( v74 < v73 );
        }
      }
      else if ( (v61 & 4) != 0 )
      {
        *((_DWORD *)v18 + 4) = DWORD2(v111);
        *(_DWORD *)((char *)v20 + v61 - 4) = *(_DWORD *)((char *)&v111 + v61 + 4);
      }
      else if ( (_DWORD)v21 != -1 )
      {
        *((_BYTE *)v18 + 16) = BYTE8(v111);
        if ( (v61 & 2) != 0 )
          *(_WORD *)((char *)v20 + v61 - 2) = *(_WORD *)((char *)&v111 + v61 + 6);
      }
    }
    else
    {
      *v18 = v19;
      v18[2] = *((_QWORD *)&v111 + 1);
    }
    v18[1] = v21;
    v110 = (char *)&v111 + 8;
    *(_QWORD *)&v111 = 0;
    BYTE8(v111) = 0;
    v126 = (unsigned __int64)v18;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v131,
      (const __m128i *)&v123);
    LOBYTE(v106) = 0;
    v132 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v106,
      &v127);
    v22 = (__m128i *)v133;
    do
    {
      v22 = (__m128i *)((char *)v22 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v22 != &v127 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v110 != (char *)&v111 + 8 )
      operator delete(v110, *((_QWORD *)&v111 + 1) + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v107 != (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109 )
      operator delete(v107, v109[0] + 1LL);
    if ( ((_DWORD)v2[2] & a2) != 0 )
    {
      if ( v103 )
      {
        if ( *(_QWORD *)(v104 + 16) != *(_QWORD *)(v104 + 8) )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_QWORD *)(v104 + 8) += 16LL;
          goto LABEL_28;
        }
      }
      else
      {
        v23 = operator new(0x18u);
        *(_QWORD *)(v23 + 16) = 0;
        v104 = v23;
        *(_OWORD *)v23 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_28:
      v103 = 2;
      goto LABEL_29;
    }
    if ( v102 )
    {
      if ( *(_QWORD *)(v100 + 16) != *(_QWORD *)(v100 + 8) )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        *(_QWORD *)(v100 + 8) += 16LL;
        goto LABEL_40;
      }
    }
    else
    {
      v57 = operator new(0x18u);
      *(_QWORD *)(v57 + 16) = 0;
      v100 = v57;
      *(_OWORD *)v57 = 0;
    }
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_40:
    v102 = 2;
LABEL_29:
    v2 += 5;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v2 != (size_t *)&unk_4438D8 );
  LOBYTE(v110) = 0;
  *(_QWORD *)&v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v110) = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "flags_hex", v25, v26, v27, v28, (int)&v111, 3, v94);
  v111 = (unsigned __int64)v24;
  __snprintf_chk();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v107, v134, v29, v30, v31, v32, v84, v89, v95);
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = v107;
  v35 = v33 + 2;
  v36 = v108;
  *v33 = v33 + 2;
  if ( v34 == (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109 )
  {
    v76 = v36 + 1;
    if ( (unsigned int)(v36 + 1) >= 8 )
    {
      v33[2] = v109[0];
      *(_QWORD *)((char *)v35 + v76 - 8) = *(_QWORD *)((char *)&v109[-1] + v76);
      v77 = (unsigned __int64)(v33 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v78 = (char *)v35 - v77;
      v79 = (char *)((char *)v109 - v78);
      v80 = ((_DWORD)v78 + v76) & 0xFFFFFFF8;
      if ( v80 >= 8 )
      {
        v81 = v80 & 0xFFFFFFF8;
        v82 = 0;
        do
        {
          v83 = v82;
          v82 += 8;
          *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
        }
        while ( v82 < v81 );
      }
    }
    else if ( (v76 & 4) != 0 )
    {
      *((_DWORD *)v33 + 4) = v109[0];
      *(_DWORD *)((char *)v35 + v76 - 4) = *(_DWORD *)((char *)&v108 + v76 + 4);
    }
    else if ( (_DWORD)v36 != -1 )
    {
      *((_BYTE *)v33 + 16) = v109[0];
      if ( (v76 & 2) != 0 )
        *(_WORD *)((char *)v35 + v76 - 2) = *(_WORD *)((char *)&v108 + v76 + 6);
    }
  }
  else
  {
    *v33 = v34;
    v33[2] = v109[0];
  }
  v33[1] = v36;
  v107 = (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109;
  v108 = 0;
  LOBYTE(v109[0]) = 0;
  v113 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v127,
    (const __m128i *)&v110);
  v128 = 0;
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "flags", v38, v39, v40, v41, v85, v90, v96);
  v116 = 6;
  v117 = a2;
  v115 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (const __m128i *)&v114);
  v130 = 0;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "enabled", v43, v44, v45, v46, v86, v91, v97);
  v119 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v131,
    (const __m128i *)&v118);
  v132 = 0;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "disabled", v48, v49, v50, v51, v87, v92, v98);
  v124 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v126 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v133,
    (const __m128i *)&v123);
  v133[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    this,
    (__int64)&v127,
    4,
    v52,
    v53,
    v54,
    v88,
    v93,
    v99,
    (int)&v115,
    (int)&v119,
    (int)&v124,
    (__int64)&v117,
    (int)&v126,
    (int)&v113,
    v100,
    (int)&v123,
    (char)&v114,
    (__int64)&v118,
    (int)v129,
    (__int64)v131);
  v55 = (__m128i *)v134;
  do
  {
    v55 = (__m128i *)((char *)v55 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v55 != &v127 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v107 != (ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v109 )
    operator delete(v107, v109[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return this;
}

