__int64 __fastcall ida_mcp::tools::types::`anonymous namespace'::handle_list_structs(_QWORD *a1)
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
  __int64 idati; // [rsp+0h] [rbp-1D8h]
  int v30; // [rsp+0h] [rbp-1D8h]
  int v31; // [rsp+0h] [rbp-1D8h]
  int v32; // [rsp+8h] [rbp-1D0h]
  __int64 v33; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v34; // [rsp+10h] [rbp-1C8h]
  __int64 v35; // [rsp+10h] [rbp-1C8h]
  __int64 v36; // [rsp+10h] [rbp-1C8h]
  int v37; // [rsp+10h] [rbp-1C8h]
  int v38; // [rsp+18h] [rbp-1C0h]
  unsigned int ordinal_limit; // [rsp+1Ch] [rbp-1BCh]
  __int64 v40; // [rsp+20h] [rbp-1B8h]
  int v41; // [rsp+28h] [rbp-1B0h]
  __int64 v42; // [rsp+30h] [rbp-1A8h]
  int v43; // [rsp+40h] [rbp-198h]
  int v44; // [rsp+48h] [rbp-190h]
  int s; // [rsp+50h] [rbp-188h]
  char dest; // [rsp+58h] [rbp-180h]
  __int64 v47; // [rsp+60h] [rbp-178h]
  int v48; // [rsp+68h] [rbp-170h]
  __int64 v49; // [rsp+70h] [rbp-168h] BYREF
  _QWORD *v50; // [rsp+78h] [rbp-160h]
  __int64 v51; // [rsp+A0h] [rbp-138h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-130h]
  char v53; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-110h]
  char v55; // [rsp+D8h] [rbp-100h]
  __int64 v56; // [rsp+E0h] [rbp-F8h]
  __int64 v57; // [rsp+E8h] [rbp-F0h]
  char v58; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-E0h]
  __int64 v60; // [rsp+118h] [rbp-C0h]
  char v61; // [rsp+120h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+128h] [rbp-B0h] BYREF
  char v63; // [rsp+138h] [rbp-A0h]
  _BOOL8 v64; // [rsp+140h] [rbp-98h]
  __int64 v65; // [rsp+148h] [rbp-90h]
  _QWORD v66[3]; // [rsp+150h] [rbp-88h] BYREF
  _QWORD v67[3]; // [rsp+168h] [rbp-70h] BYREF
  _QWORD v68[3]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+198h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
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
  LODWORD(v51) = 1000;
  LODWORD(v42) = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  LOBYTE(v49) = 0;
  v50 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v49,
    nullptr,
    0,
    2);
  v2 = v49;
  v3 = v50;
  ordinal_limit = get_ordinal_limit();
  if ( ordinal_limit > 1 )
  {
    if ( v2 == 1 )
    {
      v4 = 1;
      v5 = 1;
      v34 = (int)v42;
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
        v34 = (int)v42;
        goto LABEL_16;
      }
      if ( v2 )
      {
        v34 = (int)v42;
LABEL_8:
        v6 = 1;
      }
      else
      {
        v6 = 0;
        v34 = (int)v42;
      }
    }
    if ( v6 < v34 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v52 = v4;
        v47 = 0;
        WORD4(v52) = 257;
        v51 = idati;
        if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
        {
          v51 = 0;
          v52 = 0;
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
  v53 = 0;
  *(_QWORD *)&v54 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v53 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "struct_count", v8, v9, v10, v11, idati, (int)&v51, v34);
  v54 = (unsigned __int64)v7;
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
  v55 = 6;
  v56 = v12;
  v57 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (const __m128i *)&v53);
  v66[2] = 0;
  v58 = 0;
  *(_QWORD *)&v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v13, "structs", v14, v15, v16, v17, v30, v32, v35);
  LOBYTE(v49) = v2;
  v50 = v3;
  v59 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v60 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v58);
  v67[2] = 0;
  v61 = 0;
  *(_QWORD *)&v62 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v61 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "truncated", v19, v20, v21, v22, (int)&v62, (int)&v58, v36);
  v62 = (unsigned __int64)v18;
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
  v63 = 4;
  v65 = 0;
  v64 = v23 >= (int)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    (const __m128i *)&v61);
  v68[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v66,
    3,
    v24,
    v25,
    v26,
    v31,
    v33,
    v37,
    v38,
    (int)a1,
    v41,
    v42,
    (int)&v49,
    v43,
    v44,
    s,
    dest,
    v47,
    v48,
    v49);
  v27 = &v69;
  do
  {
    v27 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v27 != v66 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v40;
}

