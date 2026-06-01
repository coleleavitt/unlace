__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_ea_from_file_offset(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // r13
  size_t v10; // rbx
  const void *v11; // rdi
  _QWORD *v12; // r12
  size_t i; // r15
  size_t v14; // rdx
  signed __int64 v15; // rax
  size_t v16; // r14
  size_t v17; // rdx
  __int64 fileregion_ea; // r12
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 *v34; // rcx
  _QWORD *v35; // rsi
  __int64 v36; // rdi
  __int8 v37; // dl
  __m128i v38; // xmm0
  __int64 *v39; // rax
  __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  char *v48; // rbx
  unsigned int v50; // ecx
  unsigned __int64 v51; // r8
  char *v52; // rsi
  char *v53; // r9
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // esi
  __int64 v57; // r10
  int v58; // [rsp+0h] [rbp-1A8h]
  int v59; // [rsp+0h] [rbp-1A8h]
  int v60; // [rsp+0h] [rbp-1A8h]
  int v61; // [rsp+0h] [rbp-1A8h]
  int v62; // [rsp+0h] [rbp-1A8h]
  int v63; // [rsp+8h] [rbp-1A0h]
  int v64; // [rsp+8h] [rbp-1A0h]
  int v65; // [rsp+8h] [rbp-1A0h]
  _QWORD *v66; // [rsp+8h] [rbp-1A0h]
  __int64 v67; // [rsp+8h] [rbp-1A0h]
  __int64 v68; // [rsp+10h] [rbp-198h]
  __int64 v69; // [rsp+10h] [rbp-198h]
  __int64 v70; // [rsp+10h] [rbp-198h]
  const __m128i *v71; // [rsp+10h] [rbp-198h]
  void **v72; // [rsp+18h] [rbp-190h]
  char v73; // [rsp+18h] [rbp-190h]
  int v74; // [rsp+28h] [rbp-180h]
  __m128i v75; // [rsp+30h] [rbp-178h] BYREF
  void *v76; // [rsp+40h] [rbp-168h] BYREF
  __int64 v77; // [rsp+48h] [rbp-160h]
  __int64 v78; // [rsp+50h] [rbp-158h] BYREF
  char v79; // [rsp+58h] [rbp-150h]
  __int64 v80; // [rsp+60h] [rbp-148h] BYREF
  __int128 v81; // [rsp+68h] [rbp-140h]
  char v82; // [rsp+78h] [rbp-130h]
  __int64 v83; // [rsp+80h] [rbp-128h]
  __int64 v84; // [rsp+88h] [rbp-120h]
  char v85; // [rsp+90h] [rbp-118h] BYREF
  __int128 v86; // [rsp+98h] [rbp-110h]
  __m128i v87; // [rsp+A8h] [rbp-100h]
  __int64 v88; // [rsp+B8h] [rbp-F0h]
  void *s2; // [rsp+C0h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-E0h] BYREF
  char v91; // [rsp+D8h] [rbp-D0h]
  _BOOL8 v92; // [rsp+E0h] [rbp-C8h]
  __int64 v93; // [rsp+E8h] [rbp-C0h]
  _QWORD v94[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v95[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v96[3]; // [rsp+120h] [rbp-88h] BYREF
  char v97; // [rsp+138h] [rbp-70h] BYREF
  char v98[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v99; // [rsp+168h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "offset", a3, a4, a5, a6, v58, a1, (__int64)&s2);
  v6 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x126032);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(v7 + 16);
  v9 = (_QWORD *)(v7 + 8);
  if ( !v8 )
  {
LABEL_20:
    if ( v6 != &n[1] )
      goto LABEL_21;
    goto LABEL_22;
  }
  v10 = n[0];
  v11 = (const void *)v8[4];
  v12 = (_QWORD *)(v7 + 8);
  for ( i = v8[5]; ; i = v8[5] )
  {
    v14 = i;
    if ( v10 <= i )
      v14 = v10;
    if ( !v14 || (LODWORD(v15) = memcmp(v11, v6, v14), !(_DWORD)v15) )
    {
      v15 = i - v10;
      if ( (__int64)(i - v10) > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v15 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v15 < 0 )
      break;
LABEL_4:
    v12 = v8;
    v8 = (_QWORD *)v8[2];
    if ( !v8 )
      goto LABEL_14;
LABEL_5:
    v11 = (const void *)v8[4];
  }
  v8 = (_QWORD *)v8[3];
  if ( v8 )
    goto LABEL_5;
LABEL_14:
  if ( v9 == v12 )
    goto LABEL_20;
  v16 = v12[5];
  v17 = v16;
  if ( v10 <= v16 )
    v17 = v10;
  if ( v17 && memcmp(v6, (const void *)v12[4], v17) || (__int64)(v10 - v16) <= 0x7FFFFFFF )
    goto LABEL_20;
LABEL_21:
  operator delete(v6, n[1] + 1);
LABEL_22:
  v75.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
  fileregion_ea = get_fileregion_ea();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v80) = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "file_offset", v20, v21, v22, v23, v59, v63, v68);
  v82 = 5;
  v83 = 0;
  v81 = (unsigned __int64)v19;
  v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v94,
    (const __m128i *)&v80);
  v94[2] = 0;
  v85 = 0;
  *(_QWORD *)&v86 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "address", v25, v26, v27, v28, v60, v64, v69);
  v86 = (unsigned __int64)v24;
  if ( fileregion_ea == -1 )
  {
    LOBYTE(v72) = 0;
    v33 = nullptr;
    v37 = 0;
  }
  else
  {
    qsnprintf();
    v72 = &v76;
    std::string::basic_string<std::allocator<char>>((__int64 *)&v76, v98, v29, v30, v31, v32, v61, v65, v70);
    v75 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v33 = (_QWORD *)operator new(0x20u);
    v34 = (__int64 *)v76;
    v35 = v33 + 2;
    v36 = v77;
    *v33 = v33 + 2;
    if ( v34 == &v78 )
    {
      v50 = v36 + 1;
      if ( (unsigned int)(v36 + 1) >= 8 )
      {
        *v35 = v78;
        *(_QWORD *)((char *)v35 + v50 - 8) = *(__int64 *)((char *)&v77 + v50);
        v51 = (unsigned __int64)(v33 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v52 = (char *)v35 - v51;
        v53 = (char *)((char *)&v78 - v52);
        v54 = ((_DWORD)v52 + v50) & 0xFFFFFFF8;
        if ( v54 >= 8 )
        {
          v55 = v54 & 0xFFFFFFF8;
          v56 = 0;
          do
          {
            v57 = v56;
            v56 += 8;
            *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
          }
          while ( v56 < v55 );
        }
      }
      else if ( (v50 & 4) != 0 )
      {
        *(_DWORD *)v35 = v78;
        *(_DWORD *)((char *)v35 + v50 - 4) = *(_DWORD *)((char *)&v77 + v50 + 4);
      }
      else if ( (_DWORD)v36 != -1 )
      {
        *(_BYTE *)v35 = v78;
        if ( (v50 & 2) != 0 )
          *(_WORD *)((char *)v35 + v50 - 2) = *(_WORD *)((char *)&v77 + v50 + 6);
      }
    }
    else
    {
      *v33 = v34;
      v33[2] = v78;
    }
    v33[1] = v36;
    v77 = 0;
    LOBYTE(v78) = 0;
    LOBYTE(v72) = 1;
    v76 = &v78;
    v37 = 3;
  }
  v75.m128i_i8[0] = v37;
  v75.m128i_i64[1] = (__int64)v33;
  v38 = _mm_load_si128(&v75);
  v88 = 0;
  v87 = v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v85);
  v95[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v39 = (__int64 *)operator new(0x20u);
  v74 = (int)v39;
  v40 = v39;
  std::string::basic_string<std::allocator<char>>(v39, "found", v41, v42, v43, v44, v61, v65, v70);
  v91 = 4;
  v93 = 0;
  *(_OWORD *)n = (unsigned __int64)v40;
  v92 = fileregion_ea != -1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    v71);
  v96[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (__int64)v94,
    3,
    v45,
    v46,
    v47,
    v62,
    (__int64)v66,
    (int)v71,
    (int)v72,
    (int)&v85,
    v74,
    v75.m128i_i64[0],
    v75.m128i_i32[2],
    (int)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    *((__int64 *)&v81 + 1));
  v48 = &v97;
  do
  {
    v48 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != (char *)v94 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v73 && v76 != &v78 )
    operator delete(v76, v78 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v67;
}

