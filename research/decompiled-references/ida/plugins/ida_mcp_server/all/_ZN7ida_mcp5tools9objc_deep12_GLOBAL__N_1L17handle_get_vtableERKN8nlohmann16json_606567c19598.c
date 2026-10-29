__int64 __fastcall ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_vtable(int a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbp
  size_t v14; // rdx
  int v15; // eax
  char v16; // al
  char *v17; // rbp
  int *v18; // rax
  int *v19; // r13
  std::runtime_error *v20; // rbx
  int v21; // ebx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rax
  unsigned int v26; // ecx
  char **v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r12
  char *v31; // rcx
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rdx
  char *v35; // rax
  unsigned int v36; // r15d
  char **v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // r12
  char *v41; // rcx
  __int64 v42; // rax
  char v43; // si
  __int64 v44; // rdx
  char v45; // bp
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // rax
  unsigned int v49; // ebp
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  unsigned __int64 v52; // r8
  char *v53; // r9
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  size_t v56; // rsi
  __int64 v57; // rax
  _BYTE *v58; // rcx
  size_t v59; // r8
  __int64 v60; // r9
  char *v61; // r15
  __int64 *v62; // rax
  __int64 *v63; // rbp
  size_t v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char *v77; // rbx
  char **v79; // rax
  char **v80; // rax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned __int64 v83; // rcx
  char *v84; // rax
  char *v85; // r12
  unsigned int v86; // r15d
  unsigned int v87; // r15d
  unsigned int v88; // eax
  __int64 v89; // rdx
  unsigned __int64 v90; // rsi
  char *v91; // rax
  char *v92; // r12
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // eax
  __int64 v96; // rdx
  _QWORD *v97; // rax
  unsigned __int64 v98; // rdi
  char *v99; // rdx
  char *v100; // r8
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // edx
  __int64 v104; // rsi
  unsigned __int64 v105; // rdi
  char *v106; // rdx
  char *v107; // r8
  unsigned int v108; // eax
  unsigned int v109; // eax
  unsigned int v110; // edx
  __int64 v111; // rsi
  unsigned __int64 v112; // rdx
  char *v113; // rax
  char *v114; // rbx
  unsigned int v115; // ebp
  unsigned int v116; // ebp
  unsigned int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rax
  unsigned int v120; // edi
  unsigned int v121; // edx
  __int64 v122; // rdi
  int v123; // [rsp+0h] [rbp-2B8h]
  int v124; // [rsp+0h] [rbp-2B8h]
  int v125; // [rsp+0h] [rbp-2B8h]
  int v126; // [rsp+0h] [rbp-2B8h]
  int v127; // [rsp+0h] [rbp-2B8h]
  __int64 v128; // [rsp+8h] [rbp-2B0h]
  __int64 v129; // [rsp+8h] [rbp-2B0h]
  __int64 v130; // [rsp+8h] [rbp-2B0h]
  __int64 v131; // [rsp+8h] [rbp-2B0h]
  int v132; // [rsp+10h] [rbp-2A8h]
  int v133; // [rsp+10h] [rbp-2A8h]
  int v134; // [rsp+10h] [rbp-2A8h]
  int v135; // [rsp+10h] [rbp-2A8h]
  int dest; // [rsp+18h] [rbp-2A0h]
  _BYTE *desta; // [rsp+18h] [rbp-2A0h]
  int destb; // [rsp+18h] [rbp-2A0h]
  int destc; // [rsp+18h] [rbp-2A0h]
  int destd; // [rsp+18h] [rbp-2A0h]
  __int64 v141; // [rsp+20h] [rbp-298h]
  int v142; // [rsp+20h] [rbp-298h]
  _QWORD *v143; // [rsp+20h] [rbp-298h]
  __int64 v144; // [rsp+20h] [rbp-298h]
  int v145; // [rsp+20h] [rbp-298h]
  int v146; // [rsp+28h] [rbp-290h]
  int v147; // [rsp+28h] [rbp-290h]
  int v148; // [rsp+28h] [rbp-290h]
  __int64 v149; // [rsp+28h] [rbp-290h]
  char *v150; // [rsp+28h] [rbp-290h]
  __int64 func; // [rsp+30h] [rbp-288h]
  __int64 v152; // [rsp+30h] [rbp-288h]
  __int64 v153; // [rsp+30h] [rbp-288h]
  __int64 v154; // [rsp+30h] [rbp-288h]
  __int64 v155; // [rsp+30h] [rbp-288h]
  __int64 v156; // [rsp+38h] [rbp-280h]
  int v157; // [rsp+38h] [rbp-280h]
  int v158; // [rsp+38h] [rbp-280h]
  int v159; // [rsp+38h] [rbp-280h]
  int v160; // [rsp+38h] [rbp-280h]
  int v161; // [rsp+40h] [rbp-278h]
  int v162; // [rsp+40h] [rbp-278h]
  int v163; // [rsp+40h] [rbp-278h]
  int v164; // [rsp+40h] [rbp-278h]
  int v165; // [rsp+40h] [rbp-278h]
  int v166; // [rsp+48h] [rbp-270h]
  int v167; // [rsp+48h] [rbp-270h]
  __int64 v168; // [rsp+48h] [rbp-270h]
  int v169; // [rsp+48h] [rbp-270h]
  int v171; // [rsp+50h] [rbp-268h]
  int v172; // [rsp+50h] [rbp-268h]
  int v173; // [rsp+50h] [rbp-268h]
  _QWORD *v174; // [rsp+50h] [rbp-268h]
  __int64 v175; // [rsp+50h] [rbp-268h]
  char v176; // [rsp+58h] [rbp-260h]
  char v177; // [rsp+58h] [rbp-260h]
  char v178; // [rsp+58h] [rbp-260h]
  char v179; // [rsp+58h] [rbp-260h]
  char v180; // [rsp+58h] [rbp-260h]
  char v181; // [rsp+5Eh] [rbp-25Ah]
  char v182; // [rsp+5Eh] [rbp-25Ah]
  char v183; // [rsp+5Eh] [rbp-25Ah]
  __int8 v184; // [rsp+5Fh] [rbp-259h]
  __int64 v185; // [rsp+60h] [rbp-258h]
  __int64 v186; // [rsp+60h] [rbp-258h]
  __int64 v187; // [rsp+60h] [rbp-258h]
  __int64 v188; // [rsp+60h] [rbp-258h]
  int v189; // [rsp+68h] [rbp-250h]
  int v190; // [rsp+68h] [rbp-250h]
  int v191; // [rsp+68h] [rbp-250h]
  int v192; // [rsp+68h] [rbp-250h]
  int v193; // [rsp+68h] [rbp-250h]
  __int64 v194; // [rsp+70h] [rbp-248h]
  __int64 v195; // [rsp+70h] [rbp-248h]
  __int64 v196; // [rsp+70h] [rbp-248h]
  __int64 v197; // [rsp+70h] [rbp-248h]
  __int64 v198; // [rsp+70h] [rbp-248h]
  char v199[8]; // [rsp+80h] [rbp-238h] BYREF
  __int64 v200; // [rsp+88h] [rbp-230h]
  size_t v201; // [rsp+90h] [rbp-228h]
  __int64 v202; // [rsp+98h] [rbp-220h]
  __m128i v203; // [rsp+A0h] [rbp-218h] BYREF
  char *v204; // [rsp+B0h] [rbp-208h]
  __int128 v205; // [rsp+B8h] [rbp-200h]
  void *v206; // [rsp+D0h] [rbp-1E8h] BYREF
  size_t v207; // [rsp+D8h] [rbp-1E0h]
  _QWORD v208[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  char v209[8]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int128 v210; // [rsp+F8h] [rbp-1C0h] BYREF
  char v211; // [rsp+108h] [rbp-1B0h]
  __int128 v212; // [rsp+110h] [rbp-1A8h]
  char v213[8]; // [rsp+120h] [rbp-198h] BYREF
  __int128 v214; // [rsp+128h] [rbp-190h]
  __m128i v215; // [rsp+138h] [rbp-180h]
  __int64 v216; // [rsp+148h] [rbp-170h]
  char v217[8]; // [rsp+150h] [rbp-168h] BYREF
  __int128 v218; // [rsp+158h] [rbp-160h]
  char v219; // [rsp+168h] [rbp-150h]
  __int64 v220; // [rsp+170h] [rbp-148h]
  __int64 v221; // [rsp+178h] [rbp-140h]
  void *v222; // [rsp+180h] [rbp-138h] BYREF
  __int128 s2; // [rsp+188h] [rbp-130h] BYREF
  __int64 v224; // [rsp+1A8h] [rbp-110h]
  void *v225; // [rsp+1B0h] [rbp-108h] BYREF
  char *v226; // [rsp+1B8h] [rbp-100h]
  char *v227; // [rsp+1C0h] [rbp-F8h] BYREF
  _QWORD v228[3]; // [rsp+1C8h] [rbp-F0h] BYREF
  _QWORD v229[3]; // [rsp+1E0h] [rbp-D8h] BYREF
  __int64 v230; // [rsp+1F8h] [rbp-C0h] BYREF
  __int64 v231; // [rsp+208h] [rbp-B0h]
  char s[24]; // [rsp+210h] [rbp-A8h] BYREF
  _BYTE v233[8]; // [rsp+228h] [rbp-90h]
  char v234[24]; // [rsp+230h] [rbp-88h] BYREF
  _BYTE v235[8]; // [rsp+248h] [rbp-70h]
  char v236[40]; // [rsp+250h] [rbp-68h] BYREF
  unsigned __int64 v237; // [rsp+278h] [rbp-40h]

  v237 = __readfsqword(0x28u);
  v222 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    v204 = v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = v6 + 8;
  if ( v7 )
  {
    v9 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 40);
        if ( !v12 )
          break;
        v10 = 7;
        if ( v12 <= 7 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), (char *)&s2 + 8, v10);
        if ( v11 || (v11 = v12 - 7, (__int64)(v12 - 7) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_12;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_12:
    if ( v8 != v9 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 )
      {
        v14 = 7;
        if ( v13 <= 7 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp((char *)&s2 + 8, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 7 - v13, (__int64)(7 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v15 >= 0 )
            v8 = v9;
        }
      }
      else
      {
        v8 = v9;
      }
    }
  }
  BYTE8(s2) = 0;
  v16 = *(_BYTE *)(v8 + 64);
  v222 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v16 != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
        break;
      case 3:
        v5 = "string";
        break;
      case 4:
        v5 = "boolean";
        break;
      case 8:
        v5 = "binary";
        break;
      case 9:
        v5 = "discarded";
        break;
      default:
        v5 = "number";
        break;
    }
    v204 = v5;
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
  v17 = (char *)v222;
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v156 = __isoc23_strtoull();
  if ( v17 == v204 || *v204 || *v19 == 34 && v156 == -1 )
  {
    if ( v222 != (char *)&s2 + 8 )
      operator delete(v222, *((_QWORD *)&s2 + 1) + 1LL);
    v20 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v20, "Invalid address");
    __cxa_throw(
      v20,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v222 != (char *)&s2 + 8 )
    operator delete(v222, *((_QWORD *)&s2 + 1) + 1LL);
  LODWORD(v204) = 50;
  v21 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  v199[0] = 0;
  v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v181 = 0;
  v141 = 0;
  if ( v21 > 0 )
  {
    v22 = 0;
    v161 = v21;
    do
    {
      dest = v156 + 8 * v22;
      if ( !(unsigned __int8)is_loaded() )
        break;
      if ( !get_qword() )
        break;
      func = get_func();
      if ( !func )
      {
        if ( v22 )
          break;
      }
      v201 = 0;
      v202 = 0;
      v23 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v24 = *(_QWORD *)(v23 + 8);
      *(_BYTE *)v23 = 5;
      *(_QWORD *)(v23 + 8) = v22;
      *(_QWORD *)&v205 = v24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v225 = &v227;
      v25 = (char *)strlen(s);
      v204 = v25;
      v26 = (unsigned int)v25;
      if ( (unsigned __int64)v25 > 0xF )
      {
        v189 = (int)v25;
        v79 = (char **)std::string::_M_create();
        v225 = v79;
        v26 = v189;
        v227 = v204;
      }
      else
      {
        if ( v25 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v227) = s[0];
LABEL_39:
          v27 = &v227;
          goto LABEL_40;
        }
        if ( !v25 )
          goto LABEL_39;
        v79 = &v227;
      }
      if ( v26 >= 8 )
      {
        *v79 = *(char **)s;
        *(char **)((char *)v79 + v26 - 8) = *(char **)&s[v26 - 8];
        v90 = (unsigned __int64)(v79 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v91 = (char *)v79 - v90;
        v92 = (char *)(s - v91);
        v93 = ((_DWORD)v91 + v26) & 0xFFFFFFF8;
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
      else if ( (v26 & 4) != 0 )
      {
        *(_DWORD *)v79 = *(_DWORD *)s;
        *(_DWORD *)((char *)v79 + v26 - 4) = *(_DWORD *)&s[v26 - 4];
      }
      else if ( v26 )
      {
        *(_BYTE *)v79 = s[0];
        if ( (v26 & 2) != 0 )
          *(_WORD *)((char *)v79 + v26 - 2) = *(_WORD *)&s[v26 - 2];
      }
      v25 = v204;
      v27 = (char **)v225;
LABEL_40:
      v226 = v25;
      v25[(_QWORD)v27] = 0;
      v204 = nullptr;
      *(_QWORD *)&v205 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v28 = (_QWORD *)operator new(0x20u);
      v29 = v28 + 2;
      v30 = v28;
      v31 = v226;
      *v28 = v28 + 2;
      if ( v225 == &v227 )
      {
        v81 = (_DWORD)v31 + 1;
        if ( (unsigned int)((_DWORD)v31 + 1) >= 8 )
        {
          v30[2] = v227;
          *(_QWORD *)((char *)v29 + v81 - 8) = *(char **)((char *)&v226 + v81);
          v98 = (unsigned __int64)(v30 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v99 = (char *)v29 - v98;
          v100 = (char *)((char *)&v227 - v99);
          v101 = ((_DWORD)v99 + v81) & 0xFFFFFFF8;
          if ( v101 >= 8 )
          {
            v102 = v101 & 0xFFFFFFF8;
            v103 = 0;
            do
            {
              v104 = v103;
              v103 += 8;
              *(_QWORD *)(v98 + v104) = *(_QWORD *)&v100[v104];
            }
            while ( v103 < v102 );
          }
        }
        else if ( (v81 & 4) != 0 )
        {
          *((_DWORD *)v30 + 4) = (_DWORD)v227;
          *(_DWORD *)((char *)v29 + v81 - 4) = *(_DWORD *)((char *)&v226 + v81 + 4);
        }
        else if ( (_DWORD)v31 != -1 )
        {
          *((_BYTE *)v30 + 16) = (_BYTE)v227;
          if ( (v81 & 2) != 0 )
            *(_WORD *)((char *)v29 + v81 - 2) = *(_WORD *)((char *)&v226 + v81 + 6);
        }
      }
      else
      {
        *v28 = v225;
        v28[2] = v227;
      }
      v30[1] = v31;
      v225 = &v227;
      v226 = nullptr;
      LOBYTE(v227) = 0;
      v32 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v33 = *(_BYTE *)v32;
      v34 = *(_QWORD *)(v32 + 8);
      *(_BYTE *)v32 = 3;
      *(_QWORD *)(v32 + 8) = v30;
      LOBYTE(v204) = v33;
      *(_QWORD *)&v205 = v34;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v225 != &v227 )
        operator delete(v225, (unsigned __int64)(v227 + 1));
      qsnprintf();
      v225 = &v227;
      v35 = (char *)strlen(v234);
      v204 = v35;
      v36 = (unsigned int)v35;
      if ( (unsigned __int64)v35 > 0xF )
      {
        v80 = (char **)std::string::_M_create();
        v225 = v80;
        v227 = v204;
      }
      else
      {
        if ( v35 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v227) = v234[0];
LABEL_47:
          v37 = &v227;
          goto LABEL_48;
        }
        if ( !v35 )
          goto LABEL_47;
        v80 = &v227;
      }
      if ( v36 >= 8 )
      {
        *v80 = *(char **)v234;
        *(char **)((char *)v80 + v36 - 8) = *(char **)&v233[v36];
        v83 = (unsigned __int64)(v80 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v84 = (char *)v80 - v83;
        v85 = (char *)(v234 - v84);
        v86 = ((_DWORD)v84 + v36) & 0xFFFFFFF8;
        if ( v86 >= 8 )
        {
          v87 = v86 & 0xFFFFFFF8;
          v88 = 0;
          do
          {
            v89 = v88;
            v88 += 8;
            *(_QWORD *)(v83 + v89) = *(_QWORD *)&v85[v89];
          }
          while ( v88 < v87 );
        }
      }
      else if ( (v36 & 4) != 0 )
      {
        *(_DWORD *)v80 = *(_DWORD *)v234;
        *(_DWORD *)((char *)v80 + v36 - 4) = *(_DWORD *)&v233[v36 + 4];
      }
      else if ( v36 )
      {
        *(_BYTE *)v80 = v234[0];
        if ( (v36 & 2) != 0 )
          *(_WORD *)((char *)v80 + v36 - 2) = *(_WORD *)&v233[v36 + 6];
      }
      v35 = v204;
      v37 = (char **)v225;
LABEL_48:
      v226 = v35;
      v35[(_QWORD)v37] = 0;
      v204 = nullptr;
      *(_QWORD *)&v205 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v38 = (_QWORD *)operator new(0x20u);
      v39 = v38 + 2;
      v40 = v38;
      v41 = v226;
      *v38 = v38 + 2;
      if ( v225 == &v227 )
      {
        v82 = (_DWORD)v41 + 1;
        if ( (unsigned int)((_DWORD)v41 + 1) >= 8 )
        {
          v40[2] = v227;
          *(_QWORD *)((char *)v39 + v82 - 8) = *(char **)((char *)&v226 + v82);
          v105 = (unsigned __int64)(v40 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v106 = (char *)v39 - v105;
          v107 = (char *)((char *)&v227 - v106);
          v108 = ((_DWORD)v106 + v82) & 0xFFFFFFF8;
          if ( v108 >= 8 )
          {
            v109 = v108 & 0xFFFFFFF8;
            v110 = 0;
            do
            {
              v111 = v110;
              v110 += 8;
              *(_QWORD *)(v105 + v111) = *(_QWORD *)&v107[v111];
            }
            while ( v110 < v109 );
          }
        }
        else if ( (v82 & 4) != 0 )
        {
          *((_DWORD *)v40 + 4) = (_DWORD)v227;
          *(_DWORD *)((char *)v39 + v82 - 4) = *(_DWORD *)((char *)&v226 + v82 + 4);
        }
        else if ( (_DWORD)v41 != -1 )
        {
          *((_BYTE *)v40 + 16) = (_BYTE)v227;
          if ( (v82 & 2) != 0 )
            *(_WORD *)((char *)v39 + v82 - 2) = *(_WORD *)((char *)&v226 + v82 + 6);
        }
      }
      else
      {
        *v38 = v225;
        v38[2] = v227;
      }
      v40[1] = v41;
      v225 = &v227;
      v226 = nullptr;
      LOBYTE(v227) = 0;
      v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v43 = *(_BYTE *)v42;
      v44 = *(_QWORD *)(v42 + 8);
      v45 = v201;
      *(_BYTE *)v42 = 3;
      *(_QWORD *)(v42 + 8) = v40;
      LOBYTE(v204) = v43;
      *(_QWORD *)&v205 = v44;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v225 != &v227 )
        operator delete(v225, (unsigned __int64)(v227 + 1));
      if ( func )
      {
        v204 = nullptr;
        v205 = 0;
        get_func_name();
      }
      v205 = 0;
      v204 = nullptr;
      get_ea_name();
      if ( v181 )
      {
        if ( *(_QWORD *)(v141 + 16) != *(_QWORD *)(v141 + 8) )
        {
          LOBYTE(v201) = v45;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_QWORD *)(v141 + 8) += 16LL;
          goto LABEL_57;
        }
      }
      else
      {
        v46 = operator new(0x18u);
        *(_QWORD *)(v46 + 16) = 0;
        v141 = v46;
        *(_OWORD *)v46 = 0;
      }
      LOBYTE(v201) = v45;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_57:
      if ( v204 )
      {
        *(_QWORD *)&v205 = 0;
        qfree();
      }
      LOBYTE(v201) = v45;
      ++v22;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v181 = 2;
    }
    while ( v21 != v22 );
  }
  v205 = 0;
  v204 = nullptr;
  get_ea_name();
  v209[0] = 0;
  *(_QWORD *)&v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v209[0] = 3;
  v47 = operator new(0x20u);
  *(_QWORD *)v47 = v47 + 16;
  strcpy((char *)(v47 + 16), "address");
  *(_QWORD *)(v47 + 8) = 7;
  v210 = (unsigned __int64)v47;
  qsnprintf();
  v206 = v208;
  v48 = strlen(v236);
  v203.m128i_i64[0] = v48;
  v49 = v48;
  if ( v48 > 0xF )
  {
    v97 = (_QWORD *)std::string::_M_create();
    v206 = v97;
    v208[0] = v203.m128i_i64[0];
  }
  else
  {
    if ( v48 == 1 )
    {
      LOBYTE(v208[0]) = v236[0];
      goto LABEL_63;
    }
    if ( !v48 )
    {
LABEL_63:
      v50 = v208;
      goto LABEL_64;
    }
    v97 = v208;
  }
  if ( v49 >= 8 )
  {
    *v97 = *(_QWORD *)v236;
    *(_QWORD *)((char *)v97 + v49 - 8) = *(_QWORD *)&v235[v49];
    v112 = (unsigned __int64)(v97 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v113 = (char *)v97 - v112;
    v114 = (char *)(v236 - v113);
    v115 = ((_DWORD)v113 + v49) & 0xFFFFFFF8;
    if ( v115 >= 8 )
    {
      v116 = v115 & 0xFFFFFFF8;
      v117 = 0;
      do
      {
        v118 = v117;
        v117 += 8;
        *(_QWORD *)(v112 + v118) = *(_QWORD *)&v114[v118];
      }
      while ( v117 < v116 );
    }
  }
  else if ( (v49 & 4) != 0 )
  {
    *(_DWORD *)v97 = *(_DWORD *)v236;
    *(_DWORD *)((char *)v97 + v49 - 4) = *(_DWORD *)&v235[v49 + 4];
  }
  else if ( v49 )
  {
    *(_BYTE *)v97 = v236[0];
    if ( (v49 & 2) != 0 )
      *(_WORD *)((char *)v97 + v49 - 2) = *(_WORD *)&v235[v49 + 6];
  }
  v48 = v203.m128i_i64[0];
  v50 = v206;
LABEL_64:
  v207 = v48;
  *((_BYTE *)v50 + v48) = 0;
  v211 = 0;
  *(_QWORD *)&v212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v211 = 3;
  v51 = (_QWORD *)operator new(0x20u);
  v54 = v206;
  v55 = (__int64)(v51 + 2);
  v56 = v207;
  *v51 = v51 + 2;
  if ( v54 == v208 )
  {
    v120 = v56 + 1;
    if ( (unsigned int)(v56 + 1) >= 8 )
    {
      v51[2] = v208[0];
      *(_QWORD *)(v55 + v120 - 8) = *(_QWORD *)((char *)&v208[-1] + v120);
      v52 = (unsigned __int64)(v51 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v55 -= v52;
      v53 = (char *)v208 - v55;
      if ( (((_DWORD)v55 + v120) & 0xFFFFFFF8) >= 8 )
      {
        v121 = (v55 + v120) & 0xFFFFFFF8;
        LODWORD(v55) = 0;
        do
        {
          v122 = (unsigned int)v55;
          v55 = (unsigned int)(v55 + 8);
          *(_QWORD *)(v52 + v122) = *(_QWORD *)&v53[v122];
        }
        while ( (unsigned int)v55 < v121 );
      }
    }
    else if ( (v120 & 4) != 0 )
    {
      *((_DWORD *)v51 + 4) = v208[0];
      *(_DWORD *)(v55 + v120 - 4) = *(_DWORD *)((char *)&v207 + v120 + 4);
    }
    else if ( (_DWORD)v56 != -1 )
    {
      *((_BYTE *)v51 + 16) = v208[0];
      if ( (v120 & 2) != 0 )
        *(_WORD *)(v55 + v120 - 2) = *(_WORD *)((char *)&v207 + v120 + 6);
    }
  }
  else
  {
    *v51 = v54;
    v51[2] = v208[0];
  }
  v51[1] = v56;
  v206 = v208;
  v207 = 0;
  LOBYTE(v208[0]) = 0;
  v212 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v225,
    (__int64)v209,
    2,
    v55,
    v52,
    (__int64)v53,
    v123,
    (__int64)&v210,
    (int)&v206,
    dest,
    v141,
    (int)&v225,
    (__int64)v209,
    v156,
    v161,
    (int)&v222,
    a1,
    v176,
    (__int64)v199,
    v189,
    v194);
  v227 = nullptr;
  v213[0] = 0;
  *(_QWORD *)&v214 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v213[0] = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)v57 = v57 + 16;
  strcpy((char *)(v57 + 16), "name");
  *(_QWORD *)(v57 + 8) = 4;
  v214 = (unsigned __int64)v57;
  if ( (unsigned __int64)v205 > 1 )
  {
    v203 = 0u;
    v61 = v204;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v62 = (__int64 *)operator new(0x20u);
    v63 = v62;
    *v62 = (__int64)(v62 + 2);
    if ( !v61 )
      JUMPOUT(0x14A37C);
    desta = v62 + 2;
    v64 = strlen(v61);
    v58 = desta;
    v201 = v64;
    v59 = v64;
    if ( v64 > 0xF )
    {
      desta = (_BYTE *)v64;
      v119 = std::string::_M_create();
      *v63 = v119;
      v58 = (_BYTE *)v119;
      v59 = (size_t)desta;
      v63[2] = v201;
    }
    else
    {
      if ( v64 == 1 )
      {
        *((_BYTE *)v63 + 16) = *v61;
        goto LABEL_71;
      }
      if ( !v64 )
      {
LABEL_71:
        v63[1] = v64;
        v58[v64] = 0;
        goto LABEL_72;
      }
    }
    memcpy(v58, v61, v59);
    v64 = v201;
    v58 = (_BYTE *)*v63;
    goto LABEL_71;
  }
  v184 = 0;
  v63 = nullptr;
LABEL_72:
  v203.m128i_i64[1] = (__int64)v63;
  v216 = 0;
  v203.m128i_i8[0] = v184;
  v215 = _mm_load_si128(&v203);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v228,
    (__int64)v213,
    2,
    (__int64)v58,
    v59,
    v60,
    v124,
    v128,
    v132,
    (int)desta,
    v142,
    v146,
    v152,
    v157,
    v162,
    v166,
    v171,
    v177,
    v185,
    v190,
    v195);
  v228[2] = 0;
  v217[0] = 0;
  *(_QWORD *)&v218 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v217[0] = 3;
  v65 = operator new(0x20u);
  v68 = 0x6F635F7972746E65LL;
  strcpy((char *)(v65 + 16), "entry_count");
  *(_QWORD *)v65 = v65 + 16;
  *(_QWORD *)(v65 + 8) = 11;
  v218 = (unsigned __int64)v65;
  if ( v182 == 1 )
  {
    v69 = v143[5];
  }
  else if ( v182 == 2 )
  {
    v68 = (__int64)v143;
    v69 = (__int64)(v143[1] - *v143) >> 4;
  }
  else
  {
    v69 = v182 != 0;
  }
  v219 = 6;
  v220 = v69;
  v221 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v229,
    (__int64)v217,
    2,
    v68,
    v66,
    v67,
    v125,
    v129,
    v133,
    destb,
    (int)v143,
    v147,
    v153,
    v158,
    v163,
    v167,
    v172,
    v178,
    v186,
    v191,
    v196);
  v229[2] = 0;
  LOBYTE(v222) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v222) = 3;
  v70 = operator new(0x20u);
  strcpy((char *)(v70 + 16), "entries");
  *(_QWORD *)v70 = v70 + 16;
  *(_QWORD *)(v70 + 8) = 7;
  s2 = (unsigned __int64)v70;
  v199[0] = v183;
  v200 = v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v224 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v230,
    v168,
    2,
    v71,
    v72,
    v73,
    v126,
    v130,
    v134,
    destc,
    v144,
    v148,
    v154,
    v159,
    v164,
    v168,
    v173,
    v179,
    v187,
    v192,
    v197);
  v231 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v174,
    v149,
    4,
    v74,
    v75,
    v76,
    v127,
    v131,
    v135,
    destd,
    v145,
    v149,
    v155,
    v160,
    v165,
    v169,
    (int)v174,
    v180,
    v188,
    v193,
    v198);
  v77 = s;
  do
  {
    v77 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v77 != v150 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v206 != v208 )
    operator delete(v206, v208[0] + 1LL);
  if ( v204 )
  {
    *(_QWORD *)&v205 = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v175;
}

