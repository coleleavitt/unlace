_QWORD *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_type_size(_QWORD *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rax
  int *v3; // r13
  __int64 v4; // rbx
  std::runtime_error *exception; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128i *v33; // r14
  __int64 tinfo_size; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  _OWORD *v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rsi
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // al
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned __int64 v54; // rdi
  char *v55; // rcx
  char *v56; // r8
  unsigned int v57; // edx
  unsigned int v58; // edx
  unsigned int v59; // ecx
  __int64 v60; // r9
  unsigned __int64 v61; // rdi
  char *v62; // rcx
  char *v63; // r8
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  __int64 v67; // r9
  int v68; // [rsp+0h] [rbp-1D8h]
  int v69; // [rsp+0h] [rbp-1D8h]
  int v70; // [rsp+0h] [rbp-1D8h]
  int v71; // [rsp+0h] [rbp-1D8h]
  int v72; // [rsp+0h] [rbp-1D8h]
  int v73; // [rsp+0h] [rbp-1D8h]
  int v74; // [rsp+8h] [rbp-1D0h]
  int v75; // [rsp+8h] [rbp-1D0h]
  int v76; // [rsp+8h] [rbp-1D0h]
  const __m128i *v77; // [rsp+8h] [rbp-1D0h]
  int v78; // [rsp+8h] [rbp-1D0h]
  const __m128i *v79; // [rsp+8h] [rbp-1D0h]
  __int64 v80; // [rsp+10h] [rbp-1C8h]
  __int64 v81; // [rsp+10h] [rbp-1C8h]
  __int64 v82; // [rsp+10h] [rbp-1C8h]
  int v83; // [rsp+10h] [rbp-1C8h]
  __int64 v84; // [rsp+10h] [rbp-1C8h]
  _QWORD *v85; // [rsp+18h] [rbp-1C0h]
  int v86; // [rsp+40h] [rbp-198h]
  _BYTE *v87; // [rsp+48h] [rbp-190h] BYREF
  void *v88; // [rsp+50h] [rbp-188h] BYREF
  __int64 v89; // [rsp+58h] [rbp-180h]
  __int64 v90; // [rsp+60h] [rbp-178h] BYREF
  int v91; // [rsp+68h] [rbp-170h]
  void *v92; // [rsp+70h] [rbp-168h] BYREF
  __int128 v93; // [rsp+78h] [rbp-160h] BYREF
  char v94; // [rsp+88h] [rbp-150h]
  __int128 v95; // [rsp+90h] [rbp-148h] BYREF
  char v96; // [rsp+A0h] [rbp-138h] BYREF
  __int128 v97; // [rsp+A8h] [rbp-130h]
  __int64 v98; // [rsp+B8h] [rbp-120h]
  __int128 v99; // [rsp+C0h] [rbp-118h]
  void *v100; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v101; // [rsp+D8h] [rbp-100h] BYREF
  char v102; // [rsp+E8h] [rbp-F0h]
  __int128 v103; // [rsp+F0h] [rbp-E8h]
  __m128i v104; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+110h] [rbp-C8h]
  __int64 v106; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+128h] [rbp-B0h]
  _QWORD v108[3]; // [rsp+130h] [rbp-A8h] BYREF
  char v109; // [rsp+148h] [rbp-90h] BYREF
  char v110[32]; // [rsp+150h] [rbp-88h] BYREF
  char v111[40]; // [rsp+170h] [rbp-68h] BYREF
  unsigned __int64 v112; // [rsp+198h] [rbp-40h]

  v85 = a1;
  v112 = __readfsqword(0x28u);
  v100 = (char *)&v101 + 8;
  *(_QWORD *)&v101 = 0;
  BYTE8(v101) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x919AF);
  std::string::_M_assign();
  v1 = v100;
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = __isoc23_strtoull();
  if ( v1 == v87 || *v87 || *v3 == 34 && v4 == -1 )
  {
    if ( v100 != (char *)&v101 + 8 )
      operator delete(v100, *((_QWORD *)&v101 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x919D5);
  }
  if ( v100 != (char *)&v101 + 8 )
    operator delete(v100, *((_QWORD *)&v101 + 1) + 1LL);
  v87 = nullptr;
  if ( (unsigned __int8)get_tinfo() )
  {
    tinfo_size = get_tinfo_size();
    v96 = 0;
    v36 = tinfo_size;
    *(_QWORD *)&v97 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v96 = 3;
    v37 = operator new(0x20u);
    *(_QWORD *)v37 = v37 + 16;
    strcpy((char *)(v37 + 16), "address");
    *(_QWORD *)(v37 + 8) = 7;
    v97 = (unsigned __int64)v37;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v92,
      v111,
      v38,
      v39,
      v40,
      v41,
      v68,
      (int)&v100,
      (__int64)&v87);
    LOBYTE(v98) = 0;
    *(_QWORD *)&v99 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v98) = 3;
    v42 = (_QWORD *)operator new(0x20u);
    v43 = v92;
    v44 = v42 + 2;
    v45 = v93;
    *v42 = v42 + 2;
    if ( v43 == (__int128 *)((char *)&v93 + 8) )
    {
      v53 = v45 + 1;
      if ( (unsigned int)(v45 + 1) >= 8 )
      {
        v42[2] = *((_QWORD *)&v93 + 1);
        *(_QWORD *)((char *)v44 + v53 - 8) = *(_QWORD *)((char *)&v93 + v53);
        v54 = (unsigned __int64)(v42 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v55 = (char *)v44 - v54;
        v56 = (char *)((char *)&v93 + 8 - v55);
        v57 = ((_DWORD)v55 + v53) & 0xFFFFFFF8;
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
      else if ( (v53 & 4) != 0 )
      {
        *((_DWORD *)v42 + 4) = DWORD2(v93);
        *(_DWORD *)((char *)v44 + v53 - 4) = *(_DWORD *)((char *)&v93 + v53 + 4);
      }
      else if ( (_DWORD)v45 != -1 )
      {
        *((_BYTE *)v42 + 16) = BYTE8(v93);
        if ( (v53 & 2) != 0 )
          *(_WORD *)((char *)v44 + v53 - 2) = *(_WORD *)((char *)&v93 + v53 + 6);
      }
    }
    else
    {
      *v42 = v43;
      v42[2] = *((_QWORD *)&v93 + 1);
    }
    v42[1] = v45;
    v92 = (char *)&v93 + 8;
    *(_QWORD *)&v93 = 0;
    BYTE8(v93) = 0;
    v99 = (unsigned __int64)v42;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v104,
      (const __m128i *)&v96);
    v105 = 0;
    LOBYTE(v100) = 0;
    *(_QWORD *)&v101 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v100) = 3;
    v46 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v46, "type_size", v47, v48, v49, v50, v73, v78, v84);
    v51 = 6;
    v101 = (unsigned __int64)v46;
    if ( v36 == -1 )
    {
      v36 = 0;
      v51 = 0;
    }
    v102 = v51;
    v103 = (unsigned __int64)v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v106,
      v79);
    v107 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v85,
      &v104);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v92 != (char *)&v93 + 8 )
      operator delete(v92, *((_QWORD *)&v93 + 1) + 1LL);
  }
  else
  {
    LOBYTE(v92) = 0;
    *(_QWORD *)&v93 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v92) = 3;
    v6 = operator new(0x20u);
    *(_QWORD *)v6 = v6 + 16;
    strcpy((char *)(v6 + 16), "address");
    *(_QWORD *)(v6 + 8) = 7;
    v93 = (unsigned __int64)v6;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v88,
      v110,
      v7,
      v8,
      v9,
      v10,
      v68,
      (int)&v100,
      (__int64)&v87);
    v94 = 0;
    *(_QWORD *)&v95 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v94 = 3;
    v11 = (_QWORD *)operator new(0x20u);
    v12 = (__int64 *)v88;
    v13 = v11 + 2;
    v14 = v89;
    *v11 = v11 + 2;
    if ( v12 == &v90 )
    {
      v52 = v14 + 1;
      if ( (unsigned int)(v14 + 1) >= 8 )
      {
        v11[2] = v90;
        *(_QWORD *)((char *)v13 + v52 - 8) = *(__int64 *)((char *)&v89 + v52);
        v61 = (unsigned __int64)(v11 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v62 = (char *)v13 - v61;
        v63 = (char *)((char *)&v90 - v62);
        v64 = ((_DWORD)v62 + v52) & 0xFFFFFFF8;
        if ( v64 >= 8 )
        {
          v65 = v64 & 0xFFFFFFF8;
          v66 = 0;
          do
          {
            v67 = v66;
            v66 += 8;
            *(_QWORD *)(v61 + v67) = *(_QWORD *)&v63[v67];
          }
          while ( v66 < v65 );
        }
      }
      else if ( (v52 & 4) != 0 )
      {
        *((_DWORD *)v11 + 4) = v90;
        *(_DWORD *)((char *)v13 + v52 - 4) = *(_DWORD *)((char *)&v89 + v52 + 4);
      }
      else if ( (_DWORD)v14 != -1 )
      {
        *((_BYTE *)v11 + 16) = v90;
        if ( (v52 & 2) != 0 )
          *(_WORD *)((char *)v13 + v52 - 2) = *(_WORD *)((char *)&v89 + v52 + 6);
      }
    }
    else
    {
      *v11 = v12;
      v11[2] = v90;
    }
    v11[1] = v14;
    v88 = &v90;
    v89 = 0;
    LOBYTE(v90) = 0;
    v95 = (unsigned __int64)v11;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v104,
      (const __m128i *)&v92);
    v105 = 0;
    v96 = 0;
    *(_QWORD *)&v97 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v96 = 3;
    v15 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v15, "type_size", v16, v17, v18, v19, v69, v74, v80);
    v98 = 0;
    v97 = (unsigned __int64)v15;
    v99 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v106,
      (const __m128i *)&v96);
    v107 = 0;
    LOBYTE(v100) = 0;
    *(_QWORD *)&v101 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v100) = 3;
    v20 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v20, "error", v21, v22, v23, v24, v70, v75, v81);
    v102 = 0;
    v101 = (unsigned __int64)v20;
    *(_QWORD *)&v103 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v102 = 3;
    v25 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v25,
      "No type information available",
      v26,
      v27,
      v28,
      v29,
      v71,
      v76,
      v82);
    v103 = (unsigned __int64)v25;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v108,
      v77);
    v108[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v85,
      (__int64)&v104,
      3,
      v30,
      v31,
      v32,
      v72,
      (__int64)v77,
      v83,
      (int)v85,
      (int)&v92,
      (int)&v93,
      (__int64)&v95,
      (int)&v88,
      v86,
      (int)v87,
      (int)v88,
      v89,
      v90,
      v91,
      (__int64)v92);
    v33 = (__m128i *)&v109;
    do
    {
      v33 = (__m128i *)((char *)v33 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v33 != &v104 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v88 != &v90 )
      operator delete(v88, v90 + 1);
  }
  clear_tinfo_t();
  return v85;
}

