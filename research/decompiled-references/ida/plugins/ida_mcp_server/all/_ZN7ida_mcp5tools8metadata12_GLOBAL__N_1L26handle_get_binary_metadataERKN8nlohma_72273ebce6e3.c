_QWORD *__fastcall ida_mcp::tools::metadata::`anonymous namespace'::handle_get_binary_metadata(_QWORD *a1)
{
  size_t v1; // rax
  size_t v2; // rbp
  size_t v3; // rbx
  const char *v4; // r12
  const char *v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  const char *v8; // r15
  __int64 *v9; // rax
  void *v10; // rbx
  __int64 *v11; // rbp
  size_t v12; // rax
  size_t v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  _QWORD *v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // rax
  unsigned int v32; // r12d
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  size_t v37; // rsi
  __int64 v38; // rax
  size_t v39; // rax
  unsigned int v40; // r14d
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  size_t v45; // rsi
  __int64 v46; // rax
  size_t v47; // rax
  unsigned int v48; // r14d
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rcx
  size_t v53; // rsi
  char *v54; // rbx
  const char *v55; // rbx
  char *v56; // rax
  char *v58; // rax
  char v59; // bl
  unsigned __int8 v60; // al
  char *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rbx
  _OWORD *v65; // rax
  __m128i si128; // xmm0
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 *v73; // r14
  __int64 v74; // rax
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  char *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  char *v89; // rbx
  const char *v90; // r12
  unsigned int v91; // eax
  __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  char *v94; // rbx
  const char *v95; // r13
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 *v98; // rbx
  _OWORD *v99; // rax
  __m128i v100; // xmm0
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rdx
  __int64 v108; // rax
  _QWORD *v109; // rdx
  char *v110; // rax
  char *v111; // rax
  unsigned int v112; // edi
  unsigned int v113; // edi
  unsigned int v114; // edi
  unsigned __int64 v115; // rcx
  int v116; // edx
  char *v117; // rax
  unsigned int v118; // edx
  unsigned int v119; // edx
  unsigned int v120; // esi
  __int64 v121; // rdi
  unsigned __int64 v122; // rcx
  char *v123; // rdx
  char *v124; // rdi
  unsigned int v125; // eax
  unsigned int v126; // edx
  __int64 v127; // rsi
  unsigned __int64 v128; // rcx
  char *v129; // rdx
  char *v130; // r13
  unsigned int v131; // eax
  unsigned int v132; // edx
  __int64 v133; // rsi
  unsigned __int64 v134; // r8
  char *v135; // rcx
  char *v136; // r9
  unsigned int v137; // edx
  unsigned int v138; // ecx
  __int64 v139; // rdi
  unsigned __int64 v140; // r8
  char *v141; // rcx
  char *v142; // r9
  unsigned int v143; // edx
  unsigned int v144; // ecx
  __int64 v145; // rdi
  unsigned __int64 v146; // r8
  char *v147; // rcx
  char *v148; // r9
  unsigned int v149; // edx
  unsigned int v150; // ecx
  __int64 v151; // rdi
  char *v152; // rdx
  int v154[2]; // [rsp+10h] [rbp-5B8h]
  __int64 v155; // [rsp+18h] [rbp-5B0h]
  unsigned __int8 v156; // [rsp+60h] [rbp-568h]
  unsigned __int8 v157; // [rsp+80h] [rbp-548h]
  char *haystack; // [rsp+120h] [rbp-4A8h]
  size_t v159; // [rsp+128h] [rbp-4A0h]
  char *v160; // [rsp+140h] [rbp-488h]
  size_t v161; // [rsp+140h] [rbp-488h]
  size_t v162; // [rsp+140h] [rbp-488h]
  char *v163; // [rsp+140h] [rbp-488h]
  char *v164; // [rsp+140h] [rbp-488h]
  char *v165; // [rsp+140h] [rbp-488h]
  __int64 v166; // [rsp+148h] [rbp-480h]
  __int64 v167; // [rsp+148h] [rbp-480h]
  __int64 v168; // [rsp+148h] [rbp-480h]
  __int64 v169; // [rsp+148h] [rbp-480h]
  void *v170; // [rsp+160h] [rbp-468h]
  size_t v171; // [rsp+168h] [rbp-460h]
  _QWORD v172[2]; // [rsp+170h] [rbp-458h] BYREF
  void *v173; // [rsp+180h] [rbp-448h]
  size_t v174; // [rsp+188h] [rbp-440h]
  _QWORD v175[2]; // [rsp+190h] [rbp-438h] BYREF
  void *v176; // [rsp+1A0h] [rbp-428h]
  size_t v177; // [rsp+1A8h] [rbp-420h]
  _QWORD v178[2]; // [rsp+1B0h] [rbp-418h] BYREF
  char v179; // [rsp+1C0h] [rbp-408h] BYREF
  int v180[4]; // [rsp+1C8h] [rbp-400h]
  char v181; // [rsp+1D8h] [rbp-3F0h]
  int v182[4]; // [rsp+1E0h] [rbp-3E8h]
  char v183; // [rsp+1F0h] [rbp-3D8h] BYREF
  int v184[4]; // [rsp+1F8h] [rbp-3D0h]
  char v185; // [rsp+208h] [rbp-3C0h]
  int v186[4]; // [rsp+210h] [rbp-3B8h]
  char v187; // [rsp+220h] [rbp-3A8h] BYREF
  int v188[4]; // [rsp+228h] [rbp-3A0h]
  char v189; // [rsp+238h] [rbp-390h]
  __int64 v190; // [rsp+240h] [rbp-388h]
  __int64 v191; // [rsp+248h] [rbp-380h]
  char v192; // [rsp+250h] [rbp-378h] BYREF
  int v193[4]; // [rsp+258h] [rbp-370h]
  char v194; // [rsp+268h] [rbp-360h]
  int v195[4]; // [rsp+270h] [rbp-358h]
  char v196; // [rsp+280h] [rbp-348h] BYREF
  int v197[4]; // [rsp+288h] [rbp-340h]
  char v198; // [rsp+298h] [rbp-330h]
  __int64 v199; // [rsp+2A0h] [rbp-328h]
  __int64 v200; // [rsp+2A8h] [rbp-320h]
  char v201; // [rsp+2B0h] [rbp-318h] BYREF
  int v202[4]; // [rsp+2B8h] [rbp-310h]
  char v203; // [rsp+2C8h] [rbp-300h]
  unsigned __int64 v204; // [rsp+2D0h] [rbp-2F8h]
  __int64 v205; // [rsp+2D8h] [rbp-2F0h]
  char v206; // [rsp+2E0h] [rbp-2E8h] BYREF
  char v207[16]; // [rsp+2E8h] [rbp-2E0h]
  char v208; // [rsp+2F8h] [rbp-2D0h]
  __int64 v209; // [rsp+300h] [rbp-2C8h]
  __int64 v210; // [rsp+308h] [rbp-2C0h]
  char v211; // [rsp+310h] [rbp-2B8h] BYREF
  __int128 v212; // [rsp+318h] [rbp-2B0h]
  char v213; // [rsp+328h] [rbp-2A0h]
  __int64 v214; // [rsp+330h] [rbp-298h]
  __int64 v215; // [rsp+338h] [rbp-290h]
  char v216; // [rsp+340h] [rbp-288h] BYREF
  __int128 v217; // [rsp+348h] [rbp-280h]
  char v218; // [rsp+358h] [rbp-270h]
  __int64 v219; // [rsp+360h] [rbp-268h]
  __int64 v220; // [rsp+368h] [rbp-260h]
  char v221; // [rsp+370h] [rbp-258h] BYREF
  __int128 v222; // [rsp+378h] [rbp-250h]
  char v223; // [rsp+388h] [rbp-240h]
  __int128 v224; // [rsp+390h] [rbp-238h]
  char v225; // [rsp+3A0h] [rbp-228h] BYREF
  __int128 v226; // [rsp+3A8h] [rbp-220h]
  char v227; // [rsp+3B8h] [rbp-210h]
  __int128 v228; // [rsp+3C0h] [rbp-208h]
  int v229; // [rsp+3D0h] [rbp-1F8h] BYREF
  __int128 v230; // [rsp+3D8h] [rbp-1F0h]
  char v231; // [rsp+3E8h] [rbp-1E0h] BYREF
  __int128 v232; // [rsp+3F0h] [rbp-1D8h]
  __int64 v233; // [rsp+400h] [rbp-1C8h] BYREF
  __int128 v234; // [rsp+408h] [rbp-1C0h]
  __int64 v235; // [rsp+418h] [rbp-1B0h] BYREF
  __int128 v236; // [rsp+420h] [rbp-1A8h]
  __int64 v237; // [rsp+430h] [rbp-198h] BYREF
  __int128 v238; // [rsp+438h] [rbp-190h]
  __int64 v239; // [rsp+448h] [rbp-180h] BYREF
  __int128 v240; // [rsp+450h] [rbp-178h]
  char v241[16]; // [rsp+460h] [rbp-168h] BYREF
  __int64 v242; // [rsp+470h] [rbp-158h]
  _QWORD v243[3]; // [rsp+478h] [rbp-150h] BYREF
  _QWORD v244[3]; // [rsp+490h] [rbp-138h] BYREF
  _QWORD v245[3]; // [rsp+4A8h] [rbp-120h] BYREF
  _QWORD v246[3]; // [rsp+4C0h] [rbp-108h] BYREF
  _QWORD v247[3]; // [rsp+4D8h] [rbp-F0h] BYREF
  _QWORD v248[3]; // [rsp+4F0h] [rbp-D8h] BYREF
  char v249[16]; // [rsp+508h] [rbp-C0h] BYREF
  __int64 v250; // [rsp+518h] [rbp-B0h]
  char v251[24]; // [rsp+520h] [rbp-A8h] BYREF
  _BYTE v252[8]; // [rsp+538h] [rbp-90h]
  char v253[24]; // [rsp+540h] [rbp-88h] BYREF
  _BYTE v254[8]; // [rsp+558h] [rbp-70h]
  int v255[10]; // [rsp+560h] [rbp-68h] BYREF
  unsigned __int64 v256; // [rsp+588h] [rbp-40h]

  v256 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    LOBYTE(v255[0]) = 0;
  v1 = strlen((const char *)v255);
  v2 = v1 + 1;
  v3 = v1;
  haystack = (char *)qvector_reserve();
  v159 = v2;
  memmove(haystack, v255, v3);
  haystack[v3] = 0;
  v155 = getinf();
  switch ( v155 )
  {
    case 0LL:
    case 22LL:
      v4 = "MS DOS EXE";
      break;
    case 1LL:
    case 23LL:
      v4 = "MS DOS COM";
      break;
    case 2LL:
      v4 = "Binary";
      break;
    case 3LL:
      v4 = "MS DOS driver";
      break;
    case 4LL:
      v4 = "New Executable (NE)";
      break;
    case 5LL:
      v4 = "Intel Hex Object";
      break;
    case 6LL:
      v4 = "MOS Technology Hex Object";
      break;
    case 7LL:
      v4 = "Linear Executable (LX)";
      break;
    case 8LL:
      v4 = "Linear Executable (LE)";
      break;
    case 9LL:
      v4 = "Netware Loadable Module (NLM)";
      break;
    case 10LL:
      v4 = "Common Object File Format (COFF)";
      break;
    case 11LL:
      v4 = "Portable Executable (PE)";
      break;
    case 12LL:
      v4 = "Object Module Format (OMF)";
      break;
    case 13LL:
      v4 = "R-records";
      break;
    case 14LL:
      v4 = "ZIP file";
      break;
    case 15LL:
      v4 = "Library of OMF Modules";
      break;
    case 16LL:
      v4 = "ar library";
      break;
    case 17LL:
      v4 = "file is loaded using LOADER DLL";
      break;
    case 18LL:
      v4 = "Executable and Linkable Format (ELF)";
      break;
    case 19LL:
      v4 = "Watcom DOS32 Extender (W32RUN)";
      break;
    case 20LL:
      v4 = "Linux a.out (AOUT)";
      break;
    case 21LL:
      v4 = "PalmPilot program file";
      break;
    case 24LL:
      v4 = "AIX ar library";
      break;
    case 25LL:
      v4 = "Mac OS X (Mach-O)";
      break;
    default:
      v4 = "Unknown file type";
      break;
  }
  v156 = getinf();
  switch ( v156 )
  {
    case 0u:
      v5 = "Unknown";
      break;
    case 1u:
      v5 = "Microsoft Visual C++";
      break;
    case 2u:
      v5 = "Borland C++";
      break;
    case 3u:
      v5 = "Watcom C/C++";
      break;
    case 6u:
      v5 = "GNU C/C++";
      break;
    case 7u:
      v5 = "Visual Age C++";
      break;
    case 8u:
      v5 = "Delphi";
      break;
    default:
      v5 = "Other/Unknown";
      break;
  }
  if ( (unsigned __int8)getinf_flag() )
    v6 = 64;
  else
    v6 = (-(__int64)((unsigned __int8)getinf_flag() == 0) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  v157 = getinf_flag();
  getinf();
  getinf();
  getinf();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v179 = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "processor");
  *(_QWORD *)(v7 + 8) = 9;
  *(_OWORD *)v180 = (unsigned __int64)v7;
  if ( v2 )
    v8 = haystack;
  else
    v8 = _qstring<char>::c_str(void)const::nullstr;
  *(_QWORD *)v182 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v181 = 3;
  v9 = (__int64 *)operator new(0x20u);
  v10 = v9 + 2;
  v11 = v9;
  *v9 = (__int64)(v9 + 2);
  if ( !v8 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v12 = strlen(v8);
  v160 = (char *)v12;
  v13 = v12;
  if ( v12 > 0xF )
  {
    *(_QWORD *)v154 = v12;
    v106 = std::string::_M_create();
    *v11 = v106;
    v10 = (void *)v106;
    v13 = *(_QWORD *)v154;
    v11[2] = (__int64)v160;
LABEL_109:
    memcpy(v10, v8, v13);
    v12 = (size_t)v160;
    v10 = (void *)*v11;
    goto LABEL_15;
  }
  if ( v12 == 1 )
  {
    *((_BYTE *)v11 + 16) = *v8;
    goto LABEL_15;
  }
  if ( v12 )
    goto LABEL_109;
LABEL_15:
  v11[1] = v12;
  *((_BYTE *)v10 + v12) = 0;
  *(_OWORD *)v182 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v233,
    (const __m128i *)&v179,
    2);
  *((_QWORD *)&v234 + 1) = 0;
  v183 = 0;
  *(_QWORD *)v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "filetype");
  *(_QWORD *)(v14 + 8) = 8;
  v185 = 0;
  *(_QWORD *)v186 = 0;
  *(_OWORD *)v184 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v15 = (__int64 *)operator new(0x20u);
  v16 = v15 + 2;
  v17 = v15;
  *v15 = (__int64)(v15 + 2);
  v161 = strlen(v4);
  if ( v161 > 0xF )
  {
    v104 = std::string::_M_create();
    *v17 = v104;
    v16 = (_QWORD *)v104;
    v17[2] = v161;
  }
  if ( (unsigned int)v161 >= 8 )
  {
    *v16 = *(_QWORD *)v4;
    *(_QWORD *)((char *)v16 + (unsigned int)v161 - 8) = *(_QWORD *)&v4[(unsigned int)v161 - 8];
    v88 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v89 = (char *)v16 - v88;
    v90 = (const char *)(v4 - v89);
    if ( (((_DWORD)v89 + (_DWORD)v161) & 0xFFFFFFF8) >= 8 )
    {
      v91 = 0;
      do
      {
        v92 = v91;
        v91 += 8;
        *(_QWORD *)(v88 + v92) = *(_QWORD *)&v90[v92];
      }
      while ( v91 < (((_DWORD)v89 + (_DWORD)v161) & 0xFFFFFFF8) );
    }
  }
  else if ( (v161 & 4) != 0 )
  {
    *(_DWORD *)v16 = *(_DWORD *)v4;
    *(_DWORD *)((char *)v16 + (unsigned int)v161 - 4) = *(_DWORD *)&v4[(unsigned int)v161 - 4];
  }
  else if ( (_DWORD)v161 )
  {
    *(_BYTE *)v16 = *v4;
    if ( (v161 & 2) != 0 )
      *(_WORD *)((char *)v16 + (unsigned int)v161 - 2) = *(_WORD *)&v4[(unsigned int)v161 - 2];
  }
  v18 = *v17;
  v17[1] = v161;
  *(_BYTE *)(v18 + v161) = 0;
  *(_OWORD *)v186 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v235,
    (const __m128i *)&v183,
    2);
  *((_QWORD *)&v236 + 1) = 0;
  v187 = 0;
  *(_QWORD *)v188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v187 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "filetype_id");
  *(_QWORD *)(v19 + 8) = 11;
  v189 = 5;
  v190 = (int)v155;
  v191 = 0;
  *(_OWORD *)v188 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v237,
    (const __m128i *)&v187,
    2);
  *((_QWORD *)&v238 + 1) = 0;
  v192 = 0;
  *(_QWORD *)v193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "compiler");
  *(_QWORD *)(v20 + 8) = 8;
  v194 = 0;
  *(_QWORD *)v195 = 0;
  *(_OWORD *)v193 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v194 = 3;
  v21 = (__int64 *)operator new(0x20u);
  v22 = v21 + 2;
  v23 = v21;
  *v21 = (__int64)(v21 + 2);
  v162 = strlen(v5);
  if ( v162 > 0xF )
  {
    v108 = std::string::_M_create();
    *v23 = v108;
    v22 = (_QWORD *)v108;
    v23[2] = v162;
  }
  if ( (unsigned int)v162 >= 8 )
  {
    *v22 = *(_QWORD *)v5;
    *(_QWORD *)((char *)v22 + (unsigned int)v162 - 8) = *(_QWORD *)&v5[(unsigned int)v162 - 8];
    v93 = (unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v94 = (char *)v22 - v93;
    v95 = (const char *)(v5 - v94);
    if ( (((_DWORD)v94 + (_DWORD)v162) & 0xFFFFFFF8) >= 8 )
    {
      v96 = 0;
      do
      {
        v97 = v96;
        v96 += 8;
        *(_QWORD *)(v93 + v97) = *(_QWORD *)&v95[v97];
      }
      while ( v96 < (((_DWORD)v94 + (_DWORD)v162) & 0xFFFFFFF8) );
    }
  }
  else if ( (v162 & 4) != 0 )
  {
    *(_DWORD *)v22 = *(_DWORD *)v5;
    *(_DWORD *)((char *)v22 + (unsigned int)v162 - 4) = *(_DWORD *)&v5[(unsigned int)v162 - 4];
  }
  else if ( (_DWORD)v162 )
  {
    *(_BYTE *)v22 = *v5;
    if ( (v162 & 2) != 0 )
      *(_WORD *)((char *)v22 + (unsigned int)v162 - 2) = *(_WORD *)&v5[(unsigned int)v162 - 2];
  }
  v24 = *v23;
  v23[1] = v162;
  *(_BYTE *)(v24 + v162) = 0;
  *(_OWORD *)v195 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v239,
    (const __m128i *)&v192,
    2);
  *((_QWORD *)&v240 + 1) = 0;
  v196 = 0;
  *(_QWORD *)v197 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v196 = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)(v25 + 8) = 11;
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "compiler_id");
  v198 = 5;
  v199 = v156;
  v200 = 0;
  *(_OWORD *)v197 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v241,
    (const __m128i *)&v196,
    2);
  v242 = 0;
  v201 = 0;
  *(_QWORD *)v202 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v201 = 3;
  v26 = operator new(0x20u);
  strcpy((char *)(v26 + 16), "bitness");
  *(_QWORD *)v26 = v26 + 16;
  *(_QWORD *)(v26 + 8) = 7;
  v203 = 5;
  v204 = v6;
  v205 = 0;
  *(_OWORD *)v202 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v243,
    (const __m128i *)&v201,
    2);
  v243[2] = 0;
  v206 = 0;
  *(_QWORD *)v207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v206 = 3;
  v27 = operator new(0x20u);
  *(_QWORD *)v27 = v27 + 16;
  strcpy((char *)(v27 + 16), "is_64bit");
  *(_QWORD *)(v27 + 8) = 8;
  *(_OWORD *)v207 = (unsigned __int64)v27;
  v209 = (unsigned __int8)getinf_flag();
  v208 = 4;
  v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v244,
    (const __m128i *)&v206,
    2);
  v244[2] = 0;
  v211 = 0;
  *(_QWORD *)&v212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v211 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "is_32bit");
  *(_QWORD *)(v28 + 8) = 8;
  v212 = (unsigned __int64)v28;
  v214 = (unsigned __int8)getinf_flag();
  v213 = 4;
  v215 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v245,
    (const __m128i *)&v211,
    2);
  v245[2] = 0;
  v216 = 0;
  *(_QWORD *)&v217 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v216 = 3;
  v29 = operator new(0x20u);
  strcpy((char *)(v29 + 16), "is_big_endian");
  *(_QWORD *)v29 = v29 + 16;
  *(_QWORD *)(v29 + 8) = 13;
  v218 = 4;
  v219 = v157;
  v220 = 0;
  v217 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v246,
    (const __m128i *)&v216,
    2);
  v246[2] = 0;
  v221 = 0;
  *(_QWORD *)&v222 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v221 = 3;
  v30 = operator new(0x20u);
  *(_QWORD *)v30 = v30 + 16;
  strcpy((char *)(v30 + 16), "start_address");
  *(_QWORD *)(v30 + 8) = 13;
  v222 = (unsigned __int64)v30;
  qsnprintf();
  v170 = v172;
  v31 = strlen(v251);
  v163 = (char *)v31;
  v32 = v31;
  if ( v31 > 0xF )
  {
    v170 = (void *)std::string::_M_create();
    v109 = v170;
    v172[0] = v163;
  }
  else
  {
    if ( v31 == 1 )
    {
      LOBYTE(v172[0]) = v251[0];
      goto LABEL_32;
    }
    if ( !v31 )
    {
LABEL_32:
      v33 = v172;
      goto LABEL_33;
    }
    v109 = v172;
  }
  if ( v32 >= 8 )
  {
    *v109 = *(_QWORD *)v251;
    *(_QWORD *)((char *)v109 + v32 - 8) = *(_QWORD *)&v251[v32 - 8];
    v122 = (unsigned __int64)(v109 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v123 = (char *)v109 - v122;
    v124 = (char *)(v251 - v123);
    if ( ((v32 + (_DWORD)v123) & 0xFFFFFFF8) >= 8 )
    {
      v125 = (v32 + (_DWORD)v123) & 0xFFFFFFF8;
      v126 = 0;
      do
      {
        v127 = v126;
        v126 += 8;
        *(_QWORD *)(v122 + v127) = *(_QWORD *)&v124[v127];
      }
      while ( v126 < v125 );
    }
  }
  else if ( (v32 & 4) != 0 )
  {
    *(_DWORD *)v109 = *(_DWORD *)v251;
    *(_DWORD *)((char *)v109 + v32 - 4) = *(_DWORD *)&v251[v32 - 4];
  }
  else if ( v32 )
  {
    *(_BYTE *)v109 = v251[0];
    if ( (v32 & 2) != 0 )
      *(_WORD *)((char *)v109 + v32 - 2) = *(_WORD *)&v251[v32 - 2];
  }
  v31 = (size_t)v163;
  v33 = v170;
LABEL_33:
  v171 = v31;
  *((_BYTE *)v33 + v31) = 0;
  v223 = 0;
  *(_QWORD *)&v224 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v223 = 3;
  v34 = (_QWORD *)operator new(0x20u);
  v35 = v170;
  v36 = v34 + 2;
  v37 = v171;
  *v34 = v34 + 2;
  if ( v35 == v172 )
  {
    v114 = v37 + 1;
    if ( (unsigned int)(v37 + 1) >= 8 )
    {
      v34[2] = v172[0];
      *(_QWORD *)((char *)v36 + v114 - 8) = *(_QWORD *)((char *)&v172[-1] + v114);
      v134 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v135 = (char *)v36 - v134;
      v136 = (char *)((char *)v172 - v135);
      if ( (((_DWORD)v135 + v114) & 0xFFFFFFF8) >= 8 )
      {
        v137 = ((_DWORD)v135 + v114) & 0xFFFFFFF8;
        v138 = 0;
        do
        {
          v139 = v138;
          v138 += 8;
          *(_QWORD *)(v134 + v139) = *(_QWORD *)&v136[v139];
        }
        while ( v138 < v137 );
      }
    }
    else if ( (v114 & 4) != 0 )
    {
      *((_DWORD *)v34 + 4) = v172[0];
      *(_DWORD *)((char *)v36 + v114 - 4) = *(_DWORD *)((char *)&v171 + v114 + 4);
    }
    else if ( (_DWORD)v37 != -1 )
    {
      *((_BYTE *)v34 + 16) = v172[0];
      if ( (v114 & 2) != 0 )
        *(_WORD *)((char *)v36 + v114 - 2) = *(_WORD *)((char *)&v171 + v114 + 6);
    }
  }
  else
  {
    *v34 = v35;
    v34[2] = v172[0];
  }
  v34[1] = v37;
  v170 = v172;
  v171 = 0;
  LOBYTE(v172[0]) = 0;
  v224 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v247,
    (const __m128i *)&v221,
    2);
  v247[2] = 0;
  v225 = 0;
  *(_QWORD *)&v226 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v225 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "min_address");
  *(_QWORD *)(v38 + 8) = 11;
  v226 = (unsigned __int64)v38;
  qsnprintf();
  v173 = v175;
  v39 = strlen(v253);
  v164 = (char *)v39;
  v40 = v39;
  if ( v39 > 0xF )
  {
    v173 = (void *)std::string::_M_create();
    v107 = v173;
    v175[0] = v164;
  }
  else
  {
    if ( v39 == 1 )
    {
      LOBYTE(v175[0]) = v253[0];
      goto LABEL_38;
    }
    if ( !v39 )
    {
LABEL_38:
      v41 = v175;
      goto LABEL_39;
    }
    v107 = v175;
  }
  if ( v40 >= 8 )
  {
    *v107 = *(_QWORD *)v253;
    *(_QWORD *)((char *)v107 + v40 - 8) = *(_QWORD *)&v252[v40];
    v128 = (unsigned __int64)(v107 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v129 = (char *)v107 - v128;
    v130 = (char *)(v253 - v129);
    if ( ((v40 + (_DWORD)v129) & 0xFFFFFFF8) >= 8 )
    {
      v131 = (v40 + (_DWORD)v129) & 0xFFFFFFF8;
      v132 = 0;
      do
      {
        v133 = v132;
        v132 += 8;
        *(_QWORD *)(v128 + v133) = *(_QWORD *)&v130[v133];
      }
      while ( v132 < v131 );
    }
  }
  else if ( (v40 & 4) != 0 )
  {
    *(_DWORD *)v107 = *(_DWORD *)v253;
    *(_DWORD *)((char *)v107 + v40 - 4) = *(_DWORD *)&v252[v40 + 4];
  }
  else if ( v40 )
  {
    *(_BYTE *)v107 = v253[0];
    if ( (v40 & 2) != 0 )
      *(_WORD *)((char *)v107 + v40 - 2) = *(_WORD *)&v252[v40 + 6];
  }
  v39 = (size_t)v164;
  v41 = v173;
LABEL_39:
  v174 = v39;
  *((_BYTE *)v41 + v39) = 0;
  v227 = 0;
  *(_QWORD *)&v228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v227 = 3;
  v42 = (_QWORD *)operator new(0x20u);
  v43 = v173;
  v44 = v42 + 2;
  v45 = v174;
  *v42 = v42 + 2;
  if ( v43 == v175 )
  {
    v113 = v45 + 1;
    if ( (unsigned int)(v45 + 1) >= 8 )
    {
      v42[2] = v175[0];
      *(_QWORD *)((char *)v44 + v113 - 8) = *(_QWORD *)((char *)&v175[-1] + v113);
      v146 = (unsigned __int64)(v42 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v147 = (char *)v44 - v146;
      v148 = (char *)((char *)v175 - v147);
      if ( (((_DWORD)v147 + v113) & 0xFFFFFFF8) >= 8 )
      {
        v149 = ((_DWORD)v147 + v113) & 0xFFFFFFF8;
        v150 = 0;
        do
        {
          v151 = v150;
          v150 += 8;
          *(_QWORD *)(v146 + v151) = *(_QWORD *)&v148[v151];
        }
        while ( v150 < v149 );
      }
    }
    else if ( (v113 & 4) != 0 )
    {
      *((_DWORD *)v42 + 4) = v175[0];
      *(_DWORD *)((char *)v44 + v113 - 4) = *(_DWORD *)((char *)&v174 + v113 + 4);
    }
    else if ( (_DWORD)v45 != -1 )
    {
      *((_BYTE *)v42 + 16) = v175[0];
      if ( (v113 & 2) != 0 )
        *(_WORD *)((char *)v44 + v113 - 2) = *(_WORD *)((char *)&v174 + v113 + 6);
    }
  }
  else
  {
    *v42 = v43;
    v42[2] = v175[0];
  }
  v42[1] = v45;
  v173 = v175;
  v174 = 0;
  LOBYTE(v175[0]) = 0;
  v228 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v248,
    (const __m128i *)&v225,
    2);
  v248[2] = 0;
  LOBYTE(v229) = 0;
  *(_QWORD *)&v230 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v229) = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)(v46 + 8) = 11;
  strcpy((char *)(v46 + 16), "max_address");
  *(_QWORD *)v46 = v46 + 16;
  v230 = (unsigned __int64)v46;
  qsnprintf();
  v176 = v178;
  v47 = strlen((const char *)v255);
  v165 = (char *)v47;
  v48 = v47;
  if ( v47 > 0xF )
  {
    v105 = (_QWORD *)std::string::_M_create();
    v176 = v105;
    v178[0] = v165;
  }
  else
  {
    if ( v47 == 1 )
    {
      LOBYTE(v178[0]) = v255[0];
      goto LABEL_44;
    }
    if ( !v47 )
    {
LABEL_44:
      v49 = v178;
      goto LABEL_45;
    }
    v105 = v178;
  }
  if ( v48 >= 8 )
  {
    *v105 = *(_QWORD *)v255;
    *(_QWORD *)((char *)v105 + v48 - 8) = *(_QWORD *)&v254[v48];
    v115 = (unsigned __int64)(v105 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v116 = (_DWORD)v105 - v115;
    v117 = (char *)((char *)v255 - ((char *)v105 - v115));
    v118 = (v48 + v116) & 0xFFFFFFF8;
    if ( v118 >= 8 )
    {
      v119 = v118 & 0xFFFFFFF8;
      v120 = 0;
      do
      {
        v121 = v120;
        v120 += 8;
        *(_QWORD *)(v115 + v121) = *(_QWORD *)&v117[v121];
      }
      while ( v120 < v119 );
    }
  }
  else if ( (v48 & 4) != 0 )
  {
    *(_DWORD *)v105 = v255[0];
    *(_DWORD *)((char *)v105 + v48 - 4) = *(_DWORD *)&v254[v48 + 4];
  }
  else if ( v48 )
  {
    *(_BYTE *)v105 = v255[0];
    if ( (v48 & 2) != 0 )
      *(_WORD *)((char *)v105 + v48 - 2) = *(_WORD *)&v254[v48 + 6];
  }
  v47 = (size_t)v165;
  v49 = v176;
LABEL_45:
  v177 = v47;
  *((_BYTE *)v49 + v47) = 0;
  v231 = 0;
  *(_QWORD *)&v232 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v231 = 3;
  v50 = (_QWORD *)operator new(0x20u);
  v51 = v176;
  v52 = v50 + 2;
  v53 = v177;
  *v50 = v50 + 2;
  if ( v51 == v178 )
  {
    v112 = v53 + 1;
    if ( (unsigned int)(v53 + 1) >= 8 )
    {
      v50[2] = v178[0];
      *(_QWORD *)((char *)v52 + v112 - 8) = *(_QWORD *)((char *)&v178[-1] + v112);
      v140 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v141 = (char *)v52 - v140;
      v142 = (char *)((char *)v178 - v141);
      if ( (((_DWORD)v141 + v112) & 0xFFFFFFF8) >= 8 )
      {
        v143 = ((_DWORD)v141 + v112) & 0xFFFFFFF8;
        v144 = 0;
        do
        {
          v145 = v144;
          v144 += 8;
          *(_QWORD *)(v140 + v145) = *(_QWORD *)&v142[v145];
        }
        while ( v144 < v143 );
      }
    }
    else if ( (v112 & 4) != 0 )
    {
      *((_DWORD *)v50 + 4) = v178[0];
      *(_DWORD *)((char *)v52 + v112 - 4) = *(_DWORD *)((char *)&v177 + v112 + 4);
    }
    else if ( (_DWORD)v53 != -1 )
    {
      *((_BYTE *)v50 + 16) = v178[0];
      if ( (v112 & 2) != 0 )
        *(_WORD *)((char *)v52 + v112 - 2) = *(_WORD *)((char *)&v177 + v112 + 6);
    }
  }
  else
  {
    *v50 = v51;
    v50[2] = v178[0];
  }
  v50[1] = v53;
  v54 = v249;
  v176 = v178;
  v177 = 0;
  LOBYTE(v178[0]) = 0;
  v232 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v249,
    (const __m128i *)&v229,
    2);
  v250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (const __m128i *)&v233,
    12);
  do
  {
    v54 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != &v231 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v176 != v178 )
    operator delete(v176, v178[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v173 != v175 )
    operator delete(v173, v175[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v170 != v172 )
    operator delete(v170, v172[0] + 1LL);
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v159 )
  {
    v55 = haystack;
    v58 = strstr(haystack, "ARM");
    if ( v58 && v58 - haystack != -1 )
      goto LABEL_73;
    v110 = strstr(haystack, "arm");
    if ( v110 )
    {
      if ( v110 - haystack != -1 )
        goto LABEL_73;
    }
    v111 = strstr(haystack, "AARCH64");
    if ( v111 )
    {
      if ( v111 - haystack != -1 )
        goto LABEL_73;
    }
  }
  else
  {
    v55 = _qstring<char>::c_str(void)const::nullstr;
  }
  v56 = strstr(v55, "aarch64");
  if ( !v56 || v56 - v55 == -1 )
  {
    if ( (_DWORD)v155 != 25 )
      goto LABEL_60;
    goto LABEL_82;
  }
LABEL_73:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v59 = getinf_flag();
  v60 = 1;
  if ( !v59 )
  {
    v60 = 0;
    if ( v159 )
    {
      v61 = strstr(haystack, "64");
      if ( !v61 || v61 - haystack == -1 )
      {
        v152 = strstr(haystack, "AARCH64");
        v60 = 0;
        if ( v152 )
        {
          v59 = v152 - haystack != -1;
          v60 = v59;
        }
      }
      else
      {
        v60 = 1;
        v59 = 1;
      }
    }
  }
  v166 = v60;
  v62 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v62 = 4;
  *(_QWORD *)(v62 + 8) = v166;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v63 = 4;
  *(_QWORD *)(v63 + 8) = (unsigned __int8)v59 ^ 1u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v59 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v64 = (__int64 *)operator new(0x20u);
    *v64 = (__int64)(v64 + 2);
    v65 = (_OWORD *)std::string::_M_create();
    *v64 = (__int64)v65;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E22D0);
    v64[2] = 16;
    *v65 = si128;
    v67 = *v64;
    v64[1] = 16;
    *(_BYTE *)(v67 + 16) = 0;
    v68 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v69 = *(_QWORD *)(v68 + 8);
    *(_BYTE *)v68 = 3;
    *(_QWORD *)(v68 + 8) = v64;
    v167 = v69;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v233) = 0;
    *(_QWORD *)&v234 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v233) = 3;
    v70 = operator new(0x20u);
    strcpy((char *)(v70 + 16), "PAC (ARMv8.3+)");
    *(_QWORD *)v70 = v70 + 16;
    *(_QWORD *)(v70 + 8) = 14;
    LOBYTE(v235) = 0;
    *(_QWORD *)&v236 = 0;
    v234 = (unsigned __int64)v70;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v235) = 3;
    v71 = operator new(0x20u);
    strcpy((char *)(v71 + 16), "BTI (ARMv8.5+)");
    *(_QWORD *)v71 = v71 + 16;
    *(_QWORD *)(v71 + 8) = 14;
    LOBYTE(v237) = 0;
    *(_QWORD *)&v238 = 0;
    v236 = (unsigned __int64)v71;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v237) = 3;
    v72 = operator new(0x20u);
    strcpy((char *)(v72 + 16), "MTE (ARMv8.5+)");
    *(_QWORD *)v72 = v72 + 16;
    *(_QWORD *)(v72 + 8) = 14;
    LOBYTE(v239) = 0;
    *(_QWORD *)&v240 = 0;
    v238 = (unsigned __int64)v72;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v239) = 3;
    v73 = (__int64 *)operator new(0x20u);
    *v73 = (__int64)(v73 + 2);
    v74 = std::string::_M_create();
    *v73 = v74;
    v75 = _mm_load_si128((const __m128i *)&xmmword_3E22E0);
    v73[2] = 22;
    *(__m128i *)v74 = v75;
    *(_QWORD *)(v74 + 14) = 0x292B312E38764D52LL;
    v76 = *v73;
    v73[1] = 22;
    *(_BYTE *)(v76 + 22) = 0;
    v240 = (unsigned __int64)v73;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v77 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v77 = 0;
    v78 = *(_QWORD *)(v77 + 8);
    *(_QWORD *)(v77 + 8) = v167;
    v168 = v78;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v79 = v241;
    do
    {
      v79 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v79 != (char *)&v233 );
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v98 = (__int64 *)operator new(0x20u);
    *v98 = (__int64)(v98 + 2);
    v99 = (_OWORD *)std::string::_M_create();
    *v98 = (__int64)v99;
    v100 = _mm_load_si128((const __m128i *)&xmmword_3E22F0);
    v98[2] = 16;
    *v99 = v100;
    v101 = *v98;
    v98[1] = 16;
    *(_BYTE *)(v101 + 16) = 0;
    v102 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v103 = *(_QWORD *)(v102 + 8);
    *(_BYTE *)v102 = 3;
    *(_QWORD *)(v102 + 8) = v98;
    v168 = v103;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v80 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v80 = 0;
  *(_QWORD *)(v80 + 8) = v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_DWORD)v155 == 25 )
  {
LABEL_82:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v81 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v81 = 4;
    *(_QWORD *)(v81 + 8) = 1;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( get_first_seg() )
    {
      do
        get_segm_name();
      while ( get_next_seg() );
    }
    v82 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v82 = 4;
    *(_QWORD *)(v82 + 8) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v83 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v83 = 4;
    *(_QWORD *)(v83 + 8) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v84 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v84 = 4;
    *(_QWORD *)(v84 + 8) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v85 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v85 = 4;
    v86 = *(_QWORD *)(v85 + 8);
    *(_QWORD *)(v85 + 8) = 0;
    v169 = v86;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v87 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v87 = 0;
    *(_QWORD *)(v87 + 8) = v169;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
LABEL_60:
  if ( haystack )
    qfree();
  return a1;
}

