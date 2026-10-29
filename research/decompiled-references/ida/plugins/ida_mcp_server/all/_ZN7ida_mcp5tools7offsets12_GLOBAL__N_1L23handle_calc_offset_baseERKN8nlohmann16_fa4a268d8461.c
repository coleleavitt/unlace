__int64 __fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_calc_offset_base(__int64 a1)
{
  std::runtime_error *v1; // rbx
  void *exception; // r12
  char *v3; // rax
  __int8 *v4; // rbp
  __int8 v5; // r15
  int v6; // eax
  char v7; // dl
  char v8; // bp
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // r12
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned __int64 v48; // rdi
  char *v49; // rcx
  char *v50; // r8
  unsigned int v51; // edx
  unsigned int v52; // edx
  unsigned int v53; // ecx
  __int64 v54; // r9
  unsigned __int64 v55; // r8
  char *v56; // rcx
  char *v57; // r9
  unsigned int v58; // edx
  unsigned int v59; // edx
  unsigned int v60; // ecx
  __int64 v61; // r10
  int v62; // [rsp+D8h] [rbp-218h]
  int v63; // [rsp+D8h] [rbp-218h]
  int v64; // [rsp+D8h] [rbp-218h]
  int v65; // [rsp+D8h] [rbp-218h]
  int v66; // [rsp+D8h] [rbp-218h]
  int v67; // [rsp+E0h] [rbp-210h]
  int v68; // [rsp+E0h] [rbp-210h]
  int v69; // [rsp+E0h] [rbp-210h]
  const __m128i *v70; // [rsp+E0h] [rbp-210h]
  __int64 v71; // [rsp+E8h] [rbp-208h]
  __int64 v72; // [rsp+E8h] [rbp-208h]
  __int64 v73; // [rsp+E8h] [rbp-208h]
  _QWORD *v74; // [rsp+E8h] [rbp-208h]
  __int64 v75; // [rsp+E8h] [rbp-208h]
  __int64 v76; // [rsp+F0h] [rbp-200h]
  int v77; // [rsp+128h] [rbp-1C8h]
  char v78; // [rsp+130h] [rbp-1C0h]
  __m128i v79; // [rsp+138h] [rbp-1B8h] BYREF
  void *v80; // [rsp+148h] [rbp-1A8h] BYREF
  __int64 v81; // [rsp+150h] [rbp-1A0h]
  _QWORD v82[2]; // [rsp+158h] [rbp-198h] BYREF
  void *v83; // [rsp+168h] [rbp-188h] BYREF
  __int64 v84; // [rsp+170h] [rbp-180h]
  _QWORD v85[2]; // [rsp+178h] [rbp-178h] BYREF
  char v86; // [rsp+188h] [rbp-168h] BYREF
  __int128 v87; // [rsp+190h] [rbp-160h] BYREF
  char v88; // [rsp+1A0h] [rbp-150h]
  __int128 v89; // [rsp+1A8h] [rbp-148h] BYREF
  char v90; // [rsp+1B8h] [rbp-138h] BYREF
  __int128 v91; // [rsp+1C0h] [rbp-130h] BYREF
  char v92; // [rsp+1D0h] [rbp-120h]
  __int64 v93; // [rsp+1D8h] [rbp-118h]
  __int64 v94; // [rsp+1E0h] [rbp-110h]
  void *v95; // [rsp+1E8h] [rbp-108h] BYREF
  _OWORD v96[2]; // [rsp+1F0h] [rbp-100h] BYREF
  __int64 v97; // [rsp+210h] [rbp-E0h]
  _QWORD v98[3]; // [rsp+218h] [rbp-D8h] BYREF
  _QWORD v99[3]; // [rsp+230h] [rbp-C0h] BYREF
  _QWORD v100[3]; // [rsp+248h] [rbp-A8h] BYREF
  char v101; // [rsp+260h] [rbp-90h] BYREF
  char v102[32]; // [rsp+268h] [rbp-88h] BYREF
  char v103[40]; // [rsp+288h] [rbp-68h] BYREF
  unsigned __int64 v104; // [rsp+2B0h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  BYTE8(v96[0]) = 0;
  v4 = (__int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v95 = (char *)v96 + 8;
  v5 = *v4;
  *(_QWORD *)&v96[0] = 0;
  if ( v5 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v4 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
        break;
      case 3:
        v3 = "string";
        break;
      case 4:
        v3 = "boolean";
        break;
      case 8:
        v3 = "binary";
        break;
      case 9:
        v3 = "discarded";
        break;
      default:
        v3 = "number";
        break;
    }
    v79.m128i_i64[0] = (__int64)v3;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v6 = ida_mcp::parse_ea(v95, *(unsigned __int64 *)&v96[0]);
  v78 = v7;
  v8 = v7;
  v77 = v6;
  if ( v95 != (char *)v96 + 8 )
    operator delete(v95, *((_QWORD *)&v96[0] + 1) + 1LL);
  if ( !v8 )
  {
    v1 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v1, "Invalid address format");
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v79.m128i_i32[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v76 = calc_offset_base();
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v9 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v9, "address", v10, v11, v12, v13, v62, (int)&v95, a1);
  v87 = (unsigned __int64)v9;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v80, v102, v14, v15, v16, v17, v63, v67, v71);
  v88 = 0;
  *(_QWORD *)&v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v88 = 3;
  v18 = (_QWORD *)operator new(0x20u);
  v19 = v80;
  v20 = v18 + 2;
  v21 = v81;
  *v18 = v18 + 2;
  if ( v19 == v82 )
  {
    v46 = v21 + 1;
    if ( (unsigned int)(v21 + 1) >= 8 )
    {
      v18[2] = v82[0];
      *(_QWORD *)((char *)v20 + v46 - 8) = *(_QWORD *)((char *)&v82[-1] + v46);
      v48 = (unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v49 = (char *)v20 - v48;
      v50 = (char *)((char *)v82 - v49);
      v51 = ((_DWORD)v49 + v46) & 0xFFFFFFF8;
      if ( v51 >= 8 )
      {
        v52 = v51 & 0xFFFFFFF8;
        v53 = 0;
        do
        {
          v54 = v53;
          v53 += 8;
          *(_QWORD *)(v48 + v54) = *(_QWORD *)&v50[v54];
        }
        while ( v53 < v52 );
      }
    }
    else if ( (v46 & 4) != 0 )
    {
      *((_DWORD *)v18 + 4) = v82[0];
      *(_DWORD *)((char *)v20 + v46 - 4) = *(_DWORD *)((char *)&v81 + v46 + 4);
    }
    else if ( (_DWORD)v21 != -1 )
    {
      *((_BYTE *)v18 + 16) = v82[0];
      if ( (v46 & 2) != 0 )
        *(_WORD *)((char *)v20 + v46 - 2) = *(_WORD *)((char *)&v81 + v46 + 6);
    }
  }
  else
  {
    *v18 = v19;
    v18[2] = v82[0];
  }
  v18[1] = v21;
  v80 = v82;
  v81 = 0;
  LOBYTE(v82[0]) = 0;
  v89 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v98,
    (const __m128i *)&v86);
  v98[2] = 0;
  v90 = 0;
  *(_QWORD *)&v91 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "operand", v23, v24, v25, v26, v64, v68, v72);
  v92 = 5;
  v93 = 0;
  v94 = 0;
  v91 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v99,
    (const __m128i *)&v90);
  v99[2] = 0;
  LOBYTE(v95) = 0;
  *(_QWORD *)&v96[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v95) = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "base", v28, v29, v30, v31, v65, v69, v73);
  v96[0] = (unsigned __int64)v27;
  if ( v76 == -1 )
  {
    v36 = nullptr;
    v5 = 0;
    v8 = 0;
  }
  else
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v83,
      v103,
      v32,
      v33,
      v34,
      v35,
      v66,
      (int)v70,
      (__int64)v74);
    v79 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v36 = (_QWORD *)operator new(0x20u);
    v37 = v83;
    v38 = v36 + 2;
    v39 = v84;
    *v36 = v36 + 2;
    if ( v37 == v85 )
    {
      v47 = v39 + 1;
      if ( (unsigned int)(v39 + 1) >= 8 )
      {
        *v38 = v85[0];
        *(_QWORD *)((char *)v38 + v47 - 8) = *(_QWORD *)((char *)&v85[-1] + v47);
        v55 = (unsigned __int64)(v36 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = (char *)v38 - v55;
        v57 = (char *)((char *)v85 - v56);
        v58 = ((_DWORD)v56 + v47) & 0xFFFFFFF8;
        if ( v58 >= 8 )
        {
          v59 = v58 & 0xFFFFFFF8;
          v60 = 0;
          do
          {
            v61 = v60;
            v60 += 8;
            *(_QWORD *)(v55 + v61) = *(_QWORD *)&v57[v61];
          }
          while ( v60 < v59 );
        }
      }
      else if ( (v47 & 4) != 0 )
      {
        *(_DWORD *)v38 = v85[0];
        *(_DWORD *)((char *)v38 + v47 - 4) = *(_DWORD *)((char *)&v84 + v47 + 4);
      }
      else if ( (_DWORD)v39 != -1 )
      {
        *(_BYTE *)v38 = v85[0];
        if ( (v47 & 2) != 0 )
          *(_WORD *)((char *)v38 + v47 - 2) = *(_WORD *)((char *)&v84 + v47 + 6);
      }
    }
    else
    {
      *v36 = v37;
      v36[2] = v85[0];
    }
    v36[1] = v39;
    v83 = v85;
    v84 = 0;
    LOBYTE(v85[0]) = 0;
  }
  v79.m128i_i8[0] = v5;
  v79.m128i_i64[1] = (__int64)v36;
  v40 = _mm_load_si128(&v79);
  v97 = 0;
  v96[1] = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v100,
    v70);
  v100[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v74,
    (__int64)v98,
    3,
    v41,
    v42,
    v43,
    v66,
    (__int64)v70,
    (int)v74,
    v76,
    (int)v96,
    (int)&v87,
    (__int64)&v89,
    (int)&v91,
    (int)&v86,
    (int)&v80,
    v77,
    v78,
    v79.m128i_i64[0],
    v79.m128i_i32[2],
    (__int64)v80);
  v44 = &v101;
  do
  {
    v44 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != (char *)v98 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v8 && v83 != v85 )
    operator delete(v83, v85[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v80 != v82 )
    operator delete(v80, v82[0] + 1LL);
  return v75;
}

