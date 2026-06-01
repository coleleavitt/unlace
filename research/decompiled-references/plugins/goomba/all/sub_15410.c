_QWORD *__fastcall sub_15410(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rbp
  const char *v4; // rax
  _QWORD *v5; // rbp
  const char *v6; // rax
  _QWORD *v7; // rbp
  const char *v8; // rax
  _QWORD *v9; // rbp
  const char *v10; // rax
  _QWORD *v11; // rbp
  const char *v12; // rax
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  _QWORD *v15; // rbx
  const char *v16; // rax
  _QWORD *v17; // rbx
  const char *v18; // rax
  _QWORD *v19; // rbp
  const char *v20; // rax
  _QWORD *v21; // r15
  const char *v22; // rax
  _QWORD *v23; // rbp
  const char *v24; // rax
  _QWORD *v25; // rbx
  const char *v26; // rax
  _QWORD *v27; // rbx
  const char *v28; // rax
  _QWORD *v29; // rbx
  const char *v30; // rax
  _QWORD *v31; // rbp
  const char *v32; // rax
  _QWORD *v33; // rbp
  const char *v34; // rax
  _QWORD *v35; // rbx
  const char *v36; // rax
  _QWORD *v37; // r15
  const char *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v41; // kr08_8
  _QWORD *v42; // rbx
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rbp
  unsigned int v47; // r13d
  __int64 v48; // r14
  int bv_sort_size; // r13d
  int v50; // esi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r13
  unsigned int v57; // r12d
  _QWORD *v58; // r14
  __int64 v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned int v63; // r14d
  __m128i v64; // xmm0
  unsigned int v65; // r15d
  unsigned int v66; // r14d
  double v67; // r14
  __int64 v68; // rdi
  unsigned int v69; // esi
  __m128i v70; // xmm0
  unsigned int v71; // r15d
  unsigned int v72; // r15d
  unsigned int v73; // r12d
  __int64 v74; // rax
  unsigned __int64 v75; // r15
  unsigned int v76; // r13d
  unsigned __int64 v77; // r15
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  __int32 v80; // eax
  unsigned __int64 v81; // r15
  __int32 v82; // eax
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // r15
  __int32 v86; // eax
  unsigned __int64 v87; // r15
  int v88; // r13d
  unsigned __int64 v89; // r15
  unsigned int v90; // r13d
  unsigned __int64 v91; // r15
  int v92; // r14d
  __int64 v93; // r15
  __int64 v94; // rax
  _QWORD *v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rsi
  int v98; // r14d
  __int64 v99; // r15
  __int64 v100; // rax
  _QWORD *v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rsi
  int v104; // r14d
  __int64 v105; // r15
  __int64 v106; // rax
  _QWORD *v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // rbp
  unsigned int v113; // r13d
  __int64 v114; // r13
  int v115; // r15d
  __int64 v116; // rax
  __int64 v117; // r13
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // r15
  __int64 v121; // r14
  __int64 v122; // rdi
  double v123; // rsi
  __int64 v124; // rax
  __int64 v125; // r15
  __int64 v126; // rbp
  unsigned int v127; // r13d
  __int64 v128; // r13
  int v129; // r15d
  double v130; // rdx
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // r15
  __int64 v137; // rbp
  unsigned int v138; // r13d
  __int64 v139; // r15
  __int64 v140; // rax
  __int64 v141; // r15
  __int64 v142; // rbp
  __int32 v143; // eax
  __int64 v144; // r15
  __int32 v145; // eax
  __int64 v146; // rdi
  __int64 v147; // rax
  __int64 v148; // r15
  __int64 v149; // rbp
  __int32 v150; // eax
  __int64 v151; // r15
  int v152; // r13d
  __int64 v153; // r15
  __int64 v154; // r13
  unsigned int v155; // ebp
  __int64 v156; // rax
  __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // r15
  __int64 v160; // r14
  __int64 v161; // rdi
  double v162; // rsi
  __int64 v163; // rax
  __int64 v164; // r15
  __int64 v165; // rbp
  unsigned int v166; // r13d
  __int64 v167; // r15
  __int64 v168; // rax
  __int64 v169; // r15
  __int64 v170; // rbp
  __int32 v171; // eax
  __int64 v172; // r15
  __int32 sort_kind; // eax
  __int64 v174; // rdi
  __int64 v175; // rax
  __int64 v176; // r15
  __int64 v177; // rbp
  __int32 v178; // eax
  __int64 v179; // r15
  int v180; // r13d
  __int64 v181; // r15
  __int64 v182; // r13
  unsigned int v183; // ebp
  __int64 v184; // rax
  __int64 v185; // rsi
  __int64 v186; // rax
  __int64 v187; // r15
  _QWORD *v188; // r13
  __m128i v189; // xmm0
  __int64 v190; // rax
  __int64 v191; // r15
  _QWORD *v192; // r13
  __m128i v193; // xmm0
  __int64 v194; // rax
  __int64 v195; // r15
  _QWORD *v196; // r13
  __m128i v197; // xmm0
  __int64 v198; // rax
  __int64 v199; // r15
  _QWORD *v200; // r13
  __m128i v201; // xmm0
  __int64 v202; // r13
  __int64 v203; // r15
  __int64 v204; // r13
  __int64 v205; // r15
  unsigned int v206; // r14d
  __int64 v207; // rax
  __int64 v208; // r15
  _QWORD *v209; // r13
  __m128i v210; // xmm0
  __int64 v211; // rax
  __int64 v212; // r15
  _QWORD *v213; // r13
  __m128i v214; // xmm0
  __int64 v215; // rax
  __int64 v216; // r15
  _QWORD *v217; // r13
  __m128i v218; // xmm0
  __int64 v219; // rax
  __int64 v220; // r15
  _QWORD *v221; // r13
  __m128i v222; // xmm0
  int v223; // r12d
  int v224; // r14d
  __int64 v225; // r12
  __int64 v226; // rax
  __int64 v227; // rsi
  int v228; // r12d
  __int64 v229; // r12
  __int64 v230; // rax
  __int64 v231; // rsi
  __int64 v232; // rsi
  __int64 v233; // rax
  __int64 v234; // rdi
  __int64 v235; // rsi
  __int64 sort; // rax
  __int64 v237; // r14
  __int64 v238; // rbp
  unsigned int error_code; // r13d
  __int64 v240; // r13
  __int64 v241; // rax
  __int64 v242; // r13
  __int64 v243; // rax
  double v244; // rsi
  __int64 v245; // rdi
  __int64 v246; // r15
  __int64 v247; // r14
  __int64 v248; // rdi
  double v249; // r15
  __int64 v250; // rbp
  double v251; // r15
  __int64 v252; // rbp
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rax
  __m128i v256; // [rsp+0h] [rbp-188h] BYREF
  _QWORD *v257; // [rsp+18h] [rbp-170h]
  __m128i v258; // [rsp+20h] [rbp-168h] BYREF
  __int64 (__fastcall ***v259)(); // [rsp+30h] [rbp-158h]
  __int64 (__fastcall ***v260)(); // [rsp+38h] [rbp-150h]
  __int64 v261; // [rsp+40h] [rbp-148h] BYREF
  __int64 v262; // [rsp+48h] [rbp-140h]
  _QWORD v263[2]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v264; // [rsp+60h] [rbp-128h]
  __int64 (__fastcall **v265)(); // [rsp+70h] [rbp-118h] BYREF
  __int64 v266; // [rsp+78h] [rbp-110h]
  __int64 v267; // [rsp+80h] [rbp-108h]
  __int64 (__fastcall **v268)(); // [rsp+90h] [rbp-F8h] BYREF
  unsigned __int64 v269; // [rsp+98h] [rbp-F0h]
  __int64 v270; // [rsp+A0h] [rbp-E8h]
  __int64 (__fastcall **v271)(); // [rsp+B0h] [rbp-D8h] BYREF
  _QWORD *v272; // [rsp+B8h] [rbp-D0h]
  __int64 v273; // [rsp+C0h] [rbp-C8h]
  __int64 (__fastcall **v274)(); // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v275; // [rsp+D8h] [rbp-B0h]
  __int64 (__fastcall **v276)(); // [rsp+F0h] [rbp-98h] BYREF
  _QWORD *v277; // [rsp+F8h] [rbp-90h]
  double v278[2]; // [rsp+100h] [rbp-88h] BYREF
  __int64 (__fastcall **v279)(); // [rsp+110h] [rbp-78h] BYREF
  __m128i v280; // [rsp+118h] [rbp-70h]
  __m128i v281; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v282; // [rsp+148h] [rbp-40h]

  v282 = __readfsqword(0x28u);
  v41 = v39;
  v42 = a1;
  v43 = a2;
  switch ( *a3 )
  {
    case 3:
    case 4:
      sub_151B0(a1, a2, a3 + 8);
      return v42;
    case 5:
      sub_151B0(&v276, a2, a3 + 8);
      sort = Z3_get_sort(v277[1], *(_QWORD *)&v278[0]);
      v237 = (__int64)v277;
      v238 = sort;
      error_code = Z3_get_error_code(v277[1]);
      if ( error_code && *(_BYTE *)v237 )
      {
        exception = __cxa_allocate_exception(0x10u);
        error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v237 + 8), error_code);
        sub_105D0(exception, error_msg);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v240 = (__int64)v277;
      v280 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v277, (__m128i)(unsigned __int64)v238);
      Z3_inc_ref(v277[1], v238);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v240 + 8), v238) == 2
        || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v240 + 8), v238) == 3 )
      {
        if ( v238 )
          Z3_dec_ref(*(_QWORD *)(v240 + 8));
        v241 = Z3_mk_unary_minus(v277[1], *(_QWORD *)&v278[0]);
        goto LABEL_291;
      }
      if ( v238 )
        Z3_dec_ref(*(_QWORD *)(v240 + 8));
      if ( (unsigned __int8)sub_10B90((__int64)&v276) )
      {
        v241 = Z3_mk_bvneg(v277[1], *(_QWORD *)&v278[0]);
LABEL_291:
        v242 = v241;
        goto LABEL_292;
      }
      v242 = 0;
      if ( (unsigned __int8)sub_10CF0((__int64)&v276) )
      {
        v241 = Z3_mk_fpa_neg(v277[1], *(_QWORD *)&v278[0]);
        goto LABEL_291;
      }
LABEL_292:
      sub_106F0((__int64)v277);
      v243 = (__int64)v277;
      a1[2] = v242;
      *a1 = &off_4D850;
      a1[1] = v243;
      Z3_inc_ref(*(_QWORD *)(v243 + 8), v242);
      v244 = v278[0];
      v276 = &off_4D850;
      *a1 = &off_4D890;
      if ( v244 != 0.0 )
LABEL_10:
        Z3_dec_ref(v277[1]);
      return v42;
    case 6:
      LODWORD(v257) = 8 * a3[9];
      sub_13D50(&v279, a2 + 24, 0, (unsigned int)v257);
      sub_151B0(&v276, a2, a3 + 8);
      v245 = v277[1];
      v259 = (__int64 (__fastcall ***)())v280.m128i_i64[1];
      v246 = Z3_mk_eq(v245, *(_QWORD *)&v278[0]);
      sub_106F0((__int64)v277);
      v247 = (__int64)v277;
      v275 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v277, (__m128i)(unsigned __int64)v246);
      v248 = v277[1];
      v258 = v275;
      Z3_inc_ref(v248, v246);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v274 = (__int64 (__fastcall **)())&off_4D890;
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      if ( v259 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v280 = _mm_load_si128(&v258);
      Z3_inc_ref(*(_QWORD *)(v247 + 8), v246);
      v279 = (__int64 (__fastcall **)())v256.m128i_i64[0];
      sub_13F30(v42, a2, (__int64)&v279, (unsigned int)v257);
      if ( v246 )
      {
        Z3_dec_ref(*(_QWORD *)(v247 + 8));
        Z3_dec_ref(*(_QWORD *)(v247 + 8));
      }
      return v42;
    case 7:
      sub_151B0(&v279, a2, a3 + 8);
      v232 = Z3_mk_bvnot(*(_QWORD *)(v280.m128i_i64[0] + 8), v280.m128i_i64[1]);
      v233 = v280.m128i_i64[0];
      *a1 = &off_4D850;
      a1[1] = v233;
      v234 = *(_QWORD *)(v233 + 8);
      v42[2] = v232;
      Z3_inc_ref(v234, v232);
      v235 = v280.m128i_i64[1];
      v279 = &off_4D850;
      *v42 = &off_4D890;
      if ( v235 )
        goto LABEL_284;
      return v42;
    case 8:
    case 9:
      sub_151B0(&v276, a2, a3 + 8);
      v44 = Z3_get_sort(v277[1], *(_QWORD *)&v278[0]);
      v45 = (__int64)v277;
      v46 = v44;
      v47 = Z3_get_error_code(v277[1]);
      if ( v47 && *(_BYTE *)v45 )
      {
        v3 = __cxa_allocate_exception(0x10u);
        v4 = (const char *)Z3_get_error_msg(*(_QWORD *)(v45 + 8), v47);
        sub_105D0(v3, v4);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v48 = (__int64)v277;
      v280 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v277, (__m128i)(unsigned __int64)v46);
      Z3_inc_ref(v277[1], v46);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      bv_sort_size = Z3_get_bv_sort_size(*(_QWORD *)(v48 + 8), v46);
      sub_106F0(v48);
      if ( v46 )
        Z3_dec_ref(*(_QWORD *)(v48 + 8));
      v50 = 8 * a3[17];
      if ( bv_sort_size > v50 )
      {
        if ( !under_debugger )
          interr(30674);
LABEL_342:
        BUG();
      }
      v51 = (unsigned int)(v50 - bv_sort_size);
      v52 = v277[1];
      if ( *a3 == 9 )
        v53 = Z3_mk_zero_ext(v52, v51, *(_QWORD *)&v278[0]);
      else
        v53 = Z3_mk_sign_ext(v52, v51, *(_QWORD *)&v278[0]);
      v54 = (__int64)v277;
      v55 = v53;
      sub_106F0((__int64)v277);
      v42[1] = v54;
      *v42 = &off_4D850;
      v42[2] = v55;
      Z3_inc_ref(*(_QWORD *)(v54 + 8), v55);
      *v42 = &off_4D890;
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_10;
      return v42;
    case 0xA:
      v228 = 8 * a3[17];
      sub_151B0(&v279, a2, a3 + 8);
      v229 = Z3_mk_extract(*(_QWORD *)(v280.m128i_i64[0] + 8), (unsigned int)(v228 - 1), 0, v280.m128i_i64[1]);
      sub_106F0(v280.m128i_i64[0]);
      v230 = v280.m128i_i64[0];
      a1[2] = v229;
      *a1 = &off_4D850;
      a1[1] = v230;
      Z3_inc_ref(*(_QWORD *)(v230 + 8), v229);
      v231 = v280.m128i_i64[1];
      v279 = &off_4D850;
      *a1 = &off_4D890;
      if ( v231 )
        goto LABEL_284;
      return v42;
    case 0xB:
      v223 = 8 * a3[9];
      v224 = 8 * a3[17];
      sub_151B0(&v279, a2, a3 + 8);
      v225 = Z3_mk_extract(
               *(_QWORD *)(v280.m128i_i64[0] + 8),
               (unsigned int)(v223 - 1),
               (unsigned int)(v223 - v224),
               v280.m128i_i64[1]);
      sub_106F0(v280.m128i_i64[0]);
      v226 = v280.m128i_i64[0];
      a1[2] = v225;
      *a1 = &off_4D850;
      a1[1] = v226;
      Z3_inc_ref(*(_QWORD *)(v226 + 8), v225);
      v227 = v280.m128i_i64[1];
      v279 = &off_4D850;
      *a1 = &off_4D890;
      if ( v227 )
LABEL_284:
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      return v42;
    case 0xC:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      sub_129B0(a1, (__int64)&v276, (__int64)&v279);
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
        goto LABEL_278;
      return v42;
    case 0xD:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      sub_11170(a1, (__int64)&v276, (__int64)&v279);
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
        goto LABEL_278;
      return v42;
    case 0xE:
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v163 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v164 = v275.m128i_i64[0];
      v165 = v163;
      v166 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v166 && *(_BYTE *)v164 )
      {
        v5 = __cxa_allocate_exception(0x10u);
        v6 = (const char *)Z3_get_error_msg(*(_QWORD *)(v164 + 8), v166);
        sub_105D0(v5, v6);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v167 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v165);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v165);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v167 + 8), v165) == 2
        || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v167 + 8), v165) == 3 )
      {
        if ( v165 )
          Z3_dec_ref(*(_QWORD *)(v167 + 8));
        if ( (unsigned __int8)sub_10A10((__int64)&v276) )
        {
          v281 = (__m128i)_mm_loadh_ps(v278);
          v254 = Z3_mk_mul(*(_QWORD *)(v275.m128i_i64[0] + 8), 2, &v281);
LABEL_330:
          v181 = v254;
          goto LABEL_187;
        }
      }
      else if ( v165 )
      {
        Z3_dec_ref(*(_QWORD *)(v167 + 8));
      }
      v168 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v169 = v275.m128i_i64[0];
      v170 = v168;
      v171 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v171 && *(_BYTE *)v169 )
      {
        v256.m128i_i32[0] = v171;
        v19 = __cxa_allocate_exception(0x10u);
        v20 = (const char *)Z3_get_error_msg(*(_QWORD *)(v169 + 8), v256.m128i_u32[0]);
        sub_105D0(v19, v20);
        __cxa_throw(v19, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v172 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v170);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v170);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      sort_kind = Z3_get_sort_kind(*(_QWORD *)(v172 + 8), v170);
      if ( v170 )
      {
        v174 = *(_QWORD *)(v172 + 8);
        v256.m128i_i32[0] = sort_kind;
        Z3_dec_ref(v174);
        sort_kind = v256.m128i_i32[0];
      }
      if ( sort_kind == 4 && (unsigned __int8)sub_10B90((__int64)&v276) )
      {
        v254 = Z3_mk_bvmul(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
        goto LABEL_330;
      }
      v175 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v176 = v275.m128i_i64[0];
      v177 = v175;
      v178 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v178 && *(_BYTE *)v176 )
      {
        v256.m128i_i32[0] = v178;
        v31 = __cxa_allocate_exception(0x10u);
        v32 = (const char *)Z3_get_error_msg(*(_QWORD *)(v176 + 8), v256.m128i_u32[0]);
        sub_105D0(v31, v32);
        __cxa_throw(v31, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v179 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v177);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v177);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      v180 = Z3_get_sort_kind(*(_QWORD *)(v179 + 8), v177);
      if ( v177 )
        Z3_dec_ref(*(_QWORD *)(v179 + 8));
      if ( v180 == 9 && (unsigned __int8)sub_10CF0((__int64)&v276) )
      {
        v249 = v278[0];
        v250 = v275.m128i_i64[1];
        sub_13C80(&v279, v275.m128i_i64[0]);
        v181 = Z3_mk_fpa_mul(*(_QWORD *)(v275.m128i_i64[0] + 8), v280.m128i_i64[1], v250, *(_QWORD *)&v249);
        v279 = (__int64 (__fastcall **)())&off_4D890;
        sub_FED0(&v279);
      }
      else
      {
        v181 = 0;
      }
LABEL_187:
      v182 = v275.m128i_i64[0];
      v183 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v183 && *(_BYTE *)v182 )
      {
        v37 = __cxa_allocate_exception(0x10u);
        v38 = (const char *)Z3_get_error_msg(*(_QWORD *)(v182 + 8), v183);
        sub_105D0(v37, v38);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v184 = v275.m128i_i64[0];
      v42[2] = v181;
      *v42 = &off_4D850;
      v42[1] = v184;
      Z3_inc_ref(*(_QWORD *)(v184 + 8), v181);
      v185 = v275.m128i_i64[1];
      v274 = &off_4D850;
      *v42 = &off_4D890;
      if ( v185 )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
LABEL_232:
        Z3_dec_ref(v277[1]);
      return v42;
    case 0xF:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      v158 = Z3_mk_bvudiv(v277[1], *(_QWORD *)&v278[0], v280.m128i_i64[1]);
      v159 = (__int64)v277;
      v160 = v158;
      sub_106F0((__int64)v277);
      a1[1] = v159;
      v161 = *(_QWORD *)(v159 + 8);
      *v42 = &off_4D850;
      v42[2] = v160;
      Z3_inc_ref(v161, v160);
      v162 = v278[0];
      v276 = &off_4D850;
      *v42 = &off_4D890;
      if ( v162 != 0.0 )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
        goto LABEL_278;
      return v42;
    case 0x10:
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v135 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v136 = v275.m128i_i64[0];
      v137 = v135;
      v138 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v138 && *(_BYTE *)v136 )
      {
        v9 = __cxa_allocate_exception(0x10u);
        v10 = (const char *)Z3_get_error_msg(*(_QWORD *)(v136 + 8), v138);
        sub_105D0(v9, v10);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v139 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v137);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v137);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v139 + 8), v137) == 2
        || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v139 + 8), v137) == 3 )
      {
        if ( v137 )
          Z3_dec_ref(*(_QWORD *)(v139 + 8));
        if ( (unsigned __int8)sub_10A10((__int64)&v276) )
        {
          v255 = Z3_mk_div(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
          goto LABEL_332;
        }
      }
      else if ( v137 )
      {
        Z3_dec_ref(*(_QWORD *)(v139 + 8));
      }
      v140 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v141 = v275.m128i_i64[0];
      v142 = v140;
      v143 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v143 && *(_BYTE *)v141 )
      {
        v256.m128i_i32[0] = v143;
        v33 = __cxa_allocate_exception(0x10u);
        v34 = (const char *)Z3_get_error_msg(*(_QWORD *)(v141 + 8), v256.m128i_u32[0]);
        sub_105D0(v33, v34);
        __cxa_throw(v33, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v144 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v142);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v142);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      v145 = Z3_get_sort_kind(*(_QWORD *)(v144 + 8), v142);
      if ( v142 )
      {
        v146 = *(_QWORD *)(v144 + 8);
        v256.m128i_i32[0] = v145;
        Z3_dec_ref(v146);
        v145 = v256.m128i_i32[0];
      }
      if ( v145 != 4 || !(unsigned __int8)sub_10B90((__int64)&v276) )
      {
        v147 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
        v148 = v275.m128i_i64[0];
        v149 = v147;
        v150 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
        if ( v150 && *(_BYTE *)v148 )
        {
          v256.m128i_i32[0] = v150;
          v23 = __cxa_allocate_exception(0x10u);
          v24 = (const char *)Z3_get_error_msg(*(_QWORD *)(v148 + 8), v256.m128i_u32[0]);
          sub_105D0(v23, v24);
          __cxa_throw(v23, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v151 = v275.m128i_i64[0];
        v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v149);
        Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v149);
        v279 = (__int64 (__fastcall **)())&off_4D870;
        v152 = Z3_get_sort_kind(*(_QWORD *)(v151 + 8), v149);
        if ( v149 )
          Z3_dec_ref(*(_QWORD *)(v151 + 8));
        if ( v152 == 9 && (unsigned __int8)sub_10CF0((__int64)&v276) )
        {
          v251 = v278[0];
          v252 = v275.m128i_i64[1];
          sub_13C80(&v279, v275.m128i_i64[0]);
          v153 = Z3_mk_fpa_div(*(_QWORD *)(v275.m128i_i64[0] + 8), v280.m128i_i64[1], v252, *(_QWORD *)&v251);
          v279 = (__int64 (__fastcall **)())&off_4D890;
          sub_FED0(&v279);
        }
        else
        {
          v153 = 0;
        }
LABEL_159:
        v154 = v275.m128i_i64[0];
        v155 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
        if ( v155 && *(_BYTE *)v154 )
        {
          v21 = __cxa_allocate_exception(0x10u);
          v22 = (const char *)Z3_get_error_msg(*(_QWORD *)(v154 + 8), v155);
          sub_105D0(v21, v22);
          __cxa_throw(v21, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v156 = v275.m128i_i64[0];
        v42[2] = v153;
        *v42 = &off_4D850;
        v42[1] = v156;
        Z3_inc_ref(*(_QWORD *)(v156 + 8), v153);
        v157 = v275.m128i_i64[1];
        v274 = &off_4D850;
        *v42 = &off_4D890;
        if ( v157 )
          Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
        v276 = &off_4D850;
        if ( *(_QWORD *)&v278[0] )
          goto LABEL_232;
        return v42;
      }
      v255 = Z3_mk_bvsdiv(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
LABEL_332:
      v153 = v255;
      goto LABEL_159;
    case 0x11:
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v124 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v125 = v275.m128i_i64[0];
      v126 = v124;
      v127 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v127 && *(_BYTE *)v125 )
      {
        v7 = __cxa_allocate_exception(0x10u);
        v8 = (const char *)Z3_get_error_msg(*(_QWORD *)(v125 + 8), v127);
        sub_105D0(v7, v8);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v128 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v126);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v126);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      v129 = Z3_get_sort_kind(*(_QWORD *)(v128 + 8), v126);
      if ( v126 )
        Z3_dec_ref(*(_QWORD *)(v128 + 8));
      v130 = v278[0];
      a2 = v275.m128i_i64[1];
      v131 = *(_QWORD *)(v275.m128i_i64[0] + 8);
      if ( v129 != 4 )
        goto LABEL_302;
      v132 = Z3_mk_bvsmod(v131, v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      goto LABEL_137;
    case 0x12:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      v119 = Z3_mk_bvsmod(v277[1], *(_QWORD *)&v278[0], v280.m128i_i64[1]);
      v120 = (__int64)v277;
      v121 = v119;
      sub_106F0((__int64)v277);
      a1[1] = v120;
      v122 = *(_QWORD *)(v120 + 8);
      *v42 = &off_4D850;
      v42[2] = v121;
      Z3_inc_ref(v122, v121);
      v123 = v278[0];
      v276 = &off_4D850;
      *v42 = &off_4D890;
      if ( v123 != 0.0 )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
        goto LABEL_278;
      return v42;
    case 0x13:
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v110 = Z3_get_sort(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      v111 = v275.m128i_i64[0];
      v112 = v110;
      v113 = Z3_get_error_code(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v113 && *(_BYTE *)v111 )
      {
        v11 = __cxa_allocate_exception(0x10u);
        v12 = (const char *)Z3_get_error_msg(*(_QWORD *)(v111 + 8), v113);
        sub_105D0(v11, v12);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v114 = v275.m128i_i64[0];
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v112);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v112);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      v115 = Z3_get_sort_kind(*(_QWORD *)(v114 + 8), v112);
      if ( v112 )
        Z3_dec_ref(*(_QWORD *)(v114 + 8));
      if ( v115 == 1 )
      {
        v281 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[1], (__m128i)*(unsigned __int64 *)&v278[0]);
        v116 = Z3_mk_or(*(_QWORD *)(v275.m128i_i64[0] + 8), 2, &v281);
      }
      else
      {
        v116 = Z3_mk_bvor(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      }
      v117 = v116;
      sub_106F0(v275.m128i_i64[0]);
      v118 = v275.m128i_i64[0];
      a1[2] = v117;
      *a1 = &off_4D850;
      a1[1] = v118;
      Z3_inc_ref(*(_QWORD *)(v118 + 8), v117);
      *a1 = &off_4D890;
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x14:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      sub_121F0(a1, (__int64)&v276, (__int64)&v279);
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
        goto LABEL_278;
      return v42;
    case 0x15:
      sub_151B0(&v279, a2, a3 + 12);
      sub_151B0(&v276, a2, a3 + 8);
      sub_12460(a1, (__int64)&v276, (__int64)&v279);
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      v279 = &off_4D850;
      if ( v280.m128i_i64[1] )
LABEL_278:
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      return v42;
    case 0x16:
      v104 = 8 * a3[9];
      sub_151B0(&v276, a2, a3 + 12);
      sub_10880(&v279, (__int64)&v276, v104);
      sub_151B0(&v274, a2, a3 + 8);
      v105 = v280.m128i_i64[1];
      v257 = (_QWORD *)Z3_mk_bvshl(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], v280.m128i_i64[1]);
      v256.m128i_i64[0] = v275.m128i_i64[0];
      sub_106F0(v275.m128i_i64[0]);
      v106 = v256.m128i_i64[0];
      v107 = v257;
      *a1 = &off_4D850;
      a1[1] = v106;
      v108 = *(_QWORD *)(v106 + 8);
      v42[2] = v107;
      Z3_inc_ref(v108, v107);
      v109 = v275.m128i_i64[1];
      v274 = &off_4D850;
      *v42 = &off_4D890;
      if ( v109 )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v105 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x17:
      v98 = 8 * a3[9];
      sub_151B0(&v276, a2, a3 + 12);
      sub_10880(&v279, (__int64)&v276, v98);
      sub_151B0(&v274, a2, a3 + 8);
      v99 = v280.m128i_i64[1];
      v257 = (_QWORD *)Z3_mk_bvlshr(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], v280.m128i_i64[1]);
      v256.m128i_i64[0] = v275.m128i_i64[0];
      sub_106F0(v275.m128i_i64[0]);
      v100 = v256.m128i_i64[0];
      v101 = v257;
      *a1 = &off_4D850;
      a1[1] = v100;
      v102 = *(_QWORD *)(v100 + 8);
      v42[2] = v101;
      Z3_inc_ref(v102, v101);
      v103 = v275.m128i_i64[1];
      v274 = &off_4D850;
      *v42 = &off_4D890;
      if ( v103 )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v99 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x18:
      v92 = 8 * a3[9];
      sub_151B0(&v276, a2, a3 + 12);
      sub_10880(&v279, (__int64)&v276, v92);
      sub_151B0(&v274, a2, a3 + 8);
      v93 = v280.m128i_i64[1];
      v257 = (_QWORD *)Z3_mk_bvashr(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], v280.m128i_i64[1]);
      v256.m128i_i64[0] = v275.m128i_i64[0];
      sub_106F0(v275.m128i_i64[0]);
      v94 = v256.m128i_i64[0];
      v95 = v257;
      *a1 = &off_4D850;
      a1[1] = v94;
      v96 = *(_QWORD *)(v94 + 8);
      v42[2] = v95;
      Z3_inc_ref(v96, v95);
      v97 = v275.m128i_i64[1];
      v274 = &off_4D850;
      *v42 = &off_4D890;
      if ( v97 )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v93 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x19:
      v73 = 8 * a3[9];
      v260 = &v268;
      sub_151B0(&v268, a2, a3 + 8);
      v259 = &v271;
      sub_151B0(&v271, a2, a3 + 12);
      sub_13D50(&v274, a2 + 24, 0xFFFFFFFF, v73);
      LODWORD(v261) = 8 * a3[17];
      sub_11170(&v276, (__int64)&v274, (__int64)&v271);
      *(double *)v258.m128i_i64 = v278[0];
      v74 = Z3_get_sort(*(_QWORD *)(v269 + 8), v270);
      v75 = v269;
      v256.m128i_i64[0] = v74;
      v76 = Z3_get_error_code(*(_QWORD *)(v269 + 8));
      if ( v76 && *(_BYTE *)v75 )
      {
        v27 = __cxa_allocate_exception(0x10u);
        v28 = (const char *)Z3_get_error_msg(*(_QWORD *)(v75 + 8), v76);
        sub_105D0(v27, v28);
        __cxa_throw(v27, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v77 = v269;
      v280 = _mm_unpacklo_epi64((__m128i)v269, (__m128i)v256.m128i_u64[0]);
      Z3_inc_ref(*(_QWORD *)(v269 + 8), v256.m128i_i64[0]);
      v279 = (__int64 (__fastcall **)())&off_4D870;
      if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v77 + 8), v256.m128i_i64[0]) == 2 )
      {
        if ( !v256.m128i_i64[0] )
          goto LABEL_66;
      }
      else
      {
        if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v77 + 8), v256.m128i_i64[0]) != 3 )
        {
          if ( v256.m128i_i64[0] )
            Z3_dec_ref(*(_QWORD *)(v77 + 8));
          goto LABEL_67;
        }
        if ( !v256.m128i_i64[0] )
        {
LABEL_66:
          if ( (unsigned __int8)sub_10A10((__int64)&v276) )
          {
            v253 = Z3_mk_gt(*(_QWORD *)(v269 + 8), v270, v258.m128i_i64[0]);
            goto LABEL_327;
          }
LABEL_67:
          v78 = Z3_get_sort(*(_QWORD *)(v269 + 8), v270);
          v79 = v269;
          v256.m128i_i64[0] = v78;
          v80 = Z3_get_error_code(*(_QWORD *)(v269 + 8));
          if ( v80 && *(_BYTE *)v79 )
          {
            v256.m128i_i32[0] = v80;
            v35 = __cxa_allocate_exception(0x10u);
            v36 = (const char *)Z3_get_error_msg(*(_QWORD *)(v79 + 8), v256.m128i_u32[0]);
            sub_105D0(v35, v36);
            __cxa_throw(v35, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
          }
          v81 = v269;
          v280 = _mm_unpacklo_epi64((__m128i)v269, (__m128i)v256.m128i_u64[0]);
          Z3_inc_ref(*(_QWORD *)(v269 + 8), v256.m128i_i64[0]);
          v279 = (__int64 (__fastcall **)())&off_4D870;
          v82 = Z3_get_sort_kind(*(_QWORD *)(v81 + 8), v256.m128i_i64[0]);
          if ( v256.m128i_i64[0] )
          {
            v83 = *(_QWORD *)(v81 + 8);
            v256.m128i_i32[0] = v82;
            Z3_dec_ref(v83);
            v82 = v256.m128i_i32[0];
          }
          if ( v82 == 4 && (unsigned __int8)sub_10B90((__int64)&v276) )
          {
            v253 = Z3_mk_bvsgt(*(_QWORD *)(v269 + 8), v270, v258.m128i_i64[0]);
          }
          else
          {
            v84 = Z3_get_sort(*(_QWORD *)(v269 + 8), v270);
            v85 = v269;
            v256.m128i_i64[0] = v84;
            v86 = Z3_get_error_code(*(_QWORD *)(v269 + 8));
            if ( v86 && *(_BYTE *)v85 )
            {
              v256.m128i_i32[0] = v86;
              v15 = __cxa_allocate_exception(0x10u);
              v16 = (const char *)Z3_get_error_msg(*(_QWORD *)(v85 + 8), v256.m128i_u32[0]);
              sub_105D0(v15, v16);
              __cxa_throw(v15, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
            }
            v87 = v269;
            v280 = _mm_unpacklo_epi64((__m128i)v269, (__m128i)v256.m128i_u64[0]);
            Z3_inc_ref(*(_QWORD *)(v269 + 8), v256.m128i_i64[0]);
            v279 = (__int64 (__fastcall **)())&off_4D870;
            v88 = Z3_get_sort_kind(*(_QWORD *)(v87 + 8), v256.m128i_i64[0]);
            if ( v256.m128i_i64[0] )
              Z3_dec_ref(*(_QWORD *)(v87 + 8));
            if ( v88 != 9 || !(unsigned __int8)sub_10CF0((__int64)&v276) )
            {
              v257 = nullptr;
              goto LABEL_79;
            }
            v253 = Z3_mk_fpa_gt(*(_QWORD *)(v269 + 8), v270, v258.m128i_i64[0]);
          }
LABEL_327:
          v257 = (_QWORD *)v253;
LABEL_79:
          v89 = v269;
          v90 = Z3_get_error_code(*(_QWORD *)(v269 + 8));
          if ( v90 && *(_BYTE *)v89 )
          {
            v17 = __cxa_allocate_exception(0x10u);
            v18 = (const char *)Z3_get_error_msg(*(_QWORD *)(v89 + 8), v90);
            sub_105D0(v17, v18);
            __cxa_throw(v17, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
          }
          v91 = v269;
          v280 = _mm_unpacklo_epi64((__m128i)v269, (__m128i)(unsigned __int64)v257);
          Z3_inc_ref(*(_QWORD *)(v269 + 8), v257);
          v256.m128i_i64[0] = (__int64)&off_4D890;
          v279 = (__int64 (__fastcall **)())&off_4D890;
          sub_13F30(v42, a2, (__int64)&v279, v261);
          if ( v257 )
            Z3_dec_ref(*(_QWORD *)(v91 + 8));
          if ( v258.m128i_i64[0] )
            Z3_dec_ref(v277[1]);
          if ( v275.m128i_i64[1] )
            Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
          v271 = &off_4D850;
          if ( v273 )
            Z3_dec_ref(v272[1]);
          v268 = &off_4D850;
          if ( v270 )
            Z3_dec_ref(*(_QWORD *)(v269 + 8));
          return v42;
        }
      }
      Z3_dec_ref(*(_QWORD *)(v77 + 8));
      goto LABEL_66;
    case 0x1A:
      sub_151B0(v263, a2, a3 + 8);
      v258.m128i_i64[0] = (__int64)&v265;
      sub_151B0(&v265, a2, a3 + 12);
      v257 = v263;
      v260 = &v268;
      sub_129B0(&v268, (__int64)v263, (__int64)&v265);
      v72 = 8 * a3[17];
      sub_12460(&v274, (__int64)&v265, (__int64)&v268);
      v259 = &v271;
      sub_12460(&v271, (__int64)v263, (__int64)&v268);
      sub_121F0(&v276, (__int64)&v271, (__int64)&v274);
      sub_118C0(&v279, (__int64)&v276, 0);
      sub_13F30(a1, a2, (__int64)&v279, v72);
      if ( v280.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      if ( v273 )
        Z3_dec_ref(v272[1]);
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v270 )
        Z3_dec_ref(*(_QWORD *)(v269 + 8));
      v265 = &off_4D850;
      if ( v267 )
        Z3_dec_ref(*(_QWORD *)(v266 + 8));
      v263[0] = &off_4D850;
      if ( v264 )
        goto LABEL_60;
      return v42;
    case 0x1B:
      v66 = 8 * a3[9];
      v258.m128i_i64[0] = (__int64)&v265;
      sub_151B0(&v265, a2, a3 + 8);
      v260 = &v268;
      sub_151B0(&v268, a2, a3 + 12);
      v256.m128i_i64[0] = a2 + 24;
      v259 = &v271;
      sub_13D50(&v271, a2 + 24, v66, v66);
      sub_11170(&v279, (__int64)&v271, (__int64)&v268);
      sub_13D50(&v276, a2 + 24, 1u, v66);
      v67 = v278[0];
      v68 = v277[1];
      v257 = v277;
      v262 = v280.m128i_i64[1];
      v261 = Z3_mk_bvshl(v68, *(_QWORD *)&v278[0], v280.m128i_i64[1]);
      v69 = Z3_get_error_code(v257[1]);
      v70 = (__m128i)_mm_loadh_ps((const double *)&v261);
      if ( v69 && *(_BYTE *)v257 )
      {
        v25 = __cxa_allocate_exception(0x10u);
        v26 = (const char *)Z3_get_error_msg(v257[1], v69);
        sub_105D0(v25, v26);
        __cxa_throw(v25, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v275 = v70;
      Z3_inc_ref(v257[1], v261);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v274 = (__int64 (__fastcall **)())&off_4D890;
      if ( v67 != 0.0 )
        Z3_dec_ref(v257[1]);
      if ( v262 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v71 = 8 * a3[17];
      sub_121F0(&v276, v258.m128i_i64[0], (__int64)&v274);
      sub_10E50(&v279, (__int64)&v276, 0);
      sub_13F30(v42, v43, (__int64)&v279, v71);
      if ( v280.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      if ( v261 )
        Z3_dec_ref(v257[1]);
      if ( v273 )
        Z3_dec_ref(v272[1]);
      v268 = &off_4D850;
      if ( v270 )
        Z3_dec_ref(*(_QWORD *)(v269 + 8));
      v265 = &off_4D850;
      if ( v267 )
        goto LABEL_28;
      return v42;
    case 0x1C:
      v57 = 8 * a3[9];
      v258.m128i_i64[0] = (__int64)&v265;
      sub_151B0(&v265, a2, a3 + 8);
      v260 = &v268;
      sub_151B0(&v268, a2, a3 + 12);
      v259 = &v271;
      sub_13D50(&v271, a2 + 24, 1u, v57);
      sub_11170(&v279, (__int64)&v268, (__int64)&v271);
      v58 = v272;
      v59 = v280.m128i_i64[1];
      v60 = v272[1];
      v262 = v273;
      v61 = Z3_mk_bvshl(v60, v273, v280.m128i_i64[1]);
      v62 = v58[1];
      v261 = v61;
      v257 = v58;
      v63 = Z3_get_error_code(v62);
      v64 = (__m128i)_mm_loadh_ps((const double *)&v261);
      if ( v63 && *(_BYTE *)v257 )
      {
        v29 = __cxa_allocate_exception(0x10u);
        v30 = (const char *)Z3_get_error_msg(v257[1], v63);
        sub_105D0(v29, v30);
        __cxa_throw(v29, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v275 = v64;
      Z3_inc_ref(v257[1], v261);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v274 = (__int64 (__fastcall **)())&off_4D890;
      if ( v59 )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v65 = 8 * a3[17];
      sub_121F0(&v276, v258.m128i_i64[0], (__int64)&v274);
      sub_10E50(&v279, (__int64)&v276, 0);
      sub_13F30(v42, a2, (__int64)&v279, v65);
      if ( v280.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      if ( v261 )
        Z3_dec_ref(v257[1]);
      if ( v262 )
        Z3_dec_ref(v257[1]);
      v268 = &off_4D850;
      if ( v270 )
        Z3_dec_ref(*(_QWORD *)(v269 + 8));
      v265 = &off_4D850;
      if ( v267 )
LABEL_28:
        Z3_dec_ref(*(_QWORD *)(v266 + 8));
      return v42;
    case 0x1D:
      v206 = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 8);
      sub_118C0(&v279, (__int64)&v276, 0);
      sub_13F30(a1, a2, (__int64)&v279, v206);
      if ( v280.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_10;
      return v42;
    case 0x1E:
      sub_151B0(v263, a2, a3 + 8);
      v258.m128i_i64[0] = (__int64)&v265;
      sub_151B0(&v265, a2, a3 + 12);
      v257 = v263;
      v260 = &v268;
      sub_11170(&v268, (__int64)v263, (__int64)&v265);
      v256.m128i_i32[0] = 8 * a3[17];
      sub_12460(&v274, (__int64)&v265, (__int64)&v268);
      v259 = &v271;
      sub_12460(&v271, (__int64)v263, (__int64)&v268);
      sub_121F0(&v276, (__int64)&v271, (__int64)&v274);
      sub_118C0(&v279, (__int64)&v276, 0);
      sub_13F30(a1, a2, (__int64)&v279, v256.m128i_u32[0]);
      if ( v280.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v280.m128i_i64[0] + 8));
      if ( *(_QWORD *)&v278[0] )
        Z3_dec_ref(v277[1]);
      if ( v273 )
        Z3_dec_ref(v272[1]);
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      if ( v270 )
        Z3_dec_ref(*(_QWORD *)(v269 + 8));
      v265 = &off_4D850;
      if ( v267 )
        Z3_dec_ref(*(_QWORD *)(v266 + 8));
      v263[0] = &off_4D850;
      if ( v264 )
LABEL_60:
        Z3_dec_ref(*(_QWORD *)(v263[1] + 8LL));
      return v42;
    case 0x20:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v281 = (__m128i)_mm_loadh_ps(v278);
      v204 = Z3_mk_distinct(*(_QWORD *)(v275.m128i_i64[0] + 8), 2, &v281);
      sub_106F0(v275.m128i_i64[0]);
      v205 = v275.m128i_i64[0];
      v257 = (_QWORD *)v204;
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v204);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v204);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v204 )
        Z3_dec_ref(*(_QWORD *)(v205 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x21:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v202 = Z3_mk_eq(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1]);
      sub_106F0(v275.m128i_i64[0]);
      v203 = v275.m128i_i64[0];
      v257 = (_QWORD *)v202;
      v280 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v202);
      Z3_inc_ref(*(_QWORD *)(v275.m128i_i64[0] + 8), v202);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v202 )
        Z3_dec_ref(*(_QWORD *)(v203 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
    case 0x22:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v198 = Z3_mk_bvuge(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v199 = v275.m128i_i64[0];
      v200 = (_QWORD *)v198;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v198);
      sub_106F0(v275.m128i_i64[0]);
      v201 = _mm_load_si128(&v256);
      v257 = v200;
      v280 = v201;
      Z3_inc_ref(*(_QWORD *)(v199 + 8), v200);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v199 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x23:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v194 = Z3_mk_bvult(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v195 = v275.m128i_i64[0];
      v196 = (_QWORD *)v194;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v194);
      sub_106F0(v275.m128i_i64[0]);
      v197 = _mm_load_si128(&v256);
      v257 = v196;
      v280 = v197;
      Z3_inc_ref(*(_QWORD *)(v195 + 8), v196);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v195 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x24:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v190 = Z3_mk_bvugt(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v191 = v275.m128i_i64[0];
      v192 = (_QWORD *)v190;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v190);
      sub_106F0(v275.m128i_i64[0]);
      v193 = _mm_load_si128(&v256);
      v257 = v192;
      v280 = v193;
      Z3_inc_ref(*(_QWORD *)(v191 + 8), v192);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v191 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x25:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v186 = Z3_mk_bvule(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v187 = v275.m128i_i64[0];
      v188 = (_QWORD *)v186;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v186);
      sub_106F0(v275.m128i_i64[0]);
      v189 = _mm_load_si128(&v256);
      v257 = v188;
      v280 = v189;
      Z3_inc_ref(*(_QWORD *)(v187 + 8), v188);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v187 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x26:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v219 = Z3_mk_bvsgt(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v220 = v275.m128i_i64[0];
      v221 = (_QWORD *)v219;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v219);
      sub_106F0(v275.m128i_i64[0]);
      v222 = _mm_load_si128(&v256);
      v257 = v221;
      v280 = v222;
      Z3_inc_ref(*(_QWORD *)(v220 + 8), v221);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v220 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x27:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v215 = Z3_mk_bvsge(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v216 = v275.m128i_i64[0];
      v217 = (_QWORD *)v215;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v215);
      sub_106F0(v275.m128i_i64[0]);
      v218 = _mm_load_si128(&v256);
      v257 = v217;
      v280 = v218;
      Z3_inc_ref(*(_QWORD *)(v216 + 8), v217);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v216 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x28:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v211 = Z3_mk_bvslt(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v212 = v275.m128i_i64[0];
      v213 = (_QWORD *)v211;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v211);
      sub_106F0(v275.m128i_i64[0]);
      v214 = _mm_load_si128(&v256);
      v257 = v213;
      v280 = v214;
      Z3_inc_ref(*(_QWORD *)(v212 + 8), v213);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v212 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_274;
      return v42;
    case 0x29:
      LODWORD(v259) = 8 * a3[17];
      sub_151B0(&v276, a2, a3 + 12);
      sub_151B0(&v274, a2, a3 + 8);
      v207 = Z3_mk_bvsle(*(_QWORD *)(v275.m128i_i64[0] + 8), v275.m128i_i64[1], *(_QWORD *)&v278[0]);
      v208 = v275.m128i_i64[0];
      v209 = (_QWORD *)v207;
      v256 = _mm_unpacklo_epi64((__m128i)v275.m128i_u64[0], (__m128i)(unsigned __int64)v207);
      sub_106F0(v275.m128i_i64[0]);
      v210 = _mm_load_si128(&v256);
      v257 = v209;
      v280 = v210;
      Z3_inc_ref(*(_QWORD *)(v208 + 8), v209);
      v256.m128i_i64[0] = (__int64)&off_4D890;
      v279 = (__int64 (__fastcall **)())&off_4D890;
      sub_13F30(a1, a2, (__int64)&v279, (unsigned int)v259);
      if ( v257 )
        Z3_dec_ref(*(_QWORD *)(v208 + 8));
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
LABEL_274:
        Z3_dec_ref(v277[1]);
      return v42;
    default:
      v42 = v41;
      if ( under_debugger )
        goto LABEL_342;
      v131 = 30697;
      interr(30697);
LABEL_302:
      v132 = Z3_mk_mod(v131, a2, *(_QWORD *)&v130);
LABEL_137:
      v133 = v132;
      sub_106F0(v275.m128i_i64[0]);
      v134 = v275.m128i_i64[0];
      v42[2] = v133;
      *v42 = &off_4D850;
      v42[1] = v134;
      Z3_inc_ref(*(_QWORD *)(v134 + 8), v133);
      *v42 = &off_4D890;
      v274 = &off_4D850;
      if ( v275.m128i_i64[1] )
        Z3_dec_ref(*(_QWORD *)(v275.m128i_i64[0] + 8));
      v276 = &off_4D850;
      if ( *(_QWORD *)&v278[0] )
        goto LABEL_232;
      return v42;
  }
}
