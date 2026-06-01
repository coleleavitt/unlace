__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_dref(int a1)
{
  int v1; // eax
  char v2; // dl
  char v3; // r12
  _BYTE *v4; // rax
  __int64 v5; // rax
  int v6; // edx
  char v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rbp
  unsigned int v44; // edx
  unsigned int v45; // edx
  unsigned __int64 v46; // rdi
  char *v47; // rcx
  char *v48; // r8
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // ecx
  __int64 v52; // r9
  unsigned __int64 v53; // rdi
  char *v54; // rcx
  char *v55; // r8
  unsigned int v56; // edx
  unsigned int v57; // edx
  unsigned int v58; // ecx
  __int64 v59; // r9
  int v60; // [rsp+0h] [rbp-218h]
  int v61; // [rsp+0h] [rbp-218h]
  int v62; // [rsp+0h] [rbp-218h]
  int v63; // [rsp+0h] [rbp-218h]
  int v64; // [rsp+0h] [rbp-218h]
  int v65; // [rsp+0h] [rbp-218h]
  int v66; // [rsp+8h] [rbp-210h]
  int v67; // [rsp+8h] [rbp-210h]
  int v68; // [rsp+8h] [rbp-210h]
  int v69; // [rsp+8h] [rbp-210h]
  _QWORD *v70; // [rsp+8h] [rbp-210h]
  __int64 v71; // [rsp+8h] [rbp-210h]
  __int64 v72; // [rsp+10h] [rbp-208h]
  __int64 v73; // [rsp+10h] [rbp-208h]
  __int64 v74; // [rsp+10h] [rbp-208h]
  __int64 v75; // [rsp+10h] [rbp-208h]
  int v76; // [rsp+10h] [rbp-208h]
  int v77; // [rsp+50h] [rbp-1C8h]
  char v78; // [rsp+58h] [rbp-1C0h]
  __int64 v79; // [rsp+60h] [rbp-1B8h]
  int v80; // [rsp+68h] [rbp-1B0h]
  void *v81; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v82; // [rsp+78h] [rbp-1A0h]
  _QWORD v83[2]; // [rsp+80h] [rbp-198h] BYREF
  void *v84; // [rsp+90h] [rbp-188h] BYREF
  __int64 v85; // [rsp+98h] [rbp-180h]
  _QWORD v86[2]; // [rsp+A0h] [rbp-178h] BYREF
  char v87; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-160h] BYREF
  char v89; // [rsp+C8h] [rbp-150h]
  __int128 v90; // [rsp+D0h] [rbp-148h] BYREF
  char v91; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v92; // [rsp+E8h] [rbp-130h] BYREF
  char v93; // [rsp+F8h] [rbp-120h]
  __int128 v94; // [rsp+100h] [rbp-118h] BYREF
  void *v95; // [rsp+110h] [rbp-108h] BYREF
  __int128 v96; // [rsp+118h] [rbp-100h] BYREF
  __int64 v97; // [rsp+128h] [rbp-F0h]
  __int64 v98; // [rsp+130h] [rbp-E8h]
  __int64 v99; // [rsp+138h] [rbp-E0h]
  _QWORD v100[3]; // [rsp+140h] [rbp-D8h] BYREF
  _QWORD v101[3]; // [rsp+158h] [rbp-C0h] BYREF
  _QWORD v102[3]; // [rsp+170h] [rbp-A8h] BYREF
  char v103; // [rsp+188h] [rbp-90h] BYREF
  char v104[32]; // [rsp+190h] [rbp-88h] BYREF
  char v105[40]; // [rsp+1B0h] [rbp-68h] BYREF
  unsigned __int64 v106; // [rsp+1D8h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  v95 = (char *)&v96 + 8;
  *(_QWORD *)&v96 = 0;
  BYTE8(v96) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x12C469);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v95, v96);
  v78 = v2;
  v3 = v2;
  v77 = v1;
  if ( v95 != (char *)&v96 + 8 )
    operator delete(v95, *((_QWORD *)&v96 + 1) + 1LL);
  v4 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v95 = (char *)&v96 + 8;
  *(_QWORD *)&v96 = 0;
  BYTE8(v96) = 0;
  if ( *v4 != 3 )
    JUMPOUT(0x12C20E);
  std::string::_M_assign();
  v5 = ida_mcp::parse_ea(v95, v96);
  v80 = v6;
  v7 = v6;
  v79 = v5;
  if ( v95 != (char *)&v96 + 8 )
    operator delete(v95, *((_QWORD *)&v96 + 1) + 1LL);
  if ( !v3 || !v7 )
    JUMPOUT(0x12C377);
  del_dref();
  *(_QWORD *)&v88 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "from", v9, v10, v11, v12, v60, a1, (__int64)&v88);
  v88 = (unsigned __int64)v8;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v81, v104, v13, v14, v15, v16, v61, v66, v72);
  v89 = 0;
  *(_QWORD *)&v90 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = 3;
  v17 = (_QWORD *)operator new(0x20u);
  v18 = v81;
  v19 = v17 + 2;
  v20 = v82;
  *v17 = v17 + 2;
  if ( v18 == v83 )
  {
    v44 = v20 + 1;
    if ( (unsigned int)(v20 + 1) >= 8 )
    {
      v17[2] = v83[0];
      *(_QWORD *)((char *)v19 + v44 - 8) = *(_QWORD *)((char *)&v83[-1] + v44);
      v46 = (unsigned __int64)(v17 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v47 = (char *)v19 - v46;
      v48 = (char *)((char *)v83 - v47);
      v49 = ((_DWORD)v47 + v44) & 0xFFFFFFF8;
      if ( v49 >= 8 )
      {
        v50 = v49 & 0xFFFFFFF8;
        v51 = 0;
        do
        {
          v52 = v51;
          v51 += 8;
          *(_QWORD *)(v46 + v52) = *(_QWORD *)&v48[v52];
        }
        while ( v51 < v50 );
      }
    }
    else if ( (v44 & 4) != 0 )
    {
      *((_DWORD *)v17 + 4) = v83[0];
      *(_DWORD *)((char *)v19 + v44 - 4) = *(_DWORD *)((char *)&v82 + v44 + 4);
    }
    else if ( (_DWORD)v20 != -1 )
    {
      *((_BYTE *)v17 + 16) = v83[0];
      if ( (v44 & 2) != 0 )
        *(_WORD *)((char *)v19 + v44 - 2) = *(_WORD *)((char *)&v82 + v44 + 6);
    }
  }
  else
  {
    *v17 = v18;
    v17[2] = v83[0];
  }
  v17[1] = v20;
  v81 = v83;
  LOBYTE(v83[0]) = 0;
  v82 = 0;
  v90 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v100,
    (const __m128i *)&v87,
    2,
    1);
  v100[2] = 0;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "to", v22, v23, v24, v25, v62, v67, v73);
  v92 = (unsigned __int64)v21;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v84, v105, v26, v27, v28, v29, v63, v68, v74);
  v93 = 0;
  *(_QWORD *)&v94 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v93 = 3;
  v30 = (_QWORD *)operator new(0x20u);
  v31 = v84;
  v32 = v30 + 2;
  v33 = v85;
  *v30 = v30 + 2;
  if ( v31 == v86 )
  {
    v45 = v33 + 1;
    if ( (unsigned int)(v33 + 1) >= 8 )
    {
      v30[2] = v86[0];
      *(_QWORD *)((char *)v32 + v45 - 8) = *(_QWORD *)((char *)&v86[-1] + v45);
      v53 = (unsigned __int64)(v30 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v54 = (char *)v32 - v53;
      v55 = (char *)((char *)v86 - v54);
      v56 = ((_DWORD)v54 + v45) & 0xFFFFFFF8;
      if ( v56 >= 8 )
      {
        v57 = v56 & 0xFFFFFFF8;
        v58 = 0;
        do
        {
          v59 = v58;
          v58 += 8;
          *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
        }
        while ( v58 < v57 );
      }
    }
    else if ( (v45 & 4) != 0 )
    {
      *((_DWORD *)v30 + 4) = v86[0];
      *(_DWORD *)((char *)v32 + v45 - 4) = *(_DWORD *)((char *)&v85 + v45 + 4);
    }
    else if ( (_DWORD)v33 != -1 )
    {
      *((_BYTE *)v30 + 16) = v86[0];
      if ( (v45 & 2) != 0 )
        *(_WORD *)((char *)v32 + v45 - 2) = *(_WORD *)((char *)&v85 + v45 + 6);
    }
  }
  else
  {
    *v30 = v31;
    v30[2] = v86[0];
  }
  v30[1] = v33;
  v84 = v86;
  v85 = 0;
  LOBYTE(v86[0]) = 0;
  v94 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    (const __m128i *)&v91,
    2,
    1);
  v101[2] = 0;
  LOBYTE(v95) = 0;
  *(_QWORD *)&v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v95) = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "success", v35, v36, v37, v38, v64, v69, v75);
  v97 = 4;
  v98 = 1;
  v99 = 0;
  v96 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v102,
    (const __m128i *)&v95,
    2,
    1);
  v102[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v70,
    (__int64)v100,
    3,
    v39,
    v40,
    v41,
    v65,
    (__int64)v70,
    v76,
    (int)&v90,
    (int)&v92,
    (int)&v94,
    (__int64)&v87,
    (int)&v91,
    (int)&v81,
    (int)&v84,
    v77,
    v78,
    v79,
    v80,
    (__int64)v81);
  v42 = &v103;
  do
  {
    v42 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v42 != (char *)v100 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v84 != v86 )
    operator delete(v84, v86[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v81 != v83 )
    operator delete(v81, v83[0] + 1LL);
  return v71;
}

