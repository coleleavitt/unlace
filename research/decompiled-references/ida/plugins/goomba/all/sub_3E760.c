__int64 __fastcall sub_3E760(__int64 a1, __m128i *a2, double a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned __int8 (__fastcall *hexdsp)(__int64, __m128i *, __int64); // rax
  unsigned int v8; // ebx
  void (__fastcall *v10)(__int64, __m128i *); // rax
  std::chrono::_V2::system_clock *v11; // rdi
  __int64 *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rdi
  __int64 m128i_i64; // rsi
  __int64 v20; // rax
  __m128i *v21; // rbp
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  size_t v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // r14
  __int64 v27; // r12
  __int64 *v28; // r13
  int v29; // ebx
  __int64 v30; // rdx
  __int64 (__fastcall ****v31)(); // r12
  __int64 (__fastcall ***v32)(); // r13
  unsigned int v33; // r14d
  int v34; // ebp
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 (__fastcall *v37)(__int64, __int64 (__fastcall ***)()); // rax
  const char *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 func; // rax
  _QWORD *v42; // rbp
  _QWORD *v43; // rdi
  _QWORD *v44; // r14
  __int64 v45; // rsi
  void (__fastcall *v46)(__int64, _QWORD *); // rax
  __int64 (__fastcall *v47)(__int64, __int64 (__fastcall ***)()); // rax
  const char *v48; // rsi
  void (__fastcall *v49)(__int64, __int64 (__fastcall ***)(), __m128i *); // rax
  void (__fastcall *v50)(__int64, __m128i *, __int64 (__fastcall ***)()); // rax
  __int64 v51; // rbp
  void (__fastcall *v52)(__int64, __int64); // rax
  void (__fastcall *v53)(__int64, __int64); // rax
  void (__fastcall *v54)(__int64, __int64); // rax
  void (__fastcall *v55)(__int64, __int64); // rax
  __int64 v56; // rdi
  __int64 v57; // r13
  __int64 v58; // r12
  __int64 v59; // rbp
  _QWORD *v60; // rdi
  void (__fastcall *v61)(__int64, _BYTE *); // rax
  void (__fastcall *v62)(__int64, _BYTE *); // rax
  void (__fastcall *v63)(__int64, _BYTE *); // rax
  _BYTE *v64; // rsi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdi
  __int64 v66; // r14
  __int64 v67; // r13
  __int64 v68; // rax
  _BYTE *v69; // rbp
  void (__fastcall *v70)(__int64, _BYTE *); // rax
  __int64 v71; // rdi
  __int64 v72; // r13
  __int64 v73; // r12
  __int64 v74; // rax
  _BYTE *v75; // rbp
  void (__fastcall *v76)(__int64, _BYTE *); // rax
  std::chrono::_V2::system_clock *v77; // rdi
  __int64 v78; // rdx
  __m128i *v79; // rbp
  __m128i *v80; // r13
  _BYTE *v81; // r12
  void (__fastcall *v82)(__int64, _BYTE *); // rax
  void (__fastcall *v83)(__int64, _BYTE *); // rax
  void (__fastcall *v84)(__int64, _BYTE *); // rax
  void (__fastcall *v85)(char *, _BYTE *); // rax
  __m128i si128; // xmm2
  __int64 v87; // rbp
  __int64 v88; // rdi
  __int64 v89; // rbp
  __int64 v90; // r14
  int v91; // ebp
  __int64 v92; // rax
  __int64 v93; // rax
  __m128i *v94; // rsi
  __int64 v95; // r14
  __int64 v96; // rdi
  unsigned int v97; // ebp
  __int64 v98; // r13
  __int64 v99; // rax
  __m128i *v100; // r12
  void (__fastcall *v101)(__int64, __m128i *); // rax
  __int64 v102; // r15
  __int64 v103; // r14
  __int64 v104; // r15
  __int64 const_decl; // rax
  __int64 v106; // r14
  __int64 v107; // rbx
  const char *v108; // rax
  const char *v109; // rbx
  size_t v110; // rax
  size_t v111; // rbp
  __int64 v112; // rcx
  __int64 decl_name; // rbp
  void *symbol_string; // rax
  size_t v115; // rax
  char *v116; // rax
  size_t v117; // r8
  _DWORD *v118; // r9
  const char *v119; // rbp
  void *v120; // rsi
  char *v121; // rdi
  int num_consts; // ebx
  int num_funcs; // eax
  unsigned int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  __int64 *v129; // [rsp+10h] [rbp-4F8h]
  __m128i *v130; // [rsp+10h] [rbp-4F8h]
  __m128i *v131; // [rsp+18h] [rbp-4F0h]
  char v132; // [rsp+18h] [rbp-4F0h]
  __int64 model; // [rsp+18h] [rbp-4F0h]
  __m128 v134; // [rsp+20h] [rbp-4E8h] BYREF
  char *v135; // [rsp+30h] [rbp-4D8h] BYREF
  unsigned int v136; // [rsp+3Ch] [rbp-4CCh]
  void *dest; // [rsp+40h] [rbp-4C8h]
  __int64 v138; // [rsp+48h] [rbp-4C0h]
  __int64 const_interp; // [rsp+50h] [rbp-4B8h]
  __int64 v140; // [rsp+58h] [rbp-4B0h]
  __int64 v141; // [rsp+60h] [rbp-4A8h]
  __int64 v142; // [rsp+68h] [rbp-4A0h]
  __int64 v143; // [rsp+70h] [rbp-498h]
  __int64 v144; // [rsp+78h] [rbp-490h]
  __int64 v145; // [rsp+80h] [rbp-488h]
  size_t n; // [rsp+88h] [rbp-480h]
  void *src; // [rsp+90h] [rbp-478h]
  __int64 (__fastcall ***v148)(); // [rsp+98h] [rbp-470h]
  struct _Unwind_Exception *v149; // [rsp+A0h] [rbp-468h]
  __int64 (__fastcall ***v150)(); // [rsp+A8h] [rbp-460h]
  char *v151; // [rsp+B0h] [rbp-458h]
  char *v152; // [rsp+B8h] [rbp-450h]
  __int64 (__fastcall ***v153)(); // [rsp+C0h] [rbp-448h]
  _QWORD *v154; // [rsp+C8h] [rbp-440h]
  char v155; // [rsp+DEh] [rbp-42Ah] BYREF
  char v156; // [rsp+DFh] [rbp-429h] BYREF
  __m128i *v157; // [rsp+E0h] [rbp-428h] BYREF
  __int128 v158; // [rsp+E8h] [rbp-420h]
  __int64 (__fastcall **v159)(); // [rsp+100h] [rbp-408h] BYREF
  __int64 v160; // [rsp+108h] [rbp-400h]
  __int64 v161; // [rsp+110h] [rbp-3F8h]
  _QWORD v162[2]; // [rsp+120h] [rbp-3E8h] BYREF
  double v163[15]; // [rsp+130h] [rbp-3D8h] BYREF
  _BYTE v164[24]; // [rsp+1C0h] [rbp-348h] BYREF
  __int64 (__fastcall **v165)(); // [rsp+1E0h] [rbp-328h] BYREF
  __int64 v166; // [rsp+1E8h] [rbp-320h]
  __int64 v167; // [rsp+1F0h] [rbp-318h]
  __int64 v168; // [rsp+200h] [rbp-308h]
  __int64 v169; // [rsp+208h] [rbp-300h]
  __int64 v170; // [rsp+218h] [rbp-2F0h]
  __int64 v171; // [rsp+220h] [rbp-2E8h]
  __int64 (__fastcall **v172)(); // [rsp+230h] [rbp-2D8h] BYREF
  _BYTE v173[16]; // [rsp+238h] [rbp-2D0h] BYREF
  _BYTE v174[16]; // [rsp+248h] [rbp-2C0h] BYREF
  _BYTE v175[16]; // [rsp+258h] [rbp-2B0h] BYREF
  __int64 v176; // [rsp+268h] [rbp-2A0h]
  char v177; // [rsp+278h] [rbp-290h]
  __int64 v178; // [rsp+280h] [rbp-288h]
  __int64 v179; // [rsp+288h] [rbp-280h]
  _QWORD v180[5]; // [rsp+2A0h] [rbp-268h] BYREF
  void *v181; // [rsp+2C8h] [rbp-240h]
  void *v182; // [rsp+2F8h] [rbp-210h]
  struct _Unwind_Exception v183; // [rsp+320h] [rbp-1E8h] BYREF
  __int64 v184; // [rsp+340h] [rbp-1C8h]
  __int64 v185; // [rsp+348h] [rbp-1C0h]
  __int64 v186; // [rsp+358h] [rbp-1B0h]
  __int64 v187; // [rsp+360h] [rbp-1A8h]
  volatile signed __int32 *v188; // [rsp+378h] [rbp-190h]
  __int64 v189; // [rsp+380h] [rbp-188h]
  __int64 v190; // [rsp+388h] [rbp-180h]
  __m128 v191; // [rsp+3A0h] [rbp-168h] BYREF
  __int64 (__fastcall **v192)(); // [rsp+3B0h] [rbp-158h] BYREF
  char v193; // [rsp+3B8h] [rbp-150h]
  __int64 v194; // [rsp+3C4h] [rbp-144h] BYREF
  int v195; // [rsp+3CCh] [rbp-13Ch]
  __int64 v196; // [rsp+3D0h] [rbp-138h]
  int v197; // [rsp+3E0h] [rbp-128h] BYREF
  void *v198; // [rsp+3E8h] [rbp-120h]
  int *v199; // [rsp+3F0h] [rbp-118h]
  int *v200; // [rsp+3F8h] [rbp-110h]
  __int64 v201; // [rsp+400h] [rbp-108h]
  int v202; // [rsp+410h] [rbp-F8h] BYREF
  void *v203; // [rsp+418h] [rbp-F0h]
  int *v204; // [rsp+420h] [rbp-E8h]
  int *v205; // [rsp+428h] [rbp-E0h]
  __int64 v206; // [rsp+430h] [rbp-D8h]
  int v207; // [rsp+440h] [rbp-C8h] BYREF
  void *v208; // [rsp+448h] [rbp-C0h]
  int *v209; // [rsp+450h] [rbp-B8h]
  int *v210; // [rsp+458h] [rbp-B0h]
  __int64 v211; // [rsp+460h] [rbp-A8h]
  int v212; // [rsp+470h] [rbp-98h] BYREF
  void *v213; // [rsp+478h] [rbp-90h]
  int *v214; // [rsp+480h] [rbp-88h]
  int *v215; // [rsp+488h] [rbp-80h]
  __int64 v216; // [rsp+490h] [rbp-78h]
  int v217; // [rsp+4A0h] [rbp-68h] BYREF
  void *v218; // [rsp+4A8h] [rbp-60h]
  int *v219; // [rsp+4B0h] [rbp-58h]
  int *v220; // [rsp+4B8h] [rbp-50h]
  __int64 v221; // [rsp+4C0h] [rbp-48h]
  unsigned __int64 v222; // [rsp+4C8h] [rbp-40h]

  v222 = __readfsqword(0x28u);
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64))get_hexdsp(a1, a2);
  if ( hexdsp(349, a2, 1) || !(unsigned __int8)sub_F730(a2->m128i_i32, (__int64)a2) )
    return 0;
  v10 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(a2, a2);
  v10(338, a2);
  sub_C720((__int64)"goomba: found an MBA instruction %a: %s\n", a3, (const char *)a2[1].m128i_i64[1]);
  v157 = nullptr;
  v140 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)"goomba: found an MBA instruction %a: %s\n");
  v158 = 0;
  v144 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)"goomba: found an MBA instruction %a: %s\n");
  v11 = *(std::chrono::_V2::system_clock **)(a1 + 16);
  if ( v11 )
  {
    memset(&v183, 0, 24);
    sub_40B00(v11, &v183, a2);
    v12 = *(__int64 **)&v183.exception_class;
    v13 = *(_QWORD *)&v183.exception_class + 8 * (__int64)v183.exception_cleanup;
    if ( *(_QWORD *)&v183.exception_class != v13 )
    {
      do
      {
        v11 = (std::chrono::_V2::system_clock *)&v157;
        sub_33B40((__int64 *)&v157, *v12++, "Oracle");
      }
      while ( (__int64 *)v13 != v12 );
      v13 = *(_QWORD *)&v183.exception_class;
    }
    if ( v13 )
    {
      v183.exception_cleanup = nullptr;
      v11 = (std::chrono::_V2::system_clock *)v13;
      qfree(v13);
    }
  }
  v142 = std::chrono::_V2::system_clock::now(v11);
  sub_1B3E0((__int64)v180, (__int64)a2, v14);
  v16 = sub_1AD70((__int64)v180, a2[1].m128i_i64[1], v15);
  sub_33B40((__int64 *)&v157, v16, "Linear");
  v141 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)&v157);
  v150 = &v165;
  sub_37A20((__int64)&v165, a2);
  v149 = &v183;
  sub_3B2B0(&v183, (__int64)&v165, 0.0, a4, a5, a6);
  v17 = sub_35120(&v183, a2[1].m128i_i64[1]);
  sub_33B40((__int64 *)&v157, v17, "Simplified lin conj");
  v143 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)&v157);
  v18 = (char *)&v172;
  v148 = &v172;
  m128i_i64 = *(_QWORD *)a1;
  sub_3C600((__int64)&v172, *(_QWORD *)a1, (__int64)a2);
  if ( v177 )
  {
    m128i_i64 = sub_34340((__int64)&v172, a2[1].m128i_i64[1]);
    v18 = (char *)&v157;
    sub_33B40((__int64 *)&v157, m128i_i64, "Non-linear");
  }
  v20 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)v18);
  v21 = v157;
  v145 = v20;
  v22 = 8 * v158;
  v131 = (__m128i *)((char *)v157 + 8 * v158);
  if ( v131 == v157 )
  {
LABEL_74:
    v8 = 0;
    goto LABEL_37;
  }
  if ( !(v22 >> 3) )
  {
    sub_3E500(v157, (__int64)v131, -2);
    goto LABEL_89;
  }
  _BitScanReverse64(&v23, v22 >> 3);
  sub_3E500(v157, (__int64)v131, 2LL * (int)v23);
  if ( v22 <= 128 )
  {
LABEL_89:
    m128i_i64 = (__int64)v131;
    v18 = (char *)v21;
    sub_3D7E0(v21->m128i_i64, (__int64)v131, v24);
    goto LABEL_21;
  }
  m128i_i64 = (__int64)v21[8].m128i_i64;
  v129 = v21[8].m128i_i64;
  sub_3D7E0(v21->m128i_i64, (__int64)v21[8].m128i_i64, v24);
  do
  {
    v26 = v129;
    v27 = *v129;
    while ( 1 )
    {
      v28 = v26;
      v18 = (char *)*(v26 - 1);
      v29 = sub_FE30(v27, m128i_i64, v25);
      --v26;
      if ( v29 >= (int)sub_FE30((__int64)v18, m128i_i64, v30) )
        break;
      v26[1] = *v26;
    }
    ++v129;
    *v28 = v27;
  }
  while ( v131 != (__m128i *)v129 );
LABEL_21:
  v31 = (__int64 (__fastcall ****)())v157;
  v130 = (__m128i *)((char *)v157 + 8 * v158);
  if ( v130 == v157 )
    goto LABEL_74;
  while ( 1 )
  {
    v32 = *v31;
    v33 = *(_DWORD *)(a1 + 8);
    v132 = *(_BYTE *)(a1 + 12);
    v34 = sub_FE30((__int64)a2, m128i_i64, v25);
    v36 = sub_FE30((__int64)v32, m128i_i64, v35);
    v37 = (__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)()))get_hexdsp(v32, m128i_i64);
    v38 = (const char *)v37(338, v32);
    sub_C720((__int64)"goomba: testing candidate: %s\n", v38);
    if ( v34 >= (int)v36 )
      break;
    m128i_i64 = v36;
    v18 = "goomba: candidate (%d) is not simpler than original (%d), skipping\n";
    sub_C720((__int64)"goomba: candidate (%d) is not simpler than original (%d), skipping\n", v36, v34);
LABEL_24:
    if ( v130 == (__m128i *)++v31 )
      goto LABEL_74;
  }
  v196 = 0;
  v192 = &off_4D8D0;
  v194 = 0x100000000LL;
  v39 = Z3_mk_config();
  v196 = Z3_mk_context_rc(v39);
  BYTE4(v194) = 1;
  v195 = 1;
  Z3_set_error_handler(v196, 0);
  Z3_set_ast_print_mode(v196, 2);
  Z3_del_config(v39);
  m128i_i64 = (__int64)v32;
  v199 = &v197;
  v200 = &v197;
  v204 = &v202;
  v205 = &v202;
  v209 = &v207;
  v210 = &v207;
  v214 = &v212;
  v215 = &v212;
  v197 = 0;
  v198 = nullptr;
  v201 = 0;
  v202 = 0;
  v203 = nullptr;
  v206 = 0;
  v207 = 0;
  v208 = nullptr;
  v211 = 0;
  v212 = 0;
  v213 = nullptr;
  v216 = 0;
  v217 = 0;
  v218 = nullptr;
  v219 = &v217;
  v220 = &v217;
  v221 = 0;
  v193 = 0;
  v8 = sub_F8D0((__int64 (__fastcall ***)(std::exception *))a2, v32, v40);
  if ( !(_BYTE)v8 )
  {
    sub_C720((__int64)"goomba: candidate not equivalent, skipping\n");
    goto LABEL_29;
  }
  sub_C720((__int64)"goomba: instruction is probably equivalent to candidate\n");
  LOBYTE(v34) = qgetenv("VD_MBA_SKIP_PROOFS", 0) | (v33 == 0);
  if ( (_BYTE)v34 )
  {
    func = get_func(a2[1].m128i_i64[1]);
    m128i_i64 = (__int64)"goomba: z3 proof skipped, simplification assumed correct";
    set_func_cmt(func, "goomba: z3 proof skipped, simplification assumed correct", 0);
    v8 = v34;
    goto LABEL_29;
  }
  v153 = &v159;
  sub_15410(&v159, (__int64)&v192, v32);
  v154 = v162;
  sub_15410(v162, (__int64)&v192, a2);
  *(_QWORD *)&v163[2] = &off_4DAE0;
  v138 = Z3_mk_solver(v196);
  v135 = (char *)&v194 + 4;
  v134 = _mm_loadh_ps((const double *)&v135);
  if ( v138 )
    Z3_solver_inc_ref(v196, v138);
  sub_33B10((__int64)v135);
  si128 = _mm_load_si128((const __m128i *)&v134);
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  *(__m128i *)v164 = si128;
  v87 = Z3_mk_params(v196);
  *(_QWORD *)&v164[16] = v87;
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  Z3_params_inc_ref(v196, v87);
  v134.m128_u64[0] = Z3_mk_string_symbol(v196, "timeout");
  sub_33B10((__int64)v135);
  Z3_params_set_uint(v196, v87, v134.m128_u64[0], v33);
  Z3_solver_set_params(v196, v138, v87);
  sub_33B10((__int64)v135);
  Z3_params_dec_ref(v196, v87);
  v191 = _mm_loadh_ps(v163);
  v88 = *(_QWORD *)(v160 + 8);
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  v89 = Z3_mk_distinct(v88, 2, &v191);
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  sub_33B10(v160);
  v90 = v160;
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  *(__m128i *)&v164[8] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v160, (__m128i)(unsigned __int64)v89);
  Z3_inc_ref(*(_QWORD *)(v160 + 8), v89);
  v134.m128_u64[0] = (unsigned __int64)&off_4D890;
  *(_QWORD *)v164 = &off_4D890;
  Z3_solver_assert(v196, v138, v89);
  sub_33B10((__int64)v135);
  if ( v89 )
    Z3_dec_ref(*(_QWORD *)(v90 + 8));
  v91 = Z3_solver_check(v196, v138);
  sub_33B10((__int64)v135);
  if ( v91 == 1 )
  {
    sub_C720((__int64)"goomba: SMT check result: %d\n", 1);
    sub_C720((__int64)"Satisfiable. Counterexample: \n");
    model = Z3_solver_get_model(v196, v138);
    sub_33B10((__int64)v135);
    *(_QWORD *)&v163[6] = &off_4DAC0;
    Z3_model_inc_ref(v196, model);
    v136 = 0;
    v151 = &v155;
    v152 = &v156;
    while ( 1 )
    {
      num_consts = Z3_model_get_num_consts(v196, model);
      num_funcs = Z3_model_get_num_funcs(v196, model);
      if ( v136 >= num_funcs + num_consts )
        break;
      v124 = Z3_model_get_num_consts(v196, model);
      if ( v136 < v124 )
      {
        const_decl = Z3_model_get_const_decl(v196, model);
      }
      else
      {
        v125 = Z3_model_get_num_consts(v196, model);
        const_decl = Z3_model_get_func_decl(v196, model, v136 - v125);
      }
      v106 = const_decl;
      sub_33B10((__int64)v135);
      Z3_inc_ref(v196, v106);
      *(_QWORD *)&v163[10] = &off_4DAA0;
      Z3_inc_ref(v196, v106);
      *(_QWORD *)&v163[14] = &off_4DAA0;
      const_interp = Z3_model_get_const_interp(v196, model, v106);
      v107 = const_interp;
      sub_33B10((__int64)v135);
      Z3_inc_ref(v196, v107);
      *(_QWORD *)v164 = v134.m128_u64[0];
      v108 = (const char *)Z3_ast_to_string(v196, v107);
      v109 = v108;
      if ( !v108 )
        std::__throw_logic_error("basic_string::_S_construct null not valid");
      v110 = strlen(v108);
      v111 = v110;
      if ( v110 )
      {
        v112 = std::string::_Rep::_S_create(v110, 0, v151);
        dest = (void *)(v112 + 24);
        if ( v111 == 1 )
        {
          *(_BYTE *)(v112 + 24) = *v109;
        }
        else
        {
          n = v112;
          memcpy(dest, v109, v111);
          v112 = n;
        }
        if ( (_UNKNOWN *)v112 != &std::string::_Rep::_S_empty_rep_storage )
        {
          *(_DWORD *)(v112 + 16) = 0;
          *(_QWORD *)v112 = v111;
          *(_BYTE *)(v112 + v111 + 24) = 0;
        }
      }
      else
      {
        dest = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      }
      decl_name = Z3_get_decl_name(v196, v106);
      sub_33B10((__int64)v135);
      symbol_string = (void *)Z3_get_symbol_string(v196, decl_name);
      if ( !symbol_string )
        std::__throw_logic_error("basic_string::_S_construct null not valid");
      src = symbol_string;
      v115 = strlen((const char *)symbol_string);
      if ( v115 )
      {
        n = v115;
        v116 = (char *)std::string::_Rep::_S_create(v115, 0, v152);
        v117 = n;
        v118 = v116;
        v119 = v116 + 24;
        if ( n == 1 )
        {
          v116[24] = *(_BYTE *)src;
        }
        else
        {
          v120 = src;
          src = v116;
          memcpy(v116 + 24, v120, n);
          v118 = src;
          v117 = n;
        }
        if ( v118 != (_DWORD *)&std::string::_Rep::_S_empty_rep_storage )
        {
          v118[4] = 0;
          *(_QWORD *)v118 = v117;
          *((_BYTE *)v118 + v117 + 24) = 0;
        }
      }
      else
      {
        v119 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      }
      sub_C720((__int64)"%s = %s\n", v119, (const char *)dest);
      if ( v119 - 24 != (const char *)&std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v127 = _InterlockedExchangeAdd((volatile signed __int32 *)v119 - 2, 0xFFFFFFFF);
        }
        else
        {
          v127 = *((_DWORD *)v119 - 2);
          *((_DWORD *)v119 - 2) = v127 - 1;
        }
        if ( v127 <= 0 )
          std::string::_Rep::_M_destroy(v119 - 24, &v156);
      }
      v121 = (char *)dest - 24;
      if ( (char *)dest - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v126 = _InterlockedExchangeAdd((volatile signed __int32 *)dest - 2, 0xFFFFFFFF);
        }
        else
        {
          v126 = *((_DWORD *)dest - 2);
          *((_DWORD *)dest - 2) = v126 - 1;
        }
        if ( v126 <= 0 )
          std::string::_Rep::_M_destroy(v121, &v156);
      }
      if ( const_interp )
        Z3_dec_ref(v196);
      if ( v106 )
      {
        Z3_dec_ref(v196);
        Z3_dec_ref(v196);
      }
      ++v136;
    }
    Z3_model_dec_ref(v196, model);
    goto LABEL_126;
  }
  if ( v91 == -1 )
  {
    sub_C720((__int64)"goomba: SMT check result: %d\n", 0);
    goto LABEL_84;
  }
  sub_C720((__int64)"goomba: SMT check result: %d\n", 2);
  if ( !v132 )
  {
LABEL_126:
    v8 = 0;
    goto LABEL_84;
  }
  v92 = get_func(a2[1].m128i_i64[1]);
  set_func_cmt(v92, "goomba: z3 proof timed out, simplification assumed correct", 0);
LABEL_84:
  Z3_solver_dec_ref(v196, v138);
  v162[0] = &off_4D850;
  if ( *(_QWORD *)&v163[0] )
    Z3_dec_ref(*(_QWORD *)(v162[1] + 8LL));
  m128i_i64 = v161;
  v159 = &off_4D850;
  if ( v161 )
    Z3_dec_ref(*(_QWORD *)(v160 + 8));
LABEL_29:
  v42 = v218;
  v192 = &off_4D8D0;
  if ( v218 )
  {
    do
    {
      v43 = (_QWORD *)v42[3];
      v44 = v42;
      sub_32910(v43);
      v45 = v42[8];
      v42 = (_QWORD *)v42[2];
      v44[6] = &off_4D850;
      if ( v45 )
      {
        v43 = *(_QWORD **)(v44[7] + 8LL);
        Z3_dec_ref(v43);
      }
      v46 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v43, v45);
      v46(276, v44 + 4);
      m128i_i64 = 72;
      operator delete(v44, 0x48u);
    }
    while ( v42 );
  }
  sub_320E0(v213);
  sub_320E0(v208);
  sub_320E0(v203);
  sub_320E0(v198);
  v18 = (char *)v196;
  if ( v196 )
    Z3_del_context();
  if ( !(_BYTE)v8 )
    goto LABEL_24;
  v47 = (__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)()))get_hexdsp(v18, m128i_i64);
  v48 = (const char *)v47(338, v32);
  sub_C720((__int64)"goomba: SUCCESS: %s\n", v48);
  v49 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(), __m128i *))get_hexdsp("goomba: SUCCESS: %s\n", v48);
  v49(275, v32 + 8, a2 + 4);
  v50 = (void (__fastcall *)(__int64, __m128i *, __int64 (__fastcall ***)()))get_hexdsp(275, v32 + 8);
  v50(336, a2, v32);
  m128i_i64 = 0;
  v18 = "VD_MBA_LOG_PERF";
  if ( (unsigned __int8)qgetenv("VD_MBA_LOG_PERF", 0) )
  {
    v94 = a2;
    sub_3DFC0((__int64)v164, a2);
    v95 = *(_QWORD *)&v164[8];
    v96 = *(_QWORD *)v164;
    v97 = *(_DWORD *)&v164[8];
    if ( *(_QWORD *)v164 )
    {
      if ( *(_QWORD *)&v164[8] )
      {
        v98 = 0;
        do
        {
          v99 = v98++;
          v100 = (__m128i *)(v96 + 16 * v99);
          v101 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(v96, v94);
          v94 = v100;
          v101(276, v100);
          v96 = *(_QWORD *)v164;
        }
        while ( v95 != v98 );
      }
      *(_QWORD *)&v164[8] = 0;
      qfree(v96);
    }
    v102 = v142;
    sub_C720((__int64)"goomba: Equiv class time: %d %lld us\n", v97, (v142 - v144) / 1000);
    v103 = v141;
    sub_C720((__int64)"goomba: Linear time: %d %lld us\n", v97, (v141 - v102) / 1000);
    v104 = v143;
    sub_C720((__int64)"goomba: Lin conj time: %d %lld us\n", v97, (v143 - v103) / 1000);
    m128i_i64 = v97;
    v18 = "goomba: Non-linear time: %d %lld us\n";
    sub_C720((__int64)"goomba: Non-linear time: %d %lld us\n", v97, (v145 - v104) / 1000);
  }
LABEL_37:
  v51 = v176;
  v172 = &off_4DB80;
  if ( v176 )
  {
    v52 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v18, m128i_i64);
    v52(276, v51 + 64);
    v53 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v51 + 64);
    v53(276, v51 + 48);
    v54 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v51 + 48);
    v54(276, v51 + 32);
    v55 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v51 + 32);
    m128i_i64 = v51;
    v55(130, v51);
  }
  v56 = v178;
  if ( v178 )
  {
    v57 = v179;
    if ( v179 )
    {
      v58 = 0;
      v59 = 0;
      do
      {
        v60 = *(_QWORD **)(v56 + v58 + 24);
        ++v59;
        v58 += 56;
        sub_32A60(v60, m128i_i64);
        v56 = v178;
      }
      while ( v57 != v59 );
    }
    v179 = 0;
    qfree(v56);
  }
  v61 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v56, m128i_i64);
  v61(276, v175);
  v62 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v175);
  v62(276, v174);
  v63 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v174);
  v64 = v173;
  v63(276, v173);
  *(_QWORD *)&v183.exception_class = &off_4DB40;
  if ( v189 )
  {
    v190 = 0;
    qfree(v189);
  }
  if ( v188 )
    sub_1C430(v188);
  *(_QWORD *)&v183.exception_class = &off_4DB00;
  if ( v186 )
  {
    v187 = 0;
    qfree(v186);
  }
  if ( v184 )
  {
    v185 = 0;
    qfree(v184);
  }
  exception_cleanup = v183.exception_cleanup;
  if ( v183.exception_cleanup )
  {
    v66 = *(_QWORD *)&v183.private_1;
    if ( *(_QWORD *)&v183.private_1 )
    {
      v67 = 0;
      do
      {
        v68 = v67++;
        v69 = (char *)exception_cleanup + 16 * v68;
        v70 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(exception_cleanup, v64);
        v64 = v69;
        v70(276, v69);
        exception_cleanup = v183.exception_cleanup;
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v183.private_1 = 0;
    qfree(exception_cleanup);
  }
  v165 = &off_4DB00;
  if ( v170 )
  {
    v171 = 0;
    qfree(v170);
  }
  if ( v168 )
  {
    v169 = 0;
    qfree(v168);
  }
  v71 = v166;
  if ( v166 )
  {
    v72 = v167;
    if ( v167 )
    {
      v73 = 0;
      do
      {
        v74 = v73++;
        v75 = (_BYTE *)(v71 + 16 * v74);
        v76 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v71, v64);
        v64 = v75;
        v76(276, v75);
        v71 = v166;
      }
      while ( v72 != v73 );
    }
    v167 = 0;
    qfree(v71);
  }
  v180[0] = &off_4D920;
  sub_32480((char *)v182, (__int64)v64);
  v77 = (std::chrono::_V2::system_clock *)v181;
  sub_33390(v181, (__int64)v64, v78);
  v79 = v157;
  v80 = (__m128i *)((char *)v157 + 8 * v158);
  if ( v80 != v157 )
  {
    do
    {
      v81 = (_BYTE *)v79->m128i_i64[0];
      if ( v79->m128i_i64[0] )
      {
        v82 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v77, v64);
        v82(276, v81 + 64);
        v83 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v81 + 64);
        v83(276, v81 + 48);
        v84 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v81 + 48);
        v84(276, v81 + 32);
        v85 = (void (__fastcall *)(char *, _BYTE *))get_hexdsp(276, v81 + 32);
        v64 = v81;
        v77 = (std::chrono::_V2::system_clock *)((char *)&qword_80 + 2);
        v85((char *)&qword_80 + 2, v81);
      }
      v79 = (__m128i *)((char *)v79 + 8);
    }
    while ( v80 != v79 );
  }
  if ( (_BYTE)v8 )
  {
    v93 = std::chrono::_V2::system_clock::now(v77);
    sub_C720((__int64)"goomba: Time taken: %lld us\n", (v93 - v140) / 1000);
  }
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree(v157);
  }
  return v8;
}

