__int64 __fastcall ida_mcp::mcp::McpServer::handle_initialize(int a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 *v44; // rbp
  int v46; // [rsp+0h] [rbp-208h]
  int v47; // [rsp+0h] [rbp-208h]
  int v48; // [rsp+0h] [rbp-208h]
  int v49; // [rsp+0h] [rbp-208h]
  int v50; // [rsp+0h] [rbp-208h]
  int v51; // [rsp+0h] [rbp-208h]
  int v52; // [rsp+0h] [rbp-208h]
  _QWORD *v53; // [rsp+0h] [rbp-208h]
  __int64 v54; // [rsp+0h] [rbp-208h]
  int v55; // [rsp+8h] [rbp-200h]
  int v56; // [rsp+8h] [rbp-200h]
  int v57; // [rsp+8h] [rbp-200h]
  int v58; // [rsp+8h] [rbp-200h]
  int v59; // [rsp+8h] [rbp-200h]
  int v60; // [rsp+8h] [rbp-200h]
  int v61; // [rsp+8h] [rbp-200h]
  __int64 v62; // [rsp+8h] [rbp-200h]
  __int64 v63; // [rsp+10h] [rbp-1F8h]
  __int64 v64; // [rsp+10h] [rbp-1F8h]
  __int64 v65; // [rsp+10h] [rbp-1F8h]
  __int64 v66; // [rsp+10h] [rbp-1F8h]
  __int64 v67; // [rsp+10h] [rbp-1F8h]
  __int64 v68; // [rsp+10h] [rbp-1F8h]
  __int64 v69; // [rsp+10h] [rbp-1F8h]
  int v70; // [rsp+10h] [rbp-1F8h]
  int v71; // [rsp+50h] [rbp-1B8h]
  char v72; // [rsp+58h] [rbp-1B0h]
  __int64 v73; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v74; // [rsp+68h] [rbp-1A0h] BYREF
  char v75; // [rsp+78h] [rbp-190h]
  __int128 v76; // [rsp+80h] [rbp-188h] BYREF
  char v77; // [rsp+90h] [rbp-178h] BYREF
  __int128 v78; // [rsp+98h] [rbp-170h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-150h]
  char v80; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v81; // [rsp+C8h] [rbp-140h] BYREF
  char v82; // [rsp+D8h] [rbp-130h]
  __int128 v83; // [rsp+E0h] [rbp-128h] BYREF
  char v84; // [rsp+F0h] [rbp-118h] BYREF
  __int128 v85; // [rsp+F8h] [rbp-110h]
  char v86; // [rsp+108h] [rbp-100h]
  __int128 v87; // [rsp+110h] [rbp-F8h]
  __m128i v88; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+130h] [rbp-D8h]
  _QWORD v90[3]; // [rsp+138h] [rbp-D0h] BYREF
  char v91; // [rsp+150h] [rbp-B8h] BYREF
  __int128 v92; // [rsp+158h] [rbp-B0h]
  _QWORD v93[3]; // [rsp+168h] [rbp-A0h] BYREF
  _QWORD v94[3]; // [rsp+180h] [rbp-88h] BYREF
  _QWORD v95[3]; // [rsp+198h] [rbp-70h] BYREF
  _QWORD v96[3]; // [rsp+1B0h] [rbp-58h] BYREF
  unsigned __int64 v97; // [rsp+1C8h] [rbp-40h] BYREF

  v97 = __readfsqword(0x28u);
  *(_QWORD *)&v74 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v73) = 3;
  v1 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v1, "protocolVersion", v2, v3, v4, v5, a1, (int)&v74, v63);
  v75 = 0;
  *(_QWORD *)&v76 = 0;
  v74 = (unsigned __int64)v1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = 3;
  v6 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v6, "2025-11-25", v7, v8, v9, v10, v46, v55, (__int64)&v76);
  v76 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v94,
    (const __m128i *)&v73);
  v94[2] = 0;
  v77 = 0;
  *(_QWORD *)&v78 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "capabilities", v12, v13, v14, v15, v47, v56, v64);
  v78 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v77);
  v95[2] = 0;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "serverInfo", v17, v18, v19, v20, v48, v57, v65);
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  v92 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "name", v22, v23, v24, v25, v49, v58, v66);
  v82 = 0;
  *(_QWORD *)&v83 = 0;
  v81 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v26, "ida-mcp-server", v27, v28, v29, v30, v50, v59, v67);
  v83 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v88,
    (const __m128i *)&v80);
  v89 = 0;
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "version", v32, v33, v34, v35, v51, v60, v68);
  v86 = 0;
  v85 = (unsigned __int64)v31;
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v36, "1.0.0", v37, v38, v39, v40, v52, v61, v69);
  v87 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v90,
    (const __m128i *)&v84);
  v90[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v93,
    &v88);
  v93[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v91);
  v96[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v53,
    (__int64)v94,
    3,
    v41,
    v42,
    v43,
    (int)v53,
    v62,
    v70,
    (int)&v78,
    (int)&v81,
    (int)&v83,
    (__int64)&v73,
    (int)&v77,
    (int)&v80,
    (int)&v84,
    v71,
    v72,
    v73,
    v74,
    *((__int64 *)&v74 + 1));
  v44 = &v97;
  do
  {
    v44 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != v94 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v54;
}

