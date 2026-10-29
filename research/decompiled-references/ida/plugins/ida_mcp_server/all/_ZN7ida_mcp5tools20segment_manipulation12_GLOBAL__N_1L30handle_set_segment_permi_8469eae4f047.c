__int64 __fastcall ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_permissions(
        int a1,
        __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  char v4; // dl
  char v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  size_t v12; // rdx
  int v13; // eax
  unsigned __int8 v14; // bp
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  size_t v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rbx
  size_t v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rbp
  int v31; // r9d
  int v32; // eax
  char v33; // al
  __int64 *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rsi
  __int64 *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 *v70; // rbp
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  char *v78; // rbp
  char *v79; // rbx
  unsigned int v81; // edx
  unsigned __int64 v82; // rdi
  char *v83; // rcx
  char *v84; // r8
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // ecx
  __int64 v88; // r9
  int v89; // [rsp+0h] [rbp-2E8h]
  int v90; // [rsp+0h] [rbp-2E8h]
  int v91; // [rsp+0h] [rbp-2E8h]
  _QWORD *v92; // [rsp+0h] [rbp-2E8h]
  int v93; // [rsp+0h] [rbp-2E8h]
  __int64 v94; // [rsp+0h] [rbp-2E8h]
  int v95; // [rsp+0h] [rbp-2E8h]
  int v96; // [rsp+0h] [rbp-2E8h]
  char *v97; // [rsp+0h] [rbp-2E8h]
  int v98; // [rsp+8h] [rbp-2E0h]
  int v99; // [rsp+8h] [rbp-2E0h]
  int v100; // [rsp+8h] [rbp-2E0h]
  int v101; // [rsp+8h] [rbp-2E0h]
  int v102; // [rsp+8h] [rbp-2E0h]
  __int64 v103; // [rsp+8h] [rbp-2E0h]
  int v104; // [rsp+8h] [rbp-2E0h]
  _QWORD *v105; // [rsp+8h] [rbp-2E0h]
  __int64 v106; // [rsp+8h] [rbp-2E0h]
  __int64 v107; // [rsp+10h] [rbp-2D8h]
  unsigned __int8 v108; // [rsp+10h] [rbp-2D8h]
  __int64 v109; // [rsp+10h] [rbp-2D8h]
  __int64 v110; // [rsp+10h] [rbp-2D8h]
  __int64 v111; // [rsp+10h] [rbp-2D8h]
  __int64 v112; // [rsp+10h] [rbp-2D8h]
  __int64 v113; // [rsp+10h] [rbp-2D8h]
  int v114; // [rsp+10h] [rbp-2D8h]
  __int64 v115; // [rsp+10h] [rbp-2D8h]
  int v116; // [rsp+10h] [rbp-2D8h]
  __int64 v117; // [rsp+18h] [rbp-2D0h]
  int v118; // [rsp+18h] [rbp-2D0h]
  unsigned __int8 v119; // [rsp+20h] [rbp-2C8h]
  int v120; // [rsp+20h] [rbp-2C8h]
  __int64 v121; // [rsp+28h] [rbp-2C0h]
  int v122; // [rsp+28h] [rbp-2C0h]
  __int64 v123; // [rsp+30h] [rbp-2B8h]
  int v124; // [rsp+38h] [rbp-2B0h]
  int v125; // [rsp+40h] [rbp-2A8h]
  int v126; // [rsp+48h] [rbp-2A0h]
  int v127; // [rsp+50h] [rbp-298h]
  int v128; // [rsp+50h] [rbp-298h]
  char v129; // [rsp+58h] [rbp-290h]
  char v130; // [rsp+58h] [rbp-290h]
  __int64 v131; // [rsp+60h] [rbp-288h]
  __int64 v132; // [rsp+60h] [rbp-288h]
  int v133; // [rsp+68h] [rbp-280h]
  int v134; // [rsp+68h] [rbp-280h]
  __int64 v135; // [rsp+70h] [rbp-278h]
  void *v136; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-240h]
  _QWORD v138[2]; // [rsp+B0h] [rbp-238h] BYREF
  char v139; // [rsp+C0h] [rbp-228h] BYREF
  __int128 v140; // [rsp+C8h] [rbp-220h] BYREF
  char v141; // [rsp+D8h] [rbp-210h]
  __int128 v142; // [rsp+E0h] [rbp-208h] BYREF
  char v143; // [rsp+F0h] [rbp-1F8h] BYREF
  __int128 v144; // [rsp+F8h] [rbp-1F0h] BYREF
  char v145; // [rsp+108h] [rbp-1E0h]
  __int64 v146; // [rsp+110h] [rbp-1D8h]
  __int64 v147; // [rsp+118h] [rbp-1D0h]
  char v148; // [rsp+120h] [rbp-1C8h] BYREF
  __int128 v149; // [rsp+128h] [rbp-1C0h] BYREF
  char v150; // [rsp+138h] [rbp-1B0h]
  __int64 v151; // [rsp+140h] [rbp-1A8h]
  __int64 v152; // [rsp+148h] [rbp-1A0h]
  char v153; // [rsp+150h] [rbp-198h] BYREF
  __int128 v154; // [rsp+158h] [rbp-190h]
  char v155; // [rsp+168h] [rbp-180h]
  __int64 v156; // [rsp+170h] [rbp-178h]
  __int64 v157; // [rsp+178h] [rbp-170h]
  char v158; // [rsp+180h] [rbp-168h] BYREF
  __int128 v159; // [rsp+188h] [rbp-160h] BYREF
  _QWORD v160[3]; // [rsp+198h] [rbp-150h] BYREF
  char v161; // [rsp+1B0h] [rbp-138h] BYREF
  __int128 v162; // [rsp+1B8h] [rbp-130h]
  __int64 v163; // [rsp+1C8h] [rbp-120h]
  __int64 v164; // [rsp+1D0h] [rbp-118h]
  __int64 v165; // [rsp+1D8h] [rbp-110h]
  void *v166; // [rsp+1E0h] [rbp-108h] BYREF
  unsigned __int64 v167; // [rsp+1E8h] [rbp-100h]
  __int64 v168; // [rsp+1F0h] [rbp-F8h] BYREF
  _QWORD v169[3]; // [rsp+1F8h] [rbp-F0h] BYREF
  _QWORD v170[3]; // [rsp+210h] [rbp-D8h] BYREF
  char v171; // [rsp+228h] [rbp-C0h] BYREF
  _QWORD v172[3]; // [rsp+230h] [rbp-B8h] BYREF
  _QWORD v173[3]; // [rsp+248h] [rbp-A0h] BYREF
  _QWORD v174[3]; // [rsp+260h] [rbp-88h] BYREF
  char v175; // [rsp+278h] [rbp-70h] BYREF
  char v176[40]; // [rsp+280h] [rbp-68h] BYREF
  unsigned __int64 v177; // [rsp+2A8h] [rbp-40h]

  v177 = __readfsqword(0x28u);
  v2 = a2;
  v166 = &v168;
  v167 = 0;
  LOBYTE(v168) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x138D09);
  std::string::_M_assign();
  v3 = ida_mcp::parse_ea(v166, v167);
  v129 = v4;
  v5 = v4;
  v127 = v3;
  if ( v166 != &v168 )
    operator delete(v166, v168 + 1);
  if ( !v5 )
    JUMPOUT(0x138EBC);
  v6 = getseg();
  if ( !v6 )
    JUMPOUT(0x138E32);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x1390C3);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v7 + 16);
  v9 = v7 + 8;
  v10 = v9;
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)(v8 + 40);
      if ( !v11 )
        goto LABEL_62;
      v12 = 4;
      if ( v11 <= 4 )
        v12 = *(_QWORD *)(v8 + 40);
      if ( ((v13 = memcmp(*(const void **)(v8 + 32), "read", v12)) != 0
         || (v13 = v11 - 4, (__int64)(v11 - 4) <= 0x7FFFFFFF))
        && v13 < 0 )
      {
LABEL_62:
        v8 = *(_QWORD *)(v8 + 24);
      }
      else
      {
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( v8 );
    if ( v9 != v10 )
      std::string::compare(*(void **)(v10 + 32), *(_QWORD *)(v10 + 40), "read");
  }
  v14 = _ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_();
  if ( !v14 )
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v14 = 0;
  }
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x139204);
  v15 = *(_QWORD *)(a2 + 8);
  v16 = *(_QWORD *)(v15 + 16);
  v17 = v15 + 8;
  if ( v16 )
  {
    v108 = v14;
    v117 = v17;
    v18 = v16;
    v19 = v17;
    do
    {
      v20 = *(_QWORD *)(v18 + 40);
      if ( !v20 )
        goto LABEL_63;
      v21 = 5;
      if ( v20 <= 5 )
        v21 = *(_QWORD *)(v18 + 40);
      if ( ((v22 = memcmp(*(const void **)(v18 + 32), "write", v21)) != 0
         || (v22 = v20 - 5, (__int64)(v20 - 5) <= 0x7FFFFFFF))
        && v22 < 0 )
      {
LABEL_63:
        v18 = *(_QWORD *)(v18 + 24);
      }
      else
      {
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 16);
      }
    }
    while ( v18 );
    v14 = v108;
    v2 = a2;
    if ( v117 != v19 )
    {
      v107 = v19;
      std::string::compare(*(void **)(v19 + 32), *(_QWORD *)(v19 + 40), "write");
    }
  }
  LOBYTE(v107) = 0;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    LOBYTE(v107) = 0;
  }
  if ( *(_BYTE *)v2 != 1 )
    JUMPOUT(0x138C17);
  v23 = *(_QWORD *)(v2 + 8);
  v131 = v2;
  v24 = *(_QWORD *)(v23 + 16);
  v25 = v23 + 8;
  if ( v24 )
  {
    v26 = v25;
    v27 = v24;
    v119 = v14;
    v121 = v25;
    do
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)(v27 + 40);
        if ( !v30 )
          break;
        v28 = 7;
        if ( v30 <= 7 )
          v28 = *(_QWORD *)(v27 + 40);
        v29 = memcmp(*(const void **)(v27 + 32), "execute", v28);
        if ( v29 || (v29 = v30 - 7, (__int64)(v30 - 7) <= 0x7FFFFFFF) )
        {
          if ( v29 < 0 )
            break;
        }
        v26 = v27;
        v27 = *(_QWORD *)(v27 + 16);
        if ( !v27 )
          goto LABEL_46;
      }
      v27 = *(_QWORD *)(v27 + 24);
    }
    while ( v27 );
LABEL_46:
    v31 = v26;
    v14 = v119;
    if ( v121 != v26 )
    {
      v32 = std::string::compare(*(void **)(v26 + 32), *(_QWORD *)(v26 + 40), "execute");
      v31 = v26;
      if ( v32 > 0 )
        v31 = v121;
    }
  }
  else
  {
    v31 = v25;
  }
  v133 = v31;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    if ( v14 )
      v33 = 4;
    else
      v33 = 0;
    *(_BYTE *)(v6 + 42) = v33;
  }
  else
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    *(_BYTE *)(v6 + 42) = 4 * v14;
  }
  update_segm();
  *(_QWORD *)&v140 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v139 = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "address", v35, v36, v37, v38, (int)&v166, a1, v107);
  v140 = (unsigned __int64)v34;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v136, v176, v39, v40, v41, v42, v89, v98, v109);
  v141 = 0;
  *(_QWORD *)&v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v141 = 3;
  v43 = (_QWORD *)operator new(0x20u);
  v44 = v136;
  v45 = v43 + 2;
  v46 = v137;
  *v43 = v43 + 2;
  if ( v44 == v138 )
  {
    v81 = v46 + 1;
    if ( (unsigned int)(v46 + 1) >= 8 )
    {
      v43[2] = v138[0];
      *(_QWORD *)((char *)v45 + v81 - 8) = *(_QWORD *)((char *)&v138[-1] + v81);
      v82 = (unsigned __int64)(v43 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v83 = (char *)v45 - v82;
      v84 = (char *)((char *)v138 - v83);
      v85 = ((_DWORD)v83 + v81) & 0xFFFFFFF8;
      if ( v85 >= 8 )
      {
        v86 = v85 & 0xFFFFFFF8;
        v87 = 0;
        do
        {
          v88 = v87;
          v87 += 8;
          *(_QWORD *)(v82 + v88) = *(_QWORD *)&v84[v88];
        }
        while ( v87 < v86 );
      }
    }
    else if ( (v81 & 4) != 0 )
    {
      *((_DWORD *)v43 + 4) = v138[0];
      *(_DWORD *)((char *)v45 + v81 - 4) = *(_DWORD *)((char *)&v137 + v81 + 4);
    }
    else if ( (_DWORD)v46 != -1 )
    {
      *((_BYTE *)v43 + 16) = v138[0];
      if ( (v81 & 2) != 0 )
        *(_WORD *)((char *)v45 + v81 - 2) = *(_WORD *)((char *)&v137 + v81 + 6);
    }
  }
  else
  {
    *v43 = v44;
    v43[2] = v138[0];
  }
  v43[1] = v46;
  v136 = v138;
  LOBYTE(v138[0]) = 0;
  v137 = 0;
  v142 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v172,
    (const __m128i *)&v139,
    2,
    1);
  v172[2] = 0;
  v158 = 0;
  *(_QWORD *)&v159 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v158 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "permissions", v48, v49, v50, v51, v90, v99, v110);
  v143 = 0;
  *(_QWORD *)&v144 = 0;
  v159 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "read", v53, v54, v55, v56, v91, v100, v111);
  v145 = 4;
  v146 = v14;
  v147 = 0;
  v144 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v92,
    (const __m128i *)&v143,
    2,
    1);
  v168 = 0;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "write", v58, v59, v60, v61, (int)v92, v101, v112);
  v150 = 4;
  v151 = (unsigned __int8)v113;
  v152 = 0;
  v149 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v169,
    (const __m128i *)&v148,
    2,
    1);
  v169[2] = 0;
  v153 = 0;
  *(_QWORD *)&v154 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "execute", v63, v64, v65, v66, v93, v102, v113);
  v155 = 4;
  v156 = 0;
  v157 = 0;
  v154 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v170,
    (const __m128i *)&v153,
    2,
    1);
  v170[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v160,
    v94,
    3,
    v67,
    v68,
    v69,
    v94,
    v103,
    v114,
    (int)&v140,
    (int)&v142,
    (int)&v144,
    (__int64)&v149,
    (int)&v159,
    (int)&v139,
    (int)&v136,
    v127,
    v129,
    v131,
    v133,
    0);
  v160[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v173,
    (const __m128i *)&v158,
    2,
    1);
  v173[2] = 0;
  v161 = 0;
  *(_QWORD *)&v162 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "success", v71, v72, v73, v74, v95, v104, v115);
  v163 = 4;
  v164 = 1;
  v165 = 0;
  v162 = (unsigned __int64)v70;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    (const __m128i *)&v161,
    2,
    1);
  v174[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    (__int64)v172,
    3,
    v75,
    v76,
    v77,
    v96,
    (__int64)v105,
    v116,
    v118,
    v120,
    v122,
    v123,
    v124,
    v125,
    v126,
    v128,
    v130,
    v132,
    v134,
    v135);
  v78 = &v175;
  do
  {
    v78 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v78 != (char *)v172 );
  v79 = &v171;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v79 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v79 != v97 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v136 != v138 )
    operator delete(v136, v138[0] + 1LL);
  return v106;
}

