__int64 __fastcall ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::handle_recover_cpp_classes(
        __int64 a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  char *v5; // rax
  char *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rbx
  size_t v14; // rax
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // r15
  size_t v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  size_t v22; // rax
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // r13
  __int64 v26; // r12
  size_t v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbp
  size_t v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 *v35; // rbp
  _OWORD *v36; // rax
  __int64 v37; // rdx
  __m128i si128; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  size_t v41; // rax
  unsigned int v42; // r13d
  char *v43; // rdx
  _QWORD *v44; // rax
  _OWORD *v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  const char *v49; // r13
  __int64 *v50; // rax
  void *v51; // r14
  __int64 *v52; // r12
  size_t v53; // rax
  size_t v54; // r15
  __int64 v55; // rax
  int v56; // eax
  const char *v57; // r13
  _QWORD *v58; // r12
  size_t v59; // rax
  _QWORD *v60; // rdx
  unsigned int v61; // r15d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  __int8 v66; // si
  __int64 v67; // rax
  _QWORD *v68; // r12
  __int64 *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 *v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 *v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  _QWORD *v124; // rbx
  void *v125; // r12
  _QWORD *v126; // rbp
  _QWORD *v127; // rbx
  void *v128; // rdi
  __int64 v129; // rsi
  _QWORD *i; // rbx
  void *v131; // rdi
  __int64 v133; // rax
  _QWORD *v134; // rax
  unsigned __int64 v135; // rcx
  char *v136; // rdx
  const char *v137; // r13
  unsigned int v138; // r15d
  unsigned int v139; // r15d
  unsigned int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rax
  unsigned int v143; // edi
  unsigned __int64 v144; // rsi
  char *v145; // rax
  char *v146; // r12
  unsigned int v147; // eax
  unsigned int v148; // eax
  unsigned int v149; // edx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rax
  unsigned __int64 v153; // r8
  char *v154; // rcx
  char *v155; // r9
  unsigned int v156; // edx
  unsigned int v157; // ecx
  __int64 v158; // rdi
  __int64 *v159; // rbp
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 *v164; // rbp
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 *v169; // rbp
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 *v174; // rbx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 *v179; // rbx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 *v184; // rbx
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  _QWORD *v189; // rbx
  char **v190; // [rsp+0h] [rbp-4A8h]
  _QWORD *v191; // [rsp+0h] [rbp-4A8h]
  int v192; // [rsp+0h] [rbp-4A8h]
  int v193; // [rsp+0h] [rbp-4A8h]
  int v194; // [rsp+0h] [rbp-4A8h]
  int v195; // [rsp+0h] [rbp-4A8h]
  int v196; // [rsp+0h] [rbp-4A8h]
  int v197; // [rsp+0h] [rbp-4A8h]
  int v198; // [rsp+0h] [rbp-4A8h]
  int v199; // [rsp+0h] [rbp-4A8h]
  int v200; // [rsp+0h] [rbp-4A8h]
  __int64 v201; // [rsp+0h] [rbp-4A8h]
  int v202; // [rsp+0h] [rbp-4A8h]
  int v203; // [rsp+0h] [rbp-4A8h]
  int v204; // [rsp+0h] [rbp-4A8h]
  int v205; // [rsp+0h] [rbp-4A8h]
  _QWORD *v206; // [rsp+0h] [rbp-4A8h]
  int v207; // [rsp+8h] [rbp-4A0h]
  int v208; // [rsp+8h] [rbp-4A0h]
  int v209; // [rsp+8h] [rbp-4A0h]
  int v210; // [rsp+8h] [rbp-4A0h]
  int v211; // [rsp+8h] [rbp-4A0h]
  int v212; // [rsp+8h] [rbp-4A0h]
  int v213; // [rsp+8h] [rbp-4A0h]
  int v214; // [rsp+8h] [rbp-4A0h]
  int v215; // [rsp+8h] [rbp-4A0h]
  int v216; // [rsp+8h] [rbp-4A0h]
  int v217; // [rsp+8h] [rbp-4A0h]
  int v218; // [rsp+8h] [rbp-4A0h]
  int v219; // [rsp+8h] [rbp-4A0h]
  int v220; // [rsp+8h] [rbp-4A0h]
  int v221; // [rsp+8h] [rbp-4A0h]
  int v222; // [rsp+8h] [rbp-4A0h]
  __int128 *v223; // [rsp+10h] [rbp-498h]
  __int64 v224; // [rsp+10h] [rbp-498h]
  __int64 v225; // [rsp+10h] [rbp-498h]
  __int64 v226; // [rsp+10h] [rbp-498h]
  __int64 v227; // [rsp+10h] [rbp-498h]
  __int64 v228; // [rsp+10h] [rbp-498h]
  __int64 v229; // [rsp+10h] [rbp-498h]
  __int64 v230; // [rsp+10h] [rbp-498h]
  __int64 v231; // [rsp+10h] [rbp-498h]
  __int64 v232; // [rsp+10h] [rbp-498h]
  __int64 v233; // [rsp+10h] [rbp-498h]
  __int64 v234; // [rsp+10h] [rbp-498h]
  __int64 v235; // [rsp+10h] [rbp-498h]
  __int64 v236; // [rsp+10h] [rbp-498h]
  unsigned __int64 v237; // [rsp+20h] [rbp-488h]
  _QWORD *v238; // [rsp+48h] [rbp-460h]
  char v239; // [rsp+50h] [rbp-458h]
  unsigned __int64 v240; // [rsp+60h] [rbp-448h]
  __int64 v241; // [rsp+68h] [rbp-440h]
  _QWORD *v243; // [rsp+88h] [rbp-420h]
  char v244; // [rsp+93h] [rbp-415h]
  unsigned __int8 v245; // [rsp+95h] [rbp-413h]
  unsigned __int8 v246; // [rsp+96h] [rbp-412h]
  __int64 v247; // [rsp+B0h] [rbp-3F8h] BYREF
  __int64 v248; // [rsp+B8h] [rbp-3F0h]
  __m128i v249; // [rsp+C0h] [rbp-3E8h] BYREF
  char *v250; // [rsp+D0h] [rbp-3D8h] BYREF
  __int64 v251; // [rsp+D8h] [rbp-3D0h]
  __int64 v252; // [rsp+E0h] [rbp-3C8h]
  unsigned __int64 v253; // [rsp+E8h] [rbp-3C0h]
  _QWORD *v254; // [rsp+F0h] [rbp-3B8h]
  __int64 v255; // [rsp+F8h] [rbp-3B0h]
  void *v256; // [rsp+100h] [rbp-3A8h]
  _QWORD *v257; // [rsp+108h] [rbp-3A0h]
  __int64 v258; // [rsp+110h] [rbp-398h]
  char v259; // [rsp+120h] [rbp-388h] BYREF
  __int128 v260; // [rsp+128h] [rbp-380h] BYREF
  __int64 v261; // [rsp+138h] [rbp-370h]
  __int64 v262; // [rsp+140h] [rbp-368h]
  __int64 v263; // [rsp+148h] [rbp-360h]
  char v264; // [rsp+150h] [rbp-358h] BYREF
  __int128 v265; // [rsp+158h] [rbp-350h]
  char v266; // [rsp+168h] [rbp-340h]
  __int64 v267; // [rsp+170h] [rbp-338h]
  __int64 v268; // [rsp+178h] [rbp-330h]
  char v269; // [rsp+180h] [rbp-328h] BYREF
  __int128 v270; // [rsp+188h] [rbp-320h]
  char v271; // [rsp+198h] [rbp-310h]
  __int64 v272; // [rsp+1A0h] [rbp-308h]
  __int64 v273; // [rsp+1A8h] [rbp-300h]
  char v274; // [rsp+1B0h] [rbp-2F8h] BYREF
  __int128 v275; // [rsp+1B8h] [rbp-2F0h]
  char v276; // [rsp+1C8h] [rbp-2E0h]
  __int64 v277; // [rsp+1D0h] [rbp-2D8h]
  __int64 v278; // [rsp+1D8h] [rbp-2D0h]
  char v279; // [rsp+1E0h] [rbp-2C8h] BYREF
  __int128 v280; // [rsp+1E8h] [rbp-2C0h]
  char v281; // [rsp+1F8h] [rbp-2B0h]
  __int64 v282; // [rsp+200h] [rbp-2A8h]
  __int64 v283; // [rsp+208h] [rbp-2A0h]
  void *v284; // [rsp+210h] [rbp-298h] BYREF
  __int128 v285; // [rsp+218h] [rbp-290h] BYREF
  char v286; // [rsp+228h] [rbp-280h]
  __int64 v287; // [rsp+230h] [rbp-278h]
  __int64 v288; // [rsp+238h] [rbp-270h]
  char v289; // [rsp+240h] [rbp-268h] BYREF
  __int128 v290; // [rsp+248h] [rbp-260h]
  __int64 v291; // [rsp+258h] [rbp-250h]
  __int64 v292; // [rsp+260h] [rbp-248h]
  __int64 v293; // [rsp+268h] [rbp-240h]
  char v294; // [rsp+270h] [rbp-238h] BYREF
  __int128 v295; // [rsp+278h] [rbp-230h] BYREF
  char v296; // [rsp+288h] [rbp-220h]
  __int128 v297; // [rsp+290h] [rbp-218h]
  char v298; // [rsp+2A0h] [rbp-208h] BYREF
  __int128 v299; // [rsp+2A8h] [rbp-200h]
  __int64 v300; // [rsp+2B8h] [rbp-1F0h]
  __int128 v301; // [rsp+2C0h] [rbp-1E8h]
  char v302; // [rsp+2D0h] [rbp-1D8h] BYREF
  __int128 v303; // [rsp+2D8h] [rbp-1D0h]
  __int64 v304; // [rsp+2E8h] [rbp-1C0h]
  __int128 v305; // [rsp+2F0h] [rbp-1B8h]
  char v306; // [rsp+300h] [rbp-1A8h] BYREF
  __int128 v307; // [rsp+308h] [rbp-1A0h]
  __int64 v308; // [rsp+318h] [rbp-190h]
  __int128 v309; // [rsp+320h] [rbp-188h]
  _QWORD v310[2]; // [rsp+330h] [rbp-178h] BYREF
  __int64 v311; // [rsp+340h] [rbp-168h]
  _QWORD v312[2]; // [rsp+348h] [rbp-160h] BYREF
  __int64 v313; // [rsp+358h] [rbp-150h]
  _QWORD v314[2]; // [rsp+360h] [rbp-148h] BYREF
  __int64 v315; // [rsp+370h] [rbp-138h]
  _QWORD v316[2]; // [rsp+378h] [rbp-130h] BYREF
  __int64 v317; // [rsp+388h] [rbp-120h]
  _QWORD v318[2]; // [rsp+390h] [rbp-118h] BYREF
  __int64 v319; // [rsp+3A0h] [rbp-108h]
  _QWORD v320[3]; // [rsp+3A8h] [rbp-100h] BYREF
  _QWORD v321[3]; // [rsp+3C0h] [rbp-E8h] BYREF
  _QWORD v322[3]; // [rsp+3D8h] [rbp-D0h] BYREF
  _QWORD v323[3]; // [rsp+3F0h] [rbp-B8h] BYREF
  _QWORD v324[3]; // [rsp+408h] [rbp-A0h] BYREF
  _QWORD v325[4]; // [rsp+420h] [rbp-88h] BYREF
  char s[40]; // [rsp+440h] [rbp-68h] BYREF
  unsigned __int64 v327; // [rsp+468h] [rbp-40h]

  v327 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x15361A);
  v7 = *(_QWORD *)(a2 + 8);
  v250 = (char *)a2;
  v252 = 0;
  v8 = *(_QWORD *)(v7 + 16);
  v253 = 0x8000000000000000LL;
  if ( v8 )
  {
    v9 = v7 + 8;
    do
    {
      v10 = *(_QWORD *)(v8 + 40);
      if ( !v10 )
        goto LABEL_101;
      v11 = 7;
      if ( v10 <= 7 )
        v11 = *(_QWORD *)(v8 + 40);
      if ( ((v12 = memcmp(*(const void **)(v8 + 32), "dry_run", v11)) != 0
         || (v12 = v10 - 7, (__int64)(v10 - 7) <= 0x7FFFFFFF))
        && v12 < 0 )
      {
LABEL_101:
        v8 = *(_QWORD *)(v8 + 24);
      }
      else
      {
        v9 = v8;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( v8 );
    if ( v7 + 8 != v9 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( !v13 )
        goto LABEL_102;
      v14 = 7;
      if ( v13 <= 7 )
        v14 = *(_QWORD *)(v9 + 40);
      v15 = memcmp(*(const void **)(v9 + 32), "dry_run", v14);
      if ( v15 || (v15 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF) )
      {
        if ( v15 <= 0 )
        {
LABEL_102:
          v251 = v9;
          nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
          v249.m128i_i8[0] = 0;
          nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          if ( *(_BYTE *)a2 != 1 )
          {
            exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
            switch ( *(_BYTE *)a2 )
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
            v250 = v5;
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
          v7 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  v16 = *(_QWORD *)(v7 + 16);
  v250 = (char *)a2;
  v252 = 0;
  v253 = 0x8000000000000000LL;
  if ( !v16 )
    goto LABEL_35;
  v190 = &v250;
  v17 = v7 + 8;
  do
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 40);
      if ( !v20 )
        break;
      v18 = 14;
      if ( v20 <= 0xE )
        v18 = *(_QWORD *)(v16 + 40);
      v19 = memcmp(*(const void **)(v16 + 32), "rename_methods", v18);
      if ( v19 || (v19 = v20 - 14, (__int64)(v20 - 14) <= 0x7FFFFFFF) )
      {
        if ( v19 < 0 )
          break;
      }
      v17 = v16;
      v16 = *(_QWORD *)(v16 + 16);
      if ( !v16 )
        goto LABEL_29;
    }
    v16 = *(_QWORD *)(v16 + 24);
  }
  while ( v16 );
LABEL_29:
  if ( v7 + 8 == v17 )
    goto LABEL_35;
  v21 = *(_QWORD *)(v17 + 40);
  if ( !v21 )
    goto LABEL_104;
  v22 = 14;
  if ( v21 <= 0xE )
    v22 = *(_QWORD *)(v17 + 40);
  if ( ((v23 = memcmp(*(const void **)(v17 + 32), "rename_methods", v22)) != 0
     || (v23 = v21 - 14, (__int64)(v21 - 14) <= 0x7FFFFFFF))
    && v23 <= 0 )
  {
LABEL_104:
    v251 = v17;
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v249.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v245 = 0;
    if ( *(_BYTE *)a2 != 1 )
    {
      v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          v6 = "null";
          break;
        case 1:
          v6 = "object";
          break;
        case 2:
          v6 = (char *)"array";
          break;
        case 3:
          v6 = "string";
          break;
        case 4:
          v6 = "boolean";
          break;
        case 8:
          v6 = "binary";
          break;
        case 9:
          v6 = "discarded";
          break;
        default:
          v6 = "number";
          break;
      }
      v250 = v6;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v4,
        306);
      std::string::_M_dispose();
      __cxa_throw(
        v4,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v7 = *(_QWORD *)(a2 + 8);
  }
  else
  {
LABEL_35:
    v245 = 1;
  }
  v24 = *(_QWORD *)(v7 + 16);
  v250 = (char *)a2;
  v252 = 0;
  v253 = 0x8000000000000000LL;
  if ( !v24 )
    goto LABEL_52;
  v25 = v7 + 8;
  v26 = v25;
  do
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)(v24 + 40);
      if ( !v29 )
        break;
      v27 = 5;
      if ( v29 <= 5 )
        v27 = *(_QWORD *)(v24 + 40);
      v28 = memcmp(*(const void **)(v24 + 32), "force", v27);
      if ( v28 || (v28 = v29 - 5, (__int64)(v29 - 5) <= 0x7FFFFFFF) )
      {
        if ( v28 < 0 )
          break;
      }
      v26 = v24;
      v24 = *(_QWORD *)(v24 + 16);
      if ( !v24 )
        goto LABEL_46;
    }
    v24 = *(_QWORD *)(v24 + 24);
  }
  while ( v24 );
LABEL_46:
  if ( v25 == v26 )
    goto LABEL_52;
  v30 = *(_QWORD *)(v26 + 40);
  if ( !v30 )
    goto LABEL_137;
  v31 = 5;
  if ( v30 <= 5 )
    v31 = *(_QWORD *)(v26 + 40);
  if ( ((v32 = memcmp(*(const void **)(v26 + 32), "force", v31)) != 0
     || (v32 = v30 - 5, (__int64)(v30 - 5) <= 0x7FFFFFFF))
    && v32 <= 0 )
  {
LABEL_137:
    v251 = v26;
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v249.m128i_i8[0] = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    netnode_check();
    v246 = netnode_exist();
  }
  else
  {
LABEL_52:
    netnode_check();
    v246 = netnode_exist();
  }
  ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::run_recovery_pipeline(
    (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)&v250,
    0,
    v245);
  if ( (_BYTE)v250 )
  {
    v249.m128i_i64[0] = -1;
    netnode_check();
    LOBYTE(v247) = 0;
    v248 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(&v247);
    v33 = v253;
    v237 = 0;
    v244 = v247;
    v243 = (_QWORD *)v253;
    v241 = v248;
    v238 = v254;
    v240 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)&v254[v253 / 0xFFFFFFFFFFFFFFF8LL] >> 3);
    v34 = 0;
    if ( v240 )
    {
      do
      {
        if ( v34 == 20 )
          break;
        v294 = 0;
        v223 = &v295;
        *(_QWORD *)&v295 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v294 = 3;
        v35 = (__int64 *)operator new(0x20u);
        v249.m128i_i64[0] = 16;
        *v35 = (__int64)(v35 + 2);
        v36 = (_OWORD *)std::string::_M_create();
        v37 = v249.m128i_i64[0];
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E26D0);
        *v35 = (__int64)v36;
        v35[2] = v37;
        *v36 = si128;
        v39 = v249.m128i_i64[0];
        v40 = *v35;
        v35[1] = v249.m128i_i64[0];
        *(_BYTE *)(v40 + v39) = 0;
        v295 = (unsigned __int64)v35;
        qsnprintf();
        v284 = (char *)&v285 + 8;
        v41 = strlen(s);
        v249.m128i_i64[0] = v41;
        v42 = v41;
        if ( v41 > 0xF )
        {
          v134 = (_QWORD *)std::string::_M_create();
          v284 = v134;
          *((_QWORD *)&v285 + 1) = v249.m128i_i64[0];
        }
        else
        {
          if ( v41 == 1 )
          {
            BYTE8(v285) = s[0];
LABEL_59:
            v43 = (char *)&v285 + 8;
            goto LABEL_60;
          }
          if ( !v41 )
            goto LABEL_59;
          v134 = (_QWORD *)&v285 + 1;
        }
        if ( v42 >= 8 )
        {
          v144 = (unsigned __int64)(v134 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v134 = *(_QWORD *)s;
          *(_QWORD *)((char *)v134 + v42 - 8) = *(_QWORD *)((char *)&v325[3] + v42);
          v145 = (char *)v134 - v144;
          v146 = (char *)(s - v145);
          v147 = (v42 + (_DWORD)v145) & 0xFFFFFFF8;
          if ( v147 >= 8 )
          {
            v148 = v147 & 0xFFFFFFF8;
            v149 = 0;
            do
            {
              v150 = v149;
              v149 += 8;
              *(_QWORD *)(v144 + v150) = *(_QWORD *)&v146[v150];
            }
            while ( v149 < v148 );
          }
        }
        else if ( (v42 & 4) != 0 )
        {
          *(_DWORD *)v134 = *(_DWORD *)s;
          *(_DWORD *)((char *)v134 + v42 - 4) = *(_DWORD *)((char *)&v325[3] + v42 + 4);
        }
        else if ( v42 )
        {
          *(_BYTE *)v134 = s[0];
          if ( (v42 & 2) != 0 )
            *(_WORD *)((char *)v134 + v42 - 2) = *(_WORD *)((char *)&v325[3] + v42 + 6);
        }
        v41 = v249.m128i_i64[0];
        v43 = (char *)v284;
LABEL_60:
        *(_QWORD *)&v285 = v41;
        v43[v41] = 0;
        v296 = 0;
        *(_QWORD *)&v297 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v296 = 3;
        v44 = (_QWORD *)operator new(0x20u);
        v45 = v284;
        v46 = v44 + 2;
        v47 = v285;
        *v44 = v44 + 2;
        if ( v45 == (__int128 *)((char *)&v285 + 8) )
        {
          v143 = v47 + 1;
          if ( (unsigned int)(v47 + 1) >= 8 )
          {
            v44[2] = *((_QWORD *)&v285 + 1);
            *(_QWORD *)((char *)v46 + v143 - 8) = *(_QWORD *)((char *)&v285 + v143);
            v153 = (unsigned __int64)(v44 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v154 = (char *)v46 - v153;
            v155 = (char *)((char *)&v285 + 8 - v154);
            if ( (((_DWORD)v154 + v143) & 0xFFFFFFF8) >= 8 )
            {
              v156 = ((_DWORD)v154 + v143) & 0xFFFFFFF8;
              v157 = 0;
              do
              {
                v158 = v157;
                v157 += 8;
                *(_QWORD *)(v153 + v158) = *(_QWORD *)&v155[v158];
              }
              while ( v157 < v156 );
            }
          }
          else if ( (v143 & 4) != 0 )
          {
            *((_DWORD *)v44 + 4) = DWORD2(v285);
            *(_DWORD *)((char *)v46 + v143 - 4) = *(_DWORD *)((char *)&v285 + v143 + 4);
          }
          else if ( (_DWORD)v47 != -1 )
          {
            *((_BYTE *)v44 + 16) = BYTE8(v285);
            if ( (v143 & 2) != 0 )
              *(_WORD *)((char *)v46 + v143 - 2) = *(_WORD *)((char *)&v285 + v143 + 6);
          }
        }
        else
        {
          *v44 = v45;
          v44[2] = *((_QWORD *)&v285 + 1);
        }
        v44[1] = v47;
        v284 = (char *)&v285 + 8;
        *(_QWORD *)&v285 = 0;
        BYTE8(v285) = 0;
        v297 = (unsigned __int64)v44;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v310,
          (const __m128i *)&v294);
        v311 = 0;
        v298 = 0;
        *(_QWORD *)&v299 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v298 = 3;
        v48 = operator new(0x20u);
        strcpy((char *)(v48 + 16), "class_name");
        *(_QWORD *)v48 = v48 + 16;
        *(_QWORD *)(v48 + 8) = 10;
        v299 = (unsigned __int64)v48;
        if ( *(_QWORD *)(v33 + 24) )
          v49 = *(const char **)(v33 + 16);
        else
          v49 = _qstring<char>::c_str(void)const::nullstr;
        LOBYTE(v300) = 0;
        *(_QWORD *)&v301 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v300) = 3;
        v50 = (__int64 *)operator new(0x20u);
        v51 = v50 + 2;
        v52 = v50;
        *v50 = (__int64)(v50 + 2);
        if ( !v49 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v53 = strlen(v49);
        v249.m128i_i64[0] = v53;
        v54 = v53;
        if ( v53 > 0xF )
        {
          v142 = std::string::_M_create();
          *v52 = v142;
          v51 = (void *)v142;
          v52[2] = v249.m128i_i64[0];
        }
        else
        {
          if ( v53 == 1 )
          {
            *((_BYTE *)v52 + 16) = *v49;
            goto LABEL_68;
          }
          if ( !v53 )
            goto LABEL_68;
        }
        memcpy(v51, v49, v54);
        v53 = v249.m128i_i64[0];
        v51 = (void *)*v52;
LABEL_68:
        v52[1] = v53;
        *((_BYTE *)v51 + v53) = 0;
        v301 = (unsigned __int64)v52;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v312,
          (const __m128i *)&v298);
        v313 = 0;
        v302 = 0;
        *(_QWORD *)&v303 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v302 = 3;
        v55 = operator new(0x20u);
        *(_QWORD *)v55 = v55 + 16;
        strcpy((char *)(v55 + 16), "kind");
        *(_QWORD *)(v55 + 8) = 4;
        v303 = (unsigned __int64)v55;
        v56 = *(_DWORD *)(v33 + 8);
        if ( v56 == 1 )
        {
          v239 = 115;
          v57 = "single_inherit";
        }
        else if ( v56 == 2 )
        {
          v239 = 109;
          v57 = "multi_or_virtual_inherit";
        }
        else if ( v56 )
        {
          v239 = 63;
          v57 = "?";
        }
        else
        {
          v239 = 108;
          v57 = "leaf";
        }
        LOBYTE(v304) = 0;
        *(_QWORD *)&v305 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v304) = 3;
        v58 = (_QWORD *)operator new(0x20u);
        *v58 = v58 + 2;
        v59 = strlen(v57);
        v60 = v58 + 2;
        v249.m128i_i64[0] = v59;
        v61 = v59;
        if ( v59 > 0xF )
        {
          v133 = std::string::_M_create();
          *v58 = v133;
          v60 = (_QWORD *)v133;
          v58[2] = v249.m128i_i64[0];
        }
        else if ( v59 == 1 )
        {
          *((_BYTE *)v58 + 16) = v239;
          goto LABEL_75;
        }
        if ( v61 >= 8 )
        {
          *v60 = *(_QWORD *)v57;
          *(_QWORD *)((char *)v60 + v61 - 8) = *(_QWORD *)&v57[v61 - 8];
          v135 = (unsigned __int64)(v60 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v136 = (char *)v60 - v135;
          v137 = (const char *)(v57 - v136);
          v138 = ((_DWORD)v136 + v61) & 0xFFFFFFF8;
          if ( v138 >= 8 )
          {
            v139 = v138 & 0xFFFFFFF8;
            v140 = 0;
            do
            {
              v141 = v140;
              v140 += 8;
              *(_QWORD *)(v135 + v141) = *(_QWORD *)&v137[v141];
            }
            while ( v140 < v139 );
          }
        }
        else if ( (v61 & 4) != 0 )
        {
          *(_DWORD *)v60 = *(_DWORD *)v57;
          *(_DWORD *)((char *)v60 + v61 - 4) = *(_DWORD *)&v57[v61 - 4];
        }
        else if ( v61 )
        {
          *(_BYTE *)v60 = *v57;
          if ( (v61 & 2) != 0 )
            *(_WORD *)((char *)v60 + v61 - 2) = *(_WORD *)&v57[v61 - 2];
        }
        v59 = v249.m128i_i64[0];
        v60 = (_QWORD *)*v58;
LABEL_75:
        v58[1] = v59;
        *((_BYTE *)v60 + v59) = 0;
        v305 = (unsigned __int64)v58;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v314,
          (const __m128i *)&v302);
        v315 = 0;
        v306 = 0;
        *(_QWORD *)&v307 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v306 = 3;
        v62 = operator new(0x20u);
        *(_QWORD *)v62 = v62 + 16;
        strcpy((char *)(v62 + 16), "base_count");
        *(_QWORD *)(v62 + 8) = 10;
        v307 = (unsigned __int64)v62;
        v63 = (__int64)(*(_QWORD *)(v33 + 72) - *(_QWORD *)(v33 + 64)) >> 3;
        LOBYTE(v308) = 6;
        v309 = (unsigned __int64)v63;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v316,
          (const __m128i *)&v306);
        v317 = 0;
        v249.m128i_i8[0] = 0;
        v249.m128i_i64[1] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        if ( !v244 )
        {
          v64 = operator new(0x18u);
          *(_QWORD *)(v64 + 16) = 0;
          v65 = v64;
          *(_OWORD *)v64 = 0;
LABEL_77:
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v241 = v65;
          v66 = v249.m128i_i8[0];
          v67 = v249.m128i_i64[1];
          goto LABEL_78;
        }
        if ( v244 != 2 )
        {
          v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            v2,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            v2,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        v151 = *(_QWORD *)(v241 + 8);
        if ( *(_QWORD *)(v241 + 16) == v151 )
        {
          v65 = v241;
          goto LABEL_77;
        }
        v152 = v151 + 16;
        v66 = 0;
        *(__m128i *)(v152 - 16) = _mm_load_si128(&v249);
        *(_QWORD *)(v241 + 8) = v152;
        v67 = 0;
LABEL_78:
        v249.m128i_i8[0] = v66;
        v68 = v318;
        v249.m128i_i64[1] = v67;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        do
        {
          v68 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v68 != v310 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v284 != (char *)&v285 + 8 )
          operator delete(v284, *((_QWORD *)&v285 + 1) + 1LL);
        ++v237;
        v33 += 88LL;
        v34 = v237;
        v244 = 2;
      }
      while ( v237 < v240 );
    }
    v259 = 0;
    *(_QWORD *)&v260 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v259 = 3;
    v69 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v69,
      "itanium_abi_detected",
      v70,
      v71,
      v72,
      v73,
      (int)v310,
      (int)&v260,
      (__int64)v223);
    v261 = 4;
    v262 = 1;
    v263 = 0;
    v260 = (unsigned __int64)v69;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v191,
      (const __m128i *)&v259);
    v311 = 0;
    v264 = 0;
    *(_QWORD *)&v265 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v264 = 3;
    v74 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v74, "typeinfos_parsed", v75, v76, v77, v78, (int)v191, v208, v224);
    v266 = 5;
    v267 = SHIDWORD(v250);
    v268 = 0;
    v265 = (unsigned __int64)v74;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v312,
      (const __m128i *)&v264);
    v313 = 0;
    v269 = 0;
    *(_QWORD *)&v270 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v269 = 3;
    v79 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v79, "vtables_found", v80, v81, v82, v83, v192, v209, v225);
    v271 = 5;
    v272 = (int)v251;
    v273 = 0;
    v270 = (unsigned __int64)v79;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v314,
      (const __m128i *)&v269);
    v315 = 0;
    v274 = 0;
    *(_QWORD *)&v275 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v274 = 3;
    v84 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v84, "classes_recovered", v85, v86, v87, v88, v193, v210, v226);
    v276 = 5;
    v277 = SHIDWORD(v251);
    v278 = 0;
    v275 = (unsigned __int64)v84;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v316,
      (const __m128i *)&v274);
    v317 = 0;
    v279 = 0;
    *(_QWORD *)&v280 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v279 = 3;
    v89 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v89, "vtables_named", v90, v91, v92, v93, v194, v211, v227);
    v281 = 5;
    v282 = (int)v252;
    v283 = 0;
    v280 = (unsigned __int64)v89;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v318,
      (const __m128i *)&v279);
    v319 = 0;
    LOBYTE(v284) = 0;
    *(_QWORD *)&v285 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v284) = 3;
    v94 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v94, "methods_renamed", v95, v96, v97, v98, v195, v212, v228);
    v286 = 5;
    v287 = SHIDWORD(v252);
    v288 = 0;
    v285 = (unsigned __int64)v94;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v320,
      (const __m128i *)&v284);
    v320[2] = 0;
    v289 = 0;
    *(_QWORD *)&v290 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v289 = 3;
    v99 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v99, "dry_run", v100, v101, v102, v103, v196, v213, v229);
    LOBYTE(v291) = 4;
    v292 = 0;
    v293 = 0;
    v290 = (unsigned __int64)v99;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v321,
      (const __m128i *)&v289);
    v321[2] = 0;
    v294 = 0;
    *(_QWORD *)&v295 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v294 = 3;
    v104 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v104,
      "rename_methods",
      v105,
      v106,
      v107,
      v108,
      v197,
      v214,
      (__int64)&v295);
    v296 = 4;
    v297 = v245;
    v295 = (unsigned __int64)v104;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v322,
      (const __m128i *)&v294);
    v322[2] = 0;
    v298 = 0;
    *(_QWORD *)&v299 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v298 = 3;
    v109 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v109, "force", v110, v111, v112, v113, v198, v215, v230);
    LOBYTE(v300) = 4;
    v301 = 0u;
    v299 = (unsigned __int64)v109;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v323,
      (const __m128i *)&v298);
    v323[2] = 0;
    v302 = 0;
    *(_QWORD *)&v303 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v302 = 3;
    v114 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v114,
      "was_already_marked",
      v115,
      v116,
      v117,
      v118,
      v199,
      v216,
      v231);
    LOBYTE(v304) = 4;
    v305 = v246;
    v303 = (unsigned __int64)v114;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v324,
      (const __m128i *)&v302);
    v324[2] = 0;
    v306 = 0;
    *(_QWORD *)&v307 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v306 = 3;
    v119 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v119, "sample_classes", v120, v121, v122, v123, v200, v217, v232);
    v307 = (unsigned __int64)v119;
    LOBYTE(v247) = v244;
    v248 = v241;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v124 = v325;
    *((_QWORD *)&v309 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v325,
      (const __m128i *)&v306);
    v325[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    do
    {
      v124 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v124 != (_QWORD *)(v201 - 24) );
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
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
    v289 = 0;
    *(_QWORD *)&v290 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v289 = 3;
    v159 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v159,
      "itanium_abi_detected",
      v160,
      v161,
      v162,
      v163,
      (int)v190,
      v207,
      (__int64)v223);
    v291 = 4;
    v292 = 0;
    v293 = 0;
    v290 = (unsigned __int64)v159;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v310,
      (const __m128i *)&v289);
    v311 = 0;
    v294 = 0;
    *(_QWORD *)&v295 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v294 = 3;
    v164 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v164,
      "note",
      v165,
      v166,
      v167,
      v168,
      (int)v310,
      v218,
      (__int64)&v295);
    v296 = 0;
    *(_QWORD *)&v297 = 0;
    v295 = (unsigned __int64)v164;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v296 = 3;
    v169 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v169,
      "No __cxxabiv1 typeinfo vtables found. This binary does not use the Itanium C++ ABI (Linux/macOS GCC/Clang). For Wi"
      "ndows MSVC binaries, install the IDA 'Class Informer' plugin (github.com/herosi/classinformer).",
      v170,
      v171,
      v172,
      v173,
      v202,
      v219,
      v233);
    v297 = (unsigned __int64)v169;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v312,
      (const __m128i *)&v294);
    v313 = 0;
    v298 = 0;
    *(_QWORD *)&v299 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v298 = 3;
    v174 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v174, "classes_recovered", v175, v176, v177, v178, v203, v220, v234);
    v299 = (unsigned __int64)v174;
    v300 = 5;
    v301 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v315 = 0;
    v302 = 0;
    *(_QWORD *)&v303 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v302 = 3;
    v179 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v179, "vtables_named", v180, v181, v182, v183, v204, v221, v235);
    v303 = (unsigned __int64)v179;
    v304 = 5;
    v305 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v317 = 0;
    v306 = 0;
    *(_QWORD *)&v307 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v306 = 3;
    v184 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v184, "methods_renamed", v185, v186, v187, v188, v205, v222, v236);
    v307 = (unsigned __int64)v184;
    v308 = 5;
    v309 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v319 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v189 = v320;
    do
    {
      v189 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v189 != v206 );
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
    v243 = (_QWORD *)v253;
    v238 = v254;
  }
  v125 = v256;
  v126 = v257;
  v127 = v256;
  if ( v257 != v256 )
  {
    do
    {
      while ( 1 )
      {
        v128 = (void *)v127[4];
        if ( !v128 )
          break;
        v129 = v127[6];
        v127 += 7;
        operator delete(v128, v129 - (_QWORD)v128);
        if ( v126 == v127 )
          goto LABEL_89;
      }
      v127 += 7;
    }
    while ( v126 != v127 );
  }
LABEL_89:
  if ( v125 )
    operator delete(v125, v258 - (_QWORD)v125);
  for ( i = v243; v238 != i; i += 11 )
  {
    while ( 1 )
    {
      v131 = (void *)i[8];
      if ( v131 )
        operator delete(v131, i[10] - (_QWORD)v131);
      if ( i[5] )
      {
        i[6] = 0;
        qfree();
      }
      if ( !i[2] )
        break;
      i[3] = 0;
      i += 11;
      qfree();
      if ( i == v238 )
        goto LABEL_98;
    }
  }
LABEL_98:
  if ( v243 )
    operator delete(v243, v255 - (_QWORD)v243);
  return a1;
}

