__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>>(
        __int8 *a1,
        __int8 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  _QWORD *v7; // r12
  __int8 *v8; // rbp
  __m128i v10; // xmm0
  unsigned int v11; // ebx
  __int8 *v13; // rax
  __int64 v14; // rax
  __int8 *v15; // rax
  __int8 v16; // si
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30; // xmm0
  __int8 *v31; // rax
  __int64 v32; // rax
  __int8 *v33; // rax
  __int8 v34; // si
  __int64 v35; // rdx
  __int8 *v36; // rax
  __int64 v37; // rax
  __int8 *v38; // rax
  __int8 v39; // si
  __int64 v40; // rdx
  __int64 v41; // rax
  __int8 *v42; // rax
  __int64 v43; // rax
  __int8 *v44; // rax
  __int64 v45; // rcx
  char v46; // si
  __int64 v47; // rdx
  __int64 v48; // r13
  __int8 *v49; // rax
  __int64 v50; // rax
  __int8 *v51; // rax
  __int8 v52; // si
  __int64 v53; // rdx
  __int64 v54; // r13
  __int8 *v55; // rax
  __int64 v56; // rax
  __int8 *v57; // rax
  __int8 v58; // si
  __int64 v59; // rdx
  double v60; // xmm0_8
  __int64 v61; // rax
  __int8 *v62; // rax
  __int64 v63; // rax
  __int8 *v64; // rax
  __int8 v65; // si
  __int64 v66; // rdx
  __int64 *v67; // rax
  int v68; // eax
  __int64 *v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __int64 *v84; // r10
  __int64 *v85; // r9
  __m128i *v86; // rcx
  unsigned __int64 v87; // r13
  size_t v88; // rdx
  signed __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // r14
  size_t v102; // rcx
  const void *v103; // rdi
  size_t v104; // rbp
  size_t v105; // r13
  const __m128i *v106; // rbx
  const __m128i *v107; // r14
  size_t v108; // rdx
  signed __int64 v109; // rax
  __m128i v110; // xmm0
  __m128i v111; // xmm0
  __int64 *v112; // r14
  __int64 v113; // r8
  __int64 v114; // r13
  __int64 v115; // r8
  __m128i **v116; // r14
  char *v117; // r13
  __m128i *v118; // rsi
  __m128i *v119; // r13
  __m128i **v120; // r14
  __m128i *v121; // r13
  __m128i *v122; // r13
  char *v123; // r13
  __m128i *v124; // r13
  __m128i *v125; // r13
  double *m128i_i64; // r13
  __m128i v127; // xmm0
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  _BYTE *v132; // rsi
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rbp
  __m128i v135; // xmm0
  __int8 *v136; // rax
  __int8 v137; // si
  __int64 v138; // rdx
  __int8 *v139; // rax
  __int8 v140; // si
  __int64 v141; // rdx
  __int8 *v142; // rax
  __int64 v143; // rcx
  __int8 v144; // si
  __int64 v145; // rdx
  __int8 *v146; // rax
  __int8 v147; // si
  __int64 v148; // rdx
  __int8 *v149; // rax
  __int8 v150; // si
  __int64 v151; // rdx
  __int8 *v152; // rax
  __int8 v153; // si
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rax
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  const __m128i *v160; // r9
  __int64 v161; // rdi
  __m128i v162; // xmm0
  double *v163; // rax
  __int8 v164; // si
  __int64 v165; // rdx
  __m128i v166; // xmm0
  __m128i v167; // xmm0
  __int64 v168; // rdi
  __int64 v169; // rax
  unsigned __int64 v170; // rax
  __int64 v171; // rax
  const __m128i *v172; // r8
  __m128i *v173; // rcx
  __m128i *v174; // rdx
  const __m128i *v175; // rsi
  __int64 v176; // rdi
  __m128i v177; // xmm0
  __int64 v178; // rsi
  __int64 v179; // r13
  __int64 v180; // rdi
  __int64 v181; // rax
  unsigned __int64 v182; // rax
  const __m128i *v183; // rsi
  __int64 v184; // rdi
  __m128i v185; // xmm0
  __int64 v186; // rdi
  __int64 v187; // rax
  unsigned __int64 v188; // rax
  __int64 v189; // rax
  __m128i *v190; // rcx
  __int64 v191; // r9
  const __m128i *v192; // rdx
  const __m128i *v193; // rax
  __int64 v194; // rsi
  __m128i v195; // xmm0
  __int64 v196; // rax
  __m128i *v197; // r13
  __int64 v198; // rdi
  __int64 v199; // rax
  unsigned __int64 v200; // rax
  __int64 v201; // rax
  const __m128i *v202; // rdi
  __int64 v203; // rsi
  __m128i v204; // xmm0
  __int64 v205; // rdi
  __int64 v206; // rax
  unsigned __int64 v207; // rax
  const __m128i *v208; // rsi
  __int64 v209; // rdi
  __m128i v210; // xmm0
  __int64 v211; // r13
  _QWORD *v212; // [rsp+0h] [rbp-198h]
  int v213; // [rsp+8h] [rbp-190h]
  int v214; // [rsp+8h] [rbp-190h]
  __int64 v215; // [rsp+10h] [rbp-188h]
  std::exception *s1; // [rsp+18h] [rbp-180h]
  void *s1a; // [rsp+18h] [rbp-180h]
  char *s1b; // [rsp+18h] [rbp-180h]
  char *s1c; // [rsp+18h] [rbp-180h]
  char *s1d; // [rsp+18h] [rbp-180h]
  _BYTE *s1e; // [rsp+18h] [rbp-180h]
  const __m128i *v222; // [rsp+20h] [rbp-178h]
  __m128i *v223; // [rsp+28h] [rbp-170h]
  __m128i *v224; // [rsp+30h] [rbp-168h]
  __int8 *v225; // [rsp+38h] [rbp-160h]
  __int8 **v226; // [rsp+40h] [rbp-158h]
  _BYTE **v227; // [rsp+48h] [rbp-150h]
  int v228; // [rsp+50h] [rbp-148h]
  __int64 v229; // [rsp+58h] [rbp-140h]
  __int64 v230; // [rsp+60h] [rbp-138h]
  _BYTE **v231; // [rsp+68h] [rbp-130h] BYREF
  int v232; // [rsp+70h] [rbp-128h]
  __int64 v233; // [rsp+78h] [rbp-120h]
  __m128i v234; // [rsp+80h] [rbp-118h] BYREF
  __int64 v235; // [rsp+90h] [rbp-108h]
  int v236; // [rsp+98h] [rbp-100h]
  _QWORD *v237; // [rsp+A0h] [rbp-F8h]
  int v238; // [rsp+A8h] [rbp-F0h]
  _QWORD *v239; // [rsp+B0h] [rbp-E8h]
  int v240; // [rsp+B8h] [rbp-E0h]
  __int64 v241; // [rsp+C0h] [rbp-D8h]
  int v242; // [rsp+C8h] [rbp-D0h]
  int v243; // [rsp+D0h] [rbp-C8h]
  int v244; // [rsp+D8h] [rbp-C0h]
  int v245; // [rsp+E0h] [rbp-B8h]
  int v246; // [rsp+E8h] [rbp-B0h]
  __int64 v247; // [rsp+F0h] [rbp-A8h] BYREF
  unsigned __int64 v248; // [rsp+F8h] [rbp-A0h]
  int v249; // [rsp+100h] [rbp-98h]
  int v250; // [rsp+108h] [rbp-90h]
  unsigned __int64 *v251; // [rsp+110h] [rbp-88h] BYREF
  char *v252; // [rsp+118h] [rbp-80h]
  unsigned __int64 v253; // [rsp+120h] [rbp-78h] BYREF
  int v254; // [rsp+128h] [rbp-70h]
  void (__fastcall **v255)(nlohmann::json_abi_v3_12_0::detail::exception *__hidden); // [rsp+130h] [rbp-68h] BYREF
  int v256; // [rsp+138h] [rbp-60h]
  int v257[6]; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v258; // [rsp+158h] [rbp-40h]
  int v259; // [rsp+160h] [rbp-38h]
  int v260; // [rsp+168h] [rbp-30h]
  int v261; // [rsp+170h] [rbp-28h]
  int v262; // [rsp+178h] [rbp-20h]
  __int64 v263; // [rsp+180h] [rbp-18h]

  v6 = 0;
  v7 = nullptr;
  v8 = a1;
  v258 = __readfsqword(0x28u);
  v212 = nullptr;
  v238 = 0;
  v215 = 0;
  v213 = (_DWORD)a1 + 40;
  while ( 2 )
  {
    switch ( *((_DWORD *)v8 + 8) )
    {
      case 1:
        v13 = a2[2];
        if ( v13 == a2[1] )
        {
          v152 = *a2;
          v153 = **a2;
          v154 = *((_QWORD *)*a2 + 1);
          *v152 = 4;
          *((_QWORD *)v152 + 1) = 1;
          v234.m128i_i8[0] = v153;
          v234.m128i_i64[1] = v154;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v14 = *((_QWORD *)v13 - 1);
        if ( *(_BYTE *)v14 != 2 )
        {
          v15 = a2[4];
          v16 = *v15;
          v17 = *((_QWORD *)v15 + 1);
          *v15 = 4;
          *((_QWORD *)v15 + 1) = 1;
          v234.m128i_i8[0] = v16;
          v234.m128i_i64[1] = v17;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v120 = *(__m128i ***)(v14 + 8);
        v123 = (char *)v120[1];
        if ( v123 != (char *)v120[2] )
        {
          *(_QWORD *)v123 = 4;
          v124 = (__m128i *)(v123 + 16);
          v124[-1].m128i_i64[1] = 1;
          v120[1] = v124;
          goto LABEL_12;
        }
        v198 = (v123 - (char *)*v120) >> 4;
        if ( v198 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v199 = 1;
        v224 = (__m128i *)(v123 - (char *)*v120);
        if ( v198 )
          v199 = (v123 - (char *)*v120) >> 4;
        v223 = *v120;
        v222 = v120[2];
        v200 = v198 + v199;
        if ( v200 > 0x7FFFFFFFFFFFFFFLL )
          v200 = 0x7FFFFFFFFFFFFFFLL;
        s1d = (char *)(16 * v200);
        v201 = operator new(16 * v200);
        v190 = v223;
        v191 = v201;
        v192 = v222;
        *(__int64 *)((char *)v224->m128i_i64 + v201) = 4;
        *(__int64 *)((char *)&v224->m128i_i64[1] + v201) = 1;
        if ( v123 == (char *)v223 )
          goto LABEL_212;
        v202 = v223;
        v203 = v201;
        v196 = v201 + v123 - (char *)v223;
        do
        {
          v204 = _mm_loadu_si128(v202);
          v203 += 16;
          ++v202;
          *(__m128i *)(v203 - 16) = v204;
        }
        while ( v196 != v203 );
        goto LABEL_188;
      case 2:
        v31 = a2[2];
        if ( v31 == a2[1] )
        {
          v149 = *a2;
          v150 = **a2;
          v151 = *((_QWORD *)*a2 + 1);
          *v149 = 4;
          *((_QWORD *)v149 + 1) = 0;
          v234.m128i_i8[0] = v150;
          v234.m128i_i64[1] = v151;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v32 = *((_QWORD *)v31 - 1);
          if ( *(_BYTE *)v32 == 2 )
          {
            v120 = *(__m128i ***)(v32 + 8);
            v121 = v120[1];
            if ( v121 == v120[2] )
            {
              v186 = v121 - *v120;
              if ( v186 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v187 = 1;
              v224 = (__m128i *)((char *)v121 - (char *)*v120);
              if ( v186 )
                v187 = v121 - *v120;
              v223 = *v120;
              v222 = v120[2];
              v188 = v186 + v187;
              if ( v188 > 0x7FFFFFFFFFFFFFFLL )
                v188 = 0x7FFFFFFFFFFFFFFLL;
              s1d = (char *)(16 * v188);
              v189 = operator new(16 * v188);
              v190 = v223;
              v191 = v189;
              v192 = v222;
              *(__int64 *)((char *)v224->m128i_i64 + v189) = 4;
              *(__int64 *)((char *)&v224->m128i_i64[1] + v189) = 0;
              if ( v121 == v223 )
              {
LABEL_212:
                v196 = v191;
              }
              else
              {
                v193 = v223;
                v194 = v191;
                do
                {
                  v195 = _mm_loadu_si128(v193++);
                  v194 += 16;
                  *(__m128i *)(v194 - 16) = v195;
                }
                while ( v121 != v193 );
                v196 = v191 + (char *)v121 - (char *)v223;
              }
LABEL_188:
              v197 = (__m128i *)(v196 + 16);
              if ( v190 )
              {
                v222 = (const __m128i *)v191;
                operator delete(v190, (char *)v192 - (char *)v190);
                v191 = (__int64)v222;
              }
              *v120 = (__m128i *)v191;
              v120[1] = v197;
              v120[2] = (__m128i *)&s1d[v191];
            }
            else
            {
              v121->m128i_i64[0] = 4;
              v122 = v121 + 1;
              v122[-1].m128i_i64[1] = 0;
              v120[1] = v122;
            }
          }
          else
          {
            v33 = a2[4];
            v34 = *v33;
            v35 = *((_QWORD *)v33 + 1);
            *v33 = 4;
            *((_QWORD *)v33 + 1) = 0;
            v234.m128i_i8[0] = v34;
            v234.m128i_i64[1] = v35;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        goto LABEL_12;
      case 3:
        v36 = a2[2];
        if ( v36 == a2[1] )
        {
          v146 = *a2;
          v147 = **a2;
          v148 = *((_QWORD *)*a2 + 1);
          *v146 = 0;
          *((_QWORD *)v146 + 1) = 0;
          v234.m128i_i8[0] = v147;
          v234.m128i_i64[1] = v148;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v37 = *((_QWORD *)v36 - 1);
          if ( *(_BYTE *)v37 == 2 )
          {
            v116 = *(__m128i ***)(v37 + 8);
            v117 = (char *)v116[1];
            v118 = v116[2];
            if ( v117 == (char *)v118 )
            {
              v155 = (v117 - (char *)*v116) >> 4;
              if ( v155 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v156 = 1;
              v224 = (__m128i *)(v117 - (char *)*v116);
              if ( v155 )
                v156 = (v117 - (char *)*v116) >> 4;
              v223 = *v116;
              LODWORD(v222) = (unsigned int)v116[2];
              v157 = v155 + v156;
              if ( v157 > 0x7FFFFFFFFFFFFFFLL )
                v157 = 0x7FFFFFFFFFFFFFFLL;
              s1b = (char *)(16 * v157);
              v158 = operator new(16 * v157);
              v159 = v158;
              *(__int64 *)((char *)v224->m128i_i64 + v158) = 0;
              *(__int64 *)((char *)&v224->m128i_i64[1] + v158) = 0;
              if ( v117 == (char *)v223 )
              {
                v161 = v158;
              }
              else
              {
                v160 = v223;
                v161 = v158 + v117 - (char *)v223;
                do
                {
                  v162 = _mm_loadu_si128(v160);
                  v158 += 16;
                  ++v160;
                  *(__m128i *)(v158 - 16) = v162;
                }
                while ( v161 != v158 );
              }
              if ( v223 )
              {
                v222 = (const __m128i *)v159;
                operator delete(v223, (char *)v118 - (char *)v223);
                v159 = (__int64)v222;
              }
              *v116 = (__m128i *)v159;
              v116[1] = (__m128i *)(v161 + 16);
              v116[2] = (__m128i *)&s1b[v159];
            }
            else
            {
              *(_QWORD *)v117 = 0;
              v119 = (__m128i *)(v117 + 16);
              v119[-1].m128i_i64[1] = 0;
              v116[1] = v119;
            }
          }
          else
          {
            v38 = a2[4];
            v39 = *v38;
            v40 = *((_QWORD *)v38 + 1);
            *v38 = 0;
            *((_QWORD *)v38 + 1) = 0;
            v234.m128i_i8[0] = v39;
            v234.m128i_i64[1] = v40;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        goto LABEL_12;
      case 4:
        if ( *((_DWORD *)v8 + 46) != 46 )
        {
          v41 = *((_QWORD *)v8 + 24);
          if ( v41 != -1 )
            *(_BYTE *)(*((_QWORD *)v8 + 15) + v41) = 46;
        }
        v42 = a2[2];
        if ( v42 == a2[1] )
        {
          v234.m128i_i8[0] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
          v142 = *a2;
          v143 = v234.m128i_i64[1];
          v144 = **a2;
          *v142 = v234.m128i_i8[0];
          v145 = *((_QWORD *)v142 + 1);
          *((_QWORD *)v142 + 1) = v143;
          v234.m128i_i8[0] = v144;
          v234.m128i_i64[1] = v145;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v43 = *((_QWORD *)v42 - 1);
          if ( *(_BYTE *)v43 == 2 )
          {
            v114 = *(_QWORD *)(v43 + 8);
            if ( *(_QWORD *)(v114 + 8) == *(_QWORD *)(v114 + 16) )
            {
              std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<std::string&>();
            }
            else
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
              *(_QWORD *)(v114 + 8) += 16LL;
            }
          }
          else
          {
            LOBYTE(v232) = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
            v44 = a2[4];
            v45 = v233;
            v46 = *v44;
            *v44 = v232;
            v47 = *((_QWORD *)v44 + 1);
            *((_QWORD *)v44 + 1) = v45;
            LOBYTE(v232) = v46;
            v233 = v47;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
        goto LABEL_12;
      case 5:
        v48 = *((_QWORD *)v8 + 21);
        v49 = a2[2];
        if ( v49 == a2[1] )
        {
          v139 = *a2;
          v140 = **a2;
          v141 = *((_QWORD *)*a2 + 1);
          *v139 = 6;
          *((_QWORD *)v139 + 1) = v48;
          v234.m128i_i8[0] = v140;
          v234.m128i_i64[1] = v141;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v50 = *((_QWORD *)v49 - 1);
        if ( *(_BYTE *)v50 != 2 )
        {
          v51 = a2[4];
          v52 = *v51;
          v53 = *((_QWORD *)v51 + 1);
          *v51 = 6;
          *((_QWORD *)v51 + 1) = v48;
          v234.m128i_i8[0] = v52;
          v234.m128i_i64[1] = v53;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v112 = *(__int64 **)(v50 + 8);
        v115 = v112[1];
        if ( v115 != v112[2] )
        {
          *(_BYTE *)v115 = 6;
          *(_QWORD *)(v115 + 8) = v48;
          v112[1] = v115 + 16;
          goto LABEL_12;
        }
        v180 = (v115 - *v112) >> 4;
        if ( v180 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v181 = 1;
        v225 = (__int8 *)(v115 - *v112);
        if ( v180 )
          v181 = (v115 - *v112) >> 4;
        v224 = (__m128i *)*v112;
        v223 = (__m128i *)v112[2];
        v182 = v180 + v181;
        v222 = (const __m128i *)v112[1];
        if ( v182 > 0x7FFFFFFFFFFFFFFLL )
          v182 = 0x7FFFFFFFFFFFFFFLL;
        s1c = (char *)(16 * v182);
        v171 = operator new(16 * v182);
        v172 = v222;
        v173 = v224;
        v174 = v223;
        v225[v171] = 6;
        *(_QWORD *)&v225[v171 + 8] = v48;
        if ( v222 == v224 )
          goto LABEL_211;
        v183 = v224;
        v184 = v171;
        do
        {
          v185 = _mm_loadu_si128(v183++);
          v184 += 16;
          *(__m128i *)(v184 - 16) = v185;
        }
        while ( v222 != v183 );
        goto LABEL_166;
      case 6:
        v54 = *((_QWORD *)v8 + 20);
        v55 = a2[2];
        if ( v55 == a2[1] )
        {
          v136 = *a2;
          v137 = **a2;
          v138 = *((_QWORD *)*a2 + 1);
          *v136 = 5;
          *((_QWORD *)v136 + 1) = v54;
          v234.m128i_i8[0] = v137;
          v234.m128i_i64[1] = v138;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v56 = *((_QWORD *)v55 - 1);
        if ( *(_BYTE *)v56 != 2 )
        {
          v57 = a2[4];
          v58 = *v57;
          v59 = *((_QWORD *)v57 + 1);
          *v57 = 5;
          *((_QWORD *)v57 + 1) = v54;
          v234.m128i_i8[0] = v58;
          v234.m128i_i64[1] = v59;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_12;
        }
        v112 = *(__int64 **)(v56 + 8);
        v113 = v112[1];
        if ( v113 != v112[2] )
        {
          *(_BYTE *)v113 = 5;
          *(_QWORD *)(v113 + 8) = v54;
          v112[1] = v113 + 16;
          goto LABEL_12;
        }
        v168 = (v113 - *v112) >> 4;
        if ( v168 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v169 = 1;
        v225 = (__int8 *)(v113 - *v112);
        if ( v168 )
          v169 = (v113 - *v112) >> 4;
        v224 = (__m128i *)*v112;
        v223 = (__m128i *)v112[2];
        v170 = v168 + v169;
        v222 = (const __m128i *)v112[1];
        if ( v170 > 0x7FFFFFFFFFFFFFFLL )
          v170 = 0x7FFFFFFFFFFFFFFLL;
        s1c = (char *)(16 * v170);
        v171 = operator new(16 * v170);
        v172 = v222;
        v173 = v224;
        v174 = v223;
        v225[v171] = 5;
        *(_QWORD *)&v225[v171 + 8] = v54;
        if ( v222 == v224 )
        {
LABEL_211:
          v178 = v171;
        }
        else
        {
          v175 = v224;
          v176 = v171;
          do
          {
            v177 = _mm_loadu_si128(v175++);
            v176 += 16;
            *(__m128i *)(v176 - 16) = v177;
          }
          while ( v222 != v175 );
LABEL_166:
          v178 = v171 + (char *)v172 - (char *)v173;
        }
        v179 = v178 + 16;
        if ( v173 )
          goto LABEL_168;
        goto LABEL_169;
      case 7:
        v60 = *((double *)v8 + 22);
        if ( fabs(v60) > 1.797693134862316e308 )
        {
          v214 = (_DWORD)v8 + 40;
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
          v252 = nullptr;
          v251 = &v253;
          LOBYTE(v253) = 0;
          std::string::reserve();
          if ( (unsigned __int64)(v252 - 0x7FFFFFFFFFFFFFE6LL) <= 0x18 )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append();
          if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v252 < v248 )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append();
          v131 = (__int64)v251;
          v132 = v252;
          v133 = 15;
          v134 = (unsigned __int64)(v252 + 1);
          if ( v251 != &v253 )
            v133 = v253;
          if ( v133 < v134 )
          {
            s1e = v252;
            std::string::_M_mutate();
            v131 = (__int64)v251;
            v132 = s1e;
          }
          v132[v131] = 39;
          LODWORD(v252) = v134;
          v132[(_QWORD)v251 + 1] = 0;
          nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
            (__int64)&v255,
            406,
            (__int64)&v251,
            v128,
            v129,
            v130,
            (int)v212,
            v214,
            v215,
            (int)&v255,
            (int)v222,
            (char)v223,
            (int)v224,
            (int)v225,
            (int)v226,
            (int)v227,
            v228,
            v229,
            v230,
            (char)v231,
            v232,
            v233,
            v234.m128i_i32[0],
            v234.m128i_i32[2],
            v235,
            v236,
            (int)v237,
            v238,
            (int)v239,
            v240,
            v241,
            v242,
            v243,
            v244,
            v245,
            v246,
            v247,
            v248,
            v249,
            v250,
            (int)v251,
            (int)v252,
            v253,
            v254,
            (int)v255,
            v256,
            v257[0],
            v257[2],
            v257[4],
            v258,
            v259,
            v260,
            v261,
            v262,
            v263);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::out_of_range>((__int64)s1);
          goto LABEL_4;
        }
        if ( *((_DWORD *)v8 + 46) != 46 )
        {
          v61 = *((_QWORD *)v8 + 24);
          if ( v61 != -1 )
            *(_BYTE *)(*((_QWORD *)v8 + 15) + v61) = 46;
        }
        v62 = a2[2];
        if ( v62 == a2[1] )
        {
          v163 = (double *)*a2;
          v164 = **a2;
          v165 = *((_QWORD *)*a2 + 1);
          *(_BYTE *)v163 = 7;
          v163[1] = v60;
          v234.m128i_i8[0] = v164;
          v234.m128i_i64[1] = v165;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        else
        {
          v63 = *((_QWORD *)v62 - 1);
          if ( *(_BYTE *)v63 == 2 )
          {
            v112 = *(__int64 **)(v63 + 8);
            v125 = (__m128i *)v112[1];
            if ( v125 == (__m128i *)v112[2] )
            {
              v205 = ((__int64)v125->m128i_i64 - *v112) >> 4;
              if ( v205 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v206 = 1;
              v225 = &v125->m128i_i8[-*v112];
              if ( v205 )
                v206 = ((__int64)v125->m128i_i64 - *v112) >> 4;
              v224 = (__m128i *)*v112;
              v223 = (__m128i *)v112[2];
              v207 = v205 + v206;
              LODWORD(v222) = LODWORD(v60);
              if ( v207 > 0x7FFFFFFFFFFFFFFLL )
                v207 = 0x7FFFFFFFFFFFFFFLL;
              s1c = (char *)(16 * v207);
              v171 = operator new(16 * v207);
              v173 = v224;
              v174 = v223;
              v225[v171] = 7;
              *(double *)&v225[v171 + 8] = v60;
              if ( v125 == v224 )
              {
                v211 = v171;
              }
              else
              {
                v208 = v224;
                v209 = v171;
                do
                {
                  v210 = _mm_loadu_si128(v208++);
                  v209 += 16;
                  *(__m128i *)(v209 - 16) = v210;
                }
                while ( v125 != v208 );
                v211 = v171 + (char *)v125 - (char *)v224;
              }
              v179 = v211 + 16;
              if ( v224 )
              {
LABEL_168:
                v222 = (const __m128i *)v171;
                operator delete(v173, (char *)v174 - (char *)v173);
                v171 = (__int64)v222;
              }
LABEL_169:
              *v112 = v171;
              v112[1] = v179;
              v112[2] = (__int64)&s1c[v171];
            }
            else
            {
              v125->m128i_i8[0] = 7;
              m128i_i64 = (double *)v125[1].m128i_i64;
              *(m128i_i64 - 1) = v60;
              v112[1] = (__int64)m128i_i64;
            }
          }
          else
          {
            v64 = a2[4];
            v65 = *v64;
            v66 = *((_QWORD *)v64 + 1);
            *v64 = 7;
            *((double *)v64 + 1) = v60;
            v234.m128i_i8[0] = v65;
            v234.m128i_i64[1] = v66;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
LABEL_12:
        if ( v212 == v7 )
        {
          while ( 1 )
          {
            if ( !v6 )
            {
              v11 = 1;
              goto LABEL_6;
            }
            if ( (*v212 & (1LL << ((unsigned __int8)v6 - 1))) != 0 )
              goto LABEL_16;
LABEL_22:
            v25 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
            *((_DWORD *)v8 + 8) = v25;
            if ( v25 == 13 )
              break;
            if ( v25 != 11 )
            {
              std::string::basic_string<std::allocator<char>>(
                &v247,
                "object",
                v26,
                v27,
                v28,
                v29,
                (int)v212,
                v213,
                v215);
              nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
              v30 = _mm_loadu_si128((const __m128i *)(v8 + 72));
              v235 = *((_QWORD *)v8 + 11);
              v234 = v30;
              nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
                (__int64)&v255,
                101,
                v234.m128i_i64,
                (__int64)&v251);
              nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
              *((_BYTE *)a2 + 40) = 1;
              v11 = *((unsigned __int8 *)a2 + 41);
              if ( (_BYTE)v11 )
                nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
              goto LABEL_25;
            }
LABEL_18:
            a2[2] -= 8;
            if ( !v6 )
            {
              --v7;
              v6 = 63;
              goto LABEL_12;
            }
            --v6;
            if ( v212 != v7 )
              goto LABEL_13;
          }
          v95 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
          *((_DWORD *)v8 + 8) = v95;
          if ( v95 != 4 )
          {
            std::string::basic_string<std::allocator<char>>(
              &v247,
              "object key",
              v96,
              v97,
              v98,
              v99,
              (int)v212,
              v213,
              v215);
            nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
            v127 = _mm_loadu_si128((const __m128i *)(v8 + 72));
            v235 = *((_QWORD *)v8 + 11);
            s1 = (std::exception *)&v255;
            v234 = v127;
            nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
              (__int64)&v255,
              101,
              v234.m128i_i64,
              (__int64)&v251);
            nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
            *((_BYTE *)a2 + 40) = 1;
            if ( *((_BYTE *)a2 + 41) )
              nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
            goto LABEL_4;
          }
          if ( *((_DWORD *)v8 + 46) != 46 )
          {
            v100 = *((_QWORD *)v8 + 24);
            if ( v100 != -1 )
              *(_BYTE *)(*((_QWORD *)v8 + 15) + v100) = 46;
          }
          v227 = (_BYTE **)(v8 + 120);
          v84 = *(__int64 **)(*((_QWORD *)a2[2] - 1) + 8LL);
          v101 = v84[2];
          if ( !v101 )
          {
            v85 = v84 + 1;
            goto LABEL_101;
          }
          v102 = *((_QWORD *)v8 + 16);
          v103 = *(const void **)(v101 + 32);
          LOBYTE(v223) = (_BYTE)v7;
          s1a = *((void **)v8 + 15);
          v225 = v8;
          v104 = *(_QWORD *)(v101 + 40);
          v105 = v102;
          v226 = a2;
          v106 = (const __m128i *)v84[2];
          v107 = (const __m128i *)(v84 + 1);
          v222 = (const __m128i *)(v84 + 1);
          v224 = (__m128i *)v84;
          while ( 2 )
          {
            v108 = v105;
            if ( v104 <= v105 )
              v108 = v104;
            if ( v108 )
            {
              LODWORD(v109) = memcmp(v103, s1a, v108);
              if ( (_DWORD)v109 )
              {
LABEL_98:
                if ( (int)v109 < 0 )
                  goto LABEL_99;
LABEL_89:
                v107 = v106;
                v106 = (const __m128i *)v106[1].m128i_i64[0];
                goto LABEL_90;
              }
            }
            v109 = v104 - v105;
            if ( (__int64)(v104 - v105) > 0x7FFFFFFF )
              goto LABEL_89;
            if ( v109 >= (__int64)0xFFFFFFFF80000000LL )
              goto LABEL_98;
LABEL_99:
            v106 = (const __m128i *)v106[1].m128i_i64[1];
LABEL_90:
            if ( v106 )
            {
              v103 = (const void *)v106[2].m128i_i64[0];
              v104 = v106[2].m128i_u64[1];
              continue;
            }
            break;
          }
          v84 = (__int64 *)v224;
          v85 = (__int64 *)v107;
          v86 = (__m128i *)v105;
          v8 = v225;
          a2 = v226;
          if ( v107 == v222 )
            goto LABEL_101;
          v87 = v107[2].m128i_u64[1];
          v88 = (size_t)v86;
          if ( v87 <= (unsigned __int64)v86 )
            v88 = v107[2].m128i_u64[1];
          if ( v88
            && (v223 = v86,
                LODWORD(v222) = (_DWORD)v107,
                LODWORD(v89) = memcmp(s1a, (const void *)v107[2].m128i_i64[0], v88),
                v86 = v223,
                v84 = (__int64 *)v224,
                v85 = (__int64 *)v107,
                (_DWORD)v89) )
          {
LABEL_79:
            if ( (int)v89 < 0 )
              goto LABEL_101;
          }
          else
          {
            v89 = (signed __int64)v86->m128i_i64 - v87;
            if ( (__int64)((__int64)v86->m128i_i64 - v87) <= 0x7FFFFFFF )
            {
              if ( v89 >= (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_79;
LABEL_101:
              v231 = v227;
              v85 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                      v84,
                      v85,
                      &v231);
            }
          }
          a2[4] = (__int8 *)(v85 + 8);
          v90 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
          *((_DWORD *)v8 + 8) = v90;
          if ( v90 != 12 )
          {
            std::string::basic_string<std::allocator<char>>(
              &v247,
              "object separator",
              v91,
              v92,
              v93,
              v94,
              (int)v212,
              v213,
              v215);
            nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
            v111 = _mm_loadu_si128((const __m128i *)(v8 + 72));
            v235 = *((_QWORD *)v8 + 11);
            v234 = v111;
            nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
              (__int64)&v255,
              101,
              v234.m128i_i64,
              (__int64)&v251);
            nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
            *((_BYTE *)a2 + 40) = 1;
            v11 = *((unsigned __int8 *)a2 + 41);
            if ( (_BYTE)v11 )
              nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
LABEL_25:
            std::string::_M_dispose();
            v255 = off_4444D0;
            std::runtime_error::~runtime_error((std::runtime_error *)v257);
            std::exception::~exception((std::exception *)&v255);
            std::string::_M_dispose();
            std::string::_M_dispose();
            goto LABEL_6;
          }
LABEL_81:
          v81 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
LABEL_64:
          *((_DWORD *)v8 + 8) = v81;
          continue;
        }
LABEL_13:
        if ( v6 )
        {
          v18 = v7;
          v19 = 1LL << ((unsigned __int8)v6 - 1);
        }
        else
        {
          v19 = 0x8000000000000000LL;
          v18 = v7 - 1;
        }
        if ( (*v18 & v19) == 0 )
          goto LABEL_22;
LABEL_16:
        v20 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
        *((_DWORD *)v8 + 8) = v20;
        if ( v20 == 13 )
          goto LABEL_81;
        if ( v20 == 10 )
          goto LABEL_18;
        std::string::basic_string<std::allocator<char>>(&v247, "array", v21, v22, v23, v24, (int)v212, v213, v215);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
        v110 = _mm_loadu_si128((const __m128i *)(v8 + 72));
        v235 = *((_QWORD *)v8 + 11);
        s1 = (std::exception *)&v255;
        v234 = v110;
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)&v255,
          101,
          v234.m128i_i64,
          (__int64)&v251);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
LABEL_4:
        std::string::_M_dispose();
        v255 = off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v257);
        std::exception::~exception(s1);
        std::string::_M_dispose();
        std::string::_M_dispose();
LABEL_5:
        v11 = 0;
LABEL_6:
        if ( v212 )
          operator delete(v212, v215 - (_QWORD)v212);
        return v11;
      case 8:
        v230 = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v67 = (__int64 *)a2[2];
        if ( v67 == (__int64 *)a2[3] )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>();
        }
        else
        {
          *v67 = v230;
          a2[2] = (__int8 *)(v67 + 1);
        }
        v68 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
        *((_DWORD *)v8 + 8) = v68;
        if ( v68 == 10 )
          goto LABEL_54;
        v239 = v7;
        v240 = v6;
        v237 = v212;
        v241 = v215;
        std::vector<bool>::push_back();
        v7 = v239;
        v6 = v240;
        v212 = v237;
        v215 = v241;
        continue;
      case 9:
        v229 = nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v69 = (__int64 *)a2[2];
        if ( v69 == (__int64 *)a2[3] )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>();
        }
        else
        {
          *v69 = v229;
          a2[2] = (__int8 *)(v69 + 1);
        }
        LOBYTE(v223) = (_BYTE)v8 + 40;
        v70 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
        *((_DWORD *)v8 + 8) = v70;
        if ( v70 == 11 )
        {
LABEL_54:
          a2[2] -= 8;
          goto LABEL_12;
        }
        if ( v70 == 4 )
        {
          if ( *((_DWORD *)v8 + 46) != 46 )
          {
            v75 = *((_QWORD *)v8 + 24);
            if ( v75 != -1 )
              *(_BYTE *)(*((_QWORD *)v8 + 15) + v75) = 46;
          }
          a2[4] = (__int8 *)std::map<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::operator[]();
          v76 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
          *((_DWORD *)v8 + 8) = v76;
          if ( v76 == 12 )
          {
            v239 = v7;
            v240 = v6;
            v237 = v212;
            v241 = v215;
            std::vector<bool>::push_back();
            v7 = v239;
            v6 = v240;
            v212 = v237;
            v215 = v241;
            v81 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
            goto LABEL_64;
          }
          std::string::basic_string<std::allocator<char>>(
            &v247,
            "object separator",
            v77,
            v78,
            v79,
            v80,
            (int)v212,
            v213,
            v215);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
          v167 = _mm_loadu_si128((const __m128i *)(v8 + 72));
          v235 = *((_QWORD *)v8 + 11);
          s1 = (std::exception *)&v255;
          v234 = v167;
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)&v255,
            101,
            v234.m128i_i64,
            (__int64)&v251);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
        }
        else
        {
          std::string::basic_string<std::allocator<char>>(
            &v247,
            "object key",
            v71,
            v72,
            v73,
            v74,
            (int)v212,
            v213,
            v215);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
          v166 = _mm_loadu_si128((const __m128i *)(v8 + 72));
          v235 = *((_QWORD *)v8 + 11);
          s1 = (std::exception *)&v255;
          v234 = v166;
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)&v255,
            101,
            v234.m128i_i64,
            (__int64)&v251);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
        }
        goto LABEL_4;
      case 0xE:
        std::string::basic_string<std::allocator<char>>(&v247, "value", a3, a4, a5, a6, (int)v212, v213, v215);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
        v82 = _mm_loadu_si128((const __m128i *)(v8 + 72));
        v235 = *((_QWORD *)v8 + 11);
        s1 = (std::exception *)&v255;
        v234 = v82;
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)&v255,
          101,
          v234.m128i_i64,
          (__int64)&v251);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
        goto LABEL_4;
      case 0xF:
        if ( *((_QWORD *)v8 + 9) != 1 )
        {
          std::string::basic_string<std::allocator<char>>(&v247, "value", a3, a4, a5, a6, (int)v212, v213, v215);
          nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
          v83 = _mm_loadu_si128((const __m128i *)(v8 + 72));
          v235 = *((_QWORD *)v8 + 11);
          s1 = (std::exception *)&v255;
          v234 = v83;
          nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
            (__int64)&v255,
            101,
            v234.m128i_i64,
            (__int64)&v251);
          nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
          *((_BYTE *)a2 + 40) = 1;
          if ( *((_BYTE *)a2 + 41) )
            nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
          goto LABEL_4;
        }
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&v251,
          "attempting to parse an empty input; check that your input string or stream contains the expected JSON",
          a3,
          a4,
          a5,
          a6,
          (int)v212,
          v213,
          v215);
        v135 = _mm_loadu_si128((const __m128i *)(v8 + 72));
        v235 = *((_QWORD *)v8 + 11);
        v234 = v135;
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)&v255,
          101,
          v234.m128i_i64,
          (__int64)&v251);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
        std::string::_M_dispose();
        v255 = off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v257);
        std::exception::~exception((std::exception *)&v255);
        std::string::_M_dispose();
        goto LABEL_5;
      default:
        std::string::basic_string<std::allocator<char>>(&v247, "value", a3, a4, a5, a6, (int)v212, v213, v215);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 72));
        v235 = *((_QWORD *)v8 + 11);
        s1 = (std::exception *)&v255;
        v234 = v10;
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)&v255,
          101,
          v234.m128i_i64,
          (__int64)&v251);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
        *((_BYTE *)a2 + 40) = 1;
        if ( *((_BYTE *)a2 + 41) )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v255);
        goto LABEL_4;
    }
  }
}

