__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_make_code(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  size_t *v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rbp
  size_t v10; // r13
  const void *v11; // rdi
  size_t i; // r15
  size_t v13; // rdx
  signed __int64 v14; // rax
  size_t v15; // r14
  size_t v16; // rdx
  int v17; // eax
  char *v18; // rbp
  int *v19; // rax
  int *v20; // r12
  __int64 v21; // r13
  std::runtime_error *exception; // rax
  __int64 insn; // r12
  __int64 *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rsi
  __int64 *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rbx
  unsigned int v53; // edi
  unsigned __int64 v54; // r8
  int v55; // edx
  char *v56; // rcx
  unsigned int v57; // edi
  unsigned int v58; // edi
  unsigned int v59; // edx
  __int64 v60; // r9
  __m128i v61; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v62; // [rsp+10h] [rbp-198h]
  __int128 *v63; // [rsp+18h] [rbp-190h]
  __int64 *v64; // [rsp+20h] [rbp-188h]
  void **v65; // [rsp+28h] [rbp-180h]
  __int64 v66; // [rsp+30h] [rbp-178h]
  char *v67; // [rsp+38h] [rbp-170h]
  void *v68; // [rsp+40h] [rbp-168h] BYREF
  __int64 v69; // [rsp+48h] [rbp-160h]
  __int64 v70; // [rsp+50h] [rbp-158h] BYREF
  char v71; // [rsp+58h] [rbp-150h]
  __int64 v72; // [rsp+60h] [rbp-148h] BYREF
  __int128 v73; // [rsp+68h] [rbp-140h] BYREF
  char v74; // [rsp+78h] [rbp-130h]
  __int128 v75; // [rsp+80h] [rbp-128h] BYREF
  char v76; // [rsp+90h] [rbp-118h] BYREF
  __int128 v77; // [rsp+98h] [rbp-110h]
  char v78; // [rsp+A8h] [rbp-100h]
  _BOOL8 v79; // [rsp+B0h] [rbp-F8h]
  __int64 v80; // [rsp+B8h] [rbp-F0h]
  void *s2; // [rsp+C0h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-E0h] BYREF
  char v83; // [rsp+D8h] [rbp-D0h]
  __int64 v84; // [rsp+E0h] [rbp-C8h]
  __int64 v85; // [rsp+E8h] [rbp-C0h]
  _QWORD v86[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v87[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v88[3]; // [rsp+120h] [rbp-88h] BYREF
  char v89; // [rsp+138h] [rbp-70h] BYREF
  char v90[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v91; // [rsp+168h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, v61.m128i_i32[0], a1, v62);
  v6 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x124D90);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD **)(v7 + 16);
  v9 = v7 + 8;
  v61.m128i_i64[0] = v7 + 8;
  if ( !v8 )
    goto LABEL_24;
  v10 = n[0];
  v11 = (const void *)v8[4];
  for ( i = v8[5]; ; i = v8[5] )
  {
    v13 = i;
    if ( v10 <= i )
      v13 = v10;
    if ( !v13 || (LODWORD(v14) = memcmp(v11, v6, v13), !(_DWORD)v14) )
    {
      v14 = i - v10;
      if ( (__int64)(i - v10) > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v14 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v14 < 0 )
      break;
LABEL_4:
    v9 = (__int64)v8;
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
  if ( v61.m128i_i64[0] != v9 )
  {
    v15 = *(_QWORD *)(v9 + 40);
    v16 = v15;
    if ( v10 <= v15 )
      v16 = v10;
    if ( v16 && (v17 = memcmp(v6, *(const void **)(v9 + 32), v16)) != 0 )
    {
LABEL_22:
      if ( v17 < 0 )
        v9 = v61.m128i_i64[0];
    }
    else if ( (__int64)(v10 - v15) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v10 - v15) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v17 = v10 - v15;
        goto LABEL_22;
      }
      v9 = v61.m128i_i64[0];
    }
  }
LABEL_24:
  if ( v6 != &n[1] )
    operator delete(v6, n[1] + 1);
  s2 = &n[1];
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  if ( *(_BYTE *)(v9 + 64) != 3 )
    JUMPOUT(0x124F67);
  std::string::_M_assign();
  v18 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v18 = (char *)s2 + 2;
  v19 = __errno_location();
  *v19 = 0;
  v20 = v19;
  v21 = __isoc23_strtoull();
  if ( v18 == v67 || *v67 || *v20 == 34 && v21 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address");
    JUMPOUT(0x124C8E);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  *(_QWORD *)&v73 = 0;
  insn = (int)create_insn();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v24,
    "address",
    v25,
    v26,
    v27,
    v28,
    v61.m128i_i32[0],
    v61.m128i_i32[2],
    (__int64)&v73);
  v73 = (unsigned __int64)v24;
  qsnprintf();
  v65 = &v68;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v68,
    v90,
    v29,
    v30,
    v31,
    v32,
    v61.m128i_i32[0],
    v61.m128i_i32[2],
    v62);
  v74 = 0;
  v63 = &v75;
  *(_QWORD *)&v75 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = 3;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = (__int64 *)v68;
  v35 = v33 + 2;
  v36 = v69;
  *v33 = v33 + 2;
  if ( v34 == &v70 )
  {
    v53 = v36 + 1;
    if ( (unsigned int)(v36 + 1) >= 8 )
    {
      v33[2] = v70;
      *(_QWORD *)((char *)v35 + v53 - 8) = *(__int64 *)((char *)&v69 + v53);
      v54 = (unsigned __int64)(v33 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (_DWORD)v35 - v54;
      v56 = (char *)((char *)&v70 - ((char *)v35 - v54));
      v57 = (v55 + v53) & 0xFFFFFFF8;
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
      *((_DWORD *)v33 + 4) = v70;
      *(_DWORD *)((char *)v35 + v53 - 4) = *(_DWORD *)((char *)&v69 + v53 + 4);
    }
    else if ( (_DWORD)v36 != -1 )
    {
      *((_BYTE *)v33 + 16) = v70;
      if ( (v53 & 2) != 0 )
        *(_WORD *)((char *)v35 + v53 - 2) = *(_WORD *)((char *)&v69 + v53 + 6);
    }
  }
  else
  {
    *v33 = v34;
    v33[2] = v70;
  }
  v33[1] = v36;
  v68 = &v70;
  v69 = 0;
  LOBYTE(v70) = 0;
  v64 = &v72;
  v75 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v86,
    (const __m128i *)&v72);
  v86[2] = 0;
  v76 = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v37,
    "success",
    v38,
    v39,
    v40,
    v41,
    v61.m128i_i32[0],
    v61.m128i_i32[2],
    v62);
  v78 = 4;
  v80 = 0;
  v77 = (unsigned __int64)v37;
  v79 = (int)insn > 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v87,
    (const __m128i *)&v76);
  v87[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v42,
    "instruction_size",
    v43,
    v44,
    v45,
    v46,
    (int)v42,
    v61.m128i_i32[2],
    v62);
  v47 = _mm_loadl_epi64(&v61);
  v83 = 5;
  v84 = insn;
  v85 = 0;
  *(__m128i *)n = v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v88,
    (const __m128i *)&s2);
  v88[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v61.m128i_i64[1],
    (__int64)v86,
    3,
    v48,
    v49,
    v50,
    v61.m128i_i32[0],
    v61.m128i_i64[1],
    v62,
    (int)v63,
    (int)v64,
    (int)v65,
    v66,
    (int)v67,
    (int)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    *((__int64 *)&v73 + 1));
  v51 = &v89;
  do
  {
    v51 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v51 != (char *)v86 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v68 != &v70 )
    operator delete(v68, v70 + 1);
  return v61.m128i_i64[1];
}

