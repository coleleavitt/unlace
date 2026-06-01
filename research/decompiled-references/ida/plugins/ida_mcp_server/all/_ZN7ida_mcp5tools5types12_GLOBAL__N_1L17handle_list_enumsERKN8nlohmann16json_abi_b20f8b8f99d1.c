__int64 __fastcall ida_mcp::tools::types::`anonymous namespace'::handle_list_enums(_QWORD *a1)
{
  std::runtime_error *exception; // rbx
  char v2; // r15
  _QWORD *v3; // r14
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 *v27; // rbp
  __int64 idati; // [rsp+0h] [rbp-1C8h]
  int v30; // [rsp+0h] [rbp-1C8h]
  int v31; // [rsp+0h] [rbp-1C8h]
  int v32; // [rsp+8h] [rbp-1C0h]
  __int64 v33; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v34; // [rsp+10h] [rbp-1B8h]
  __int64 v35; // [rsp+10h] [rbp-1B8h]
  __int64 v36; // [rsp+10h] [rbp-1B8h]
  int v37; // [rsp+10h] [rbp-1B8h]
  int v38; // [rsp+18h] [rbp-1B0h]
  unsigned int ordinal_limit; // [rsp+1Ch] [rbp-1ACh]
  __int64 v40; // [rsp+20h] [rbp-1A8h]
  __int64 v41; // [rsp+30h] [rbp-198h]
  int v42; // [rsp+38h] [rbp-190h]
  int v43; // [rsp+40h] [rbp-188h]
  int v44; // [rsp+48h] [rbp-180h]
  int v45; // [rsp+50h] [rbp-178h]
  char v46; // [rsp+58h] [rbp-170h]
  __int64 v47; // [rsp+60h] [rbp-168h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-160h]
  __int64 v49; // [rsp+70h] [rbp-158h]
  __int64 v50; // [rsp+90h] [rbp-138h] BYREF
  __int128 v51; // [rsp+98h] [rbp-130h]
  char v52; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-110h]
  char v54; // [rsp+C8h] [rbp-100h]
  __int64 v55; // [rsp+D0h] [rbp-F8h]
  __int64 v56; // [rsp+D8h] [rbp-F0h]
  char v57; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+E8h] [rbp-E0h]
  __int64 v59; // [rsp+108h] [rbp-C0h]
  char v60; // [rsp+110h] [rbp-B8h] BYREF
  __int128 v61; // [rsp+118h] [rbp-B0h] BYREF
  char v62; // [rsp+128h] [rbp-A0h]
  _BOOL8 v63; // [rsp+130h] [rbp-98h]
  __int64 v64; // [rsp+138h] [rbp-90h]
  _QWORD v65[3]; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v66[3]; // [rsp+158h] [rbp-70h] BYREF
  _QWORD v67[3]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v68; // [rsp+188h] [rbp-40h] BYREF

  v68 = __readfsqword(0x28u);
  idati = get_idati();
  if ( !idati )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "No type library available");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LODWORD(v50) = 1000;
  v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  LOBYTE(v47) = 0;
  v48 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v47,
    nullptr,
    0,
    2);
  v2 = v47;
  v3 = v48;
  ordinal_limit = get_ordinal_limit();
  if ( ordinal_limit > 1 )
  {
    if ( v2 == 1 )
    {
      v4 = 1;
      v5 = 1;
      v34 = v42;
LABEL_28:
      v6 = v3[5];
      v2 = 1;
    }
    else
    {
      v4 = 1;
      v5 = 1;
      if ( v2 == 2 )
      {
        v34 = v42;
        goto LABEL_16;
      }
      if ( v2 )
      {
        v34 = v42;
LABEL_8:
        v6 = 1;
      }
      else
      {
        v6 = 0;
        v34 = v42;
      }
    }
    if ( v6 < v34 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v51 = v4;
        v45 = 0;
        WORD4(v51) = 257;
        v50 = idati;
        if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x3F) == 0x2D )
        {
          v50 = 0;
          v51 = 0;
        }
        ++v5;
        clear_tinfo_t();
        if ( ordinal_limit == v5 )
          break;
        v4 = v5;
        if ( v2 == 1 )
          goto LABEL_28;
        if ( v2 == 2 )
        {
LABEL_16:
          v2 = 2;
          if ( (__int64)(v3[1] - *v3) >> 4 >= v34 )
            break;
        }
        else if ( v2 )
        {
          goto LABEL_8;
        }
      }
    }
  }
  v52 = 0;
  *(_QWORD *)&v53 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v52 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "enum_count", v8, v9, v10, v11, idati, (int)&v50, v34);
  v53 = (unsigned __int64)v7;
  if ( v2 == 1 )
  {
    v12 = v3[5];
  }
  else if ( v2 == 2 )
  {
    v12 = (__int64)(v3[1] - *v3) >> 4;
  }
  else
  {
    v12 = v2 != 0;
  }
  v54 = 6;
  v55 = v12;
  v56 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v65,
    (const __m128i *)&v52);
  v65[2] = 0;
  v57 = 0;
  *(_QWORD *)&v58 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v57 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v13, "enums", v14, v15, v16, v17, v30, v32, v35);
  LOBYTE(v47) = v2;
  v48 = v3;
  v58 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (const __m128i *)&v57);
  v66[2] = 0;
  v60 = 0;
  *(_QWORD *)&v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v60 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "truncated", v19, v20, v21, v22, (int)&v61, (int)&v57, v36);
  v61 = (unsigned __int64)v18;
  if ( v2 == 1 )
  {
    v23 = v3[5];
  }
  else if ( v2 == 2 )
  {
    v23 = (__int64)(v3[1] - *v3) >> 4;
  }
  else
  {
    v23 = v2 != 0;
  }
  v62 = 4;
  v64 = 0;
  v63 = v23 >= v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v60);
  v67[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v65,
    3,
    v24,
    v25,
    v26,
    v31,
    v33,
    v37,
    v38,
    (int)a1,
    (int)&v47,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    (int)v48,
    v49);
  v27 = &v68;
  do
  {
    v27 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v27 != v65 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v40;
}

