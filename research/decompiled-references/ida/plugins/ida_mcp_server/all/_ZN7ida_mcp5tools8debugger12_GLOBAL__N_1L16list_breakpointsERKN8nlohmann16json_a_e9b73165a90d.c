_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::list_breakpoints(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v7; // rax
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rbx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __m128i si128; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  char v28; // si
  __int64 v29; // rdx
  size_t v30; // rax
  unsigned int v31; // ecx
  size_t *v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rax
  char v42; // si
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // si
  __int64 v46; // rdx
  const char *v47; // r12
  __int64 *v48; // r15
  size_t v49; // rax
  _QWORD *v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  char *v58; // rdx
  const char *v59; // r12
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // rdx
  _DWORD *v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  char *v67; // rax
  char *v68; // r12
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // ecx
  __int64 v72; // rsi
  unsigned int v73; // eax
  unsigned __int64 v74; // rsi
  char *v75; // rdx
  char *v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rdi
  __int64 v81; // [rsp+0h] [rbp-1D8h]
  __int64 *v82; // [rsp+8h] [rbp-1D0h]
  __int64 v83; // [rsp+10h] [rbp-1C8h]
  __int64 v84; // [rsp+18h] [rbp-1C0h]
  unsigned int v85; // [rsp+28h] [rbp-1B0h]
  unsigned int v86; // [rsp+28h] [rbp-1B0h]
  size_t v88; // [rsp+48h] [rbp-190h]
  __int64 v89; // [rsp+50h] [rbp-188h] BYREF
  _QWORD *v90; // [rsp+58h] [rbp-180h]
  __int64 v91; // [rsp+60h] [rbp-178h]
  __int64 v92; // [rsp+68h] [rbp-170h]
  size_t v93; // [rsp+70h] [rbp-168h]
  _BOOL8 v94; // [rsp+78h] [rbp-160h]
  __int64 v95; // [rsp+80h] [rbp-158h] BYREF
  __int64 v96; // [rsp+88h] [rbp-150h]
  __int128 v97; // [rsp+90h] [rbp-148h]
  __int64 v98; // [rsp+A0h] [rbp-138h]
  __int64 v99; // [rsp+A8h] [rbp-130h]
  __int64 v100; // [rsp+B0h] [rbp-128h]
  __int64 v101; // [rsp+B8h] [rbp-120h]
  __int64 v102; // [rsp+C0h] [rbp-118h]
  __int64 v103; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v104; // [rsp+D0h] [rbp-108h]
  __int64 v105; // [rsp+D8h] [rbp-100h]
  char v106; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v107; // [rsp+E8h] [rbp-F0h]
  char v108; // [rsp+F8h] [rbp-E0h]
  __int64 v109; // [rsp+100h] [rbp-D8h]
  __int64 v110; // [rsp+108h] [rbp-D0h]
  char v111; // [rsp+110h] [rbp-C8h] BYREF
  __int128 v112; // [rsp+118h] [rbp-C0h]
  __int64 v113; // [rsp+138h] [rbp-A0h]
  __m128i v114; // [rsp+140h] [rbp-98h] BYREF
  size_t v115; // [rsp+150h] [rbp-88h] BYREF
  __int64 v116; // [rsp+158h] [rbp-80h] BYREF
  __int64 v117; // [rsp+168h] [rbp-70h]
  char s[40]; // [rsp+170h] [rbp-68h] BYREF
  unsigned __int64 v119; // [rsp+198h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(1025, a2, a3, a4, a5, a6);
  LOBYTE(v89) = 0;
  v90 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v89,
    nullptr,
    0,
    2);
  v11 = v90;
  HIBYTE(v84) = v89;
  if ( v8 > 0 )
  {
    v12 = v8;
    v13 = 0;
    v83 = v12;
    v82 = &v95;
    while ( 1 )
    {
      v95 = 96;
      v96 = 0;
      v100 = 0xFFFFFFFFLL;
      v98 = -1;
      v102 = 4;
      v99 = 0;
      v103 = 9;
      v101 = -1;
      v104 = 0xFFFFFFFF00000000LL;
      v105 = 0;
      v97 = 0;
      if ( (unsigned __int8)callui(1141, (unsigned int)v13, v82, &callui, v9, v10, v81, v82, v83, v84) )
        break;
LABEL_4:
      if ( v96 )
      {
        *(_QWORD *)&v97 = 0;
        ++v13;
        qfree();
        if ( v13 == v83 )
          goto LABEL_6;
      }
      else if ( ++v13 == v83 )
      {
        goto LABEL_6;
      }
    }
    v91 = 0;
    v92 = 0;
    v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v28 = *(_BYTE *)v27;
    v29 = *(_QWORD *)(v27 + 8);
    *(_BYTE *)v27 = 5;
    LOBYTE(v93) = v28;
    *(_QWORD *)(v27 + 8) = v13;
    v94 = v29;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    qsnprintf();
    v114.m128i_i64[0] = (__int64)&v115;
    v30 = strlen(s);
    v93 = v30;
    v31 = v30;
    if ( v30 > 0xF )
    {
      v86 = v30;
      v64 = (_DWORD *)std::string::_M_create();
      v114.m128i_i64[0] = (__int64)v64;
      v31 = v86;
      v115 = v93;
    }
    else
    {
      if ( v30 == 1 )
      {
        LOBYTE(v115) = s[0];
LABEL_15:
        v32 = &v115;
        goto LABEL_16;
      }
      if ( !v30 )
        goto LABEL_15;
      v64 = &v115;
    }
    if ( v31 < 8 )
    {
      if ( (v31 & 4) != 0 )
      {
        *v64 = *(_DWORD *)s;
        *(_DWORD *)((char *)v64 + v31 - 4) = *(_DWORD *)&s[v31 - 4];
      }
      else if ( v31 )
      {
        *(_BYTE *)v64 = s[0];
        if ( (v31 & 2) != 0 )
          *(_WORD *)((char *)v64 + v31 - 2) = *(_WORD *)&s[v31 - 2];
      }
    }
    else
    {
      *(_QWORD *)v64 = *(_QWORD *)s;
      *(_QWORD *)((char *)v64 + v31 - 8) = *(_QWORD *)&s[v31 - 8];
      v66 = (unsigned __int64)(v64 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v67 = (char *)v64 - v66;
      v68 = (char *)(s - v67);
      v69 = (v31 + (_DWORD)v67) & 0xFFFFFFF8;
      if ( v69 >= 8 )
      {
        v70 = v69 & 0xFFFFFFF8;
        v71 = 0;
        do
        {
          v72 = v71;
          v71 += 8;
          *(_QWORD *)(v66 + v72) = *(_QWORD *)&v68[v72];
        }
        while ( v71 < v70 );
      }
    }
    v30 = v93;
    v32 = (size_t *)v114.m128i_i64[0];
LABEL_16:
    v114.m128i_i64[1] = v30;
    *((_BYTE *)v32 + v30) = 0;
    v93 = 0;
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v33 = (_QWORD *)operator new(0x20u);
    v34 = v33 + 2;
    v35 = v33;
    v36 = v114.m128i_i64[1];
    *v33 = v33 + 2;
    if ( (size_t *)v114.m128i_i64[0] == &v115 )
    {
      v73 = v36 + 1;
      if ( (unsigned int)(v36 + 1) >= 8 )
      {
        v35[2] = v115;
        *(_QWORD *)((char *)v34 + v73 - 8) = *(__int64 *)((char *)&v114.m128i_i64[1] + v73);
        v74 = (unsigned __int64)(v35 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v75 = (char *)v34 - v74;
        v76 = (char *)((char *)&v115 - v75);
        v77 = ((_DWORD)v75 + v73) & 0xFFFFFFF8;
        if ( v77 >= 8 )
        {
          v78 = v77 & 0xFFFFFFF8;
          v79 = 0;
          do
          {
            v80 = v79;
            v79 += 8;
            *(_QWORD *)(v74 + v80) = *(_QWORD *)&v76[v80];
          }
          while ( v79 < v78 );
        }
      }
      else if ( (v73 & 4) != 0 )
      {
        *((_DWORD *)v35 + 4) = v115;
        *(_DWORD *)((char *)v34 + v73 - 4) = *(__int32 *)((char *)&v114.m128i_i32[3] + v73);
      }
      else if ( (_DWORD)v36 != -1 )
      {
        *((_BYTE *)v35 + 16) = v115;
        if ( (v73 & 2) != 0 )
          *(_WORD *)((char *)v34 + v73 - 2) = *(__int16 *)((char *)&v114.m128i_i16[7] + v73);
      }
    }
    else
    {
      *v33 = v114.m128i_i64[0];
      v33[2] = v115;
    }
    v35[1] = v36;
    v114.m128i_i64[0] = (__int64)&v115;
    v114.m128i_i64[1] = 0;
    LOBYTE(v115) = 0;
    v37 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v38 = *(_BYTE *)v37;
    v39 = *(_QWORD *)(v37 + 8);
    *(_BYTE *)v37 = 3;
    *(_QWORD *)(v37 + 8) = v35;
    LOBYTE(v93) = v38;
    v94 = v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (size_t *)v114.m128i_i64[0] != &v115 )
      operator delete((void *)v114.m128i_i64[0], v115 + 1);
    v40 = (int)v104;
    v41 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v42 = *(_BYTE *)v41;
    v43 = *(_QWORD *)(v41 + 8);
    *(_BYTE *)v41 = 5;
    LOBYTE(v93) = v42;
    *(_QWORD *)(v41 + 8) = v40;
    v94 = v43;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v94 = (v103 & 8) != 0;
    v44 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v45 = *(_BYTE *)v44;
    *(_BYTE *)v44 = 4;
    v46 = *(_QWORD *)(v44 + 8);
    LOBYTE(v93) = v45;
    *(_QWORD *)(v44 + 8) = v94;
    v94 = v46;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (_DWORD)v102 == 4 )
    {
      v47 = "Software";
    }
    else if ( (int)v102 > 4 )
    {
      v47 = "Unknown";
      if ( (_DWORD)v102 == 8 )
        v47 = "Hardware_Execute";
    }
    else
    {
      v47 = "Hardware_Write";
      if ( (_DWORD)v102 != 1 )
      {
        v47 = "Unknown";
        if ( (_DWORD)v102 == 3 )
          v47 = "Hardware_ReadWrite";
      }
    }
    v93 = 0;
    v94 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v48 = (__int64 *)operator new(0x20u);
    *v48 = (__int64)(v48 + 2);
    v49 = strlen(v47);
    v50 = v48 + 2;
    v88 = v49;
    v51 = v49;
    if ( v49 > 0xF )
    {
      v85 = v49;
      v65 = std::string::_M_create();
      *v48 = v65;
      v50 = (_QWORD *)v65;
      v51 = v85;
      v48[2] = v88;
    }
    if ( v51 >= 8 )
    {
      *v50 = *(_QWORD *)v47;
      *(_QWORD *)((char *)v50 + v51 - 8) = *(_QWORD *)&v47[v51 - 8];
      v57 = (unsigned __int64)(v50 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v58 = (char *)v50 - v57;
      v59 = (const char *)(v47 - v58);
      v60 = ((_DWORD)v58 + v51) & 0xFFFFFFF8;
      if ( v60 >= 8 )
      {
        v61 = v60 & 0xFFFFFFF8;
        v62 = 0;
        do
        {
          v63 = v62;
          v62 += 8;
          *(_QWORD *)(v57 + v63) = *(_QWORD *)&v59[v63];
        }
        while ( v62 < v61 );
      }
    }
    else if ( (v51 & 4) != 0 )
    {
      *(_DWORD *)v50 = *(_DWORD *)v47;
      *(_DWORD *)((char *)v50 + v51 - 4) = *(_DWORD *)&v47[v51 - 4];
    }
    else if ( v51 )
    {
      *(_BYTE *)v50 = *v47;
      if ( (v51 & 2) != 0 )
        *(_WORD *)((char *)v50 + v51 - 2) = *(_WORD *)&v47[v51 - 2];
    }
    v52 = *v48;
    v48[1] = v88;
    *(_BYTE *)(v52 + v88) = 0;
    v53 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v54 = *(_BYTE *)v53;
    v55 = *(_QWORD *)(v53 + 8);
    *(_BYTE *)v53 = 3;
    *(_QWORD *)(v53 + 8) = v48;
    LOBYTE(v93) = v54;
    BYTE6(v84) = v91;
    v94 = v55;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( HIBYTE(v84) )
    {
      if ( HIBYTE(v84) != 2 )
      {
        exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( HIBYTE(v84) )
        {
          case 1:
            v7 = "object";
            break;
          case 3:
            v7 = "string";
            break;
          case 4:
            v7 = "boolean";
            break;
          case 8:
            v7 = "binary";
            break;
          case 9:
            v7 = "discarded";
            break;
          default:
            v7 = "number";
            break;
        }
        v93 = (size_t)v7;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          exception,
          308);
        std::string::_M_dispose();
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      if ( v11[2] != v11[1] )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v11[1] += 16LL;
        goto LABEL_35;
      }
    }
    else
    {
      v56 = operator new(0x18u);
      *(_QWORD *)(v56 + 16) = 0;
      v11 = (_QWORD *)v56;
      *(_OWORD *)v56 = 0;
    }
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_35:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    HIBYTE(v84) = 2;
    goto LABEL_4;
  }
LABEL_6:
  v106 = 0;
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v14 = (__int64 *)operator new(0x20u);
  v95 = 16;
  *v14 = (__int64)(v14 + 2);
  v15 = (_OWORD *)std::string::_M_create();
  v16 = v95;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E23D0);
  *v14 = (__int64)v15;
  v14[2] = v16;
  *v15 = si128;
  v18 = v95;
  v19 = *v14;
  v14[1] = v95;
  *(_BYTE *)(v19 + v18) = 0;
  v107 = (unsigned __int64)v14;
  if ( HIBYTE(v84) == 1 )
  {
    v20 = v11[5];
  }
  else if ( HIBYTE(v84) == 2 )
  {
    v20 = (__int64)(v11[1] - *v11) >> 4;
  }
  else
  {
    v20 = HIBYTE(v84) != 0;
  }
  v109 = v20;
  v108 = 6;
  v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v114,
    (const __m128i *)&v106);
  v115 = 0;
  v111 = 0;
  *(_QWORD *)&v112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v111 = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "breakpoints", v22, v23, v24, v25, v81, (int)v82, v83);
  v90 = v11;
  LOBYTE(v89) = HIBYTE(v84);
  v112 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v116,
    (const __m128i *)&v111);
  v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v114);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

