_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::list_modules(_QWORD *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v1; // rbp
  char *v2; // rax
  std::runtime_error *exception; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  char v10; // si
  __int64 v11; // rdx
  size_t v12; // rax
  unsigned int v13; // ecx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  size_t v18; // rcx
  __int64 v19; // rax
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  char v24; // si
  __int64 v25; // rdx
  size_t v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r12
  size_t v32; // rcx
  __int64 v33; // rax
  char v34; // si
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  char *v42; // r12
  _QWORD *v43; // rax
  _BYTE *v44; // r13
  __int64 *v45; // rbx
  size_t v46; // rax
  size_t v47; // r15
  _DWORD *v48; // rax
  __int64 v49; // rax
  _DWORD *v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v65; // rdx
  char *v66; // rax
  char *v67; // r12
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  char *v73; // rax
  char *v74; // r12
  unsigned int v75; // ecx
  unsigned int v76; // ecx
  unsigned int v77; // eax
  __int64 v78; // rsi
  unsigned __int64 v79; // rsi
  char *v80; // rdx
  char *v81; // r8
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // edx
  __int64 v85; // rdi
  unsigned __int64 v86; // rsi
  char *v87; // rdx
  char *v88; // r8
  unsigned int v89; // eax
  unsigned int v90; // eax
  unsigned int v91; // edx
  __int64 v92; // rdi
  __int64 v93; // [rsp+0h] [rbp-1B8h]
  int v94; // [rsp+0h] [rbp-1B8h]
  char v95; // [rsp+7h] [rbp-1B1h]
  char v96; // [rsp+7h] [rbp-1B1h]
  void **v97; // [rsp+8h] [rbp-1B0h]
  _QWORD *v98; // [rsp+8h] [rbp-1B0h]
  const __m128i *v99; // [rsp+8h] [rbp-1B0h]
  __int64 v100; // [rsp+10h] [rbp-1A8h]
  __int64 v101; // [rsp+10h] [rbp-1A8h]
  size_t v102; // [rsp+18h] [rbp-1A0h]
  size_t v104; // [rsp+38h] [rbp-180h]
  __int64 v105; // [rsp+40h] [rbp-178h] BYREF
  _QWORD *v106; // [rsp+48h] [rbp-170h]
  char v107; // [rsp+50h] [rbp-168h]
  __int64 v108; // [rsp+58h] [rbp-160h]
  size_t v109; // [rsp+60h] [rbp-158h]
  __int64 v110; // [rsp+68h] [rbp-150h]
  char *v111; // [rsp+70h] [rbp-148h] BYREF
  __int128 v112; // [rsp+78h] [rbp-140h]
  __int64 v113; // [rsp+90h] [rbp-128h]
  char v114; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v115; // [rsp+A8h] [rbp-110h]
  char v116; // [rsp+B8h] [rbp-100h]
  __int64 v117; // [rsp+C0h] [rbp-F8h]
  __int64 v118; // [rsp+C8h] [rbp-F0h]
  char v119; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-E0h]
  __int64 v121; // [rsp+F8h] [rbp-C0h]
  void *v122; // [rsp+100h] [rbp-B8h] BYREF
  size_t v123; // [rsp+108h] [rbp-B0h]
  size_t v124; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v126; // [rsp+128h] [rbp-90h]
  char s[24]; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v128[8]; // [rsp+148h] [rbp-70h]
  char v129[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v130; // [rsp+178h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Debugger is not active");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  LOBYTE(v105) = 0;
  v106 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v105,
    nullptr,
    0,
    2);
  v4 = v106;
  v112 = 0;
  v111 = nullptr;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, char **, __int64, __int64, __int64, __int64))callui)(
                          1064,
                          &v111,
                          v5,
                          v6,
                          v7,
                          v8) )
  {
    while ( 1 )
    {
      v108 = 0;
      v42 = v111;
      if ( !(_QWORD)v112 )
        v42 = _qstring<char>::c_str(void)const::nullstr;
      v109 = 0;
      v110 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = (_QWORD *)operator new(0x20u);
      v44 = v43 + 2;
      v45 = v43;
      *v43 = v43 + 2;
      if ( !v42 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v46 = strlen(v42);
      v104 = v46;
      v47 = v46;
      if ( v46 > 0xF )
        break;
      if ( v46 == 1 )
      {
        *((_BYTE *)v45 + 16) = *v42;
        goto LABEL_5;
      }
      if ( v46 )
        goto LABEL_40;
LABEL_5:
      v45[1] = v46;
      v44[v46] = 0;
      v107 = 0;
      v9 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v10 = *(_BYTE *)v9;
      v11 = *(_QWORD *)(v9 + 8);
      *(_BYTE *)v9 = 3;
      *(_QWORD *)(v9 + 8) = v45;
      LOBYTE(v109) = v10;
      v110 = v11;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v122 = &v124;
      v12 = strlen(s);
      v109 = v12;
      v13 = v12;
      if ( v12 > 0xF )
      {
        v102 = v12;
        v48 = (_DWORD *)std::string::_M_create();
        v122 = v48;
        v13 = v102;
        v124 = v109;
      }
      else
      {
        if ( v12 == 1 )
        {
          LOBYTE(v124) = s[0];
LABEL_8:
          v14 = &v124;
          goto LABEL_9;
        }
        if ( !v12 )
          goto LABEL_8;
        v48 = &v124;
      }
      if ( v13 < 8 )
      {
        if ( (v13 & 4) != 0 )
        {
          *v48 = *(_DWORD *)s;
          *(_DWORD *)((char *)v48 + v13 - 4) = *(_DWORD *)&s[v13 - 4];
        }
        else if ( v13 )
        {
          *(_BYTE *)v48 = s[0];
          if ( (v13 & 2) != 0 )
            *(_WORD *)((char *)v48 + v13 - 2) = *(_WORD *)&s[v13 - 2];
        }
LABEL_38:
        v12 = v109;
        v14 = v122;
        goto LABEL_9;
      }
      *(_QWORD *)v48 = *(_QWORD *)s;
      *(_QWORD *)((char *)v48 + v13 - 8) = *(_QWORD *)&s[v13 - 8];
      v72 = (unsigned __int64)(v48 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v73 = (char *)v48 - v72;
      v74 = (char *)(s - v73);
      v75 = ((_DWORD)v73 + v13) & 0xFFFFFFF8;
      if ( v75 < 8 )
        goto LABEL_38;
      v76 = v75 & 0xFFFFFFF8;
      v77 = 0;
      do
      {
        v78 = v77;
        v77 += 8;
        *(_QWORD *)(v72 + v78) = *(_QWORD *)&v74[v78];
      }
      while ( v77 < v76 );
      v12 = v109;
      v14 = v122;
LABEL_9:
      v123 = v12;
      *((_BYTE *)v14 + v12) = 0;
      v109 = 0;
      v110 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v15 = (_QWORD *)operator new(0x20u);
      v16 = v15 + 2;
      v17 = v15;
      v18 = v123;
      *v15 = v15 + 2;
      if ( v122 == &v124 )
      {
        v51 = v18 + 1;
        if ( (unsigned int)(v18 + 1) >= 8 )
        {
          v17[2] = v124;
          *(_QWORD *)((char *)v16 + v51 - 8) = *(size_t *)((char *)&v123 + v51);
          v79 = (unsigned __int64)(v17 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v80 = (char *)v16 - v79;
          v81 = (char *)((char *)&v124 - v80);
          v82 = ((_DWORD)v80 + v51) & 0xFFFFFFF8;
          if ( v82 >= 8 )
          {
            v83 = v82 & 0xFFFFFFF8;
            v84 = 0;
            do
            {
              v85 = v84;
              v84 += 8;
              *(_QWORD *)(v79 + v85) = *(_QWORD *)&v81[v85];
            }
            while ( v84 < v83 );
          }
        }
        else if ( (v51 & 4) != 0 )
        {
          *((_DWORD *)v17 + 4) = v124;
          *(_DWORD *)((char *)v16 + v51 - 4) = *(_DWORD *)((char *)&v123 + v51 + 4);
        }
        else if ( (_DWORD)v18 != -1 )
        {
          *((_BYTE *)v17 + 16) = v124;
          if ( (v51 & 2) != 0 )
            *(_WORD *)((char *)v16 + v51 - 2) = *(_WORD *)((char *)&v123 + v51 + 6);
        }
      }
      else
      {
        *v15 = v122;
        v15[2] = v124;
      }
      v17[1] = v18;
      v122 = &v124;
      v123 = 0;
      LOBYTE(v124) = 0;
      v19 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v20 = *(_BYTE *)v19;
      v21 = *(_QWORD *)(v19 + 8);
      *(_BYTE *)v19 = 3;
      *(_QWORD *)(v19 + 8) = v17;
      LOBYTE(v109) = v20;
      v110 = v21;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v122 != &v124 )
        operator delete(v122, v124 + 1);
      v22 = v113;
      v23 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v24 = *(_BYTE *)v23;
      v25 = *(_QWORD *)(v23 + 8);
      *(_BYTE *)v23 = 6;
      LOBYTE(v109) = v24;
      *(_QWORD *)(v23 + 8) = v22;
      v110 = v25;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v122 = &v124;
      v26 = strlen(v129);
      v109 = v26;
      v27 = v26;
      if ( v26 > 0xF )
      {
        v102 = v26;
        v50 = (_DWORD *)std::string::_M_create();
        v122 = v50;
        v27 = v102;
        v124 = v109;
      }
      else
      {
        if ( v26 == 1 )
        {
          LOBYTE(v124) = v129[0];
LABEL_16:
          v28 = &v124;
          goto LABEL_17;
        }
        if ( !v26 )
          goto LABEL_16;
        v50 = &v124;
      }
      if ( v27 < 8 )
      {
        if ( (v27 & 4) != 0 )
        {
          *v50 = *(_DWORD *)v129;
          *(_DWORD *)((char *)v50 + v27 - 4) = *(_DWORD *)&v128[v27 + 4];
        }
        else if ( v27 )
        {
          *(_BYTE *)v50 = v129[0];
          if ( (v27 & 2) != 0 )
            *(_WORD *)((char *)v50 + v27 - 2) = *(_WORD *)&v128[v27 + 6];
        }
LABEL_45:
        v26 = v109;
        v28 = v122;
        goto LABEL_17;
      }
      *(_QWORD *)v50 = *(_QWORD *)v129;
      *(_QWORD *)((char *)v50 + v27 - 8) = *(_QWORD *)&v128[v27];
      v65 = (unsigned __int64)(v50 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v66 = (char *)v50 - v65;
      v67 = (char *)(v129 - v66);
      v68 = ((_DWORD)v66 + v27) & 0xFFFFFFF8;
      if ( v68 < 8 )
        goto LABEL_45;
      v69 = v68 & 0xFFFFFFF8;
      v70 = 0;
      do
      {
        v71 = v70;
        v70 += 8;
        *(_QWORD *)(v65 + v71) = *(_QWORD *)&v67[v71];
      }
      while ( v70 < v69 );
      v26 = v109;
      v28 = v122;
LABEL_17:
      v123 = v26;
      *((_BYTE *)v28 + v26) = 0;
      v109 = 0;
      v110 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v29 = (_QWORD *)operator new(0x20u);
      v30 = v29 + 2;
      v31 = v29;
      v32 = v123;
      *v29 = v29 + 2;
      if ( v122 == &v124 )
      {
        v52 = v32 + 1;
        if ( (unsigned int)(v32 + 1) >= 8 )
        {
          v31[2] = v124;
          *(_QWORD *)((char *)v30 + v52 - 8) = *(size_t *)((char *)&v123 + v52);
          v86 = (unsigned __int64)(v31 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v87 = (char *)v30 - v86;
          v88 = (char *)((char *)&v124 - v87);
          v89 = ((_DWORD)v87 + v52) & 0xFFFFFFF8;
          if ( v89 >= 8 )
          {
            v90 = v89 & 0xFFFFFFF8;
            v91 = 0;
            do
            {
              v92 = v91;
              v91 += 8;
              *(_QWORD *)(v86 + v92) = *(_QWORD *)&v88[v92];
            }
            while ( v91 < v90 );
          }
        }
        else if ( (v52 & 4) != 0 )
        {
          *((_DWORD *)v31 + 4) = v124;
          *(_DWORD *)((char *)v30 + v52 - 4) = *(_DWORD *)((char *)&v123 + v52 + 4);
        }
        else if ( (_DWORD)v32 != -1 )
        {
          *((_BYTE *)v31 + 16) = v124;
          if ( (v52 & 2) != 0 )
            *(_WORD *)((char *)v30 + v52 - 2) = *(_WORD *)((char *)&v123 + v52 + 6);
        }
      }
      else
      {
        *v29 = v122;
        v29[2] = v124;
      }
      v31[1] = v32;
      v122 = &v124;
      v123 = 0;
      LOBYTE(v124) = 0;
      v33 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v34 = *(_BYTE *)v33;
      v35 = *(_QWORD *)(v33 + 8);
      *(_BYTE *)v33 = 3;
      *(_QWORD *)(v33 + 8) = v31;
      LOBYTE(v109) = v34;
      v110 = v35;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v122 != &v124 )
        operator delete(v122, v124 + 1);
      if ( HIBYTE(v93) )
      {
        if ( HIBYTE(v93) != 2 )
        {
          v1 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( HIBYTE(v93) )
          {
            case 1:
              v2 = "object";
              break;
            case 3:
              v2 = "string";
              break;
            case 4:
              v2 = "boolean";
              break;
            case 8:
              v2 = "binary";
              break;
            case 9:
              v2 = "discarded";
              break;
            default:
              v2 = "number";
              break;
          }
          v109 = (size_t)v2;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            v1,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            v1,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        if ( v4[1] != v4[2] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v4[1] += 16LL;
          goto LABEL_24;
        }
      }
      else
      {
        v36 = operator new(0x18u);
        *(_QWORD *)(v36 + 16) = 0;
        v4 = (_QWORD *)v36;
        *(_OWORD *)v36 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_24:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = callui(1065, v100, v37, v38, v39, v40, v93, &v122, v100, v102);
      HIBYTE(v93) = 2;
      if ( !v41 )
        goto LABEL_56;
    }
    v49 = std::string::_M_create();
    *v45 = v49;
    v44 = (_BYTE *)v49;
    v45[2] = v104;
LABEL_40:
    memcpy(v44, v42, v47);
    v46 = v104;
    v44 = (_BYTE *)*v45;
    goto LABEL_5;
  }
  v97 = &v122;
LABEL_56:
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v53 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v53, "module_count", v54, v55, v56, v57, v93, (int)v97, v100);
  v115 = (unsigned __int64)v53;
  if ( v95 == 1 )
  {
    v58 = v4[5];
  }
  else if ( v95 == 2 )
  {
    v58 = (__int64)(v4[1] - *v4) >> 4;
  }
  else
  {
    v58 = v95 != 0;
  }
  v116 = 6;
  v117 = v58;
  v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v98,
    (const __m128i *)&v114);
  v124 = 0;
  v119 = 0;
  *(_QWORD *)&v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "modules", v60, v61, v62, v63, v94, (int)v98, v101);
  v106 = v4;
  LOBYTE(v105) = v96;
  v120 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v125,
    (const __m128i *)&v119);
  v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    v99);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

