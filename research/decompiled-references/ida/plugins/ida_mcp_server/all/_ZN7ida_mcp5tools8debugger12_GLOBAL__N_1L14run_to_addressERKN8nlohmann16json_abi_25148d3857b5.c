__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::run_to_address(__int64 a1)
{
  _BYTE *v1; // rbx
  int *v2; // rax
  int *v3; // r15
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  std::runtime_error *exception; // rbx
  unsigned __int8 v8; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  unsigned int v12; // r15d
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  size_t *v15; // rdx
  _QWORD *v16; // rcx
  size_t v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // r12
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  char *v29; // rax
  char *v30; // r13
  unsigned int v31; // r15d
  unsigned int v32; // r15d
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edi
  unsigned __int64 v36; // r8
  char *v37; // rcx
  char *v38; // r9
  unsigned int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-198h]
  _QWORD *v43; // [rsp+0h] [rbp-198h]
  __int64 v44; // [rsp+0h] [rbp-198h]
  __int64 v45; // [rsp+8h] [rbp-190h]
  int v46; // [rsp+10h] [rbp-188h]
  int v47; // [rsp+18h] [rbp-180h]
  int v48; // [rsp+20h] [rbp-178h]
  _BYTE *v49; // [rsp+28h] [rbp-170h]
  size_t v50; // [rsp+28h] [rbp-170h]
  void *v51; // [rsp+30h] [rbp-168h] BYREF
  size_t v52; // [rsp+38h] [rbp-160h]
  size_t v53; // [rsp+40h] [rbp-158h] BYREF
  int v54; // [rsp+48h] [rbp-150h]
  int v55; // [rsp+50h] [rbp-148h] BYREF
  __int128 v56; // [rsp+58h] [rbp-140h] BYREF
  int v57; // [rsp+68h] [rbp-130h]
  __int64 v58; // [rsp+70h] [rbp-128h]
  __int64 v59; // [rsp+78h] [rbp-120h]
  char v60; // [rsp+80h] [rbp-118h] BYREF
  __int128 v61; // [rsp+88h] [rbp-110h] BYREF
  char v62; // [rsp+98h] [rbp-100h]
  __int128 v63; // [rsp+A0h] [rbp-F8h]
  void *v64; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v65; // [rsp+B8h] [rbp-E0h] BYREF
  char v66; // [rsp+C8h] [rbp-D0h]
  __int64 v67; // [rsp+D0h] [rbp-C8h]
  __int64 v68; // [rsp+D8h] [rbp-C0h]
  _QWORD v69[3]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v70[3]; // [rsp+F8h] [rbp-A0h] BYREF
  _QWORD v71[3]; // [rsp+110h] [rbp-88h] BYREF
  char v72[8]; // [rsp+128h] [rbp-70h] BYREF
  char s[40]; // [rsp+130h] [rbp-68h] BYREF
  unsigned __int64 v74; // [rsp+158h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
    JUMPOUT(0xCBAE8);
  v64 = (char *)&v65 + 8;
  *(_QWORD *)&v65 = 0;
  BYTE8(v65) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xCBABE);
  std::string::_M_assign();
  v1 = v64;
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = __isoc23_strtoull();
  if ( v1 == v49 || *v49 || *v3 == 34 && v4 == -1 )
  {
    if ( v64 != (char *)&v65 + 8 )
      operator delete(v64, *((_QWORD *)&v65 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v64 != (char *)&v65 + 8 )
    operator delete(v64, *((_QWORD *)&v65 + 1) + 1LL);
  *(_QWORD *)&v56 = 0;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64))callui)(
         1021,
         v4,
         0xFFFFFFFFLL,
         0,
         v5,
         v6,
         a1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v55) = 3;
  v9 = operator new(0x20u);
  strcpy((char *)(v9 + 16), "success");
  *(_QWORD *)v9 = v9 + 16;
  *(_QWORD *)(v9 + 8) = 7;
  v58 = v8;
  LOBYTE(v57) = 4;
  v59 = 0;
  v56 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v69,
    (const __m128i *)&v55);
  v69[2] = 0;
  v60 = 0;
  *(_QWORD *)&v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v60 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "target_address");
  *(_QWORD *)(v10 + 8) = 14;
  v61 = (unsigned __int64)v10;
  qsnprintf();
  v51 = &v53;
  v11 = strlen(s);
  v50 = v11;
  v12 = v11;
  if ( v11 > 0xF )
  {
    v27 = (_QWORD *)std::string::_M_create();
    v51 = v27;
    v53 = v50;
  }
  else
  {
    if ( v11 == 1 )
    {
      LOBYTE(v53) = s[0];
LABEL_15:
      v13 = &v53;
      goto LABEL_16;
    }
    if ( !v11 )
      goto LABEL_15;
    v27 = &v53;
  }
  if ( v12 >= 8 )
  {
    *v27 = *(_QWORD *)s;
    *(_QWORD *)((char *)v27 + v12 - 8) = *(_QWORD *)&v72[v12];
    v28 = (unsigned __int64)(v27 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v29 = (char *)v27 - v28;
    v30 = (char *)(s - v29);
    v31 = ((_DWORD)v29 + v12) & 0xFFFFFFF8;
    if ( v31 >= 8 )
    {
      v32 = v31 & 0xFFFFFFF8;
      v33 = 0;
      do
      {
        v34 = v33;
        v33 += 8;
        *(_QWORD *)(v28 + v34) = *(_QWORD *)&v30[v34];
      }
      while ( v33 < v32 );
    }
  }
  else if ( (v12 & 4) != 0 )
  {
    *(_DWORD *)v27 = *(_DWORD *)s;
    *(_DWORD *)((char *)v27 + v12 - 4) = *(_DWORD *)&v72[v12 + 4];
  }
  else if ( v12 )
  {
    *(_BYTE *)v27 = s[0];
    if ( (v12 & 2) != 0 )
      *(_WORD *)((char *)v27 + v12 - 2) = *(_WORD *)&v72[v12 + 6];
  }
  v11 = v50;
  v13 = v51;
LABEL_16:
  v52 = v11;
  *((_BYTE *)v13 + v11) = 0;
  v62 = 0;
  *(_QWORD *)&v63 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v62 = 3;
  v14 = (_QWORD *)operator new(0x20u);
  v15 = (size_t *)v51;
  v16 = v14 + 2;
  v17 = v52;
  *v14 = v14 + 2;
  if ( v15 == &v53 )
  {
    v35 = v17 + 1;
    if ( (unsigned int)(v17 + 1) >= 8 )
    {
      v14[2] = v53;
      *(_QWORD *)((char *)v16 + v35 - 8) = *(size_t *)((char *)&v52 + v35);
      v36 = (unsigned __int64)(v14 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v37 = (char *)v16 - v36;
      v38 = (char *)((char *)&v53 - v37);
      if ( (((_DWORD)v37 + v35) & 0xFFFFFFF8) >= 8 )
      {
        v39 = ((_DWORD)v37 + v35) & 0xFFFFFFF8;
        v40 = 0;
        do
        {
          v41 = v40;
          v40 += 8;
          *(_QWORD *)(v36 + v41) = *(_QWORD *)&v38[v41];
        }
        while ( v40 < v39 );
      }
    }
    else if ( (v35 & 4) != 0 )
    {
      *((_DWORD *)v14 + 4) = v53;
      *(_DWORD *)((char *)v16 + v35 - 4) = *(_DWORD *)((char *)&v52 + v35 + 4);
    }
    else if ( (_DWORD)v17 != -1 )
    {
      *((_BYTE *)v14 + 16) = v53;
      if ( (v35 & 2) != 0 )
        *(_WORD *)((char *)v16 + v35 - 2) = *(_WORD *)((char *)&v52 + v35 + 6);
    }
  }
  else
  {
    *v14 = v15;
    v14[2] = v53;
  }
  v14[1] = v17;
  v51 = &v53;
  v52 = 0;
  LOBYTE(v53) = 0;
  v63 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v70,
    (const __m128i *)&v60);
  v70[2] = 0;
  LOBYTE(v64) = 0;
  *(_QWORD *)&v65 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v64) = 3;
  v18 = operator new(0x20u);
  strcpy((char *)(v18 + 16), "process_state");
  *(_QWORD *)v18 = v18 + 16;
  *(_QWORD *)(v18 + 8) = 13;
  v65 = (unsigned __int64)v18;
  v21 = callui(1004, 0, v18 + 16, &callui, v19, v20, v42, &v56, &v61, &v51);
  v66 = 5;
  v67 = v21;
  v68 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v71,
    (const __m128i *)&v64);
  v71[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v43,
    (__int64)v69,
    3,
    v22,
    v23,
    v24,
    (int)v43,
    v45,
    v46,
    v47,
    v48,
    v50,
    (__int64)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    *((__int64 *)&v56 + 1),
    v57,
    v58);
  v25 = v72;
  do
  {
    v25 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v25 != (char *)v69 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v51 != &v53 )
    operator delete(v51, v53 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v44;
}

