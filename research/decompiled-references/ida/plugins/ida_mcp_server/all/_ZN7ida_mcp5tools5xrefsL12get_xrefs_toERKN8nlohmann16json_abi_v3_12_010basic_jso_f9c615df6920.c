__int64 __fastcall ida_mcp::tools::xrefs::get_xrefs_to(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r13
  _QWORD *v9; // r15
  size_t v10; // r14
  const void *v11; // rdi
  _QWORD *v12; // r12
  size_t i; // rbx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  size_t v17; // rbx
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // r14
  char *v21; // rbp
  int *v22; // rax
  int *v23; // r15
  std::runtime_error *exception; // rax
  unsigned __int8 v25; // r13
  char v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // r14
  char v29; // si
  __int64 j; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rsi
  __int64 *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rbp
  unsigned int v67; // edx
  unsigned __int64 v68; // rdi
  char *v69; // rcx
  char *v70; // r8
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // ecx
  __int64 v74; // r9
  int v75; // [rsp+0h] [rbp-248h]
  int v76; // [rsp+0h] [rbp-248h]
  int v77; // [rsp+0h] [rbp-248h]
  int v78; // [rsp+0h] [rbp-248h]
  int v79; // [rsp+0h] [rbp-248h]
  const __m128i *v80; // [rsp+0h] [rbp-248h]
  int v81; // [rsp+8h] [rbp-240h]
  int v82; // [rsp+8h] [rbp-240h]
  int v83; // [rsp+8h] [rbp-240h]
  __int64 v84; // [rsp+8h] [rbp-240h]
  __int64 v85; // [rsp+8h] [rbp-240h]
  __int64 v86; // [rsp+10h] [rbp-238h]
  __int64 v87; // [rsp+10h] [rbp-238h]
  __int64 v88; // [rsp+10h] [rbp-238h]
  __int64 v89; // [rsp+10h] [rbp-238h]
  __int64 v90; // [rsp+10h] [rbp-238h]
  _QWORD *v91; // [rsp+10h] [rbp-238h]
  __int64 v92; // [rsp+10h] [rbp-238h]
  __int64 v93; // [rsp+18h] [rbp-230h]
  int v94; // [rsp+50h] [rbp-1F8h]
  char v95; // [rsp+58h] [rbp-1F0h]
  __int64 v96; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v97; // [rsp+68h] [rbp-1E0h]
  __int64 v98[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v99[4]; // [rsp+80h] [rbp-1C8h] BYREF
  void *v100; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-1A0h]
  _QWORD v102[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v103; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v104; // [rsp+C8h] [rbp-180h] BYREF
  char v105; // [rsp+D8h] [rbp-170h]
  __int128 v106; // [rsp+E0h] [rbp-168h] BYREF
  char v107; // [rsp+F0h] [rbp-158h] BYREF
  __int128 v108; // [rsp+F8h] [rbp-150h] BYREF
  char v109; // [rsp+108h] [rbp-140h]
  __int64 v110; // [rsp+110h] [rbp-138h]
  __int64 v111; // [rsp+118h] [rbp-130h]
  char v112; // [rsp+120h] [rbp-128h] BYREF
  __int128 v113; // [rsp+128h] [rbp-120h] BYREF
  char v114; // [rsp+138h] [rbp-110h]
  __int64 v115; // [rsp+140h] [rbp-108h]
  __int64 v116; // [rsp+148h] [rbp-100h]
  void *s2; // [rsp+150h] [rbp-F8h] BYREF
  size_t n[2]; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v119; // [rsp+178h] [rbp-D0h]
  _QWORD v120[3]; // [rsp+180h] [rbp-C8h] BYREF
  _QWORD v121[3]; // [rsp+198h] [rbp-B0h] BYREF
  _QWORD v122[3]; // [rsp+1B0h] [rbp-98h] BYREF
  _QWORD v123[3]; // [rsp+1C8h] [rbp-80h] BYREF
  char v124[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v125; // [rsp+208h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, (int)&s2, a2, a1);
  v6 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x61964);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(v7 + 16);
  v9 = (_QWORD *)(v7 + 8);
  if ( !v8 )
    goto LABEL_25;
  v10 = n[0];
  v11 = (const void *)v8[4];
  v12 = (_QWORD *)(v7 + 8);
  for ( i = v8[5]; ; i = v8[5] )
  {
    v14 = i;
    if ( v10 <= i )
      v14 = v10;
    if ( !v14 || (v15 = memcmp(v11, v6, v14)) == 0 )
    {
      v16 = i - v10;
      if ( v16 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v16 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v15 = v16;
    }
    if ( v15 < 0 )
      break;
LABEL_4:
    v12 = v8;
    v8 = (_QWORD *)v8[2];
    if ( !v8 )
      goto LABEL_15;
LABEL_5:
    v11 = (const void *)v8[4];
  }
  v8 = (_QWORD *)v8[3];
  if ( v8 )
    goto LABEL_5;
LABEL_15:
  if ( v12 == v9 )
    goto LABEL_25;
  v17 = v12[5];
  v18 = v17;
  if ( v10 <= v17 )
    v18 = v10;
  if ( v18 )
  {
    v19 = memcmp(v6, (const void *)v12[4], v18);
    if ( v19 )
    {
LABEL_23:
      if ( v19 >= 0 )
        v9 = v12;
      goto LABEL_25;
    }
  }
  v20 = v10 - v17;
  if ( v20 > 0x7FFFFFFF )
  {
    v9 = v12;
    goto LABEL_26;
  }
  if ( v20 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v19 = v20;
    goto LABEL_23;
  }
LABEL_25:
  if ( v6 != &n[1] )
LABEL_26:
    operator delete(v6, n[1] + 1);
  s2 = &n[1];
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  if ( *((_BYTE *)v9 + 64) != 3 )
    JUMPOUT(0x61D76);
  std::string::_M_assign();
  v21 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v21 = (char *)s2 + 2;
  v22 = __errno_location();
  *v22 = 0;
  v23 = v22;
  v93 = __isoc23_strtoull();
  if ( v21 == (char *)v99[0] || *(_BYTE *)v99[0] || *v23 == 34 && v93 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x61B85);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  LOBYTE(v99[0]) = 0;
  v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[13],bool,0>();
  LOBYTE(v96) = 0;
  v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v26 = 0;
  if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    ida_mcp::tools::xrefs::build_xref_json((int)v98, v99);
    v27 = operator new(0x18u);
    *(_QWORD *)(v27 + 16) = 0;
    v28 = (_QWORD *)v27;
    *(_OWORD *)v27 = 0;
LABEL_41:
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v29 = v98[0];
    for ( j = v98[1]; ; j = 0 )
    {
      LOBYTE(v98[0]) = v29;
      v98[1] = j;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        break;
      ida_mcp::tools::xrefs::build_xref_json((int)v98, v99);
      v31 = v28[1];
      if ( v28[2] == v31 )
        goto LABEL_41;
      v32 = v31 + 16;
      v29 = 0;
      *(__m128i *)(v32 - 16) = _mm_load_si128((const __m128i *)v98);
      v28[1] = v32;
    }
    v26 = 2;
  }
  else
  {
    v28 = nullptr;
  }
  v103 = 0;
  *(_QWORD *)&v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v33 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v33, "address", v34, v35, v36, v37, v75, 0, v86);
  v104 = (unsigned __int64)v33;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v100, v124, v38, v39, v40, v41, v76, (int)v124, v87);
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v42 = (_QWORD *)operator new(0x20u);
  v43 = v100;
  v44 = v42 + 2;
  v45 = v101;
  *v42 = v42 + 2;
  if ( v43 == v102 )
  {
    v67 = v45 + 1;
    if ( (unsigned int)(v45 + 1) >= 8 )
    {
      v42[2] = v102[0];
      *(_QWORD *)((char *)v44 + v67 - 8) = *(_QWORD *)((char *)&v102[-1] + v67);
      v68 = (unsigned __int64)(v42 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v69 = (char *)v44 - v68;
      v70 = (char *)((char *)v102 - v69);
      v71 = ((_DWORD)v69 + v67) & 0xFFFFFFF8;
      if ( v71 >= 8 )
      {
        v72 = v71 & 0xFFFFFFF8;
        v73 = 0;
        do
        {
          v74 = v73;
          v73 += 8;
          *(_QWORD *)(v68 + v74) = *(_QWORD *)&v70[v74];
        }
        while ( v73 < v72 );
      }
    }
    else if ( (v67 & 4) != 0 )
    {
      *((_DWORD *)v42 + 4) = v102[0];
      *(_DWORD *)((char *)v44 + v67 - 4) = *(_DWORD *)((char *)&v101 + v67 + 4);
    }
    else if ( (_DWORD)v45 != -1 )
    {
      *((_BYTE *)v42 + 16) = v102[0];
      if ( (v67 & 2) != 0 )
        *(_WORD *)((char *)v44 + v67 - 2) = *(_WORD *)((char *)&v101 + v67 + 6);
    }
  }
  else
  {
    *v42 = v43;
    v42[2] = v102[0];
  }
  v42[1] = v45;
  v100 = v102;
  v101 = 0;
  LOBYTE(v102[0]) = 0;
  v106 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v120,
    (const __m128i *)&v103);
  v120[2] = 0;
  v107 = 0;
  *(_QWORD *)&v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, "xref_count", v47, v48, v49, v50, v77, v81, v88);
  v108 = (unsigned __int64)v46;
  if ( v26 == 2 )
    v51 = (__int64)(v28[1] - *v28) >> 4;
  else
    v51 = v26 != 0;
  v109 = 6;
  v110 = v51;
  v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v121,
    (const __m128i *)&v107);
  v121[2] = 0;
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "include_flow", v53, v54, v55, v56, v78, v82, v89);
  v114 = 4;
  v115 = v25;
  v116 = 0;
  v113 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v112);
  v122[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "xrefs", v58, v59, v60, v61, v79, v83, v90);
  LOBYTE(v96) = v26;
  v97 = (__int64)v28;
  *(_OWORD *)n = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v123,
    v80);
  v123[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v91,
    (__int64)v120,
    4,
    v62,
    v63,
    v64,
    (int)v80,
    v84,
    (int)v91,
    (int)&v106,
    (int)&v104,
    (int)&v108,
    (__int64)&v113,
    (int)&v96,
    (int)&v103,
    (int)&v100,
    v94,
    v95,
    v96,
    v97,
    v98[0]);
  v65 = (_QWORD *)v85;
  do
  {
    v65 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v65 != v120 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v100 != v102 )
    operator delete(v100, v102[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v92;
}

