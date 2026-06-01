__int64 __fastcall ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_chained_fixups(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  size_t v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  __int64 first_fixup_ea; // rax
  int v15; // r13d
  char **v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r12
  size_t v20; // rcx
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  char v26; // si
  __int64 v27; // rdx
  char v28; // r14
  size_t v29; // rax
  unsigned int v30; // r15d
  char **v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // r12
  size_t v35; // rcx
  __int64 v36; // rax
  char v37; // si
  __int64 v38; // rdx
  __int64 v39; // rax
  char *v40; // rax
  unsigned int v41; // r14d
  char **v42; // rax
  char *v43; // r12
  __int64 *v44; // rax
  __int64 *v45; // rbp
  size_t v46; // rax
  void *v47; // rcx
  size_t v48; // r8
  __int64 v49; // rax
  char v50; // si
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char **v65; // rax
  unsigned int v66; // eax
  unsigned __int64 v67; // rdx
  char *v68; // rax
  char *v69; // r12
  unsigned int v70; // r14d
  unsigned int v71; // r14d
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned __int64 v75; // rsi
  char *v76; // rdx
  char *v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // edx
  __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  char *v83; // rax
  char *v84; // r12
  unsigned int v85; // r15d
  unsigned int v86; // r15d
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int64 v90; // rsi
  char *v91; // rdx
  char *v92; // r8
  unsigned int v93; // eax
  unsigned int v94; // eax
  unsigned int v95; // edx
  __int64 v96; // rdi
  __int64 *v97; // [rsp+0h] [rbp-1E8h]
  int v98; // [rsp+0h] [rbp-1E8h]
  int v99; // [rsp+0h] [rbp-1E8h]
  _QWORD *v100; // [rsp+8h] [rbp-1E0h]
  __int64 v101; // [rsp+8h] [rbp-1E0h]
  __int64 v102; // [rsp+8h] [rbp-1E0h]
  int v103; // [rsp+10h] [rbp-1D8h]
  int v104; // [rsp+10h] [rbp-1D8h]
  int v105; // [rsp+18h] [rbp-1D0h]
  int v106; // [rsp+18h] [rbp-1D0h]
  int v107; // [rsp+18h] [rbp-1D0h]
  int v108; // [rsp+1Ch] [rbp-1CCh]
  int v109; // [rsp+20h] [rbp-1C8h]
  __int64 v110; // [rsp+20h] [rbp-1C8h]
  void *dest; // [rsp+28h] [rbp-1C0h]
  int desta; // [rsp+28h] [rbp-1C0h]
  int destb; // [rsp+28h] [rbp-1C0h]
  __int64 v115; // [rsp+30h] [rbp-1B8h]
  _QWORD *v116; // [rsp+30h] [rbp-1B8h]
  __int64 v117; // [rsp+30h] [rbp-1B8h]
  int v118; // [rsp+38h] [rbp-1B0h]
  int v119; // [rsp+38h] [rbp-1B0h]
  int v120; // [rsp+40h] [rbp-1A8h]
  int v121; // [rsp+40h] [rbp-1A8h]
  int v122; // [rsp+40h] [rbp-1A8h]
  size_t v123; // [rsp+48h] [rbp-1A0h]
  int v124; // [rsp+48h] [rbp-1A0h]
  int v125; // [rsp+48h] [rbp-1A0h]
  int v126; // [rsp+50h] [rbp-198h] BYREF
  __int64 v127; // [rsp+58h] [rbp-190h]
  __int64 v128; // [rsp+60h] [rbp-188h] BYREF
  __int64 v129; // [rsp+68h] [rbp-180h]
  char *v130; // [rsp+70h] [rbp-178h]
  __int64 v131; // [rsp+78h] [rbp-170h]
  char *v132; // [rsp+80h] [rbp-168h]
  __int128 v133; // [rsp+88h] [rbp-160h]
  char *v134; // [rsp+A0h] [rbp-148h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-140h]
  __int64 v136; // [rsp+B8h] [rbp-130h]
  __int64 v137; // [rsp+C0h] [rbp-128h]
  char v138[8]; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v139; // [rsp+D8h] [rbp-110h]
  char v140; // [rsp+E8h] [rbp-100h]
  __int64 v141; // [rsp+F0h] [rbp-F8h]
  __int64 v142; // [rsp+F8h] [rbp-F0h]
  void *v143; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v144; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v145; // [rsp+128h] [rbp-C0h]
  void *v146; // [rsp+130h] [rbp-B8h] BYREF
  size_t v147; // [rsp+138h] [rbp-B0h]
  char *v148; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v149; // [rsp+148h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+158h] [rbp-90h]
  char v151[24]; // [rsp+160h] [rbp-88h] BYREF
  _BYTE v152[8]; // [rsp+178h] [rbp-70h]
  char s[40]; // [rsp+180h] [rbp-68h] BYREF
  unsigned __int64 v154; // [rsp+1A8h] [rbp-40h]

  v154 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    v134 = v3;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
    goto LABEL_19;
  v6 = v4 + 8;
  v7 = v4 + 8;
  do
  {
    v8 = *(_QWORD *)(v5 + 40);
    if ( !v8 )
      goto LABEL_59;
    v9 = 7;
    if ( v8 <= 7 )
      v9 = *(_QWORD *)(v5 + 40);
    if ( ((v10 = memcmp(*(const void **)(v5 + 32), "address", v9)) != 0
       || (v10 = v8 - 7, (__int64)(v8 - 7) <= 0x7FFFFFFF))
      && v10 < 0 )
    {
LABEL_59:
      v5 = *(_QWORD *)(v5 + 24);
    }
    else
    {
      v7 = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( v5 );
  if ( v6 == v7 )
    goto LABEL_19;
  v11 = *(_QWORD *)(v7 + 40);
  if ( !v11 )
    goto LABEL_110;
  v12 = 7;
  if ( v11 <= 7 )
    v12 = *(_QWORD *)(v7 + 40);
  if ( ((v13 = memcmp(*(const void **)(v7 + 32), "address", v12)) != 0
     || (v13 = v11 - 7, (__int64)(v11 - 7) <= 0x7FFFFFFF))
    && v13 <= 0 )
  {
LABEL_110:
    BYTE8(v144) = 0;
    v143 = (char *)&v144 + 8;
    *(_QWORD *)&v144 = 0;
    if ( *(_BYTE *)(v7 + 64) != 3 )
      JUMPOUT(0x14AD58);
    std::string::_M_assign();
  }
  else
  {
LABEL_19:
    *(_QWORD *)&v144 = 1;
    v143 = (char *)&v144 + 8;
    WORD4(v144) = 48;
  }
  *__errno_location() = 0;
  __isoc23_strtoull();
  if ( v143 != (char *)&v144 + 8 )
    operator delete(v143, *((_QWORD *)&v144 + 1) + 1LL);
  LODWORD(v134) = 100;
  v108 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  LOBYTE(v126) = 0;
  v127 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  HIBYTE(v105) = 0;
  v100 = nullptr;
  getinf();
  first_fixup_ea = get_first_fixup_ea();
  if ( v108 > 0 && first_fixup_ea != -1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v134 = nullptr;
      v136 = 0;
      v137 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E2220);
      if ( (unsigned __int8)get_fixup() )
        break;
LABEL_48:
      ++v15;
      if ( get_next_fixup_ea() == -1 || v108 <= v15 )
        goto LABEL_68;
    }
    v129 = 0;
    qsnprintf();
    v146 = &v148;
    v40 = (char *)strlen(v151);
    v132 = v40;
    v41 = (unsigned int)v40;
    if ( (unsigned __int64)v40 > 0xF )
    {
      v42 = (char **)std::string::_M_create();
      v146 = v42;
      v148 = v132;
LABEL_53:
      if ( v41 >= 8 )
      {
        *v42 = *(char **)v151;
        *(char **)((char *)v42 + v41 - 8) = *(char **)&v151[v41 - 8];
        v67 = (unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v68 = (char *)v42 - v67;
        v69 = (char *)(v151 - v68);
        v70 = ((_DWORD)v68 + v41) & 0xFFFFFFF8;
        if ( v70 >= 8 )
        {
          v71 = v70 & 0xFFFFFFF8;
          v72 = 0;
          do
          {
            v73 = v72;
            v72 += 8;
            *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
          }
          while ( v72 < v71 );
        }
      }
      else if ( (v41 & 4) != 0 )
      {
        *(_DWORD *)v42 = *(_DWORD *)v151;
        *(_DWORD *)((char *)v42 + v41 - 4) = *(_DWORD *)&v151[v41 - 4];
      }
      else if ( v41 )
      {
        *(_BYTE *)v42 = v151[0];
        if ( (v41 & 2) != 0 )
          *(_WORD *)((char *)v42 + v41 - 2) = *(_WORD *)&v151[v41 - 2];
      }
      v40 = v132;
      v16 = (char **)v146;
LABEL_28:
      v147 = (size_t)v40;
      v40[(_QWORD)v16] = 0;
      v132 = nullptr;
      *(_QWORD *)&v133 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v17 = (_QWORD *)operator new(0x20u);
      v18 = v17 + 2;
      v19 = v17;
      v20 = v147;
      *v17 = v17 + 2;
      if ( v146 == &v148 )
      {
        v66 = v20 + 1;
        if ( (unsigned int)(v20 + 1) >= 8 )
        {
          v19[2] = v148;
          *(_QWORD *)((char *)v18 + v66 - 8) = *(size_t *)((char *)&v147 + v66);
          v90 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v91 = (char *)v18 - v90;
          v92 = (char *)((char *)&v148 - v91);
          v93 = ((_DWORD)v91 + v66) & 0xFFFFFFF8;
          if ( v93 >= 8 )
          {
            v94 = v93 & 0xFFFFFFF8;
            v95 = 0;
            do
            {
              v96 = v95;
              v95 += 8;
              *(_QWORD *)(v90 + v96) = *(_QWORD *)&v92[v96];
            }
            while ( v95 < v94 );
          }
        }
        else if ( (v66 & 4) != 0 )
        {
          *((_DWORD *)v19 + 4) = (_DWORD)v148;
          *(_DWORD *)((char *)v18 + v66 - 4) = *(_DWORD *)((char *)&v147 + v66 + 4);
        }
        else if ( (_DWORD)v20 != -1 )
        {
          *((_BYTE *)v19 + 16) = (_BYTE)v148;
          if ( (v66 & 2) != 0 )
            *(_WORD *)((char *)v18 + v66 - 2) = *(_WORD *)((char *)&v147 + v66 + 6);
        }
      }
      else
      {
        *v17 = v146;
        v17[2] = v148;
      }
      v19[1] = v20;
      v146 = &v148;
      v147 = 0;
      LOBYTE(v148) = 0;
      LOBYTE(v128) = 0;
      v97 = &v128;
      v21 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v22 = *(_BYTE *)v21;
      v23 = *(_QWORD *)(v21 + 8);
      *(_BYTE *)v21 = 3;
      *(_QWORD *)(v21 + 8) = v19;
      LOBYTE(v132) = v22;
      *(_QWORD *)&v133 = v23;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v146 != &v148 )
        operator delete(v146, (unsigned __int64)(v148 + 1));
      v24 = (unsigned __int16)v134;
      v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v26 = *(_BYTE *)v25;
      v27 = *(_QWORD *)(v25 + 8);
      *(_BYTE *)v25 = 6;
      v28 = v128;
      LOBYTE(v132) = v26;
      *(_QWORD *)(v25 + 8) = v24;
      *(_QWORD *)&v133 = v27;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v132 = nullptr;
      v133 = 0;
      dest = (void *)get_fixup_value();
      if ( dest == (void *)-1LL )
      {
LABEL_42:
        if ( !HIBYTE(v105) )
        {
LABEL_43:
          v39 = operator new(0x18u);
          *(_QWORD *)(v39 + 16) = 0;
          v100 = (_QWORD *)v39;
          *(_OWORD *)v39 = 0;
          goto LABEL_44;
        }
LABEL_66:
        if ( v100[1] != v100[2] )
        {
          LOBYTE(v128) = v28;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v100[1] += 16LL;
          goto LABEL_45;
        }
LABEL_44:
        LOBYTE(v128) = v28;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_45:
        if ( v132 )
        {
          *(_QWORD *)&v133 = 0;
          qfree();
        }
        LOBYTE(v128) = v28;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        HIBYTE(v105) = 2;
        goto LABEL_48;
      }
      qsnprintf();
      v146 = &v148;
      v29 = strlen(s);
      v130 = (char *)v29;
      v30 = v29;
      if ( v29 > 0xF )
      {
        v65 = (char **)std::string::_M_create();
        v146 = v65;
        v148 = v130;
      }
      else
      {
        if ( v29 == 1 )
        {
          LOBYTE(v148) = s[0];
          goto LABEL_36;
        }
        if ( !v29 )
        {
LABEL_36:
          v31 = &v148;
          goto LABEL_37;
        }
        v65 = &v148;
      }
      if ( v30 >= 8 )
      {
        *v65 = *(char **)s;
        *(char **)((char *)v65 + v30 - 8) = *(char **)&v152[v30];
        v82 = (unsigned __int64)(v65 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v83 = (char *)v65 - v82;
        v84 = (char *)(s - v83);
        v85 = ((_DWORD)v83 + v30) & 0xFFFFFFF8;
        if ( v85 >= 8 )
        {
          v86 = v85 & 0xFFFFFFF8;
          v87 = 0;
          do
          {
            v88 = v87;
            v87 += 8;
            *(_QWORD *)(v82 + v88) = *(_QWORD *)&v84[v88];
          }
          while ( v87 < v86 );
        }
      }
      else if ( (v30 & 4) != 0 )
      {
        *(_DWORD *)v65 = *(_DWORD *)s;
        *(_DWORD *)((char *)v65 + v30 - 4) = *(_DWORD *)&v152[v30 + 4];
      }
      else if ( v30 )
      {
        *(_BYTE *)v65 = s[0];
        if ( (v30 & 2) != 0 )
          *(_WORD *)((char *)v65 + v30 - 2) = *(_WORD *)&v152[v30 + 6];
      }
      v29 = (size_t)v130;
      v31 = (char **)v146;
LABEL_37:
      v147 = v29;
      *((_BYTE *)v31 + v29) = 0;
      v130 = nullptr;
      v131 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v32 = (_QWORD *)operator new(0x20u);
      v33 = v32 + 2;
      v34 = v32;
      v35 = v147;
      *v32 = v32 + 2;
      if ( v146 == &v148 )
      {
        v74 = v35 + 1;
        if ( (unsigned int)(v35 + 1) < 8 )
        {
          if ( (v74 & 4) != 0 )
          {
            *((_DWORD *)v34 + 4) = (_DWORD)v148;
            *(_DWORD *)((char *)v33 + v74 - 4) = *(_DWORD *)((char *)&v147 + v74 + 4);
          }
          else if ( (_DWORD)v35 != -1 )
          {
            *((_BYTE *)v34 + 16) = (_BYTE)v148;
            if ( (v74 & 2) != 0 )
              *(_WORD *)((char *)v33 + v74 - 2) = *(_WORD *)((char *)&v147 + v74 + 6);
          }
        }
        else
        {
          v34[2] = v148;
          *(_QWORD *)((char *)v33 + v74 - 8) = *(size_t *)((char *)&v147 + v74);
          v75 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v76 = (char *)v33 - v75;
          v77 = (char *)((char *)&v148 - v76);
          v78 = ((_DWORD)v76 + v74) & 0xFFFFFFF8;
          if ( v78 >= 8 )
          {
            v79 = v78 & 0xFFFFFFF8;
            v80 = 0;
            do
            {
              v81 = v80;
              v80 += 8;
              *(_QWORD *)(v75 + v81) = *(_QWORD *)&v77[v81];
            }
            while ( v80 < v79 );
          }
        }
      }
      else
      {
        *v32 = v146;
        v32[2] = v148;
      }
      v34[1] = v35;
      v146 = &v148;
      v147 = 0;
      LOBYTE(v148) = 0;
      v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v37 = *(_BYTE *)v36;
      v38 = *(_QWORD *)(v36 + 8);
      *(_BYTE *)v36 = 3;
      *(_QWORD *)(v36 + 8) = v34;
      v28 = v128;
      LOBYTE(v130) = v37;
      v131 = v38;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v146 != &v148 )
        operator delete(v146, (unsigned __int64)(v148 + 1));
      get_ea_name();
      if ( (unsigned __int64)v133 <= 1 )
        goto LABEL_42;
      v130 = nullptr;
      v43 = v132;
      v131 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v44 = (__int64 *)operator new(0x20u);
      v45 = v44;
      *v44 = (__int64)(v44 + 2);
      if ( !v43 )
        JUMPOUT(0x14AD82);
      dest = v44 + 2;
      v46 = strlen(v43);
      v47 = dest;
      v123 = v46;
      v48 = v46;
      if ( v46 > 0xF )
      {
        dest = (void *)v46;
        v89 = std::string::_M_create();
        *v45 = v89;
        v47 = (void *)v89;
        v48 = (size_t)dest;
        v45[2] = v123;
      }
      else
      {
        if ( v46 == 1 )
        {
          *((_BYTE *)v45 + 16) = *v43;
          goto LABEL_65;
        }
        if ( !v46 )
          goto LABEL_65;
      }
      memcpy(v47, v43, v48);
      v46 = v123;
      v47 = (void *)*v45;
LABEL_65:
      v45[1] = v46;
      *((_BYTE *)v47 + v46) = 0;
      v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v50 = *(_BYTE *)v49;
      v51 = *(_QWORD *)(v49 + 8);
      *(_BYTE *)v49 = 3;
      *(_QWORD *)(v49 + 8) = v45;
      v28 = v128;
      LOBYTE(v130) = v50;
      v131 = v51;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !HIBYTE(v105) )
        goto LABEL_43;
      goto LABEL_66;
    }
    if ( v40 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v148) = v151[0];
    }
    else if ( v40 )
    {
      v42 = &v148;
      goto LABEL_53;
    }
    v16 = &v148;
    goto LABEL_28;
  }
LABEL_68:
  v138[0] = 0;
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v138[0] = 3;
  v52 = operator new(0x20u);
  v55 = 0x6F635F7075786966LL;
  strcpy((char *)(v52 + 16), "fixup_count");
  *(_QWORD *)v52 = v52 + 16;
  *(_QWORD *)(v52 + 8) = 11;
  v139 = (unsigned __int64)v52;
  if ( HIBYTE(v105) == 2 )
  {
    v55 = (__int64)v100;
    v56 = (__int64)(v100[1] - *v100) >> 4;
  }
  else
  {
    v56 = HIBYTE(v105) != 0;
  }
  v141 = v56;
  v140 = 6;
  v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v146,
    (__int64)v138,
    2,
    v55,
    v53,
    v54,
    (int)v97,
    (__int64)v100,
    (int)&v134,
    v105,
    (int)&v146,
    (int)dest,
    a1,
    (int)&v126,
    v120,
    v123,
    v126,
    v127,
    v128,
    v129,
    (__int64)v130);
  v148 = nullptr;
  LOBYTE(v143) = 0;
  *(_QWORD *)&v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v143) = 3;
  v57 = operator new(0x20u);
  strcpy((char *)(v57 + 16), "fixups");
  *(_QWORD *)v57 = v57 + 16;
  *(_QWORD *)(v57 + 8) = 6;
  v144 = (unsigned __int64)v57;
  LOBYTE(v126) = HIBYTE(v106);
  v127 = v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v145 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v149,
    (__int64)&v143,
    2,
    v58,
    v59,
    v60,
    v98,
    v101,
    v103,
    v106,
    v109,
    desta,
    v115,
    v118,
    v121,
    v124,
    v126,
    v127,
    v128,
    v129,
    (__int64)v130);
  v150 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v116,
    v110,
    2,
    v61,
    v62,
    v63,
    v99,
    v102,
    v104,
    v107,
    v110,
    destb,
    (__int64)v116,
    v119,
    v122,
    v125,
    v126,
    v127,
    v128,
    v129,
    (__int64)v130);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v117;
}

