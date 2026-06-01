__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  __m128i v11; // xmm0
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
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
  __m128i v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE *v31; // rax
  __int64 v32; // rax
  _BYTE *v33; // rax
  char v34; // si
  __int64 v35; // rdx
  __int64 v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rax
  _BYTE *v39; // rax
  __int64 v40; // rcx
  char v41; // si
  __int64 v42; // rdx
  __int64 v43; // r8
  _BYTE *v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rax
  char v47; // si
  __int64 v48; // rdx
  __int64 v49; // r8
  _BYTE *v50; // rax
  __int64 v51; // rax
  _BYTE *v52; // rax
  char v53; // si
  __int64 v54; // rdx
  double v55; // xmm0_8
  __int64 v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // rax
  _BYTE *v59; // rax
  char v60; // si
  __int64 v61; // rdx
  __int64 *v62; // rax
  int v63; // eax
  __int64 *v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // eax
  __m128i v77; // xmm0
  __int64 v78; // r8
  __int64 v79; // r9
  __m128i v80; // xmm0
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __m128i v94; // xmm0
  __int64 v95; // r8
  __int64 v96; // r9
  __m128i v97; // xmm0
  __int64 v98; // r8
  __int64 v99; // r9
  __m128i **v100; // r9
  __m128i *v101; // r10
  __m128i **v102; // r10
  __m128i *v103; // r9
  __int64 v104; // rax
  std::exception *v105; // r8
  _QWORD *v106; // r10
  char *v107; // rsi
  __m128i **v108; // r8
  __m128i *v109; // r9
  __m128i v110; // xmm0
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __m128i v116; // xmm0
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  char v120; // si
  __int64 v121; // rdx
  __int64 v122; // rax
  char v123; // si
  __int64 v124; // rdx
  __int64 v125; // rax
  char v126; // si
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rcx
  char v130; // si
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  unsigned __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rcx
  std::exception *v137; // r8
  const __m128i *v138; // rax
  __int64 v139; // rdi
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // rax
  char v143; // si
  __int64 v144; // rdx
  __m128i v145; // xmm0
  __int64 v146; // r8
  __int64 v147; // r9
  __m128i v148; // xmm0
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdi
  __int64 v152; // rax
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  std::exception *v155; // r10
  __int64 v156; // rdi
  const __m128i *v157; // r9
  __int64 v158; // rsi
  __m128i v159; // xmm0
  __int64 v160; // r8
  __int64 v161; // rdi
  __int64 v162; // rax
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  std::exception *v165; // r9
  const __m128i *v166; // rsi
  __int64 v167; // rdi
  __m128i v168; // xmm0
  __int64 v169; // rsi
  __int64 v170; // r8
  __int64 v171; // rdi
  __int64 v172; // rax
  unsigned __int64 v173; // rax
  __int64 v174; // rax
  std::exception *v175; // r8
  const __m128i *v176; // rsi
  __int64 v177; // rdi
  __m128i v178; // xmm0
  __int64 v179; // rsi
  __int64 v180; // r9
  __int64 v181; // [rsp+0h] [rbp-198h]
  int v182; // [rsp+0h] [rbp-198h]
  int v183; // [rsp+0h] [rbp-198h]
  int v184; // [rsp+0h] [rbp-198h]
  int v185; // [rsp+0h] [rbp-198h]
  int v186; // [rsp+0h] [rbp-198h]
  int v187; // [rsp+0h] [rbp-198h]
  int v188; // [rsp+0h] [rbp-198h]
  int v189; // [rsp+0h] [rbp-198h]
  int v190; // [rsp+0h] [rbp-198h]
  int v191; // [rsp+0h] [rbp-198h]
  int v192; // [rsp+8h] [rbp-190h]
  __int64 v193; // [rsp+8h] [rbp-190h]
  __int64 v194; // [rsp+8h] [rbp-190h]
  __int64 v195; // [rsp+8h] [rbp-190h]
  __int64 v196; // [rsp+8h] [rbp-190h]
  __int64 v197; // [rsp+8h] [rbp-190h]
  __int64 v198; // [rsp+8h] [rbp-190h]
  __int64 v199; // [rsp+8h] [rbp-190h]
  __int64 v200; // [rsp+8h] [rbp-190h]
  __int64 v201; // [rsp+8h] [rbp-190h]
  __int64 v202; // [rsp+8h] [rbp-190h]
  __int64 v203; // [rsp+10h] [rbp-188h]
  int v204; // [rsp+10h] [rbp-188h]
  int v205; // [rsp+10h] [rbp-188h]
  int v206; // [rsp+10h] [rbp-188h]
  int v207; // [rsp+10h] [rbp-188h]
  int v208; // [rsp+10h] [rbp-188h]
  int v209; // [rsp+10h] [rbp-188h]
  int v210; // [rsp+10h] [rbp-188h]
  int v211; // [rsp+10h] [rbp-188h]
  int v212; // [rsp+10h] [rbp-188h]
  int v213; // [rsp+10h] [rbp-188h]
  __int64 v214; // [rsp+18h] [rbp-180h]
  std::exception *v215; // [rsp+20h] [rbp-178h]
  std::exception *v216; // [rsp+20h] [rbp-178h]
  std::exception *v217; // [rsp+20h] [rbp-178h]
  std::exception *v218; // [rsp+20h] [rbp-178h]
  std::exception *v219; // [rsp+20h] [rbp-178h]
  std::exception *v220; // [rsp+20h] [rbp-178h]
  std::exception *v221; // [rsp+20h] [rbp-178h]
  std::exception *v222; // [rsp+20h] [rbp-178h]
  std::exception *v223; // [rsp+20h] [rbp-178h]
  const __m128i *v224; // [rsp+28h] [rbp-170h]
  __int64 v225; // [rsp+30h] [rbp-168h]
  __m128i *v226; // [rsp+38h] [rbp-160h]
  __m128i *v227; // [rsp+40h] [rbp-158h]
  signed __int64 v228; // [rsp+48h] [rbp-150h]
  int v229; // [rsp+50h] [rbp-148h]
  int v230; // [rsp+58h] [rbp-140h]
  unsigned __int8 v231; // [rsp+5Ch] [rbp-13Ch] BYREF
  unsigned __int8 v232[3]; // [rsp+5Dh] [rbp-13Bh] BYREF
  __int64 v233; // [rsp+60h] [rbp-138h]
  __int64 v234; // [rsp+68h] [rbp-130h]
  int v235; // [rsp+70h] [rbp-128h]
  __int64 v236; // [rsp+78h] [rbp-120h]
  __int64 v237; // [rsp+80h] [rbp-118h] BYREF
  __int64 v238; // [rsp+88h] [rbp-110h]
  __int64 v239; // [rsp+90h] [rbp-108h]
  char v240; // [rsp+98h] [rbp-100h]
  _QWORD *v241; // [rsp+A0h] [rbp-F8h]
  int v242; // [rsp+A8h] [rbp-F0h]
  _QWORD *v243; // [rsp+B0h] [rbp-E8h]
  int v244; // [rsp+B8h] [rbp-E0h]
  __int64 v245; // [rsp+C0h] [rbp-D8h]
  int v246; // [rsp+C8h] [rbp-D0h]
  int v247; // [rsp+D0h] [rbp-C8h]
  int v248; // [rsp+D8h] [rbp-C0h]
  __int64 v249; // [rsp+E0h] [rbp-B8h]
  __int64 v250[4]; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v251[4]; // [rsp+110h] [rbp-88h] BYREF
  _QWORD v252[2]; // [rsp+130h] [rbp-68h] BYREF
  _BYTE v253[24]; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v254; // [rsp+158h] [rbp-40h]

  v6 = 0;
  v7 = nullptr;
  v8 = nullptr;
  v254 = __readfsqword(0x28u);
  v192 = a1 + 40;
  v242 = 0;
  v214 = 0;
LABEL_2:
  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 32) )
    {
      case 1:
        v232[0] = 1;
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
          a2,
          v232);
        break;
      case 2:
        v231 = 0;
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
          a2,
          &v231);
        break;
      case 3:
        v31 = (_BYTE *)a2[2];
        if ( v31 == (_BYTE *)a2[1] )
        {
          v122 = *a2;
          v123 = *(_BYTE *)*a2;
          v124 = *(_QWORD *)(*a2 + 8);
          *(_BYTE *)v122 = 0;
          *(_QWORD *)(v122 + 8) = 0;
          LOBYTE(v237) = v123;
          v238 = v124;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v32 = *((_QWORD *)v31 - 1);
          if ( *(_BYTE *)v32 == 2 )
          {
            v105 = *(std::exception **)(v32 + 8);
            v106 = *((_QWORD **)v105 + 1);
            v107 = *((char **)v105 + 2);
            if ( v106 == (_QWORD *)v107 )
            {
              v132 = ((__int64)v106 - *(_QWORD *)v105) >> 4;
              if ( v132 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v133 = 1;
              v227 = (__m128i *)((char *)v106 - *(_QWORD *)v105);
              if ( v132 )
                v133 = ((__int64)v106 - *(_QWORD *)v105) >> 4;
              v226 = *(__m128i **)v105;
              v225 = *((_QWORD *)v105 + 2);
              v134 = v132 + v133;
              v224 = *((const __m128i **)v105 + 1);
              v218 = v105;
              if ( v134 > 0x7FFFFFFFFFFFFFFLL )
                v134 = 0x7FFFFFFFFFFFFFFLL;
              v203 = 16 * v134;
              v135 = operator new(16 * v134);
              v136 = v135;
              v137 = v218;
              *(__int64 *)((char *)v227->m128i_i64 + v135) = 0;
              *(__int64 *)((char *)&v227->m128i_i64[1] + v135) = 0;
              if ( v224 != v226 )
              {
                v138 = v226;
                v139 = v136;
                do
                {
                  v140 = _mm_loadu_si128(v138++);
                  v139 += 16;
                  *(__m128i *)(v139 - 16) = v140;
                }
                while ( v224 != v138 );
                v135 = v136 + (char *)v224 - (char *)v226;
              }
              v141 = v135 + 16;
              if ( v226 )
              {
                v225 = v136;
                v224 = (const __m128i *)v141;
                operator delete(v226, v107 - (char *)v226);
                v136 = v225;
                v141 = (__int64)v224;
                v137 = v218;
              }
              *(_QWORD *)v137 = v136;
              *((_QWORD *)v137 + 1) = v141;
              *((_QWORD *)v137 + 2) = v203 + v136;
            }
            else
            {
              *v106 = 0;
              v106[1] = 0;
              *((_QWORD *)v105 + 1) = v106 + 2;
            }
          }
          else
          {
            v33 = (_BYTE *)a2[4];
            v34 = *v33;
            v35 = *((_QWORD *)v33 + 1);
            *v33 = 0;
            *((_QWORD *)v33 + 1) = 0;
            LOBYTE(v237) = v34;
            v238 = v35;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        break;
      case 4:
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v36 = *(_QWORD *)(a1 + 192);
          if ( v36 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v36) = 46;
        }
        v37 = (_BYTE *)a2[2];
        if ( v37 == (_BYTE *)a2[1] )
        {
          LOBYTE(v237) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
          v128 = *a2;
          v129 = v238;
          v130 = *(_BYTE *)*a2;
          *(_BYTE *)v128 = v237;
          v131 = *(_QWORD *)(v128 + 8);
          *(_QWORD *)(v128 + 8) = v129;
          LOBYTE(v237) = v130;
          v238 = v131;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v38 = *((_QWORD *)v37 - 1);
          if ( *(_BYTE *)v38 == 2 )
          {
            v104 = *(_QWORD *)(v38 + 8);
            if ( *(_QWORD *)(v104 + 8) == *(_QWORD *)(v104 + 16) )
            {
              std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<std::string&>();
            }
            else
            {
              v203 = v104;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
              *(_QWORD *)(v203 + 8) += 16LL;
            }
          }
          else
          {
            LOBYTE(v235) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
            v39 = (_BYTE *)a2[4];
            v40 = v236;
            v41 = *v39;
            *v39 = v235;
            v42 = *((_QWORD *)v39 + 1);
            *((_QWORD *)v39 + 1) = v40;
            LOBYTE(v235) = v41;
            v236 = v42;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        break;
      case 5:
        v43 = *(_QWORD *)(a1 + 168);
        v44 = (_BYTE *)a2[2];
        if ( v44 == (_BYTE *)a2[1] )
        {
          v125 = *a2;
          v126 = *(_BYTE *)*a2;
          v127 = *(_QWORD *)(*a2 + 8);
          *(_BYTE *)v125 = 6;
          *(_QWORD *)(v125 + 8) = v43;
          LOBYTE(v237) = v126;
          v238 = v127;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v45 = *((_QWORD *)v44 - 1);
          if ( *(_BYTE *)v45 == 2 )
          {
            v102 = *(__m128i ***)(v45 + 8);
            v103 = v102[1];
            if ( v103 == v102[2] )
            {
              v151 = v103 - *v102;
              if ( v151 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v152 = 1;
              v228 = (char *)v103 - (char *)*v102;
              if ( v151 )
                v152 = v103 - *v102;
              v227 = *v102;
              v226 = v102[2];
              v153 = v151 + v152;
              v225 = (__int64)v102[1];
              v224 = (const __m128i *)v102;
              if ( v153 > 0x7FFFFFFFFFFFFFFLL )
                v153 = 0x7FFFFFFFFFFFFFFLL;
              v219 = *(std::exception **)(a1 + 168);
              v203 = 16 * v153;
              v154 = operator new(16 * v153);
              v155 = (std::exception *)v224;
              *(_BYTE *)(v154 + v228) = 6;
              *(_QWORD *)(v154 + v228 + 8) = v219;
              if ( (__m128i *)v225 == v227 )
              {
                v158 = v154;
              }
              else
              {
                v156 = v154;
                v157 = v227;
                v158 = v154 + v225 - (_QWORD)v227;
                do
                {
                  v159 = _mm_loadu_si128(v157);
                  v156 += 16;
                  ++v157;
                  *(__m128i *)(v156 - 16) = v159;
                }
                while ( v158 != v156 );
              }
              v160 = v158 + 16;
              if ( v227 )
              {
                v225 = v154;
                LODWORD(v224) = v158 + 16;
                v220 = v155;
                operator delete(v227, (char *)v226 - (char *)v227);
                v154 = v225;
                v160 = v158 + 16;
                v155 = v220;
              }
              *(_QWORD *)v155 = v154;
              *((_QWORD *)v155 + 1) = v160;
              *((_QWORD *)v155 + 2) = v203 + v154;
            }
            else
            {
              v103->m128i_i8[0] = 6;
              v103->m128i_i64[1] = v43;
              v102[1] = v103 + 1;
            }
          }
          else
          {
            v46 = (_BYTE *)a2[4];
            v47 = *v46;
            v48 = *((_QWORD *)v46 + 1);
            *v46 = 6;
            *((_QWORD *)v46 + 1) = v43;
            LOBYTE(v237) = v47;
            v238 = v48;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        break;
      case 6:
        v49 = *(_QWORD *)(a1 + 160);
        v50 = (_BYTE *)a2[2];
        if ( v50 == (_BYTE *)a2[1] )
        {
          v119 = *a2;
          v120 = *(_BYTE *)*a2;
          v121 = *(_QWORD *)(*a2 + 8);
          *(_BYTE *)v119 = 5;
          *(_QWORD *)(v119 + 8) = v49;
          LOBYTE(v237) = v120;
          v238 = v121;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v51 = *((_QWORD *)v50 - 1);
          if ( *(_BYTE *)v51 == 2 )
          {
            v100 = *(__m128i ***)(v51 + 8);
            v101 = v100[1];
            if ( v101 == v100[2] )
            {
              v161 = v101 - *v100;
              if ( v161 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v162 = 1;
              v228 = (char *)v101 - (char *)*v100;
              if ( v161 )
                v162 = v101 - *v100;
              v227 = *v100;
              v226 = v100[2];
              v163 = v161 + v162;
              v225 = (__int64)v100[1];
              v224 = (const __m128i *)v100;
              if ( v163 > 0x7FFFFFFFFFFFFFFLL )
                v163 = 0x7FFFFFFFFFFFFFFLL;
              v221 = *(std::exception **)(a1 + 160);
              v203 = 16 * v163;
              v164 = operator new(16 * v163);
              v165 = (std::exception *)v224;
              *(_BYTE *)(v164 + v228) = 5;
              *(_QWORD *)(v164 + v228 + 8) = v221;
              if ( (__m128i *)v225 == v227 )
              {
                v169 = v164;
              }
              else
              {
                v166 = v227;
                v167 = v164;
                do
                {
                  v168 = _mm_loadu_si128(v166++);
                  v167 += 16;
                  *(__m128i *)(v167 - 16) = v168;
                }
                while ( (const __m128i *)v225 != v166 );
                v169 = v164 + v225 - (_QWORD)v227;
              }
              v170 = v169 + 16;
              if ( v227 )
              {
                v225 = v164;
                LODWORD(v224) = v169 + 16;
                v222 = v165;
                operator delete(v227, (char *)v226 - (char *)v227);
                v164 = v225;
                v170 = v169 + 16;
                v165 = v222;
              }
              *(_QWORD *)v165 = v164;
              *((_QWORD *)v165 + 1) = v170;
              *((_QWORD *)v165 + 2) = v203 + v164;
            }
            else
            {
              v101->m128i_i8[0] = 5;
              v101->m128i_i64[1] = v49;
              v100[1] = v101 + 1;
            }
          }
          else
          {
            v52 = (_BYTE *)a2[4];
            v53 = *v52;
            v54 = *((_QWORD *)v52 + 1);
            *v52 = 5;
            *((_QWORD *)v52 + 1) = v49;
            LOBYTE(v237) = v53;
            v238 = v54;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        break;
      case 7:
        v55 = *(double *)(a1 + 176);
        if ( fabs(v55) > 1.797693134862316e308 )
        {
          LOBYTE(v237) = 39;
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[26],std::string,char>();
          nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
            (__int64)v252,
            406,
            v251,
            v113,
            v114,
            v115,
            v181,
            v192,
            (int)v250,
            v214,
            (int)v252,
            (char)v224,
            v225,
            (int)v226,
            (int)v227,
            v228,
            v229,
            v230,
            v233,
            v234,
            v235,
            v236,
            v237,
            v238,
            v239);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::out_of_range>((__int64)v215);
LABEL_4:
          std::string::_M_dispose();
          v252[0] = off_4444D0;
          std::runtime_error::~runtime_error((std::runtime_error *)v253);
          std::exception::~exception(v215);
          std::string::_M_dispose();
          std::string::_M_dispose();
LABEL_5:
          v14 = 0;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v56 = *(_QWORD *)(a1 + 192);
          if ( v56 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v56) = 46;
        }
        v57 = (_BYTE *)a2[2];
        if ( v57 == (_BYTE *)a2[1] )
        {
          v142 = *a2;
          v143 = *(_BYTE *)*a2;
          v144 = *(_QWORD *)(*a2 + 8);
          *(_BYTE *)v142 = 7;
          *(double *)(v142 + 8) = v55;
          LOBYTE(v237) = v143;
          v238 = v144;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v58 = *((_QWORD *)v57 - 1);
          if ( *(_BYTE *)v58 == 2 )
          {
            v108 = *(__m128i ***)(v58 + 8);
            v109 = v108[1];
            if ( v109 == v108[2] )
            {
              v171 = v109 - *v108;
              if ( v171 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v172 = 1;
              v228 = (char *)v109 - (char *)*v108;
              if ( v171 )
                v172 = v109 - *v108;
              v227 = *v108;
              v226 = v108[2];
              v173 = v171 + v172;
              v225 = (__int64)v108[1];
              v224 = (const __m128i *)v108;
              if ( v173 > 0x7FFFFFFFFFFFFFFLL )
                v173 = 0x7FFFFFFFFFFFFFFLL;
              v203 = 16 * v173;
              v174 = operator new(16 * v173);
              v175 = (std::exception *)v224;
              *(_BYTE *)(v174 + v228) = 7;
              *(double *)(v174 + v228 + 8) = v55;
              if ( (__m128i *)v225 == v227 )
              {
                v179 = v174;
              }
              else
              {
                v176 = v227;
                v177 = v174;
                do
                {
                  v178 = _mm_loadu_si128(v176++);
                  v177 += 16;
                  *(__m128i *)(v177 - 16) = v178;
                }
                while ( (const __m128i *)v225 != v176 );
                v179 = v174 + v225 - (_QWORD)v227;
              }
              v180 = v179 + 16;
              if ( v227 )
              {
                v225 = v174;
                LODWORD(v224) = v179 + 16;
                v223 = v175;
                operator delete(v227, (char *)v226 - (char *)v227);
                v174 = v225;
                v180 = v179 + 16;
                v175 = v223;
              }
              *(_QWORD *)v175 = v174;
              *((_QWORD *)v175 + 1) = v180;
              *((_QWORD *)v175 + 2) = v203 + v174;
            }
            else
            {
              v109->m128i_i8[0] = 7;
              *(double *)&v109->m128i_i64[1] = v55;
              v108[1] = v109 + 1;
            }
          }
          else
          {
            v59 = (_BYTE *)a2[4];
            v60 = *v59;
            v61 = *((_QWORD *)v59 + 1);
            *v59 = 7;
            *((double *)v59 + 1) = v55;
            LOBYTE(v237) = v60;
            v238 = v61;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        break;
      case 8:
        v232[2] = 2;
        v234 = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v62 = (__int64 *)a2[2];
        if ( v62 == (__int64 *)a2[3] )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>();
        }
        else
        {
          *v62 = v234;
          a2[2] = (__int64)(v62 + 1);
        }
        v63 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v63;
        if ( v63 == 10 )
          goto LABEL_50;
        v241 = v8;
        v243 = v7;
        v244 = v6;
        v245 = v214;
        std::vector<bool>::push_back();
        v8 = v241;
        v7 = v243;
        v6 = v244;
        v214 = v245;
        continue;
      case 9:
        v232[1] = 1;
        v233 = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v64 = (__int64 *)a2[2];
        if ( v64 == (__int64 *)a2[3] )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>();
        }
        else
        {
          *v64 = v233;
          a2[2] = (__int64)(v64 + 1);
        }
        v225 = a1 + 40;
        v65 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v65;
        if ( v65 == 11 )
        {
LABEL_50:
          a2[2] -= 8;
          goto LABEL_10;
        }
        if ( v65 != 4 )
        {
          std::string::basic_string<std::allocator<char>>(
            v250,
            "object key",
            v66,
            v67,
            v68,
            v69,
            v181,
            v192,
            (__int64)v250);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v145 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v252,
            101,
            &v237,
            v251,
            v146,
            v147,
            v190,
            v201,
            v212,
            v214,
            (int)v252,
            (int)v224,
            v225,
            (int)v226,
            (int)v227,
            v228,
            v229,
            v230,
            v233,
            v234,
            v235,
            v236,
            v145.m128i_i32[0],
            v145.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v240,
            (int)v241,
            v242,
            (int)v243,
            v244,
            v245,
            v246,
            v247,
            v248,
            v249);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
          goto LABEL_4;
        }
        if ( *(_DWORD *)(a1 + 184) != 46 )
        {
          v70 = *(_QWORD *)(a1 + 192);
          if ( v70 != -1 )
            *(_BYTE *)(*(_QWORD *)(a1 + 120) + v70) = 46;
        }
        a2[4] = std::map<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::operator[]();
        v71 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        *(_DWORD *)(a1 + 32) = v71;
        if ( v71 != 12 )
        {
          std::string::basic_string<std::allocator<char>>(
            v250,
            "object separator",
            v72,
            v73,
            v74,
            v75,
            v181,
            v192,
            (__int64)v250);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v148 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v252,
            101,
            &v237,
            v251,
            v149,
            v150,
            v191,
            v202,
            v213,
            v214,
            (int)v252,
            (int)v224,
            v225,
            (int)v226,
            (int)v227,
            v228,
            v229,
            v230,
            v233,
            v234,
            v235,
            v236,
            v148.m128i_i32[0],
            v148.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v240,
            (int)v241,
            v242,
            (int)v243,
            v244,
            v245,
            v246,
            v247,
            v248,
            v249);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
          goto LABEL_4;
        }
        v241 = v8;
        v243 = v7;
        v244 = v6;
        v245 = v214;
        std::vector<bool>::push_back();
        v8 = v241;
        v7 = v243;
        v214 = v245;
        v6 = v244;
        v76 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
        goto LABEL_60;
      case 0xE:
        std::string::basic_string<std::allocator<char>>(v250, "value", a3, a4, a5, a6, v181, v192, (__int64)v250);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v77 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v252,
          101,
          &v237,
          v251,
          v78,
          v79,
          v184,
          v195,
          v206,
          v214,
          (int)v252,
          (int)v224,
          v225,
          (int)v226,
          (int)v227,
          v228,
          v229,
          v230,
          v233,
          v234,
          v235,
          v236,
          v77.m128i_i32[0],
          v77.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v240,
          (int)v241,
          v242,
          (int)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
        goto LABEL_4;
      case 0xF:
        if ( *(_QWORD *)(a1 + 72) != 1 )
        {
          std::string::basic_string<std::allocator<char>>(v250, "value", a3, a4, a5, a6, v181, v192, (__int64)v250);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
          v80 = _mm_loadu_si128((const __m128i *)(a1 + 72));
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)v252,
            101,
            &v237,
            v251,
            v81,
            v82,
            v185,
            v196,
            v207,
            v214,
            (int)v252,
            (int)v224,
            v225,
            (int)v226,
            (int)v227,
            v228,
            v229,
            v230,
            v233,
            v234,
            v235,
            v236,
            v80.m128i_i32[0],
            v80.m128i_i32[2],
            *(_QWORD *)(a1 + 88),
            v240,
            (int)v241,
            v242,
            (int)v243,
            v244,
            v245,
            v246,
            v247,
            v248,
            v249);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
          goto LABEL_4;
        }
        std::string::basic_string<std::allocator<char>>(
          v251,
          "attempting to parse an empty input; check that your input string or stream contains the expected JSON",
          a3,
          a4,
          a5,
          a6,
          v181,
          v192,
          v203);
        v116 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v252,
          101,
          &v237,
          v251,
          v117,
          v118,
          v189,
          v200,
          v211,
          v214,
          (int)v252,
          (int)v224,
          v225,
          (int)v226,
          (int)v227,
          v228,
          v229,
          v230,
          v233,
          v234,
          v235,
          v236,
          v116.m128i_i32[0],
          v116.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v240,
          (int)v241,
          v242,
          (int)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v217);
        std::string::_M_dispose();
        v252[0] = off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v253);
        std::exception::~exception(v217);
        std::string::_M_dispose();
        goto LABEL_5;
      default:
        std::string::basic_string<std::allocator<char>>(v250, "value", a3, a4, a5, a6, v181, v192, (__int64)v250);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v11 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v252,
          101,
          &v237,
          v251,
          v12,
          v13,
          v182,
          v193,
          v204,
          v214,
          (int)v252,
          (int)v224,
          v225,
          (int)v226,
          (int)v227,
          v228,
          v229,
          v230,
          v233,
          v234,
          v235,
          v236,
          v11.m128i_i32[0],
          v11.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v240,
          (int)v241,
          v242,
          (int)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
        goto LABEL_4;
    }
    break;
  }
LABEL_10:
  if ( v8 != v7 )
  {
LABEL_11:
    if ( v6 )
    {
      v16 = v7;
      v17 = 1LL << ((unsigned __int8)v6 - 1);
    }
    else
    {
      v17 = 0x8000000000000000LL;
      v16 = v7 - 1;
    }
    if ( (*v16 & v17) != 0 )
      goto LABEL_14;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( !v6 )
    {
      v14 = 1;
      goto LABEL_6;
    }
    if ( (*v8 & (1LL << ((unsigned __int8)v6 - 1))) != 0 )
    {
LABEL_14:
      v18 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
      *(_DWORD *)(a1 + 32) = v18;
      if ( v18 != 13 )
      {
        if ( v18 == 10 )
          goto LABEL_16;
        std::string::basic_string<std::allocator<char>>(v250, "array", v19, v20, v21, v22, v181, v192, (__int64)v250);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
        v94 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)v252,
          101,
          &v237,
          v251,
          v95,
          v96,
          v186,
          v197,
          v208,
          v214,
          (int)v252,
          (int)v224,
          v225,
          (int)v226,
          (int)v227,
          v228,
          v229,
          v230,
          v233,
          v234,
          v235,
          v236,
          v94.m128i_i32[0],
          v94.m128i_i32[2],
          *(_QWORD *)(a1 + 88),
          v240,
          (int)v241,
          v242,
          (int)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
        goto LABEL_4;
      }
LABEL_73:
      v76 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
LABEL_60:
      *(_DWORD *)(a1 + 32) = v76;
      goto LABEL_2;
    }
LABEL_20:
    v23 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
    *(_DWORD *)(a1 + 32) = v23;
    if ( v23 == 13 )
      break;
    if ( v23 != 11 )
    {
      std::string::basic_string<std::allocator<char>>(v250, "object", v24, v25, v26, v27, v181, v192, (__int64)v250);
      nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
      v28 = _mm_loadu_si128((const __m128i *)(a1 + 72));
      nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        (__int64)v252,
        101,
        &v237,
        v251,
        v29,
        v30,
        v183,
        v194,
        v205,
        v214,
        (int)v252,
        (int)v224,
        v225,
        (int)v226,
        (int)v227,
        v228,
        v229,
        v230,
        v233,
        v234,
        v235,
        v236,
        v28.m128i_i32[0],
        v28.m128i_i32[2],
        *(_QWORD *)(a1 + 88),
        v240,
        (int)v241,
        v242,
        (int)v243,
        v244,
        v245,
        v246,
        v247,
        v248,
        v249);
      nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
      *((_BYTE *)a2 + 40) = 1;
      v14 = *((unsigned __int8 *)a2 + 41);
      if ( (_BYTE)v14 )
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v216);
      goto LABEL_23;
    }
LABEL_16:
    a2[2] -= 8;
    if ( !v6 )
    {
      --v7;
      v6 = 63;
      goto LABEL_10;
    }
    --v6;
    if ( v8 != v7 )
      goto LABEL_11;
  }
  v83 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
  *(_DWORD *)(a1 + 32) = v83;
  if ( v83 != 4 )
  {
    std::string::basic_string<std::allocator<char>>(v250, "object key", v84, v85, v86, v87, v181, v192, (__int64)v250);
    nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
    v110 = _mm_loadu_si128((const __m128i *)(a1 + 72));
    nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
      (__int64)v252,
      101,
      &v237,
      v251,
      v111,
      v112,
      v188,
      v199,
      v210,
      v214,
      (int)v252,
      (int)v224,
      v225,
      (int)v226,
      (int)v227,
      v228,
      v229,
      v230,
      v233,
      v234,
      v235,
      v236,
      v110.m128i_i32[0],
      v110.m128i_i32[2],
      *(_QWORD *)(a1 + 88),
      v240,
      (int)v241,
      v242,
      (int)v243,
      v244,
      v245,
      v246,
      v247,
      v248,
      v249);
    nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
    *((_BYTE *)a2 + 40) = 1;
    if ( *((_BYTE *)a2 + 41) )
      nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v215);
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 184) != 46 )
  {
    v88 = *(_QWORD *)(a1 + 192);
    if ( v88 != -1 )
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + v88) = 46;
  }
  a2[4] = std::map<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::operator[]();
  v89 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
  *(_DWORD *)(a1 + 32) = v89;
  if ( v89 == 12 )
    goto LABEL_73;
  std::string::basic_string<std::allocator<char>>(
    v250,
    "object separator",
    v90,
    v91,
    v92,
    v93,
    v181,
    v192,
    (__int64)v250);
  nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
  v97 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
    (__int64)v252,
    101,
    &v237,
    v251,
    v98,
    v99,
    v187,
    v198,
    v209,
    v214,
    (int)v252,
    (int)v224,
    v225,
    (int)v226,
    (int)v227,
    v228,
    v229,
    v230,
    v233,
    v234,
    v235,
    v236,
    v97.m128i_i32[0],
    v97.m128i_i32[2],
    *(_QWORD *)(a1 + 88),
    v240,
    (int)v241,
    v242,
    (int)v243,
    v244,
    v245,
    v246,
    v247,
    v248,
    v249);
  nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
  *((_BYTE *)a2 + 40) = 1;
  v14 = *((unsigned __int8 *)a2 + 41);
  if ( (_BYTE)v14 )
    nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v216);
LABEL_23:
  std::string::_M_dispose();
  v252[0] = off_4444D0;
  std::runtime_error::~runtime_error((std::runtime_error *)v253);
  std::exception::~exception(v216);
  std::string::_M_dispose();
  std::string::_M_dispose();
LABEL_6:
  if ( v8 )
    operator delete(v8, v214 - (_QWORD)v8);
  return v14;
}

