__int64 __fastcall ida_mcp::tools::database::handle_save_database(int a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  unsigned int v3; // r12d
  __int8 *v4; // rbx
  unsigned __int8 v5; // r15
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // r12
  __int8 *v25; // rbp
  __int8 *v26; // r15
  size_t v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // r12
  __int8 *v30; // r15
  size_t v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // r12
  __int64 v34; // r12
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _BYTE *v41; // rax
  __int64 v42; // rdx
  _BYTE *v43; // rax
  unsigned int v44; // eax
  unsigned int v45; // edx
  __int64 v46; // rsi
  int v47; // [rsp+0h] [rbp-118h]
  _QWORD *v48; // [rsp+0h] [rbp-118h]
  __int64 v49; // [rsp+0h] [rbp-118h]
  int v50; // [rsp+8h] [rbp-110h]
  int v51; // [rsp+8h] [rbp-110h]
  __int8 *v52; // [rsp+8h] [rbp-110h]
  __int64 v53; // [rsp+10h] [rbp-108h]
  __int64 v54; // [rsp+10h] [rbp-108h]
  __int8 *v55; // [rsp+20h] [rbp-F8h]
  __m128 v56; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v57[8]; // [rsp+38h] [rbp-E0h] BYREF
  char v58; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v59; // [rsp+48h] [rbp-D0h] BYREF
  char v60; // [rsp+58h] [rbp-C0h]
  __int64 v61; // [rsp+60h] [rbp-B8h]
  __int64 v62; // [rsp+68h] [rbp-B0h]
  void *v63; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+78h] [rbp-A0h] BYREF
  char v65; // [rsp+88h] [rbp-90h]
  __int64 v66; // [rsp+90h] [rbp-88h]
  __int64 v67; // [rsp+98h] [rbp-80h]
  __m128i v68; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-68h]
  _QWORD v70[12]; // [rsp+B8h] [rbp-60h] BYREF

  v3 = -1;
  v4 = nullptr;
  v70[4] = __readfsqword(0x28u);
  v56.m128_i8[8] = 0;
  v56.m128_u64[0] = 0;
  v55 = &v56.m128_i8[8];
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v23 = *(_QWORD *)(a2 + 8);
  v25 = *(__int8 **)(v23 + 16);
  if ( !v25 )
    goto LABEL_31;
  v4 = *(__int8 **)(v23 + 16);
  v52 = (__int8 *)(v23 + 8);
  v26 = (__int8 *)(v23 + 8);
  do
  {
    while ( 1 )
    {
      v29 = *((_QWORD *)v4 + 5);
      if ( !v29 )
        break;
      v27 = 7;
      if ( v29 <= 7 )
        v27 = *((_QWORD *)v4 + 5);
      v28 = memcmp(*((const void **)v4 + 4), "outfile", v27);
      if ( v28 || (v28 = v29 - 7, (__int64)(v29 - 7) <= 0x7FFFFFFF) )
      {
        if ( v28 < 0 )
          break;
      }
      v26 = v4;
      v4 = *((__int8 **)v4 + 2);
      if ( !v4 )
        goto LABEL_17;
    }
    v4 = *((__int8 **)v4 + 3);
  }
  while ( v4 );
LABEL_17:
  if ( v52 == v26 || std::string::compare(*((void **)v26 + 4), *((_QWORD *)v26 + 5), "outfile") > 0 )
    goto LABEL_19;
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    goto LABEL_33;
  v41 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v64) = 0;
  v63 = (char *)&v64 + 8;
  *(_QWORD *)&v64 = 0;
  if ( *v41 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v42 = v64;
  if ( v63 == (char *)&v64 + 8 )
  {
    if ( (_QWORD)v64 )
    {
      if ( (_QWORD)v64 == 1 )
      {
        v56.m128_i8[8] = BYTE8(v64);
        v42 = 1;
        goto LABEL_52;
      }
      if ( (unsigned int)v64 >= 8 )
      {
        v56.m128_u64[1] = *((_QWORD *)&v64 + 1);
        *(unsigned __int64 *)((char *)v56.m128_u64 + (unsigned int)v64) = *(_QWORD *)((char *)&v64 + (unsigned int)v64);
        if ( (((_DWORD)v42 + (unsigned int)&v56.m128_u32[2] - (unsigned int)v57) & 0xFFFFFFF8) >= 8 )
        {
          v44 = (v42 + (unsigned int)&v56.m128_u32[2] - (unsigned int)v57) & 0xFFFFFFF8;
          v45 = 0;
          do
          {
            v46 = v45;
            v45 += 8;
            *(_QWORD *)&v57[v46] = *(_QWORD *)((char *)&v64 + v46 - ((char *)&v56.m128_u16[4] - v57) + 8);
          }
          while ( v45 < v44 );
        }
LABEL_51:
        v42 = v64;
        goto LABEL_52;
      }
      if ( (v64 & 4) != 0 )
      {
        v56.m128_i32[2] = DWORD2(v64);
        *(__int32 *)((char *)&v56.m128_i32[1] + (unsigned int)v64) = *(_DWORD *)((char *)&v64 + (unsigned int)v64 + 4);
        v42 = v64;
        goto LABEL_52;
      }
      if ( (_DWORD)v64 )
      {
        v56.m128_i8[8] = BYTE8(v64);
        if ( (v64 & 2) != 0 )
        {
          *(__int16 *)((char *)&v56.m128_i16[3] + (unsigned int)v64) = *(_WORD *)((char *)&v64 + (unsigned int)v64 + 6);
          v42 = v64;
          goto LABEL_52;
        }
        goto LABEL_51;
      }
    }
LABEL_52:
    v56.m128_u64[0] = v42;
    v56.m128_i8[v42 + 8] = 0;
    v43 = v63;
    goto LABEL_39;
  }
  v55 = (__int8 *)v63;
  v56 = _mm_loadh_ps((const double *)&v64 + 1);
  v63 = (char *)&v64 + 8;
  v43 = (char *)&v64 + 8;
LABEL_39:
  *v43 = 0;
  if ( v63 != (char *)&v64 + 8 )
    operator delete(v63, *((_QWORD *)&v64 + 1) + 1LL);
  v4 = v55;
LABEL_33:
  if ( *(_BYTE *)a2 != 1 || (v34 = *(_QWORD *)(a2 + 8), (v25 = *(__int8 **)(v34 + 16)) == nullptr) )
  {
LABEL_31:
    v3 = -1;
    goto LABEL_2;
  }
  v52 = (__int8 *)(v34 + 8);
LABEL_19:
  v30 = v52;
  do
  {
    while ( 1 )
    {
      v33 = *((_QWORD *)v25 + 5);
      if ( !v33 )
        break;
      v31 = 5;
      if ( v33 <= 5 )
        v31 = *((_QWORD *)v25 + 5);
      v32 = memcmp(*((const void **)v25 + 4), "flags", v31);
      if ( v32 || (v32 = v33 - 5, (__int64)(v33 - 5) <= 0x7FFFFFFF) )
      {
        if ( v32 < 0 )
          break;
      }
      v30 = v25;
      v25 = *((__int8 **)v25 + 2);
      if ( !v25 )
        goto LABEL_28;
    }
    v25 = *((__int8 **)v25 + 3);
  }
  while ( v25 );
LABEL_28:
  if ( v52 == v30 )
    goto LABEL_31;
  v3 = -1;
  if ( std::string::compare(*((void **)v30 + 4), *((_QWORD *)v30 + 5), "flags") > 0 )
    goto LABEL_2;
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    goto LABEL_31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  LODWORD(v53) = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned int,0>();
  v3 = 0;
LABEL_2:
  v5 = save_database();
  v58 = 0;
  *(_QWORD *)&v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = 3;
  v6 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v6, "success", v7, v8, v9, v10, a1, (int)&v59, v53);
  v60 = 4;
  v62 = 0;
  v61 = v5;
  v59 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v68,
    (const __m128i *)&v58);
  LOBYTE(v63) = 0;
  v69 = 0;
  *(_QWORD *)&v64 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v63) = 3;
  v11 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v11, "flags", v12, v13, v14, v15, v47, v50, v54);
  v65 = 6;
  v66 = v3;
  v67 = 0;
  v64 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v70,
    (const __m128i *)&v63);
  v70[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v48,
    &v68);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v4 )
  {
    v16 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v16, v4, v17, v18, v19, v20, (int)v48, v51, 0);
    v21 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v21 = 3;
    *(_QWORD *)(v21 + 8) = v16;
  }
  else
  {
    v35 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v35,
      "Saved to current database location",
      v36,
      v37,
      v38,
      v39,
      (int)v48,
      v51,
      0);
    v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v40 = 3;
    *(_QWORD *)(v40 + 8) = v35;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v55 != (__int8 *)&v56.m128_u16[4] )
    operator delete(v55, v56.m128_u64[1] + 1);
  return v49;
}

