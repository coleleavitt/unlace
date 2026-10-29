_QWORD *__fastcall ida_mcp::mcp::McpServer::handle_resources_read(_QWORD *a1, __int64 a2, __int64 a3)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // r12
  char *v4; // rax
  void *v5; // r12
  std::runtime_error *exception; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r15
  _BYTE *v14; // rbx
  int v15; // eax
  const __m128i *v16; // r14
  void *v17; // rbx
  size_t v18; // r15
  const void *v19; // rdi
  size_t v20; // r13
  const __m128i *v21; // rbp
  size_t v22; // rdx
  signed __int64 v23; // rax
  void (__fastcall *v24)(_BYTE *, const __m128i *, __int64); // rax
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // r15
  __int64 v29; // r14
  unsigned __int64 v30; // rax
  size_t v31; // rbx
  _BYTE *v32; // r13
  size_t *v33; // rax
  size_t v34; // rbx
  size_t v35; // rax
  size_t *v36; // r13
  signed __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  size_t v41; // rcx
  _BYTE *v42; // r9
  _BYTE *v43; // r9
  _BYTE *v44; // rax
  void (__fastcall *v45)(_BYTE *, __int64, __int64); // rax
  __m128i v46; // rax
  size_t *v47; // rdi
  _BYTE *v48; // rdi
  __m128i v49; // xmm1
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rbp
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v72; // rax
  __int8 v73; // si
  __int64 v74; // rdx
  __int64 v75; // rax
  __int8 v76; // si
  __int64 v77; // rdx
  __int64 v78; // rax
  __int8 v79; // si
  __int64 v80; // rdx
  size_t v81; // [rsp+0h] [rbp-218h] BYREF
  void **v82; // [rsp+8h] [rbp-210h]
  void **p_s2; // [rsp+10h] [rbp-208h] BYREF
  _QWORD *v84; // [rsp+18h] [rbp-200h]
  void *src; // [rsp+20h] [rbp-1F8h]
  pthread_mutex_t *mutex; // [rsp+28h] [rbp-1F0h]
  __int64 v87; // [rsp+30h] [rbp-1E8h]
  __int64 v88; // [rsp+38h] [rbp-1E0h] BYREF
  __m128 v89; // [rsp+40h] [rbp-1D8h] BYREF
  __m128i v90; // [rsp+50h] [rbp-1C8h] BYREF
  __m128 v91; // [rsp+60h] [rbp-1B8h]
  __int128 v92; // [rsp+70h] [rbp-1A8h]
  __m128i v93; // [rsp+80h] [rbp-198h] BYREF
  __int64 v94; // [rsp+90h] [rbp-188h]
  void *s2; // [rsp+A0h] [rbp-178h] BYREF
  size_t v96; // [rsp+A8h] [rbp-170h]
  char v97; // [rsp+B0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-158h] BYREF
  __m128i v99; // [rsp+D0h] [rbp-148h] BYREF
  char v100; // [rsp+E0h] [rbp-138h] BYREF
  _OWORD v101[2]; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v102; // [rsp+108h] [rbp-110h]
  void *v103; // [rsp+110h] [rbp-108h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-100h] BYREF
  char v105; // [rsp+128h] [rbp-F0h]
  __int128 v106; // [rsp+130h] [rbp-E8h] BYREF
  _BYTE v107[152]; // [rsp+140h] [rbp-D8h] BYREF
  unsigned __int64 v108; // [rsp+1D8h] [rbp-40h]

  v84 = a1;
  v108 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 1 )
    goto LABEL_120;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 )
    goto LABEL_120;
  v9 = v7 + 8;
  v10 = v9;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 40);
      if ( !v13 )
        break;
      v11 = 3;
      if ( v13 <= 3 )
        v11 = *(_QWORD *)(v8 + 40);
      v12 = memcmp(*(const void **)(v8 + 32), "uri", v11);
      if ( v12 || (v12 = v13 - 3, (__int64)(v13 - 3) <= 0x7FFFFFFF) )
      {
        if ( v12 < 0 )
          break;
      }
      v10 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 )
        goto LABEL_12;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v8 );
LABEL_12:
  if ( v9 == v10
    || std::string::compare(*(void **)(v10 + 32), *(_QWORD *)(v10 + 40), "uri") > 0
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
LABEL_120:
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing or invalid 'uri' parameter");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v97 = 0;
  v96 = 0;
  v14 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  p_s2 = &s2;
  s2 = &v97;
  if ( *v14 != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v14 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v90.m128i_i64[0] = (__int64)v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v99 = 0u;
  mutex = (pthread_mutex_t *)(a2 + 224);
  si128 = 0;
  v15 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 224));
  if ( v15 )
    std::__throw_system_error(v15);
  v16 = *(const __m128i **)(a2 + 64);
  if ( !v16 )
    goto LABEL_35;
  v17 = s2;
  v18 = v96;
  v19 = (const void *)v16[2].m128i_i64[0];
  v20 = v16[2].m128i_u64[1];
  v81 = a2 + 56;
  v21 = (const __m128i *)(a2 + 56);
  while ( 1 )
  {
    v22 = v18;
    if ( v20 <= v18 )
      v22 = v20;
    if ( !v22 || (LODWORD(v23) = memcmp(v19, v17, v22), !(_DWORD)v23) )
    {
      v23 = v20 - v18;
      if ( (__int64)(v20 - v18) > 0x7FFFFFFF )
        goto LABEL_19;
      if ( v23 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v23 < 0 )
      break;
LABEL_19:
    v21 = v16;
    v16 = (const __m128i *)v16[1].m128i_i64[0];
    if ( !v16 )
      goto LABEL_29;
LABEL_20:
    v19 = (const void *)v16[2].m128i_i64[0];
    v20 = v16[2].m128i_u64[1];
  }
  v16 = (const __m128i *)v16[1].m128i_i64[1];
  if ( v16 )
    goto LABEL_20;
LABEL_29:
  if ( (const __m128i *)v81 != v21
    && std::string::compare(v17, v18, (const void *)v21[2].m128i_i64[0], v21[2].m128i_u64[1]) >= 0 )
  {
    v24 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))v21[20].m128i_i64[0];
    memset(v107, 0, 32);
    if ( v24 )
    {
      v24(v107, v21 + 19, 2);
      v25 = _mm_loadu_si128(v21 + 20);
    }
    else
    {
      v25 = 0;
    }
    v26 = _mm_load_si128(&si128);
    si128 = _mm_load_si128((const __m128i *)v107);
    v27 = _mm_load_si128(&v99);
    *(__m128i *)v107 = v26;
    *(__m128i *)&v107[16] = v27;
    v99 = v25;
    if ( v27.m128i_i64[0] )
      goto LABEL_85;
    goto LABEL_86;
  }
LABEL_35:
  v28 = *(_QWORD *)(a2 + 96);
  v29 = *(_QWORD *)(a2 + 104);
  if ( v29 == v28 )
  {
LABEL_118:
    v5 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)v107, "Resource not found: ", (__int64)s2, v96);
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v82 = &v103;
  while ( 2 )
  {
    v30 = std::string::find();
    if ( v30 != -1 )
    {
      v31 = *(_QWORD *)(v28 + 8);
      v103 = &n[1];
      v32 = *(_BYTE **)v28;
      if ( v30 <= v31 )
        v31 = v30;
      v90.m128i_i64[0] = v31;
      if ( v31 > 0xF )
      {
        v103 = (void *)std::string::_M_create();
        v47 = (size_t *)v103;
        n[1] = v90.m128i_i64[0];
        goto LABEL_75;
      }
      if ( v31 == 1 )
      {
        LOBYTE(n[1]) = *v32;
LABEL_45:
        v33 = &n[1];
      }
      else
      {
        if ( !v31 )
          goto LABEL_45;
        v47 = &n[1];
LABEL_75:
        memcpy(v47, v32, v31);
        v31 = v90.m128i_i64[0];
        v33 = (size_t *)v103;
      }
      n[0] = v31;
      *((_BYTE *)v33 + v31) = 0;
      v34 = n[0];
      v35 = v96;
      v36 = (size_t *)v103;
      if ( n[0] <= v96 )
        v35 = n[0];
      if ( !v35 )
      {
        v37 = -n[0];
        goto LABEL_51;
      }
      v81 = v35;
      if ( !memcmp(s2, v103, v35) )
      {
        v37 = v81 - v34;
        if ( (__int64)(v81 - v34) <= 0x7FFFFFFF )
        {
LABEL_51:
          if ( v37 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v37 )
          {
            v38 = std::string::find();
            if ( v38 != -1 )
            {
              v39 = *(_QWORD *)(v28 + 8);
              v40 = v38 + 1;
              if ( v39 < v40 )
                std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
              v41 = v39 - v40;
              *(_QWORD *)v107 = &v107[16];
              v42 = *(_BYTE **)v28;
              v90.m128i_i64[0] = v41;
              v43 = &v42[v40];
              if ( v41 > 0xF )
              {
                src = v43;
                v81 = v41;
                *(_QWORD *)v107 = std::string::_M_create();
                v48 = *(_BYTE **)v107;
                v41 = v81;
                v43 = src;
                *(_QWORD *)&v107[16] = v90.m128i_i64[0];
                goto LABEL_81;
              }
              if ( v41 == 1 )
              {
                v107[16] = *v43;
LABEL_58:
                v44 = &v107[16];
              }
              else
              {
                if ( !v41 )
                  goto LABEL_58;
                v48 = &v107[16];
LABEL_81:
                memcpy(v48, v43, v41);
                v41 = v90.m128i_i64[0];
                v44 = *(_BYTE **)v107;
              }
              *(_QWORD *)&v107[8] = v41;
              v44[v41] = 0;
              if ( *(_QWORD *)&v107[8] )
              {
                if ( *(_QWORD *)&v107[8] + n[0] < v96
                  && !memcmp((char *)s2 + v96 - *(_QWORD *)&v107[8], *(const void **)v107, *(size_t *)&v107[8]) )
                {
LABEL_78:
                  std::function<ida_mcp::mcp::ResourceContent ()(std::string const&)>::operator=(
                    &si128,
                    (const __m128i *)(v28 + 144));
                  std::string::_M_dispose();
                  std::string::_M_dispose();
                  goto LABEL_86;
                }
              }
              else if ( n[0] < v96 )
              {
                goto LABEL_78;
              }
              if ( *(_BYTE **)v107 != &v107[16] )
                operator delete(*(void **)v107, *(_QWORD *)&v107[16] + 1LL);
              if ( v103 != &n[1] )
                operator delete(v103, n[1] + 1);
LABEL_38:
              v28 += 176;
              if ( v29 == v28 )
                goto LABEL_118;
              continue;
            }
            v36 = (size_t *)v103;
          }
        }
      }
      if ( v36 != &n[1] )
        operator delete(v36, n[1] + 1);
      goto LABEL_38;
    }
    break;
  }
  if ( v96 != *(_QWORD *)(v28 + 8) || v96 && memcmp(s2, *(const void **)v28, v96) )
    goto LABEL_38;
  v45 = *(void (__fastcall **)(_BYTE *, __int64, __int64))(v28 + 160);
  memset(v107, 0, 32);
  if ( v45 )
  {
    v45(v107, v28 + 144, 2);
    v46 = *(__m128i *)(v28 + 160);
  }
  else
  {
    v46 = 0u;
  }
  v49 = _mm_load_si128(&si128);
  si128 = _mm_load_si128((const __m128i *)v107);
  v27 = _mm_load_si128(&v99);
  *(__m128i *)v107 = v49;
  v99 = v46;
  *(__m128i *)&v107[16] = v27;
  if ( v27.m128i_i64[0] )
LABEL_85:
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v27.m128i_i64[0])(v107, v107, 3);
LABEL_86:
  pthread_mutex_unlock(mutex);
  v89 = _mm_loadh_ps((const double *)&p_s2);
  memset(&v107[8], 0, 0x90u);
  *(_QWORD *)v107 = &v107[16];
  v90.m128i_i64[0] = (__int64)off_443300;
  v81 = (size_t)&v89;
  v91 = _mm_loadh_ps((const double *)&v81);
  v90.m128i_i64[1] = 0;
  v92 = (unsigned __int64)v107;
  callui(86, &v90, 2, &callui, v50, v51, &v89, v82, p_s2, v84);
  if ( *((_QWORD *)&v92 + 1) )
  {
    v88 = *((_QWORD *)&v92 + 1);
    std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)&v88);
    std::rethrow_exception();
  }
  v90.m128i_i64[0] = (__int64)&off_4451B0;
  qsem_free();
  v100 = 0;
  src = v101;
  *(_QWORD *)&v101[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "contents", v53, v54, v55, v56, v81, (int)v82, (__int64)p_s2);
  LOBYTE(v103) = 0;
  v101[0] = (unsigned __int64)v52;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v103) = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "uri", v58, v59, v60, v61, v81, (int)v82, (__int64)p_s2);
  v105 = 0;
  v82 = (void **)&v106;
  *(_QWORD *)&v106 = 0;
  *(_OWORD *)n = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  mutex = *(pthread_mutex_t **)v107;
  v62 = (_QWORD *)operator new(0x20u);
  *v62 = v62 + 2;
  std::string::_M_construct<true>();
  v106 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v93,
    (const __m128i *)&v103);
  v94 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v81,
    (__int64)&v93,
    1,
    v63,
    v64,
    v65,
    v81,
    (__int64)v82,
    (int)p_s2,
    (int)v84,
    (int)src,
    (int)mutex,
    v87,
    v88,
    v89.m128_i32[0],
    v89.m128_i32[2],
    v90.m128i_i32[0],
    v90.m128i_i8[8],
    v91.m128_i64[0],
    v91.m128_i32[2],
    v92);
  mutex = (pthread_mutex_t *)&v93.m128i_u64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v107[64] )
  {
    v90.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>();
    LOBYTE(v82) = v90.m128i_i8[0];
    v78 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v79 = *(_BYTE *)v78;
    v80 = *(_QWORD *)(v78 + 8);
    *(_BYTE *)v78 = (_BYTE)v82;
    *(_QWORD *)(v78 + 8) = v90.m128i_i64[1];
    v90.m128i_i64[1] = v80;
    v90.m128i_i8[0] = v79;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( v107[104] )
  {
    v90.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>();
    LOBYTE(v82) = v90.m128i_i8[0];
    v75 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v76 = *(_BYTE *)v75;
    v77 = *(_QWORD *)(v75 + 8);
    *(_BYTE *)v75 = (_BYTE)v82;
    *(_QWORD *)(v75 + 8) = v90.m128i_i64[1];
    v90.m128i_i64[1] = v77;
    v90.m128i_i8[0] = v76;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( v107[144] )
  {
    v90.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>();
    LOBYTE(v82) = v90.m128i_i8[0];
    v72 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v73 = *(_BYTE *)v72;
    v74 = *(_QWORD *)(v72 + 8);
    *(_BYTE *)v72 = (_BYTE)v82;
    *(_QWORD *)(v72 + 8) = v90.m128i_i64[1];
    v90.m128i_i64[1] = v74;
    v90.m128i_i8[0] = v73;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v66 = _mm_load_si128((const __m128i *)&v89);
  v94 = 0;
  v93 = v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v67 = _mm_load_si128(&v90);
  v102 = 0;
  v101[1] = v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v103,
    (const __m128i *)&v100);
  n[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v84,
    (__int64)&v103,
    1,
    v68,
    v69,
    v70,
    v81,
    (__int64)v82,
    (int)p_s2,
    (int)v84,
    (int)src,
    (int)mutex,
    v87,
    v88,
    v89.m128_i32[0],
    v89.m128_i32[2],
    v90.m128i_i32[0],
    v90.m128i_i8[8],
    v91.m128_i64[0],
    v91.m128_i32[2],
    v92);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v107[144] )
  {
    v107[144] = 0;
    std::string::_M_dispose();
  }
  if ( v107[104] )
  {
    v107[104] = 0;
    std::string::_M_dispose();
  }
  if ( v107[64] )
  {
    v107[64] = 0;
    std::string::_M_dispose();
  }
  std::string::_M_dispose();
  if ( v99.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v99.m128i_i64[0])(&si128, &si128, 3);
  std::string::_M_dispose();
  return v84;
}

