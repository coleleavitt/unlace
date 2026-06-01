__int64 __fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_get_default_reftype(int a1)
{
  int v1; // eax
  int v2; // edx
  char v3; // bl
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rbp
  unsigned int v32; // edx
  unsigned __int64 v33; // rdi
  char *v34; // rcx
  char *v35; // r8
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  __int64 v39; // r9
  int v40; // [rsp+0h] [rbp-1B8h]
  int v41; // [rsp+0h] [rbp-1B8h]
  int v42; // [rsp+0h] [rbp-1B8h]
  _QWORD *v43; // [rsp+0h] [rbp-1B8h]
  __int64 v44; // [rsp+0h] [rbp-1B8h]
  int v45; // [rsp+8h] [rbp-1B0h]
  int v46; // [rsp+8h] [rbp-1B0h]
  int v47; // [rsp+8h] [rbp-1B0h]
  __int64 v48; // [rsp+8h] [rbp-1B0h]
  __int64 v49; // [rsp+10h] [rbp-1A8h]
  __int64 v50; // [rsp+10h] [rbp-1A8h]
  __int64 v51; // [rsp+10h] [rbp-1A8h]
  int v52; // [rsp+10h] [rbp-1A8h]
  int v53; // [rsp+18h] [rbp-1A0h]
  unsigned __int8 default_reftype; // [rsp+1Fh] [rbp-199h]
  __int64 v55; // [rsp+30h] [rbp-188h]
  int v56; // [rsp+38h] [rbp-180h]
  int v57; // [rsp+40h] [rbp-178h]
  int v58; // [rsp+48h] [rbp-170h]
  void *v59; // [rsp+50h] [rbp-168h] BYREF
  __int64 v60; // [rsp+58h] [rbp-160h]
  __int64 v61; // [rsp+60h] [rbp-158h] BYREF
  int v62; // [rsp+68h] [rbp-150h]
  __int64 v63; // [rsp+70h] [rbp-148h] BYREF
  __int128 v64; // [rsp+78h] [rbp-140h] BYREF
  char v65; // [rsp+88h] [rbp-130h]
  __int128 v66; // [rsp+90h] [rbp-128h] BYREF
  char v67; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-110h]
  char v69; // [rsp+B8h] [rbp-100h]
  __int64 v70; // [rsp+C0h] [rbp-F8h]
  __int64 v71; // [rsp+C8h] [rbp-F0h]
  void *v72; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-E0h] BYREF
  char v74; // [rsp+E8h] [rbp-D0h]
  __int64 v75; // [rsp+F0h] [rbp-C8h]
  __int64 v76; // [rsp+F8h] [rbp-C0h]
  _QWORD v77[3]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v78[3]; // [rsp+118h] [rbp-A0h] BYREF
  _QWORD v79[3]; // [rsp+130h] [rbp-88h] BYREF
  char v80; // [rsp+148h] [rbp-70h] BYREF
  char v81[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v82; // [rsp+178h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v72 = (char *)&v73 + 8;
  *(_QWORD *)&v73 = 0;
  BYTE8(v73) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xB18CD);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v72, v73);
  v58 = v2;
  v3 = v2;
  v57 = v1;
  if ( v72 != (char *)&v73 + 8 )
    operator delete(v72, *((_QWORD *)&v73 + 1) + 1LL);
  if ( !v3 )
    JUMPOUT(0xB17E5);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  default_reftype = get_default_reftype();
  *(_QWORD *)&v64 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v63) = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "address", v5, v6, v7, v8, a1, (int)&v64, v49);
  v64 = (unsigned __int64)v4;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v59, v81, v9, v10, v11, v12, v40, v45, v50);
  v65 = 0;
  *(_QWORD *)&v66 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = (__int64 *)v59;
  v15 = v13 + 2;
  v16 = v60;
  *v13 = v13 + 2;
  if ( v14 == &v61 )
  {
    v32 = v16 + 1;
    if ( (unsigned int)(v16 + 1) >= 8 )
    {
      v13[2] = v61;
      *(_QWORD *)((char *)v15 + v32 - 8) = *(__int64 *)((char *)&v60 + v32);
      v33 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v34 = (char *)v15 - v33;
      v35 = (char *)((char *)&v61 - v34);
      v36 = ((_DWORD)v34 + v32) & 0xFFFFFFF8;
      if ( v36 >= 8 )
      {
        v37 = v36 & 0xFFFFFFF8;
        v38 = 0;
        do
        {
          v39 = v38;
          v38 += 8;
          *(_QWORD *)(v33 + v39) = *(_QWORD *)&v35[v39];
        }
        while ( v38 < v37 );
      }
    }
    else if ( (v32 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = v61;
      *(_DWORD *)((char *)v15 + v32 - 4) = *(_DWORD *)((char *)&v60 + v32 + 4);
    }
    else if ( (_DWORD)v16 != -1 )
    {
      *((_BYTE *)v13 + 16) = v61;
      if ( (v32 & 2) != 0 )
        *(_WORD *)((char *)v15 + v32 - 2) = *(_WORD *)((char *)&v60 + v32 + 6);
    }
  }
  else
  {
    *v13 = v14;
    v13[2] = v61;
  }
  v13[1] = v16;
  v59 = &v61;
  v60 = 0;
  LOBYTE(v61) = 0;
  v66 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (const __m128i *)&v63);
  v77[2] = 0;
  v67 = 0;
  *(_QWORD *)&v68 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "operand", v18, v19, v20, v21, v41, v46, (__int64)&v66);
  v69 = 5;
  v70 = 0;
  v71 = 0;
  v68 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v78,
    (const __m128i *)&v67);
  v78[2] = 0;
  LOBYTE(v72) = 0;
  *(_QWORD *)&v73 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "default_reftype", v23, v24, v25, v26, v42, v47, v51);
  v74 = 5;
  v75 = default_reftype;
  v76 = 0;
  v73 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    (const __m128i *)&v72);
  v79[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v43,
    (__int64)v77,
    3,
    v27,
    v28,
    v29,
    (int)v43,
    v48,
    v52,
    v53,
    (int)&v63,
    (int)&v59,
    v55,
    v56,
    v57,
    v58,
    (int)v59,
    v60,
    v61,
    v62,
    v63);
  v30 = &v80;
  do
  {
    v30 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v30 != (char *)v77 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v59 != &v61 )
    operator delete(v59, v61 + 1);
  return v44;
}

