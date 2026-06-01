__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  int v8; // r12d
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  char v15; // cl
  _QWORD *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // ecx
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  _QWORD *v36; // rsi
  int v37; // eax
  unsigned __int64 v38; // rdx
  int v39; // ecx
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rsi
  int v46; // eax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 *v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 *v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // eax
  __m128i v67; // xmm0
  __int64 v68; // r8
  __int64 v69; // r9
  __m128i v70; // xmm0
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // ecx
  _QWORD *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // eax
  _QWORD *v79; // rsi
  int v80; // eax
  unsigned __int64 v81; // rdx
  double v82; // xmm0_8
  __int64 v83; // rax
  int v84; // ecx
  _QWORD *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // ecx
  _QWORD *v90; // rdx
  int v91; // ecx
  unsigned __int64 v92; // rax
  int v93; // ecx
  _QWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // eax
  _QWORD *v99; // rsi
  int v100; // eax
  unsigned __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __m128i v113; // xmm0
  __int64 v114; // r8
  __int64 v115; // r9
  __m128i v116; // xmm0
  __int64 v117; // r8
  __int64 v118; // r9
  __m128i v119; // xmm0
  __int64 v120; // r8
  __int64 v121; // r9
  __m128i v122; // xmm0
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __m128i v128; // xmm0
  __int64 v129; // r8
  __int64 v130; // r9
  __m128i v131; // xmm0
  __int64 v132; // r8
  __int64 v133; // r9
  __m128i v134; // xmm0
  __int64 v135; // r8
  __int64 v136; // r9
  _QWORD *v137; // rsi
  _QWORD *v138; // rsi
  _QWORD *v139; // rsi
  _QWORD *v140; // rsi
  _QWORD *v141; // rdx
  __m128i v142; // xmm0
  __int8 v143; // dl
  __int64 v144; // rax
  __int8 v145; // si
  __int64 v146; // rdx
  __m128i v147; // xmm0
  __int8 v148; // dl
  __int64 v149; // rax
  __int8 v150; // si
  __int64 v151; // rdx
  __int64 v152; // [rsp+0h] [rbp-168h]
  int v153; // [rsp+0h] [rbp-168h]
  int v154; // [rsp+0h] [rbp-168h]
  int v155; // [rsp+0h] [rbp-168h]
  int v156; // [rsp+0h] [rbp-168h]
  int v157; // [rsp+0h] [rbp-168h]
  int v158; // [rsp+0h] [rbp-168h]
  int v159; // [rsp+0h] [rbp-168h]
  int v160; // [rsp+0h] [rbp-168h]
  int v161; // [rsp+0h] [rbp-168h]
  int v162; // [rsp+0h] [rbp-168h]
  __int64 v163; // [rsp+8h] [rbp-160h]
  __int64 v164; // [rsp+8h] [rbp-160h]
  __int64 v165; // [rsp+8h] [rbp-160h]
  __int64 v166; // [rsp+8h] [rbp-160h]
  __int64 v167; // [rsp+8h] [rbp-160h]
  __int64 v168; // [rsp+8h] [rbp-160h]
  __int64 v169; // [rsp+8h] [rbp-160h]
  __int64 v170; // [rsp+8h] [rbp-160h]
  __int64 v171; // [rsp+8h] [rbp-160h]
  __int64 v172; // [rsp+8h] [rbp-160h]
  __int64 v173; // [rsp+10h] [rbp-158h]
  int v174; // [rsp+10h] [rbp-158h]
  __int64 v175; // [rsp+18h] [rbp-150h]
  std::exception *v176; // [rsp+20h] [rbp-148h]
  std::exception *v177; // [rsp+20h] [rbp-148h]
  __m128i *v178; // [rsp+28h] [rbp-140h]
  __int64 v179; // [rsp+30h] [rbp-138h]
  int v180; // [rsp+38h] [rbp-130h]
  __int8 v181; // [rsp+3Eh] [rbp-12Ah] BYREF
  char v182; // [rsp+3Fh] [rbp-129h] BYREF
  __m128i v183; // [rsp+40h] [rbp-128h] BYREF
  __m128i v184; // [rsp+50h] [rbp-118h] BYREF
  __int64 v185; // [rsp+60h] [rbp-108h]
  int v186; // [rsp+68h] [rbp-100h]
  _QWORD *v187; // [rsp+70h] [rbp-F8h]
  int v188; // [rsp+78h] [rbp-F0h]
  _QWORD *v189; // [rsp+80h] [rbp-E8h]
  int v190; // [rsp+88h] [rbp-E0h]
  __int64 v191; // [rsp+90h] [rbp-D8h]
  char v192; // [rsp+98h] [rbp-D0h]
  int v193; // [rsp+A0h] [rbp-C8h]
  int v194; // [rsp+A8h] [rbp-C0h]
  int v195; // [rsp+B0h] [rbp-B8h]
  int v196; // [rsp+B8h] [rbp-B0h]
  __int64 v197; // [rsp+C0h] [rbp-A8h] BYREF
  int v198; // [rsp+C8h] [rbp-A0h]
  int v199; // [rsp+D0h] [rbp-98h]
  int v200; // [rsp+D8h] [rbp-90h]
  __int64 v201[4]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v202[2]; // [rsp+100h] [rbp-68h] BYREF
  _BYTE v203[24]; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v204; // [rsp+128h] [rbp-40h]

  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  v204 = __readfsqword(0x28u);
  v188 = 0;
  v175 = 0;
  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 32) )
    {
      case 1:
        v184.m128i_i8[0] = 1;
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
          (__int64 *)a2,
          v184.m128i_i8,
          0);
        goto LABEL_10;
      case 2:
        v181 = 0;
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
          (__int64 *)a2,
          &v181,
          0);
        goto LABEL_10;
      case 3:
        v93 = *(_DWORD *)(a2 + 56);
        v94 = *(_QWORD **)(a2 + 48);
        if ( v93 )
        {
          v95 = 1LL << ((unsigned __int8)v93 - 1);
        }
        else
        {
          v95 = 0x8000000000000000LL;
          --v94;
        }
        if ( (*v94 & v95) == 0 )
          goto LABEL_10;
        v96 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
        v182 = 5;
        v183 = 0u;
        v184.m128i_i32[0] = v96 >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *, __m128i *))(a2 + 152))(
                a2 + 128,
                &v184,
                &v182,
                &v183) )
          goto LABEL_113;
        v97 = *(_QWORD *)(a2 + 16);
        if ( v97 == *(_QWORD *)(a2 + 8) )
          goto LABEL_153;
        v34 = *(_QWORD *)(v97 - 8);
        if ( !v34 )
          goto LABEL_113;
        if ( *(_BYTE *)v34 == 2 )
          goto LABEL_159;
        v98 = *(_DWORD *)(a2 + 96);
        v99 = *(_QWORD **)(a2 + 88);
        if ( v98 )
        {
          v100 = v98 - 1;
          v101 = *v99 & (1LL << v100);
        }
        else
        {
          v138 = v99 - 1;
          v101 = *v138 & 0x8000000000000000LL;
          v100 = 63;
          *(_QWORD *)(a2 + 88) = v138;
        }
        *(_DWORD *)(a2 + 96) = v100;
        if ( !v101 )
          goto LABEL_113;
        goto LABEL_156;
      case 4:
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v28 = *(_QWORD *)(a1 + 192);
          if ( v28 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v28) = 46;
        }
        v29 = *(_DWORD *)(a2 + 56);
        v30 = *(_QWORD **)(a2 + 48);
        if ( v29 )
        {
          v31 = 1LL << ((unsigned __int8)v29 - 1);
        }
        else
        {
          v31 = 0x8000000000000000LL;
          --v30;
        }
        if ( (*v30 & v31) == 0 )
          goto LABEL_10;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
        v32 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
        v182 = 5;
        v184.m128i_i32[0] = v32 >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *, __m128i *))(a2 + 152))(
                a2 + 128,
                &v184,
                &v182,
                &v183) )
          goto LABEL_113;
        v33 = *(_QWORD *)(a2 + 16);
        if ( v33 == *(_QWORD *)(a2 + 8) )
          goto LABEL_153;
        v34 = *(_QWORD *)(v33 - 8);
        if ( !v34 )
          goto LABEL_113;
        if ( *(_BYTE *)v34 == 2 )
          goto LABEL_159;
        v35 = *(_DWORD *)(a2 + 96);
        v36 = *(_QWORD **)(a2 + 88);
        if ( v35 )
        {
          v37 = v35 - 1;
          v38 = *v36 & (1LL << v37);
        }
        else
        {
          v140 = v36 - 1;
          v38 = *v140 & 0x8000000000000000LL;
          v37 = 63;
          *(_QWORD *)(a2 + 88) = v140;
        }
        *(_DWORD *)(a2 + 96) = v37;
        if ( !v38 )
          goto LABEL_113;
        goto LABEL_156;
      case 5:
        v39 = *(_DWORD *)(a2 + 56);
        v40 = *(_QWORD **)(a2 + 48);
        if ( v39 )
        {
          v41 = 1LL << ((unsigned __int8)v39 - 1);
        }
        else
        {
          v41 = 0x8000000000000000LL;
          --v40;
        }
        if ( (*v40 & v41) == 0 )
          goto LABEL_10;
        v42 = *(_QWORD *)(a1 + 168);
        v183.m128i_i8[0] = 6;
        v182 = 5;
        v183.m128i_i64[1] = v42;
        v184.m128i_i32[0] = (__int64)(*(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8)) >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *, __m128i *))(a2 + 152))(
                a2 + 128,
                &v184,
                &v182,
                &v183) )
          goto LABEL_113;
        v43 = *(_QWORD *)(a2 + 16);
        if ( v43 == *(_QWORD *)(a2 + 8) )
          goto LABEL_153;
        v34 = *(_QWORD *)(v43 - 8);
        if ( !v34 )
          goto LABEL_113;
        if ( *(_BYTE *)v34 == 2 )
          goto LABEL_159;
        v44 = *(_DWORD *)(a2 + 96);
        v45 = *(_QWORD **)(a2 + 88);
        if ( v44 )
        {
          v46 = v44 - 1;
          v47 = *v45 & (1LL << v46);
        }
        else
        {
          v137 = v45 - 1;
          v47 = *v137 & 0x8000000000000000LL;
          v46 = 63;
          *(_QWORD *)(a2 + 88) = v137;
        }
        *(_DWORD *)(a2 + 96) = v46;
        if ( !v47 )
          goto LABEL_113;
        goto LABEL_156;
      case 6:
        v73 = *(_DWORD *)(a2 + 56);
        v74 = *(_QWORD **)(a2 + 48);
        if ( v73 )
        {
          v75 = 1LL << ((unsigned __int8)v73 - 1);
        }
        else
        {
          v75 = 0x8000000000000000LL;
          --v74;
        }
        if ( (*v74 & v75) == 0 )
          goto LABEL_10;
        v76 = *(_QWORD *)(a1 + 160);
        v183.m128i_i8[0] = 5;
        v182 = 5;
        v183.m128i_i64[1] = v76;
        v184.m128i_i32[0] = (__int64)(*(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8)) >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *, __m128i *))(a2 + 152))(
                a2 + 128,
                &v184,
                &v182,
                &v183) )
          goto LABEL_113;
        v77 = *(_QWORD *)(a2 + 16);
        if ( v77 == *(_QWORD *)(a2 + 8) )
          goto LABEL_153;
        v34 = *(_QWORD *)(v77 - 8);
        if ( !v34 )
          goto LABEL_113;
        if ( *(_BYTE *)v34 == 2 )
          goto LABEL_159;
        v78 = *(_DWORD *)(a2 + 96);
        v79 = *(_QWORD **)(a2 + 88);
        if ( v78 )
        {
          v80 = v78 - 1;
          v81 = *v79 & (1LL << v80);
        }
        else
        {
          v139 = v79 - 1;
          v81 = *v139 & 0x8000000000000000LL;
          v80 = 63;
          *(_QWORD *)(a2 + 88) = v139;
        }
        *(_DWORD *)(a2 + 96) = v80;
        if ( !v81 )
          goto LABEL_113;
        goto LABEL_156;
      case 7:
        v82 = *(double *)(a1 + 176);
        if ( fabs(v82) > 1.797693134862316e308 )
        {
          v184.m128i_i8[0] = 39;
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[26],std::string,char>();
          nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
            (__int64)v202,
            406,
            v201,
            v125,
            v126,
            v127,
            v152,
            (int)&v197,
            (int)v201,
            v175,
            (int)v202,
            (char)v178,
            v179,
            v180,
            v183.m128i_i32[0],
            v183.m128i_i32[2],
            v184.m128i_i32[0],
            v184.m128i_i32[2],
            v185,
            v186,
            (int)v187,
            v188,
            (int)v189,
            v190,
            v191);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *(_BYTE *)(a2 + 120) = 1;
          if ( *(_BYTE *)(a2 + 160) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::out_of_range>((__int64)v176);
          goto LABEL_4;
        }
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v83 = *(_QWORD *)(a1 + 192);
          if ( v83 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v83) = 46;
        }
        v84 = *(_DWORD *)(a2 + 56);
        v85 = *(_QWORD **)(a2 + 48);
        if ( v84 )
        {
          v86 = 1LL << ((unsigned __int8)v84 - 1);
        }
        else
        {
          v86 = 0x8000000000000000LL;
          --v85;
        }
        if ( (*v85 & v86) != 0 )
        {
          v87 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
          v183.m128i_i8[0] = 7;
          v182 = 5;
          v184.m128i_i32[0] = v87 >> 3;
          *(double *)&v183.m128i_i64[1] = v82;
          if ( !*(_QWORD *)(a2 + 144) )
            std::__throw_bad_function_call();
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *, __m128i *))(a2 + 152))(
                 a2 + 128,
                 &v184,
                 &v182,
                 &v183) )
          {
            v88 = *(_QWORD *)(a2 + 16);
            if ( v88 == *(_QWORD *)(a2 + 8) )
            {
LABEL_153:
              v142 = _mm_load_si128(&v183);
              v143 = v183.m128i_i8[0];
              v183.m128i_i8[0] = 0;
              v183.m128i_i64[1] = 0;
              v144 = *(_QWORD *)a2;
              v184 = v142;
              v145 = *(_BYTE *)v144;
              *(_BYTE *)v144 = v143;
              v146 = *(_QWORD *)(v144 + 8);
              *(_QWORD *)(v144 + 8) = v142.m128i_i64[1];
              v184.m128i_i8[0] = v145;
              v184.m128i_i64[1] = v146;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            else
            {
              v34 = *(_QWORD *)(v88 - 8);
              if ( v34 )
              {
                if ( *(_BYTE *)v34 == 2 )
                {
LABEL_159:
                  std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
                    *(__m128i ***)(v34 + 8),
                    &v183);
                }
                else
                {
                  v89 = *(_DWORD *)(a2 + 96);
                  v90 = *(_QWORD **)(a2 + 88);
                  if ( v89 )
                  {
                    v91 = v89 - 1;
                    v92 = *v90 & (1LL << v91);
                  }
                  else
                  {
                    v141 = v90 - 1;
                    v92 = *v141 & 0x8000000000000000LL;
                    v91 = 63;
                    *(_QWORD *)(a2 + 88) = v141;
                  }
                  *(_DWORD *)(a2 + 96) = v91;
                  if ( v92 )
                  {
LABEL_156:
                    v147 = _mm_load_si128(&v183);
                    v148 = v183.m128i_i8[0];
                    v183.m128i_i8[0] = 0;
                    v183.m128i_i64[1] = 0;
                    v149 = *(_QWORD *)(a2 + 112);
                    v184 = v147;
                    v150 = *(_BYTE *)v149;
                    *(_BYTE *)v149 = v148;
                    v151 = *(_QWORD *)(v149 + 8);
                    *(_QWORD *)(v149 + 8) = v147.m128i_i64[1];
                    v184.m128i_i8[0] = v150;
                    v184.m128i_i64[1] = v151;
                    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  }
                }
              }
            }
          }
LABEL_113:
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        goto LABEL_10;
      case 8:
        v48 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
        v183.m128i_i8[0] = 2;
        v184.m128i_i32[0] = v48 >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64, __m128i *, __m128i *, __int64))(a2 + 152))(a2 + 128, &v184, &v183, a2 + 168);
        std::vector<bool>::push_back();
        v183.m128i_i8[0] = 2;
        v184.m128i_i32[0] = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v50 = *(__int64 **)(a2 + 16);
        v184.m128i_i64[1] = v49;
        if ( v50 == *(__int64 **)(a2 + 24) )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> * const&>();
        }
        else
        {
          *v50 = v49;
          *(_QWORD *)(a2 + 16) = v50 + 1;
        }
        v51 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v51;
        if ( v51 != 10 )
        {
          v187 = v6;
          v189 = v7;
          v190 = v8;
          v191 = v175;
          std::vector<bool>::push_back();
          v6 = v187;
          v7 = v189;
          v8 = v190;
          v175 = v191;
          continue;
        }
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_array(a2);
LABEL_10:
        if ( v6 == v7 )
        {
LABEL_23:
          if ( !v8 )
          {
            v13 = 1;
            goto LABEL_6;
          }
          goto LABEL_24;
        }
LABEL_11:
        v15 = v8 - 1;
        if ( !v8 )
        {
          v16 = v7 - 1;
          v8 = 0;
          v17 = 0x8000000000000000LL;
          goto LABEL_13;
        }
LABEL_18:
        if ( (*v7 & (1LL << v15)) != 0 )
        {
          do
          {
            v18 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
            *(_DWORD *)(a1 + 32) = v18;
            if ( v18 == 13 )
              goto LABEL_121;
            if ( v18 != 10 )
            {
              std::string::basic_string<std::allocator<char>>(
                &v197,
                "array",
                v19,
                v20,
                v21,
                v22,
                v152,
                (int)&v197,
                v173);
              nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
              v113 = _mm_loadu_si128((const __m128i *)(a1 + 72));
              nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
                (__int64)v202,
                101,
                v184.m128i_i64,
                v201,
                v114,
                v115,
                v156,
                v166,
                (int)v201,
                v175,
                (int)v202,
                (int)v178,
                v179,
                v180,
                v183.m128i_i32[0],
                v183.m128i_i32[2],
                v113.m128i_i32[0],
                v113.m128i_i32[2],
                *(_QWORD *)(a1 + 88),
                v186,
                (int)v187,
                v188,
                (int)v189,
                v190,
                v191,
                v192,
                v193,
                v194,
                v195,
                v196,
                v197,
                v198,
                v199,
                v200,
                v201[0]);
              nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
              *(_BYTE *)(a2 + 120) = 1;
              if ( *(_BYTE *)(a2 + 160) )
                nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
              goto LABEL_4;
            }
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_array(a2);
            if ( v8 )
              goto LABEL_114;
            --v7;
            v8 = 63;
            v15 = 62;
            if ( v7 != v6 )
              goto LABEL_18;
LABEL_24:
            v16 = v7;
            v17 = 1LL << ((unsigned __int8)v8 - 1);
LABEL_13:
            ;
          }
          while ( (*v16 & v17) != 0 );
        }
        v23 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v23;
        if ( v23 == 13 )
        {
          v102 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
          *(_DWORD *)(a1 + 32) = v102;
          if ( v102 != 4 )
          {
            std::string::basic_string<std::allocator<char>>(
              &v197,
              "object key",
              v103,
              v104,
              v105,
              v106,
              v152,
              (int)&v197,
              v173);
            nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
            v122 = _mm_loadu_si128((const __m128i *)(a1 + 72));
            nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
              (__int64)v202,
              101,
              v184.m128i_i64,
              v201,
              v123,
              v124,
              v159,
              v169,
              (int)v201,
              v175,
              (int)v202,
              (int)v178,
              v179,
              v180,
              v183.m128i_i32[0],
              v183.m128i_i32[2],
              v122.m128i_i32[0],
              v122.m128i_i32[2],
              *(_QWORD *)(a1 + 88),
              v186,
              (int)v187,
              v188,
              (int)v189,
              v190,
              v191,
              v192,
              v193,
              v194,
              v195,
              v196,
              v197,
              v198,
              v199,
              v200,
              v201[0]);
            nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
            *(_BYTE *)(a2 + 120) = 1;
            if ( *(_BYTE *)(a2 + 160) )
              nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
            goto LABEL_4;
          }
          if ( *(_DWORD *)(a1 + 184) != 46 )
          {
            v107 = *(_QWORD *)(a1 + 192);
            if ( v107 != -1 )
              *(_BYTE *)(*(_QWORD *)(a1 + 120) + v107) = 46;
          }
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::key(
            a2,
            a1 + 120);
          v108 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
          *(_DWORD *)(a1 + 32) = v108;
          if ( v108 != 12 )
          {
            std::string::basic_string<std::allocator<char>>(
              &v197,
              "object separator",
              v109,
              v110,
              v111,
              v112,
              v152,
              (int)&v197,
              v173);
            nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
            v119 = _mm_loadu_si128((const __m128i *)(a1 + 72));
            nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
              (__int64)v202,
              101,
              v184.m128i_i64,
              v201,
              v120,
              v121,
              v158,
              v168,
              (int)v201,
              v175,
              (int)v202,
              (int)v178,
              v179,
              v180,
              v183.m128i_i32[0],
              v183.m128i_i32[2],
              v119.m128i_i32[0],
              v119.m128i_i32[2],
              *(_QWORD *)(a1 + 88),
              v186,
              (int)v187,
              v188,
              (int)v189,
              v190,
              v191,
              v192,
              v193,
              v194,
              v195,
              v196,
              v197,
              v198,
              v199,
              v200,
              v201[0]);
            nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
            *(_BYTE *)(a2 + 120) = 1;
            if ( *(_BYTE *)(a2 + 160) )
              nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
            goto LABEL_4;
          }
LABEL_121:
          v66 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
LABEL_68:
          *(_DWORD *)(a1 + 32) = v66;
          continue;
        }
        if ( v23 == 11 )
        {
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_object(a2);
          if ( v8 )
          {
LABEL_114:
            --v8;
            goto LABEL_10;
          }
          --v7;
          v8 = 63;
          if ( v6 == v7 )
            goto LABEL_23;
          goto LABEL_11;
        }
        std::string::basic_string<std::allocator<char>>(&v197, "object", v24, v25, v26, v27, v152, (int)&v197, v173);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v116 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v202,
          101,
          v184.m128i_i64,
          v201,
          v117,
          v118,
          v157,
          v167,
          (int)v201,
          v175,
          (int)v202,
          (int)v178,
          v179,
          v180,
          v183.m128i_i32[0],
          v183.m128i_i32[2],
          v116.m128i_i32[0],
          v116.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v186,
          (int)v187,
          v188,
          (int)v189,
          v190,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201[0]);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *(_BYTE *)(a2 + 120) = 1;
        if ( *(_BYTE *)(a2 + 160) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
LABEL_4:
        std::string::_M_dispose();
        v202[0] = off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v203);
        std::exception::~exception(v176);
        std::string::_M_dispose();
        std::string::_M_dispose();
LABEL_5:
        v13 = 0;
LABEL_6:
        if ( v6 )
          operator delete(v6, v175 - (_QWORD)v6);
        return v13;
      case 9:
        v52 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
        v183.m128i_i8[0] = 0;
        v184.m128i_i32[0] = v52 >> 3;
        if ( !*(_QWORD *)(a2 + 144) )
          std::__throw_bad_function_call();
        v178 = &v184;
        (*(void (__fastcall **)(__int64, __m128i *, __m128i *, __int64))(a2 + 152))(a2 + 128, &v184, &v183, a2 + 168);
        std::vector<bool>::push_back();
        v182 = 1;
        v184.m128i_i32[0] = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v54 = *(__int64 **)(a2 + 16);
        v184.m128i_i64[1] = v53;
        if ( v54 == *(__int64 **)(a2 + 24) )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> * const&>();
        }
        else
        {
          *v54 = v53;
          *(_QWORD *)(a2 + 16) = v54 + 1;
        }
        v55 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v55;
        if ( v55 == 11 )
        {
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_object(a2);
          goto LABEL_10;
        }
        if ( v55 != 4 )
        {
          std::string::basic_string<std::allocator<char>>(
            &v197,
            "object key",
            v56,
            v57,
            v58,
            v59,
            v152,
            (int)&v197,
            v173);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v131 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v202,
            101,
            v184.m128i_i64,
            v201,
            v132,
            v133,
            v161,
            v171,
            (int)v201,
            v175,
            (int)v202,
            (int)&v184,
            v179,
            v180,
            v183.m128i_i32[0],
            v183.m128i_i32[2],
            v131.m128i_i32[0],
            v131.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v186,
            (int)v187,
            v188,
            (int)v189,
            v190,
            v191,
            v192,
            v193,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199,
            v200,
            v201[0]);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *(_BYTE *)(a2 + 120) = 1;
          if ( *(_BYTE *)(a2 + 160) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
          goto LABEL_4;
        }
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v60 = *(_QWORD *)(a1 + 192);
          if ( v60 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v60) = 46;
        }
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::key(
          a2,
          a1 + 120);
        v61 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v61;
        if ( v61 != 12 )
        {
          std::string::basic_string<std::allocator<char>>(
            &v197,
            "object separator",
            v62,
            v63,
            v64,
            v65,
            v152,
            (int)&v197,
            v173);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v134 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v202,
            101,
            v184.m128i_i64,
            v201,
            v135,
            v136,
            v162,
            v172,
            (int)v201,
            v175,
            (int)v202,
            (int)&v184,
            v179,
            v180,
            v183.m128i_i32[0],
            v183.m128i_i32[2],
            v134.m128i_i32[0],
            v134.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v186,
            (int)v187,
            v188,
            (int)v189,
            v190,
            v191,
            v192,
            v193,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199,
            v200,
            v201[0]);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *(_BYTE *)(a2 + 120) = 1;
          if ( *(_BYTE *)(a2 + 160) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
          goto LABEL_4;
        }
        v187 = v6;
        v189 = v7;
        v190 = v8;
        v191 = v175;
        std::vector<bool>::push_back();
        v6 = v187;
        v7 = v189;
        v8 = v190;
        v175 = v191;
        v66 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        goto LABEL_68;
      case 0xE:
        std::string::basic_string<std::allocator<char>>(&v197, "value", a3, a4, a5, a6, v152, (int)&v197, v173);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v67 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v202,
          101,
          v184.m128i_i64,
          v201,
          v68,
          v69,
          v154,
          v164,
          (int)v201,
          v175,
          (int)v202,
          (int)v178,
          v179,
          v180,
          v183.m128i_i32[0],
          v183.m128i_i32[2],
          v67.m128i_i32[0],
          v67.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v186,
          (int)v187,
          v188,
          (int)v189,
          v190,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201[0]);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *(_BYTE *)(a2 + 120) = 1;
        if ( *(_BYTE *)(a2 + 160) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
        goto LABEL_4;
      case 0xF:
        if ( *(_QWORD *)(a1 + 72) != 1 )
        {
          std::string::basic_string<std::allocator<char>>(&v197, "value", a3, a4, a5, a6, v152, (int)&v197, v173);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v70 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v202,
            101,
            v184.m128i_i64,
            v201,
            v71,
            v72,
            v155,
            v165,
            (int)v201,
            v175,
            (int)v202,
            (int)v178,
            v179,
            v180,
            v183.m128i_i32[0],
            v183.m128i_i32[2],
            v70.m128i_i32[0],
            v70.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v186,
            (int)v187,
            v188,
            (int)v189,
            v190,
            v191,
            v192,
            v193,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199,
            v200,
            v201[0]);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *(_BYTE *)(a2 + 120) = 1;
          if ( *(_BYTE *)(a2 + 160) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
          goto LABEL_4;
        }
        std::string::basic_string<std::allocator<char>>(
          v201,
          "attempting to parse an empty input; check that your input string or stream contains the expected JSON",
          a3,
          a4,
          a5,
          a6,
          v152,
          a1 + 40,
          (__int64)v201);
        v128 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v202,
          101,
          v184.m128i_i64,
          v201,
          v129,
          v130,
          v160,
          v170,
          v174,
          v175,
          (int)v202,
          (int)v178,
          v179,
          v180,
          v183.m128i_i32[0],
          v183.m128i_i32[2],
          v128.m128i_i32[0],
          v128.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v186,
          (int)v187,
          v188,
          (int)v189,
          v190,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201[0]);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *(_BYTE *)(a2 + 120) = 1;
        if ( *(_BYTE *)(a2 + 160) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v177);
        std::string::_M_dispose();
        v202[0] = off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v203);
        std::exception::~exception(v177);
        std::string::_M_dispose();
        goto LABEL_5;
      default:
        std::string::basic_string<std::allocator<char>>(&v197, "value", a3, a4, a5, a6, v152, (int)&v197, v173);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v10 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v202,
          101,
          v184.m128i_i64,
          v201,
          v11,
          v12,
          v153,
          v163,
          (int)v201,
          v175,
          (int)v202,
          (int)v178,
          v179,
          v180,
          v183.m128i_i32[0],
          v183.m128i_i32[2],
          v10.m128i_i32[0],
          v10.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v186,
          (int)v187,
          v188,
          (int)v189,
          v190,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201[0]);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *(_BYTE *)(a2 + 120) = 1;
        if ( *(_BYTE *)(a2 + 160) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v176);
        goto LABEL_4;
    }
  }
}

