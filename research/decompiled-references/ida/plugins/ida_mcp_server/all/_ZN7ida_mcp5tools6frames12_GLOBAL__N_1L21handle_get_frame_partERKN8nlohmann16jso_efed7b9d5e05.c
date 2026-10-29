__int64 __fastcall ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_part(int a1)
{
  void *v1; // r14
  std::runtime_error *v2; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // r12
  _BYTE *v4; // rbp
  int *v5; // rax
  __int64 v6; // r12
  std::runtime_error *exception; // rax
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  int v10; // ebp
  const char *v11; // r14
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int128 v55; // xmm0
  char *v56; // rbp
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  int v69; // [rsp+F8h] [rbp-2A8h]
  int v70; // [rsp+F8h] [rbp-2A8h]
  int v71; // [rsp+F8h] [rbp-2A8h]
  int v72; // [rsp+F8h] [rbp-2A8h]
  int v73; // [rsp+F8h] [rbp-2A8h]
  int v74; // [rsp+F8h] [rbp-2A8h]
  int v75; // [rsp+F8h] [rbp-2A8h]
  int v76; // [rsp+F8h] [rbp-2A8h]
  int v77; // [rsp+F8h] [rbp-2A8h]
  int v78; // [rsp+100h] [rbp-2A0h]
  int v79; // [rsp+100h] [rbp-2A0h]
  int v80; // [rsp+100h] [rbp-2A0h]
  int v81; // [rsp+100h] [rbp-2A0h]
  int v82; // [rsp+100h] [rbp-2A0h]
  int v83; // [rsp+100h] [rbp-2A0h]
  int v84; // [rsp+100h] [rbp-2A0h]
  _QWORD *v85; // [rsp+100h] [rbp-2A0h]
  __int64 v86; // [rsp+100h] [rbp-2A0h]
  int *v87; // [rsp+108h] [rbp-298h]
  __int64 v88; // [rsp+108h] [rbp-298h]
  __int64 v89; // [rsp+108h] [rbp-298h]
  __int64 v90; // [rsp+108h] [rbp-298h]
  __int64 v91; // [rsp+108h] [rbp-298h]
  __int64 v92; // [rsp+108h] [rbp-298h]
  __int64 v93; // [rsp+108h] [rbp-298h]
  __int64 v94; // [rsp+108h] [rbp-298h]
  int v95; // [rsp+108h] [rbp-298h]
  _BYTE *v96; // [rsp+158h] [rbp-248h]
  __int128 v97; // [rsp+158h] [rbp-248h]
  void *v98; // [rsp+168h] [rbp-238h] BYREF
  __int64 v99; // [rsp+170h] [rbp-230h]
  _QWORD v100[2]; // [rsp+178h] [rbp-228h] BYREF
  char v101; // [rsp+188h] [rbp-218h] BYREF
  __int128 v102; // [rsp+190h] [rbp-210h] BYREF
  char v103; // [rsp+1A0h] [rbp-200h]
  __int128 v104; // [rsp+1A8h] [rbp-1F8h] BYREF
  char v105; // [rsp+1B8h] [rbp-1E8h] BYREF
  __int128 v106; // [rsp+1C0h] [rbp-1E0h] BYREF
  char v107; // [rsp+1D0h] [rbp-1D0h]
  __int64 v108; // [rsp+1D8h] [rbp-1C8h]
  __int64 v109; // [rsp+1E0h] [rbp-1C0h]
  char v110; // [rsp+1E8h] [rbp-1B8h] BYREF
  __int128 v111; // [rsp+1F0h] [rbp-1B0h] BYREF
  char v112; // [rsp+200h] [rbp-1A0h]
  __int128 v113; // [rsp+208h] [rbp-198h] BYREF
  char v114; // [rsp+218h] [rbp-188h] BYREF
  __int128 v115; // [rsp+220h] [rbp-180h] BYREF
  char v116; // [rsp+230h] [rbp-170h]
  __int64 v117; // [rsp+238h] [rbp-168h]
  __int64 v118; // [rsp+240h] [rbp-160h]
  char v119; // [rsp+248h] [rbp-158h] BYREF
  __int128 v120; // [rsp+250h] [rbp-150h]
  char v121; // [rsp+260h] [rbp-140h]
  __int64 v122; // [rsp+268h] [rbp-138h]
  __int64 v123; // [rsp+270h] [rbp-130h]
  void *v124; // [rsp+278h] [rbp-128h] BYREF
  __int128 v125; // [rsp+280h] [rbp-120h] BYREF
  char v126; // [rsp+290h] [rbp-110h] BYREF
  __int64 v127; // [rsp+298h] [rbp-108h]
  __int64 v128; // [rsp+2A0h] [rbp-100h]
  _QWORD v129[3]; // [rsp+2A8h] [rbp-F8h] BYREF
  _QWORD v130[3]; // [rsp+2C0h] [rbp-E0h] BYREF
  _QWORD v131[3]; // [rsp+2D8h] [rbp-C8h] BYREF
  _QWORD v132[3]; // [rsp+2F0h] [rbp-B0h] BYREF
  _QWORD v133[3]; // [rsp+308h] [rbp-98h] BYREF
  _QWORD v134[3]; // [rsp+320h] [rbp-80h] BYREF
  char v135[40]; // [rsp+338h] [rbp-68h] BYREF
  unsigned __int64 v136; // [rsp+360h] [rbp-40h]

  v136 = __readfsqword(0x28u);
  v124 = (char *)&v125 + 8;
  *(_QWORD *)&v125 = 0;
  BYTE8(v125) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x8B857);
  std::string::_M_assign();
  v4 = v124;
  v5 = __errno_location();
  *v5 = 0;
  v87 = v5;
  v6 = __isoc23_strtoull();
  if ( v4 == v96 || *v96 || *v87 == 34 && v6 == -1 )
  {
    if ( v124 != (char *)&v125 + 8 )
      operator delete(v124, *((_QWORD *)&v125 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid function_address format");
    JUMPOUT(0x8B8C9);
  }
  if ( v124 != (char *)&v125 + 8 )
    operator delete(v124, *((_QWORD *)&v125 + 1) + 1LL);
  v8 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v9 = *(_BYTE *)v8;
  if ( *(_BYTE *)v8 == 6 )
    goto LABEL_15;
  if ( v9 > 6u )
  {
    if ( v9 == 7 )
    {
      v10 = (int)*(double *)(v8 + 8);
LABEL_16:
      if ( (unsigned int)v10 > 3 )
      {
        v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
        std::runtime_error::runtime_error(v2, "Frame part must be 0 (ARGS), 1 (RETADDR), 2 (SAVREGS), or 3 (LVARS)");
        __cxa_throw(
          v2,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      if ( get_func() )
      {
        v97 = 0;
        v11 = "SAVREGS";
        get_frame_part();
        if ( v10 == 2 )
          goto LABEL_22;
        v11 = "LVARS";
        if ( v10 == 3 )
          goto LABEL_22;
        goto LABEL_20;
      }
LABEL_46:
      v1 = __cxa_allocate_exception(0x10u);
      ida_mcp::format_ea[abi:cxx11]();
      std::string::insert();
      std::string::basic_string();
      std::runtime_error::runtime_error();
      std::string::_M_dispose();
      std::string::_M_dispose();
      __cxa_throw(
        v1,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))&std::runtime_error::~runtime_error);
    }
    goto LABEL_47;
  }
  if ( v9 != 4 )
  {
    if ( v9 == 5 )
    {
LABEL_15:
      v10 = *(_DWORD *)(v8 + 8);
      goto LABEL_16;
    }
LABEL_47:
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v10 = *(unsigned __int8 *)(v8 + 8);
  if ( !get_func() )
    goto LABEL_46;
  v97 = 0;
  get_frame_part();
LABEL_20:
  v11 = "RETADDR";
  if ( v10 != 1 )
    v11 = "ARGS";
LABEL_22:
  *(_QWORD *)&v102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "function_address", v13, v14, v15, v16, v69, a1, (__int64)&v102);
  v102 = (unsigned __int64)v12;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v98, v135, v17, v18, v19, v20, v70, v78, v88);
  v103 = 0;
  *(_QWORD *)&v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v21 = (_QWORD *)operator new(0x20u);
  v22 = v98;
  v23 = v21 + 2;
  v24 = v99;
  *v21 = v21 + 2;
  if ( v22 == v100 )
  {
    v61 = v24 + 1;
    if ( (unsigned int)(v24 + 1) >= 8 )
    {
      v21[2] = v100[0];
      *(_QWORD *)((char *)v23 + v61 - 8) = *(_QWORD *)((char *)&v100[-1] + v61);
      v62 = (unsigned __int64)(v21 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v63 = (char *)v23 - v62;
      v64 = (char *)((char *)v100 - v63);
      v65 = ((_DWORD)v63 + v61) & 0xFFFFFFF8;
      if ( v65 >= 8 )
      {
        v66 = v65 & 0xFFFFFFF8;
        v67 = 0;
        do
        {
          v68 = v67;
          v67 += 8;
          *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
        }
        while ( v67 < v66 );
      }
    }
    else if ( (v61 & 4) != 0 )
    {
      *((_DWORD *)v21 + 4) = v100[0];
      *(_DWORD *)((char *)v23 + v61 - 4) = *(_DWORD *)((char *)&v99 + v61 + 4);
    }
    else if ( (_DWORD)v24 != -1 )
    {
      *((_BYTE *)v21 + 16) = v100[0];
      if ( (v61 & 2) != 0 )
        *(_WORD *)((char *)v23 + v61 - 2) = *(_WORD *)((char *)&v99 + v61 + 6);
    }
  }
  else
  {
    *v21 = v22;
    v21[2] = v100[0];
  }
  v21[1] = v24;
  v98 = v100;
  LOBYTE(v100[0]) = 0;
  v99 = 0;
  v104 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (const __m128i *)&v101,
    2,
    1);
  v129[2] = 0;
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "part", v26, v27, v28, v29, v71, v79, v89);
  v107 = 5;
  v108 = v10;
  v109 = 0;
  v106 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v130,
    (const __m128i *)&v105,
    2,
    1);
  v130[2] = 0;
  v110 = 0;
  *(_QWORD *)&v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "part_name", v31, v32, v33, v34, v72, v80, v90);
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  v111 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v35 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v35, v11, v36, v37, v38, v39, v73, v81, v91);
  v113 = (unsigned __int64)v35;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v131,
    (const __m128i *)&v110,
    2,
    1);
  v131[2] = 0;
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "start_offset", v41, v42, v43, v44, v74, v82, v92);
  v116 = 5;
  v117 = v97;
  v118 = 0;
  v115 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v114,
    2,
    1);
  v132[2] = 0;
  v119 = 0;
  *(_QWORD *)&v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v119 = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "end_offset", v46, v47, v48, v49, v75, v83, v93);
  v121 = 5;
  v122 = *((_QWORD *)&v97 + 1);
  v123 = 0;
  v120 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v133,
    (const __m128i *)&v119,
    2,
    1);
  v133[2] = 0;
  LOBYTE(v124) = 0;
  *(_QWORD *)&v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v124) = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "size", v51, v52, v53, v54, v76, v84, v94);
  v55 = (unsigned __int64)v50;
  v56 = (char *)v134;
  v126 = 6;
  v127 = *((_QWORD *)&v97 + 1) - v97;
  v128 = 0;
  v125 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v134,
    (const __m128i *)&v124,
    2,
    1);
  v134[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v85,
    (__int64)v129,
    6,
    v57,
    v58,
    v59,
    v77,
    (__int64)v85,
    v95,
    (int)&v104,
    (int)&v106,
    (int)&v111,
    (__int64)&v113,
    (int)&v115,
    (int)v135,
    (int)&v101,
    (int)&v110,
    (char)&v98,
    v97,
    SDWORD2(v97),
    (__int64)v98);
  do
  {
    v56 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v56 != &v126 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v98 != v100 )
    operator delete(v98, v100[0] + 1LL);
  return v86;
}

