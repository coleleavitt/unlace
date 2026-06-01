__int64 __fastcall sub_401880(__int64 a1, __int32 a2, __int32 a3, unsigned int a4, double a5, __m128 a6)
{
  __int64 v6; // rbx
  __int64 *v8; // r13
  const char **v10; // r15
  int v11; // eax
  int v12; // eax
  _WORD *i; // rdx
  __int32 v14; // ecx
  __m128 si128; // xmm1
  char **v16; // rax
  const char *v17; // rsi
  __m128 *v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __m128i v30; // xmm0
  __int64 *v31; // r15
  __m128i v32; // xmm0
  int v33; // r12d
  _BYTE *v34; // rax
  int j; // r13d
  __int64 v36; // xmm0_8
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned int v39; // ecx
  int v40; // eax
  __int64 v41; // rsi
  int v42; // ecx
  int v43; // eax
  char *v44; // rbx
  __int64 v45; // rsi
  int v46; // ecx
  __int64 *v47; // r15
  __int64 *v48; // rax
  __m128i v49; // xmm0
  __int64 *v50; // r15
  __m128i v51; // xmm0
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // ax
  __int64 v54; // rax
  int v55; // eax
  __int64 *v56; // rsi
  __int64 *v57; // rax
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  unsigned int v60; // r12d
  unsigned int v61; // r12d
  __int64 v62; // rax
  __m128i v63; // xmm0
  char v64; // al
  int v65; // edx
  __int64 v66; // r12
  int v67; // eax
  __int64 *v68; // rsi
  __int8 v69; // al
  __int64 v70; // r12
  __int64 **v71; // rcx
  unsigned __int8 v72; // al
  __int64 **v73; // rcx
  int v74; // eax
  __int64 v75; // r12
  int v76; // eax
  unsigned __int8 v77; // al
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 (__fastcall *v80)(__int64, int); // rax
  __int16 v81; // ax
  __int64 v82; // r12
  __int64 v83; // rax
  __int16 v84; // cx
  unsigned __int8 v85; // al
  __int64 v86; // rsi
  __int64 **v87; // rax
  char v88; // cl
  unsigned __int8 v89; // al
  __int64 v90; // rdi
  size_t v91; // rcx
  unsigned __int8 v92; // al
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rdx
  unsigned __int8 v96; // al
  __int64 v97; // rax
  __int64 **v98; // rcx
  __int64 v99; // r12
  unsigned __int8 v100; // al
  __int64 v101; // r12
  __int32 v102; // eax
  unsigned int v103; // r12d
  __int64 v104; // r12
  unsigned int v105; // eax
  unsigned int dtype_size; // r12d
  __int64 v107; // rsi
  __int64 v108; // r12
  __int64 *v109; // r15
  __m128i v110; // xmm0
  __int64 **v111; // rax
  __int64 v112; // rax
  unsigned int v113; // r12d
  __int64 v114; // rsi
  __int64 v115; // r15
  __int64 v116; // rcx
  __m128i *v117; // rax
  int v118; // eax
  __int64 v119; // r12
  __int64 v120; // r12
  int v121; // eax
  unsigned int v122; // r12d
  int v123; // eax
  __int64 v124; // rsi
  __int64 (__fastcall *v125)(__int64, int); // rax
  __int64 v126; // r12
  __int64 v127; // rdx
  __m128i v128; // xmm0
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // r8d
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 **v138; // rdx
  unsigned __int8 v139; // al
  signed int v140; // eax
  unsigned int v141; // r12d
  __int64 v142; // r9
  unsigned __int8 v143; // al
  __m128i v144; // xmm4
  __int64 v145; // r13
  __int64 v146; // r12
  __m128i v147; // xmm0
  __int64 v148; // rdi
  int v149; // eax
  __int64 **v150; // rax
  __int64 v151; // r12
  __int64 v152; // rcx
  unsigned __int8 v153; // al
  int v154; // eax
  unsigned int v155; // r12d
  __int64 v156; // rsi
  __int64 v157; // rdi
  __int64 v158; // rsi
  __int64 (__fastcall *v159)(__int64, int); // rax
  int v160; // eax
  int v161; // eax
  __int64 v162; // rcx
  int v163; // eax
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 *v166; // r8
  __int64 v167; // r12
  __int64 v168; // r12
  unsigned int v169; // eax
  int v170; // ecx
  __int64 *v171; // rsi
  __int64 *v172; // rax
  __m128i v173; // xmm0
  __m128i v174; // xmm0
  __int64 v175; // rax
  __int64 v176; // r12
  unsigned __int8 v177; // al
  __int32 v178; // eax
  int v179; // eax
  __int64 *v180; // r12
  __m128i v181; // xmm0
  __int64 *v182; // r12
  int v183; // esi
  int v184; // edx
  __int64 *v185; // r15
  __int64 *v186; // rsi
  __m128i *v187; // r15
  __int64 v188; // rax
  __int64 *v189; // r12
  __m128i v190; // xmm0
  __int64 *v191; // r15
  int v192; // esi
  int v193; // eax
  __int64 v194; // rdx
  unsigned int v195; // ecx
  unsigned __int8 v196; // al
  __int64 v197; // rax
  __int64 v198; // r12
  unsigned __int8 v199; // al
  __int64 **v200; // rax
  __int64 v201; // r12
  unsigned __int8 v202; // al
  __int64 v203; // rax
  __int64 **v204; // rcx
  __int64 **v205; // r8
  __int32 v206; // eax
  _DWORD *v207; // rdi
  __int32 v208; // eax
  unsigned int v209; // r12d
  double v210; // xmm0_8
  unsigned int v211; // eax
  __int64 **v212; // rax
  const char *v213; // rsi
  int v214; // eax
  _DWORD *v215; // rdi
  __int32 v216; // eax
  unsigned int v217; // r12d
  double v218; // xmm0_8
  unsigned int v219; // eax
  int v220; // r12d
  int v221; // eax
  __int64 v222; // r12
  unsigned int v223; // eax
  int v224; // r12d
  int tinfo_size; // eax
  __int64 v226; // rsi
  int v227; // r12d
  int v228; // eax
  int v229; // eax
  __int64 v230; // rsi
  __int32 v231; // r15d
  int v232; // eax
  __int64 v233; // rdi
  __int64 v234; // rsi
  __int64 v235; // rax
  __int64 v236; // r12
  int v237; // eax
  int v238; // [rsp+8h] [rbp-6C8h]
  char v239; // [rsp+18h] [rbp-6B8h]
  const char *v240; // [rsp+18h] [rbp-6B8h]
  int v241; // [rsp+20h] [rbp-6B0h]
  __int64 v242; // [rsp+20h] [rbp-6B0h]
  int v243; // [rsp+20h] [rbp-6B0h]
  char n; // [rsp+28h] [rbp-6A8h]
  size_t na; // [rsp+28h] [rbp-6A8h]
  __int64 nb; // [rsp+28h] [rbp-6A8h]
  __int64 nc; // [rsp+28h] [rbp-6A8h]
  int v248; // [rsp+34h] [rbp-69Ch]
  char v249; // [rsp+38h] [rbp-698h]
  unsigned int v250; // [rsp+38h] [rbp-698h]
  int v251; // [rsp+38h] [rbp-698h]
  char v252; // [rsp+38h] [rbp-698h]
  __int64 v253; // [rsp+38h] [rbp-698h]
  __int64 v254; // [rsp+38h] [rbp-698h]
  __int64 **v255; // [rsp+40h] [rbp-690h] BYREF
  unsigned int v256; // [rsp+48h] [rbp-688h]
  unsigned __int16 v257; // [rsp+4Eh] [rbp-682h]
  _QWORD *v258; // [rsp+50h] [rbp-680h]
  const char *v259; // [rsp+58h] [rbp-678h]
  __m128i v260; // [rsp+60h] [rbp-670h] BYREF
  __m128i v261; // [rsp+70h] [rbp-660h] BYREF
  __int64 v262; // [rsp+88h] [rbp-648h] BYREF
  __int64 v263[4]; // [rsp+90h] [rbp-640h] BYREF
  __int64 v264[2]; // [rsp+B0h] [rbp-620h] BYREF
  __int64 *v265; // [rsp+C0h] [rbp-610h] BYREF
  __m128i v266; // [rsp+C8h] [rbp-608h]
  __int64 v267[2]; // [rsp+E0h] [rbp-5F0h] BYREF
  __int64 *v268; // [rsp+F0h] [rbp-5E0h] BYREF
  __m128i v269; // [rsp+F8h] [rbp-5D8h]
  _BYTE v270[24]; // [rsp+110h] [rbp-5C0h] BYREF
  __m128i v271; // [rsp+128h] [rbp-5A8h] BYREF
  _BYTE v272[4]; // [rsp+140h] [rbp-590h] BYREF
  unsigned int v273; // [rsp+144h] [rbp-58Ch]
  _QWORD v274[7]; // [rsp+158h] [rbp-578h] BYREF
  _BYTE v275[24]; // [rsp+190h] [rbp-540h] BYREF
  _BYTE v276[4]; // [rsp+1E0h] [rbp-4F0h] BYREF
  int v277; // [rsp+1E4h] [rbp-4ECh]
  __int64 v278; // [rsp+1E8h] [rbp-4E8h]
  char v279; // [rsp+370h] [rbp-360h] BYREF
  __m128i v280; // [rsp+3C0h] [rbp-310h] BYREF
  const char *v281; // [rsp+3D0h] [rbp-300h]
  __int64 v282; // [rsp+3D8h] [rbp-2F8h]
  const char *v283; // [rsp+3E0h] [rbp-2F0h]
  const char *v284; // [rsp+3E8h] [rbp-2E8h]
  const char *v285; // [rsp+3F0h] [rbp-2E0h]
  __int64 v286; // [rsp+3F8h] [rbp-2D8h]
  const char *v287; // [rsp+400h] [rbp-2D0h]
  const char *v288; // [rsp+408h] [rbp-2C8h]
  _QWORD v289[70]; // [rsp+410h] [rbp-2C0h] BYREF
  _BYTE v290[80]; // [rsp+640h] [rbp-90h] BYREF
  char v291; // [rsp+690h] [rbp-40h] BYREF
  unsigned __int64 v292; // [rsp+698h] [rbp-38h]

  v6 = a1;
  v260.m128i_i32[0] = a2;
  v261.m128i_i32[0] = a3;
  v292 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3EE5A0(a1) && (unsigned __int8)sub_3FA0E0(a1, v260.m128i_u32[0], v261.m128i_u32[0], a5, a6)
    || (unsigned __int8)sub_3FDA40(a1, v261.m128i_i32[0], a4)
    || (unsigned __int8)sub_401780(a1) )
  {
LABEL_4:
    LODWORD(v8) = 1;
    sub_3EC2A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
    return (unsigned int)v8;
  }
  v10 = (const char **)&off_4E59A0;
  do
  {
    v11 = sub_3FB7F0(a1, v10);
    if ( (_BYTE)v11 )
      goto LABEL_4;
    v10 += 3;
  }
  while ( &unk_4E5A78 != (_UNKNOWN *)v10 );
  LODWORD(v8) = v11;
  v12 = 0;
  for ( i = &unk_4E5A88; *i != *(_WORD *)(a1 + 48); i += 8 )
  {
    if ( ++v12 == 78 )
      return (unsigned int)v8;
  }
  v14 = v261.m128i_i32[0];
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v16 = &(&off_4E5A80)[2 * v12];
  v17 = *v16;
  LOBYTE(v16) = *((_BYTE *)v16 + 10);
  v259 = v17;
  LOBYTE(v257) = (_BYTE)v16;
  v18 = (__m128 *)v272;
  do
  {
    v18->m128_i32[1] = -1;
    v18 += 5;
    v18[-5].m128_i16[0] = 0;
    v18[-5].m128_i16[1] = 0;
    v18[-5].m128_u64[1] = 0;
    v18[-4] = si128;
    v18[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v18[-3] + 8) = 0;
    v18[-2].m128_i32[2] = 0;
    v18[-1].m128_u64[0] = 0;
    v18[-1].m128_i32[2] = 0;
  }
  while ( &v280 != (__m128i *)v18 );
  v19 = *(_QWORD *)(a1 + 832);
  v20 = 2;
  v261.m128i_i32[0] = v14;
  v264[0] = 0;
  v21 = *(_DWORD *)(v19 + 84) == 8;
  v264[1] = 0;
  v265 = nullptr;
  v22 = *(_DWORD *)(v19 + 632);
  v267[0] = 0;
  v267[1] = 0;
  v268 = nullptr;
  v262 = 0;
  v266 = 0;
  v269 = 0;
  if ( v21 )
    v20 = 7;
  LODWORD(v258) = sub_3F6740(a1, v260.m128i_u32[0], v20, v22, 0, 0.0);
  v23 = *(_QWORD *)(a1 + 832);
  v24 = 2;
  if ( *(_DWORD *)(v23 + 84) == 8 )
    v24 = 7;
  v248 = sub_3F6740(a1, v261.m128i_u32[0], v24, *(_DWORD *)(v23 + 632), 1, 0.0);
  v25 = *(_QWORD *)(a1 + 832);
  v26 = 2;
  if ( *(_DWORD *)(v25 + 84) == 8 )
    v26 = 7;
  v256 = sub_3F6740(a1, a4, v26, *(_DWORD *)(v25 + 632), 1, 0.0);
  v27 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v27 <= 0x120u )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
    if ( (unsigned __int16)v27 > 0x19u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 0x1A:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
          {
            if ( *(_BYTE *)(a1 + 65) != 1 )
            {
              if ( !under_debugger )
                sub_3835A0(0xC8C8u, 0.0);
              goto LABEL_394;
            }
            sub_3EE640(*(_QWORD *)(a1 + 8), (__int64)v272, a1 + 24, 1);
            v207 = *(_DWORD **)(a1 + 832);
            v208 = 2;
            v209 = v207[158];
            if ( v207[21] == 8 )
              v208 = 7;
            v261.m128i_i32[0] = v208;
            v210 = (*(double (__fastcall **)(_DWORD *, _QWORD, double, double))(*(_QWORD *)v207 + 168LL))(
                     v207,
                     *(unsigned __int16 *)(v6 + 230),
                     0.0,
                     *(double *)si128.m128_u64);
            v248 = sub_3F6740(v6, v211, v261.m128i_u8[0], v209, 1, v210);
            v259 = "_ReadStatusReg";
          }
          else if ( *(_WORD *)(a1 + 110) == 18 )
          {
            v259 = "__get_SPSR";
          }
          copy_tinfo_t();
          memset(v270, 0, sizeof(v270));
          v255 = (__int64 **)&v270[16];
          v271 = 0;
          *(_QWORD *)&v270[16] = qvector_reserve();
          *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
          v261.m128i_i64[0] = (__int64)v270;
          sub_63C80(v264, (__int64 *)v270);
          v260.m128i_i64[0] = (__int64)&v265;
          sub_317070((__int64 *)&v265, v255);
          if ( *(_QWORD *)&v270[16] )
          {
            v271.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          *(__m128 *)v270 = _mm_loadh_ps((const double *)(*(_QWORD *)(v6 + 8) + 128LL));
          sub_317F90((__int64 *)v260.m128i_i64[0], (__m128i *)v261.m128i_i64[0]);
          goto LABEL_179;
        case 0x1B:
          v126 = *(_QWORD *)(a1 + 832);
          if ( *(_DWORD *)(v126 + 80) == 8 )
          {
            v21 = *(_BYTE *)(a1 + 225) == 1;
            v259 = nullptr;
            if ( v21 )
            {
              sub_3EE640(*(_QWORD *)(a1 + 8), (__int64)v272, a1 + 24, 0);
              v215 = *(_DWORD **)(a1 + 832);
              v216 = 2;
              v217 = v215[158];
              if ( v215[21] == 8 )
                v216 = 7;
              v261.m128i_i32[0] = v216;
              v218 = (*(double (__fastcall **)(_DWORD *, _QWORD, double, double))(*(_QWORD *)v215 + 168LL))(
                       v215,
                       *(unsigned __int16 *)(v6 + 230),
                       0.0,
                       *(double *)si128.m128_u64);
              v248 = sub_3F6740(v6, v219, v261.m128i_u8[0], v217, 1, v218);
              sub_3ED9A0((__int64)v275, v248);
              v259 = "_WriteStatusReg";
            }
          }
          else if ( *(_BYTE *)(a1 + 96) == 1 )
          {
            v260.m128i_i32[0] = get_dtype_size();
            v261.m128i_i64[0] = (__int64)v270;
            sub_32C760((__int64 *)v270, v126, v260.m128i_u32[0], 2);
            sub_32F3F0((__int64)v272, v256, v260.m128i_i32[0]);
            clear_tinfo_t();
          }
          else
          {
            v259 = nullptr;
          }
          memset(v270, 0, sizeof(v270));
          v255 = (__int64 **)&v270[16];
          v271 = 0;
          *(_QWORD *)&v270[16] = qvector_reserve();
          *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
          v261.m128i_i64[0] = (__int64)v270;
          sub_63C80(v264, (__int64 *)v270);
          v260.m128i_i64[0] = (__int64)&v265;
          sub_317070((__int64 *)&v265, v255);
          if ( *(_QWORD *)&v270[16] )
          {
            v271.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          *(__m128 *)v270 = _mm_loadh_ps((const double *)(*(_QWORD *)(v6 + 8) + 128LL));
          sub_317F90((__int64 *)v260.m128i_i64[0], (__m128i *)v261.m128i_i64[0]);
          goto LABEL_38;
        case 0x1E:
          if ( (*(_BYTE *)(a1 + 52) & 4) != 0 )
            goto LABEL_87;
          goto LABEL_67;
        case 0x20:
          if ( (*(_BYTE *)(a1 + 52) & 4) == 0 )
            goto LABEL_67;
          v261.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          dtype_size = get_dtype_size();
          v107 = v261.m128i_i64[0];
          v261.m128i_i64[0] = (__int64)v270;
          sub_32C760((__int64 *)v270, v107, dtype_size, 2);
          sub_32F3F0((__int64)v272, v248, dtype_size);
          clear_tinfo_t();
          sub_3FB520(a1, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), 0.0);
          v108 = *(_QWORD *)(a1 + 832);
          v260.m128i_i32[0] = *(_DWORD *)(v108 + 628);
          sub_32C870(v270, v108, v274);
          sub_32F3F0((__int64)v275, v260.m128i_i32[0], *(_DWORD *)(v108 + 84));
          clear_tinfo_t();
          memset(v270, 0, sizeof(v270));
          v271 = 0;
          *(_QWORD *)&v270[16] = qvector_reserve();
          *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
          sub_642D0(v264, (__int64 *)v270);
          v109 = *(__int64 **)&v270[16];
          *(_QWORD *)&v270[16] = 0;
          v110 = _mm_loadu_si128(&v271);
          v271 = 0;
          if ( v265 )
          {
            v261 = v110;
            v266.m128i_i64[0] = 0;
            qfree();
            v110 = _mm_load_si128(&v261);
          }
          v265 = v109;
          v266 = v110;
          if ( *(_QWORD *)&v270[16] )
          {
            v271.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          v260.m128i_i8[0] = 0;
          n = 0;
          v249 = 0;
          v239 = 1;
          goto LABEL_142;
        case 0x23:
        case 0xDC:
        case 0x104:
        case 0x105:
        case 0x106:
          if ( (_WORD)v27 == 261 )
          {
            if ( *(_BYTE *)(a1 + 185) )
            {
              sub_124CE0((__int64)v272, v248, v256, 4);
              v260.m128i_i32[0] = 3;
            }
            else
            {
              sub_124CE0((__int64)v272, v248, v248 + 4, 4);
              v260.m128i_i32[0] = 2;
            }
            *(_QWORD *)v270 = 37;
            v261.m128i_i64[0] = (__int64)v270;
            copy_tinfo_t();
            v33 = 2;
            clear_tinfo_t();
            LOBYTE(v255) = 0;
            goto LABEL_82;
          }
          if ( (_WORD)v27 != 262 && (_WORD)v27 != 260 )
            goto LABEL_367;
          goto LABEL_80;
        case 0x24:
          v115 = *(_QWORD *)(a1 + 800);
          v116 = *(_QWORD *)(a1 + 832);
          v117 = &v280;
          do
          {
            v117->m128i_i32[1] = -1;
            v117 += 5;
            v117[-5].m128i_i16[0] = 0;
            v117[-5].m128i_i16[1] = 0;
            v117[-5].m128i_i64[1] = 0;
            v117[-4] = (__m128i)si128;
            v117[-3].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v117[-3] + 8) = 0;
            v117[-2].m128i_i32[2] = 0;
            v117[-1].m128i_i64[0] = 0;
            v117[-1].m128i_i32[2] = 0;
          }
          while ( v117 != (__m128i *)&v291 );
          v118 = *(_DWORD *)(v115 + 152);
          v260.m128i_i64[0] = v116;
          LODWORD(v258) = v118;
          v119 = *(_QWORD *)(a1 + 72);
          if ( v118 == 18 )
            goto LABEL_157;
          if ( v119 == 128 )
          {
            *(_QWORD *)v270 = 7;
            if ( *(_DWORD *)(v260.m128i_i64[0] + 80) == 8 )
              v224 = *(_DWORD *)(v260.m128i_i64[0] + 420);
            else
              v224 = *(_DWORD *)(v260.m128i_i64[0] + 404);
            tinfo_size = get_tinfo_size();
            v261.m128i_i64[0] = (__int64)v270;
            sub_32F3F0((__int64)&v280, v224, tinfo_size);
            clear_tinfo_t();
            if ( *(_DWORD *)(v260.m128i_i64[0] + 80) == 8 )
              v226 = 136;
            else
              v226 = 8;
            v227 = (*(__int64 (__fastcall **)(__int64, __int64, double))(*(_QWORD *)v260.m128i_i64[0] + 168LL))(
                     v260.m128i_i64[0],
                     v226,
                     0.0);
            v228 = get_tinfo_size();
            sub_32F3F0((__int64)v290, v227, v228);
            if ( (_DWORD)v258 == 25 )
            {
              v243 = 9;
              v240 = "mac_syscall";
              goto LABEL_160;
            }
            v119 = *(_QWORD *)(a1 + 72);
          }
          else if ( (_DWORD)v258 == 25 )
          {
            goto LABEL_320;
          }
LABEL_157:
          if ( !v119 )
          {
            *(_QWORD *)v270 = 0;
            v261.m128i_i64[0] = (__int64)v270;
            copy_tinfo_t();
            v220 = *(_DWORD *)(v260.m128i_i64[0] + 384);
            if ( *(_DWORD *)(v260.m128i_i64[0] + 80) == 8 )
              v220 = *(_DWORD *)(v260.m128i_i64[0] + 388);
            v221 = get_tinfo_size();
            sub_32F3F0((__int64)&v280, v220, v221);
            clear_tinfo_t();
            v243 = 8;
            v240 = "linux_eabi_syscall";
LABEL_160:
            v122 = 0;
            v258 = v289;
            do
            {
              v124 = v122++;
              if ( *(_DWORD *)(v260.m128i_i64[0] + 80) == 8 )
                v124 = (unsigned int)(v124 + 129);
              v125 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v260.m128i_i64[0] + 168LL);
              if ( v125 == sub_3EA010 )
                LODWORD(v255) = sub_3EA010(v260.m128i_i64[0], v124);
              else
                LODWORD(v255) = ((__int64 (__fastcall *)(__int64, __int64, double))v125)(v260.m128i_i64[0], v124, 0.0);
              v123 = get_tinfo_size();
              sub_32F3F0((__int64)v258, (int)v255, v123);
              v258 += 10;
            }
            while ( v122 != 7 );
            v263[0] = 0;
            copy_tinfo_t();
            v258 = (_QWORD *)sub_335C70(
                               *(_QWORD *)(a1 + 8),
                               *(_QWORD *)(a1 + 40),
                               (__int64)v240,
                               v263,
                               v243,
                               (__int64)&v280,
                               0);
            v182 = (__int64 *)v258[9];
            v183 = *(_DWORD *)(v260.m128i_i64[0] + 356);
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
            {
              *(_OWORD *)v270 = 0u;
              sub_63880((__int64 *)v261.m128i_i64[0], v183, 8);
              v185 = v182 + 17;
              *(_QWORD *)&v270[16] = 0;
              v271 = 0;
              sub_63C80(v182 + 17, (__int64 *)v261.m128i_i64[0]);
              v255 = (__int64 **)&v270[16];
              v260.m128i_i64[0] = (__int64)(v182 + 19);
              sub_317070(v182 + 19, (__int64 **)&v270[16]);
              if ( *(_QWORD *)&v270[16] )
              {
                v271.m128i_i64[0] = 0;
                qfree();
              }
            }
            else
            {
              v184 = 4;
              if ( !*(_QWORD *)(a1 + 72) )
                v184 = 16;
              *(_OWORD *)v270 = 0u;
              sub_63880((__int64 *)v261.m128i_i64[0], v183, v184);
              v185 = v182 + 17;
              *(_QWORD *)&v270[16] = 0;
              v271 = 0;
              sub_63C80(v182 + 17, (__int64 *)v261.m128i_i64[0]);
              v255 = (__int64 **)&v270[16];
              v260.m128i_i64[0] = (__int64)(v182 + 19);
              sub_317070(v182 + 19, (__int64 **)&v270[16]);
              if ( *(_QWORD *)&v270[16] )
              {
                v271.m128i_i64[0] = 0;
                qfree();
              }
            }
            qfree();
            memset(v270, 0, sizeof(v270));
            v271 = 0;
            *(_QWORD *)&v270[16] = qvector_reserve();
            v186 = (__int64 *)v261.m128i_i64[0];
            *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
            sub_63C80(v185, v186);
            sub_317070((__int64 *)v260.m128i_i64[0], v255);
            if ( *(_QWORD *)&v270[16] )
            {
              v271.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            *(__m128i *)v270 = _mm_load_si128((const __m128i *)&xmmword_41F900);
            sub_316F70(v182 + 27, (__m128i *)v261.m128i_i64[0], 0.0, si128);
            clear_tinfo_t();
LABEL_277:
            v187 = (__m128i *)&v291;
            do
            {
              v187 -= 5;
              cleanup_argloc();
              if ( v187[2].m128i_i64[0] )
              {
                v187[2].m128i_i64[1] = 0;
                qfree();
              }
              clear_tinfo_t();
              sub_11C7E0((__int64)v187);
            }
            while ( v187 != &v280 );
            if ( !v258 )
            {
              v249 = *(_QWORD *)(a1 + 72) != 171 && *(_QWORD *)(a1 + 72) != 1193046;
              if ( v249 )
                goto LABEL_67;
              v188 = *(_QWORD *)(a1 + 832);
              *(_QWORD *)v270 = 7;
              v261.m128i_i64[0] = (__int64)v270;
              sub_3ED9A0((__int64)v272, *(_DWORD *)(v188 + 356));
              clear_tinfo_t();
              sub_3ED9A0((__int64)v275, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 360LL));
              memset(v270, 0, sizeof(v270));
              v255 = (__int64 **)&v270[16];
              v271 = 0;
              *(_QWORD *)&v270[16] = qvector_reserve();
              *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
              sub_642D0(v264, (__int64 *)v270);
              v189 = *(__int64 **)&v270[16];
              v190 = _mm_loadu_si128(&v271);
              *(_QWORD *)&v270[16] = 0;
              v271 = 0;
              if ( v265 )
              {
                v260 = v190;
                v266.m128i_i64[0] = 0;
                qfree();
                v190 = _mm_load_si128(&v260);
              }
              v191 = (__int64 *)v261.m128i_i64[0];
              v265 = v189;
              v266 = v190;
              sub_93580(v261.m128i_i64[0]);
              v192 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 356LL);
              *(_OWORD *)v270 = 0u;
              sub_63880(v191, v192, 16);
              *(_QWORD *)&v270[16] = 0;
              v271 = 0;
              sub_63C80(v264, (__int64 *)v261.m128i_i64[0]);
              sub_317070((__int64 *)&v265, v255);
              if ( *(_QWORD *)&v270[16] )
              {
                v271.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              *(_QWORD *)v270 = 7;
              copy_tinfo_t();
              clear_tinfo_t();
              v241 = 0;
              v33 = 0;
              v239 = 0;
              v193 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 356LL);
              v260.m128i_i8[0] = 0;
              LODWORD(v255) = 4;
              LODWORD(v258) = v193;
              n = 1;
              v238 = -1;
              goto LABEL_39;
            }
            sub_B4CD0(*(_QWORD **)(a1 + 16), (__int64)v258);
            sub_3EC2A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
LABEL_298:
            LODWORD(v8) = 1;
            goto LABEL_67;
          }
          v120 = (unsigned int)(v119 - 9437184);
          if ( (unsigned int)v120 <= 0x15E )
          {
            *(_QWORD *)v270 = 0;
            v261.m128i_i64[0] = (__int64)v270;
            copy_tinfo_t();
            copy_tinfo_t();
            clear_tinfo_t();
            v258 = *(_QWORD **)(a1 + 40);
            v121 = get_tinfo_size();
            sub_120450((__int64)&v280, v260.m128i_i32[0], v120, v121, (__int64)v258, 0);
            v243 = 8;
            v240 = "linux_syscall";
            goto LABEL_160;
          }
LABEL_320:
          v258 = nullptr;
          goto LABEL_277;
        case 0x2D:
        case 0x11F:
          v97 = *(_QWORD *)(a1 + 40);
          v98 = *(__int64 ***)(a1 + 72);
          *(_QWORD *)v270 = 7;
          v99 = *(_QWORD *)(a1 + 832);
          v260.m128i_i64[0] = v97;
          v255 = v98;
          v261.m128i_i64[0] = (__int64)v270;
          copy_tinfo_t();
          clear_tinfo_t();
          v100 = getinf();
          sub_120450((__int64)v272, v99, (int)v255, v100, v260.m128i_i64[0], 0);
          goto LABEL_38;
        case 0x30:
          goto LABEL_125;
        case 0x32:
        case 0x114:
          if ( *(_BYTE *)(a1 + 65) == 1 )
          {
            v214 = get_tinfo_size();
            sub_32F3F0((__int64)v272, v248, v214);
          }
          else
          {
            v101 = *(_QWORD *)(a1 + 832);
            v102 = *(_DWORD *)(v101 + 628);
            v263[0] = 1;
            v260.m128i_i32[0] = v102;
            v261.m128i_i64[0] = (__int64)v270;
            sub_32C870(v270, v101, v263);
            sub_32F3F0((__int64)v272, v260.m128i_i32[0], *(_DWORD *)(v101 + 84));
            clear_tinfo_t();
            clear_tinfo_t();
          }
          goto LABEL_38;
        case 0x33:
        case 0x36:
        case 0xD7:
        case 0xF5:
          v261.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v60 = get_dtype_size();
          sub_32C760((__int64 *)v270, v261.m128i_i64[0], v60, 2);
          sub_32F3F0((__int64)v272, v248, v60);
          v261.m128i_i64[0] = (__int64)v270;
          clear_tinfo_t();
          v260.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v61 = get_dtype_size();
          sub_32C760((__int64 *)v270, v260.m128i_i64[0], v61, 2);
          sub_32F3F0((__int64)v275, v256, v61);
          clear_tinfo_t();
          copy_tinfo_t();
          goto LABEL_101;
        case 0x52:
        case 0x100:
        case 0x107:
        case 0x108:
        case 0x109:
        case 0x10A:
          goto LABEL_38;
        case 0x53:
        case 0x54:
        case 0x5B:
          goto LABEL_110;
        case 0x59:
          if ( (getinf() & 0xF) != 1 || *(_BYTE *)(a1 + 96) != 15 || *(_WORD *)(a1 + 136) != 13 )
            goto LABEL_110;
          if ( *(_QWORD *)(a1 + 152) != 2 || (v249 = getinf_flag()) != 0 )
          {
            if ( *(_QWORD *)(a1 + 152) == 4 )
            {
              if ( (unsigned __int8)getinf_flag() )
              {
                n = parse_decl();
                if ( n )
                {
                  LODWORD(v258) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double, double))(**(_QWORD **)(a1 + 832)
                                                                                            + 168LL))(
                                    *(_QWORD *)(a1 + 832),
                                    *(unsigned __int16 *)(a1 + 110),
                                    0.0,
                                    *(double *)si128.m128_u64);
                  LOBYTE(v257) = n;
                  v33 = 1;
                  v239 = 0;
                  v260.m128i_i8[0] = 0;
                  v249 = 0;
                  v241 = 0;
                  LODWORD(v255) = 4;
                  v238 = -1;
                  v259 = "KeGetPcr";
                  goto LABEL_40;
                }
              }
            }
          }
          else
          {
            n = parse_decl();
            if ( n )
            {
              LODWORD(v258) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double, double))(**(_QWORD **)(a1 + 832) + 168LL))(
                                *(_QWORD *)(a1 + 832),
                                *(unsigned __int16 *)(a1 + 110),
                                0.0,
                                *(double *)si128.m128_u64);
              LOBYTE(v257) = n;
              v33 = 1;
              v239 = 0;
              v260.m128i_i8[0] = 0;
              v241 = 0;
              LODWORD(v255) = 4;
              v238 = -1;
              v259 = "NtCurrentTeb";
              goto LABEL_40;
            }
          }
LABEL_110:
          v69 = *(_BYTE *)(a1 + 96);
          v70 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)v270 = 7;
          v71 = *(__int64 ***)(a1 + 832);
          v260.m128i_i8[0] = v69;
          v255 = v71;
          v261.m128i_i64[0] = (__int64)v270;
          copy_tinfo_t();
          clear_tinfo_t();
          v72 = getinf();
          sub_120450((__int64)v272, (int)v255, v260.m128i_i8[0], v72, v70, 0);
          v73 = *(__int64 ***)(a1 + 832);
          v74 = *(_WORD *)(a1 + 48) == 84;
          v75 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)v270 = 7;
          v76 = *(_DWORD *)(a1 + 72) + (v74 << 8);
          v255 = v73;
          v260.m128i_i32[0] = v76;
          copy_tinfo_t();
          clear_tinfo_t();
          v77 = getinf();
          sub_120450((__int64)v275, (int)v255, v260.m128i_i32[0], v77, v75, 1);
          v78 = *(_QWORD *)(a1 + 832);
          v79 = *(unsigned __int16 *)(v6 + 110);
          v80 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v78 + 168LL);
          if ( v80 == sub_3EA010 )
            v260.m128i_i32[0] = sub_3EA010(v78, v79);
          else
            v260.m128i_i32[0] = ((__int64 (__fastcall *)(__int64, __int64, double, double))v80)(
                                  v78,
                                  v79,
                                  0.0,
                                  *(double *)si128.m128_u64);
          v81 = *(_WORD *)(v6 + 48);
          if ( v81 == 89 )
          {
            *(_QWORD *)v270 = 7;
            copy_tinfo_t();
            v33 = 1;
            clear_tinfo_t();
            v206 = v260.m128i_i32[0];
            v242 = 160;
            v260.m128i_i32[0] = 2;
            LODWORD(v258) = v206;
          }
          else
          {
            v82 = *(_QWORD *)(v6 + 832);
            if ( v81 == 91 )
            {
              LODWORD(v255) = get_dtype_size();
              sub_32C760((__int64 *)v261.m128i_i64[0], v82, (unsigned int)v255, 2);
              sub_32F3F0((__int64)v276, v260.m128i_i32[0], (int)v255);
              clear_tinfo_t();
            }
            else
            {
              v83 = *(_QWORD *)(v6 + 40);
              v84 = *(_WORD *)(v6 + 110);
              *(_QWORD *)v270 = 7;
              v260.m128i_i64[0] = v83;
              LOWORD(v255) = v84;
              copy_tinfo_t();
              clear_tinfo_t();
              v85 = getinf();
              sub_120450((__int64)v276, v82, (unsigned __int16)v255, v85, v260.m128i_i64[0], 2);
            }
            v242 = 240;
            v33 = 0;
            v260.m128i_i32[0] = 3;
          }
          v86 = *(_QWORD *)(v6 + 832);
          v87 = *(__int64 ***)(v6 + 40);
          *(_QWORD *)v270 = 7;
          v88 = *(_BYTE *)(v6 + 136);
          v255 = v87;
          v252 = v88;
          copy_tinfo_t();
          clear_tinfo_t();
          v89 = getinf();
          sub_120450((__int64)&v272[v242], v86, v252, v89, (__int64)v255, v260.m128i_i32[0]);
          LOBYTE(v86) = *(_BYTE *)(v6 + 137);
          *(_QWORD *)v270 = 7;
          v90 = *(_QWORD *)(v6 + 832);
          v91 = *(_QWORD *)(v6 + 40);
          LODWORD(v255) = v260.m128i_i32[0] + 1;
          na = v91;
          copy_tinfo_t();
          clear_tinfo_t();
          v92 = getinf();
          sub_120450((__int64)&v272[80 * v260.m128i_i32[0] + 80], v90, (char)v86, v92, na, v260.m128i_i32[0] + 1);
          v93 = *(_QWORD *)(v6 + 152);
          *(_QWORD *)v270 = 7;
          v94 = *(_QWORD *)(v6 + 40);
          v95 = *(_QWORD *)(v6 + 832);
          v260.m128i_i32[0] += 2;
          v253 = v94;
          LODWORD(na) = v95;
          copy_tinfo_t();
          clear_tinfo_t();
          v255 = (__int64 **)&v272[80 * v260.m128i_i32[0]];
          v96 = getinf();
          sub_120450((__int64)v255, na, (int)v93, v96, v253, v260.m128i_i32[0]);
          if ( *(_WORD *)(v6 + 48) != 91 )
          {
            memset(v270, 0, sizeof(v270));
            v271 = 0;
            *(_QWORD *)&v270[16] = qvector_reserve();
            v171 = (__int64 *)v261.m128i_i64[0];
            *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
            sub_642D0(v264, v171);
            v172 = *(__int64 **)&v270[16];
            *(_QWORD *)&v270[16] = 0;
            v173 = _mm_loadu_si128(&v271);
            v271 = 0;
            v261.m128i_i64[0] = (__int64)v172;
            if ( v265 )
            {
              v260 = v173;
              v266.m128i_i64[0] = 0;
              qfree();
              v174 = _mm_load_si128(&v260);
              v265 = (__int64 *)v261.m128i_i64[0];
              v266 = v174;
              if ( *(_QWORD *)&v270[16] )
              {
                v271.m128i_i64[0] = 0;
                qfree();
              }
            }
            else
            {
              v265 = v172;
              v266 = v173;
            }
            qfree();
          }
          v239 = 0;
          goto LABEL_118;
        case 0xAA:
        case 0xAB:
          if ( *(_BYTE *)(a1 + 72) != 73 || *(_BYTE *)(a1 + 73) )
            goto LABEL_67;
          goto LABEL_38;
        case 0xAC:
        case 0x101:
        case 0x102:
        case 0x103:
          goto LABEL_87;
        case 0xB5:
          v260.m128i_i8[0] = 1;
          v241 = 12;
          goto LABEL_127;
        case 0xB6:
          goto LABEL_126;
        case 0xB7:
          v261.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v113 = get_dtype_size();
          v114 = v261.m128i_i64[0];
          v261.m128i_i64[0] = (__int64)v270;
          sub_32C760((__int64 *)v270, v114, v113, 2);
          sub_32F3F0((__int64)v272, v256, v113);
          clear_tinfo_t();
          *(_QWORD *)v270 = 35;
          copy_tinfo_t();
          v33 = 1;
          clear_tinfo_t();
          v239 = 0;
          v260.m128i_i8[0] = 0;
          n = 0;
          v249 = 0;
          v241 = 12;
          LODWORD(v255) = 4;
          v238 = -1;
          goto LABEL_39;
        case 0x115:
          v260.m128i_i8[0] = 1;
          v241 = 0;
          goto LABEL_127;
        case 0x11C:
        case 0x11D:
        case 0x11E:
          *(_WORD *)&v270[16] = 256;
          *(_QWORD *)&v270[8] = "_tag_ARM64INTR_BARRIER_TYPE";
          *(_QWORD *)v270 = get_idati();
          v261.m128i_i64[0] = (__int64)v270;
          v260.m128i_i64[0] = (__int64)v274;
          if ( !(unsigned __int8)create_tinfo() )
          {
            *(_QWORD *)v270 = 39;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          v62 = *(_QWORD *)(a1 + 40);
          v282 = 0;
          v286 = 0;
          v260.m128i_i64[0] = v62;
          v289[1] = 0;
          v281 = "OSH";
          v63 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E6120), (__m128i)(unsigned __int64)"OSHST");
          v283 = "NSHLD";
          v284 = "NSHST";
          v285 = "NSH";
          v287 = "ISHLD";
          v288 = "ISHST";
          v289[0] = "ISH";
          v289[2] = "LD";
          v289[3] = "ST";
          v289[4] = "SY";
          v64 = *(_BYTE *)(a1 + 65);
          v280 = v63;
          if ( v64 == 13 )
          {
            v212 = (__int64 **)v260.m128i_i64[0];
            v260.m128i_i64[0] = 0;
            v255 = v212;
            while ( 1 )
            {
              v213 = (const char *)v280.m128i_i64[v260.m128i_i64[0]];
              if ( v213 )
              {
                if ( !strcmp((const char *)(a1 + 72), v213) )
                  break;
              }
              if ( ++v260.m128i_i64[0] == 15 )
              {
                if ( !under_debugger )
                  sub_3835A0(0xC8C3u, *(double *)v63.m128i_i64);
                goto LABEL_394;
              }
            }
            v6 = a1;
            v231 = v260.m128i_i32[0];
            v260.m128i_i64[0] = (__int64)v255;
            v65 = v231 + 1;
          }
          else
          {
            v65 = 15;
            if ( v64 )
              v65 = *(_DWORD *)(a1 + 72);
          }
          v66 = v65;
          v255 = *(__int64 ***)(v6 + 832);
          v67 = get_tinfo_size();
          sub_120450((__int64)v272, (int)v255, v66, v67, v260.m128i_i64[0], 0);
          memset(v270, 0, sizeof(v270));
          v255 = (__int64 **)&v270[16];
          v271 = 0;
          *(_QWORD *)&v270[16] = qvector_reserve();
          v68 = (__int64 *)v261.m128i_i64[0];
          *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
          sub_63C80(v264, v68);
          sub_317070((__int64 *)&v265, v255);
          if ( *(_QWORD *)&v270[16] )
          {
            v271.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          goto LABEL_38;
        case 0x120:
          v111 = *(__int64 ***)(a1 + 72);
          v21 = *(_WORD *)(a1 + 50) == 2;
          v255 = v111;
          if ( v21 )
          {
            switch ( (unsigned __int64)v111 )
            {
              case 0xF9uLL:
                v239 = 0;
                v33 = 0;
                v241 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                LODWORD(v255) = 12;
                n = 1;
                v238 = -1;
                v259 = "__brkdiv0";
                goto LABEL_40;
              case 0xFAuLL:
                *(_QWORD *)v270 = 37;
                v261.m128i_i64[0] = (__int64)v270;
                copy_tinfo_t();
                v33 = 1;
                clear_tinfo_t();
                v239 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                v241 = 0;
                LODWORD(v255) = 4;
                n = 1;
                v238 = -1;
                v259 = "__rdpmccntr64";
                goto LABEL_40;
              case 0xFBuLL:
                v112 = *(_QWORD *)(a1 + 832);
                *(_QWORD *)v270 = 39;
                v261.m128i_i64[0] = (__int64)v270;
                sub_3ED9A0((__int64)v272, *(_DWORD *)(v112 + 356));
                v33 = 0;
                clear_tinfo_t();
                v241 = 0;
                v239 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                LODWORD(v255) = 12;
                n = 1;
                v238 = -1;
                v259 = "__fastfail";
                goto LABEL_40;
              case 0xFCuLL:
                v239 = 0;
                v33 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                v241 = 0;
                LODWORD(v255) = 4;
                n = 1;
                v238 = -1;
                v259 = "__assertfail";
                goto LABEL_40;
              case 0xFDuLL:
                v239 = 0;
                v33 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                v241 = 0;
                LODWORD(v255) = 4;
                n = 1;
                v238 = -1;
                v259 = "__debugservice";
                goto LABEL_40;
              case 0xFEuLL:
                v239 = 0;
                v241 = 0;
                v33 = 0;
                v260.m128i_i8[0] = 0;
                v249 = 0;
                LODWORD(v255) = 12;
                n = 1;
                v238 = -1;
                v259 = "__debugbreak";
                goto LABEL_40;
              default:
                *(_QWORD *)v270 = 34;
                v261.m128i_i64[0] = (__int64)v270;
                copy_tinfo_t();
                clear_tinfo_t();
                v235 = *(_QWORD *)(a1 + 832);
                v260.m128i_i64[0] = *(_QWORD *)(a1 + 40);
                v236 = *(_QWORD *)(a1 + 72);
                v261.m128i_i64[0] = v235;
                v237 = get_tinfo_size();
                sub_120450((__int64)v272, v261.m128i_i32[0], v236, v237, v260.m128i_i64[0], 0);
                goto LABEL_296;
            }
          }
          v197 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)v270 = 39;
          v198 = *(_QWORD *)(a1 + 832);
          v260.m128i_i64[0] = v197;
          v261.m128i_i64[0] = (__int64)v270;
          copy_tinfo_t();
          clear_tinfo_t();
          v199 = getinf();
          sub_120450((__int64)v272, v198, (int)v255, v199, v260.m128i_i64[0], 0);
LABEL_296:
          v239 = 0;
          v33 = 0;
          v260.m128i_i8[0] = 0;
          v249 = 0;
          v241 = 0;
          LODWORD(v255) = 12;
          n = 1;
          v238 = -1;
          goto LABEL_39;
        default:
          break;
      }
    }
LABEL_25:
    if ( !under_debugger )
      sub_3835A0(0xC356u, 0.0);
LABEL_394:
    BUG();
  }
  if ( (unsigned __int16)v27 <= 0x287u )
  {
    if ( (unsigned __int16)v27 > 0x285u )
    {
LABEL_255:
      v167 = *(_QWORD *)(a1 + 832);
      v260.m128i_i32[0] = 2 - ((v27 & 0xFFFB) == 643);
      LODWORD(v255) = get_dtype_size();
      sub_32C760((__int64 *)v270, v167, (unsigned int)v255, v260.m128i_i32[0]);
      sub_32F3F0((__int64)v272, v248, (int)v255);
      v261.m128i_i64[0] = (__int64)v270;
      clear_tinfo_t();
      v168 = *(_QWORD *)(a1 + 832);
      v169 = get_dtype_size();
      v170 = v260.m128i_i32[0];
      v260.m128i_i32[0] = v169;
      sub_32C760((__int64 *)v270, v168, v169, v170);
      sub_32F3F0((__int64)v275, v256, v260.m128i_i32[0]);
      clear_tinfo_t();
      copy_tinfo_t();
LABEL_101:
      v239 = 0;
      v33 = 1;
      v260.m128i_i8[0] = 0;
      n = 0;
      v249 = 0;
      v241 = 0;
      LODWORD(v255) = 4;
      v238 = -1;
      goto LABEL_39;
    }
    if ( (_WORD)v27 == 510 )
    {
LABEL_126:
      v260.m128i_i8[0] = 0;
      v241 = 0;
LABEL_127:
      v261.m128i_i64[0] = *(_QWORD *)(a1 + 832);
      v103 = get_dtype_size();
      sub_32C760((__int64 *)v270, v261.m128i_i64[0], v103, 2);
      sub_32F3F0((__int64)v272, v256, v103);
      v261.m128i_i64[0] = (__int64)v270;
      clear_tinfo_t();
      v104 = *(_QWORD *)(a1 + 832);
      v105 = get_dtype_size();
      sub_32C760((__int64 *)v270, v104, v105, 2);
      copy_tinfo_t();
      v33 = 1;
      clear_tinfo_t();
      v239 = 0;
      n = 0;
      v249 = 0;
      LODWORD(v255) = 4;
      v238 = -1;
      goto LABEL_39;
    }
    if ( (unsigned __int16)v27 <= 0x1FEu )
    {
      if ( (unsigned __int16)v27 <= 0x1E9u )
      {
        if ( (unsigned __int16)v27 > 0x1D2u )
        {
          v127 = 1LL << ((unsigned __int8)v27 + 45);
          if ( (v127 & 0x554000) == 0 )
          {
            if ( (v127 & 0x2AA000) == 0 )
            {
              n = v127 & 1;
              if ( (v127 & 1) == 0 )
                goto LABEL_25;
              v239 = 0;
              v260.m128i_i8[0] = 0;
              v249 = 0;
LABEL_142:
              v241 = 0;
              v33 = 0;
              LODWORD(v255) = 4;
              v238 = -1;
LABEL_39:
              if ( v259 )
              {
LABEL_40:
                v34 = v272;
                for ( j = 0; j != 8; ++j )
                {
                  if ( !*v34 )
                    break;
                  v34 += 80;
                }
                v36 = 0;
                memset(v270, 0, sizeof(v270));
                if ( v260.m128i_i8[0] )
                {
                  sub_6B2B0((__int64 *)v270);
                  v259 = *(const char **)v270;
                }
                v37 = sub_335C70(
                        *(_QWORD *)(v6 + 8),
                        *(_QWORD *)(v6 + 40),
                        (__int64)v259,
                        &v262,
                        j,
                        (__int64)v272,
                        v33 != 0);
                v38 = *(_QWORD *)(v37 + 72);
                v39 = *(_DWORD *)(v38 + 280) | (unsigned int)v255;
                *(_DWORD *)(v38 + 284) = v241;
                v261.m128i_i64[0] = v37;
                v40 = v39 | 0x10;
                if ( !(_BYTE)v257 )
                  v40 = v39;
                *(_DWORD *)(v38 + 280) = v40;
                sub_63C80((__int64 *)(v38 + 136), v264);
                v260.m128i_i64[0] = (__int64)&v265;
                sub_317070((__int64 *)(v38 + 152), &v265);
                v8 = (__int64 *)(v38 + 216);
                sub_317070(v8, (__int64 **)v260.m128i_i64[0]);
                sub_317070(v8, &v268);
                if ( n )
                  *(_DWORD *)(v261.m128i_i64[0] + 4) |= 0x80000u;
                if ( v33 )
                {
                  v8 = v263;
                  v128 = _mm_cvtsi32_si128(*(_DWORD *)(v261.m128i_i64[0] + 68));
                  LODWORD(v263[0]) = 1;
                  v36 = _mm_unpacklo_epi32(v128, _mm_cvtsi32_si128((unsigned int)v258)).m128i_u64[0];
                  *(__int64 *)((char *)v263 + 4) = v36;
                  v261.m128i_i64[0] = (__int64)sub_124CA0(v261.m128i_i64[0], (unsigned __int8 *)v263);
                  sub_11C7E0((__int64)v263);
                  if ( v33 == 3 )
                  {
                    v8 = (__int64 *)(v261.m128i_i64[0] + 64);
                    v129 = get_tinfo_size();
                    sub_124CE0((__int64)v8, (int)v258, v238, v129 >> 1);
                  }
                }
                if ( *(_WORD *)(v6 + 48) == 183 )
                  sub_12B130(v261.m128i_i64[0], *(_QWORD *)(v6 + 832), 8, 4, 1);
                if ( !sub_3F0900(v6 + 24)
                  || (v41 = *(_QWORD *)(v6 + 832),
                      v42 = *(_DWORD *)(v41 + 80),
                      *(_DWORD *)(v261.m128i_i64[0] + 68) >= v42) )
                {
                  if ( !v33 )
                    goto LABEL_55;
                  v8 = *(__int64 **)(v6 + 832);
                  v260.m128i_i32[0] = *(_DWORD *)(v261.m128i_i64[0] + 68);
                  v257 = *(_WORD *)(v6 + 70);
                  if ( !sub_11E2E0(4u)
                    || *((_DWORD *)v8 + 20) != 8
                    || (unsigned int)v257 - 8 > 0x107
                    || v260.m128i_i32[0] != 4 )
                  {
                    goto LABEL_55;
                  }
                  v41 = *(_QWORD *)(v6 + 832);
                  v42 = *(_DWORD *)(v41 + 80);
                }
                sub_12B130(v261.m128i_i64[0], v41, 9, v42, 1);
LABEL_55:
                if ( v249 )
                  *(_DWORD *)(v261.m128i_i64[0] + 4) |= 0x20000u;
                sub_B4CD0(*(_QWORD **)(v6 + 16), v261.m128i_i64[0]);
                if ( *(_WORD *)(v6 + 48) == 904 )
                {
                  LODWORD(v8) = *(_QWORD *)(v6 + 800) + 232;
                  v133 = get_tinfo_size();
                  sub_32F3F0((__int64)v272, v256, v133);
                  sub_3ECE40(
                    (__int64)v272,
                    *(_QWORD *)(v6 + 832),
                    *(_QWORD *)(v6 + 120) + 16LL,
                    *(_QWORD *)(v6 + 40),
                    1);
                  if ( *(_WORD *)(v6 + 70) == *(_WORD *)(v6 + 110) && *(_QWORD *)(v6 + 120) == -16 )
                  {
                    v135 = 1;
                  }
                  else
                  {
                    LODWORD(v8) = *(_QWORD *)(v6 + 800) + 232;
                    v134 = get_tinfo_size();
                    sub_32F3F0((__int64)v275, v248, v134);
                    v135 = 2;
                  }
                  v136 = sub_335C70(
                           *(_QWORD *)(v6 + 8),
                           *(_QWORD *)(v6 + 40),
                           (__int64)"__arm_mte_set_tag",
                           &v262,
                           v135,
                           (__int64)v272,
                           0);
                  *(_DWORD *)(*(_QWORD *)(v136 + 72) + 280LL) |= (unsigned int)v255;
                  *(_DWORD *)(v136 + 4) |= 0x80000u;
                  sub_B4CD0(*(_QWORD **)(v6 + 16), v136);
                }
                if ( v33 )
                {
                  v43 = *(_DWORD *)(*(_QWORD *)(v6 + 832) + 428LL);
                  if ( v43 == (_DWORD)v258 || v33 == 3 && v43 == v238 )
                    sub_3F51B0(v6);
                }
                sub_3EC2A0((_QWORD *)(*(_QWORD *)(v6 + 8) + 1000LL), *(_QWORD *)(v6 + 40));
                if ( v33 == 2 || v239 )
                  sub_3F9F40(v6, v6 + 104, *(_DWORD *)(*(_QWORD *)(v6 + 832) + 628LL), *(double *)&v36);
                if ( *(_QWORD *)v270 )
                {
                  *(_QWORD *)&v270[8] = 0;
                  qfree();
                }
                LOBYTE(v8) = v259 != nullptr;
                goto LABEL_67;
              }
              goto LABEL_67;
            }
LABEL_87:
            v256 = sub_3F8180(
                     a1,
                     *(unsigned __int16 *)(a1 + 110),
                     *(_BYTE *)(a1 + 109),
                     *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL),
                     0.0);
            v261.m128i_i64[0] = (__int64)v270;
            v263[0] = 0;
            *(_QWORD *)v270 = 39;
            copy_tinfo_t();
            clear_tinfo_t();
            v52 = *(_WORD *)(a1 + 48);
            if ( v52 == 258 )
            {
              *(_QWORD *)v270 = 37;
              copy_tinfo_t();
              copy_tinfo_t();
              clear_tinfo_t();
              if ( *(_BYTE *)(a1 + 145) )
              {
                v232 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double, double))(**(_QWORD **)(a1 + 832) + 168LL))(
                         *(_QWORD *)(a1 + 832),
                         *(unsigned __int16 *)(a1 + 150),
                         0.0,
                         *(double *)si128.m128_u64);
                v233 = *(_QWORD *)(a1 + 832);
                v234 = *(unsigned __int16 *)(v6 + 110);
                v256 = v232;
                v238 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v233 + 168LL))(v233, v234);
                v33 = 3;
              }
              else
              {
                v33 = 3;
                v238 = (_DWORD)v258 + 4;
              }
              goto LABEL_96;
            }
            if ( v52 > 0x102u )
            {
              if ( v52 == 259 )
              {
                *(_QWORD *)v270 = 35;
                copy_tinfo_t();
                copy_tinfo_t();
                clear_tinfo_t();
              }
              else
              {
                v53 = v52 - 480;
                if ( v53 > 8u )
                  goto LABEL_372;
                if ( ((1LL << v53) & 0x51) == 0 )
                {
                  if ( ((1LL << v53) & 0x104) != 0 )
                  {
                    v54 = 37;
                    if ( *(_BYTE *)(a1 + 109) == 7 )
                      v54 = 38;
                    *(_QWORD *)v270 = v54;
                    copy_tinfo_t();
                    clear_tinfo_t();
                    copy_tinfo_t();
                    v238 = sub_3F8180(
                             a1,
                             *(unsigned __int16 *)(a1 + 110),
                             *(_BYTE *)(a1 + 109),
                             *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL),
                             0.0);
                    v256 = sub_3F8180(a1, *(unsigned __int16 *)(a1 + 150), *(_WORD *)(a1 + 150), 0xFFFFFFFF, 0.0);
                    v33 = 3;
                    goto LABEL_96;
                  }
LABEL_372:
                  if ( !under_debugger )
                    sub_3835A0(0xC730u, 0.0);
                  goto LABEL_394;
                }
                v222 = *(_QWORD *)(a1 + 832);
                v223 = get_dtype_size();
                sub_32C760((__int64 *)v261.m128i_i64[0], v222, v223, 2);
                copy_tinfo_t();
                copy_tinfo_t();
                clear_tinfo_t();
              }
              goto LABEL_302;
            }
            if ( v52 != 172 )
            {
              if ( v52 == 257 )
              {
                *(_QWORD *)v270 = 34;
                copy_tinfo_t();
                copy_tinfo_t();
                clear_tinfo_t();
LABEL_302:
                v238 = -1;
                v33 = 1;
LABEL_96:
                sub_32C870(v261.m128i_i64[0], *(_QWORD *)(v6 + 832), v263);
                v55 = get_tinfo_size();
                sub_32F3F0((__int64)v272, v256, v55);
                clear_tinfo_t();
                memset(v270, 0, sizeof(v270));
                v271 = 0;
                *(_QWORD *)&v270[16] = qvector_reserve();
                v56 = (__int64 *)v261.m128i_i64[0];
                *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
                sub_642D0(v267, v56);
                v57 = *(__int64 **)&v270[16];
                *(_QWORD *)&v270[16] = 0;
                v58 = _mm_loadu_si128(&v271);
                v271 = 0;
                v261.m128i_i64[0] = (__int64)v57;
                if ( v268 )
                {
                  v260 = v58;
                  v269.m128i_i64[0] = 0;
                  qfree();
                  v59 = _mm_load_si128(&v260);
                  v268 = (__int64 *)v261.m128i_i64[0];
                  v269 = v59;
                  if ( *(_QWORD *)&v270[16] )
                  {
                    v271.m128i_i64[0] = 0;
                    qfree();
                  }
                }
                else
                {
                  v268 = v57;
                  v269 = v58;
                }
                qfree();
                clear_tinfo_t();
                v239 = 0;
                v260.m128i_i8[0] = 0;
                v241 = 0;
                LODWORD(v255) = 4;
                n = 1;
                v249 = 1;
                goto LABEL_39;
              }
              if ( v52 != 30 )
                goto LABEL_372;
            }
            *(_QWORD *)v270 = 39;
            copy_tinfo_t();
            copy_tinfo_t();
            clear_tinfo_t();
            goto LABEL_302;
          }
          if ( (_WORD)v27 != 485 )
          {
            if ( (unsigned __int16)v27 > 0x1E0u )
            {
              LOWORD(v27) = v27 - 481;
              switch ( v27 )
              {
                case 0LL:
                case 6LL:
LABEL_80:
                  LOBYTE(v255) = 0;
                  v33 = 2;
                  v260.m128i_i32[0] = 2;
                  goto LABEL_81;
                case 2LL:
                case 8LL:
                  v229 = get_dtype_size();
                  sub_124CE0((__int64)v272, v248, v256, v229);
                  v230 = *(_QWORD *)(a1 + 832);
                  v261.m128i_i64[0] = (__int64)v270;
                  sub_32C760((__int64 *)v270, v230, v273, 2);
                  copy_tinfo_t();
                  v33 = 2;
                  clear_tinfo_t();
                  LOBYTE(v255) = 0;
                  v260.m128i_i32[0] = 3;
                  break;
                case 4LL:
                  LOBYTE(v255) = 0;
                  v33 = 2;
                  v260.m128i_i32[0] = 2;
                  goto LABEL_290;
                default:
                  goto LABEL_367;
              }
              goto LABEL_82;
            }
LABEL_367:
            LOBYTE(v255) = 0;
            v33 = 2;
            v260.m128i_i32[0] = 2;
LABEL_81:
            v45 = *(_QWORD *)(a1 + 832);
            v250 = get_dtype_size();
            v261.m128i_i64[0] = (__int64)v270;
            sub_32C760((__int64 *)v270, v45, v250, 2);
            sub_32F3F0((__int64)v272, v248, v250);
            clear_tinfo_t();
LABEL_82:
            sub_3FB520(a1, v260.m128i_i32[0], *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), 0.0);
            v46 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
            v260.m128i_i64[0] = *(_QWORD *)(a1 + 832);
            v251 = v46;
            sub_32C870(v261.m128i_i64[0], v260.m128i_i64[0], v274);
            v47 = (__int64 *)v261.m128i_i64[0];
            sub_32F3F0((__int64)v275, v251, *(_DWORD *)(v260.m128i_i64[0] + 84));
            clear_tinfo_t();
            memset(v270, 0, sizeof(v270));
            v271 = 0;
            *(_QWORD *)&v270[16] = qvector_reserve();
            *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
            sub_642D0(v264, v47);
            v48 = *(__int64 **)&v270[16];
            *(_QWORD *)&v270[16] = 0;
            v49 = _mm_loadu_si128(&v271);
            v271 = 0;
            v50 = v48;
            if ( v265 )
            {
              v260 = v49;
              v266.m128i_i64[0] = 0;
              qfree();
              v51 = _mm_load_si128(&v260);
              v265 = v50;
              v266 = v51;
              if ( *(_QWORD *)&v270[16] )
              {
                v271.m128i_i64[0] = 0;
                qfree();
              }
            }
            else
            {
              v265 = v48;
              v266 = v49;
            }
            qfree();
            *(_QWORD *)v270 = (_BYTE)v255 == 0 ? 39LL : 1LL;
            copy_tinfo_t();
            clear_tinfo_t();
            v260.m128i_i8[0] = 0;
            v249 = 0;
            v239 = 1;
            v241 = 0;
            LODWORD(v255) = 4;
            n = 1;
            v238 = -1;
            goto LABEL_39;
          }
LABEL_289:
          LOBYTE(v255) = 1;
          v33 = 0;
          v260.m128i_i32[0] = 1;
LABEL_290:
          v194 = *(_QWORD *)(a1 + 832);
          v195 = *(_DWORD *)(v194 + 632);
          v196 = 7;
          if ( *(_DWORD *)(v194 + 84) != 8 )
            v196 = 2;
          v261.m128i_i8[0] = *(_BYTE *)(a1 + 40LL * v260.m128i_i32[0] + 69);
          v248 = sub_3F6740(a1, (unsigned int)v258, v196, v195, 1, 0.0);
          goto LABEL_81;
        }
        if ( (_WORD)v27 != 466 )
          goto LABEL_25;
        if ( *(_QWORD *)(a1 + 72) != 61440 )
          goto LABEL_67;
        v175 = *(_QWORD *)(a1 + 832);
        v176 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)v270 = 39;
        v260.m128i_i64[0] = v175;
        v261.m128i_i64[0] = (__int64)v270;
        copy_tinfo_t();
        clear_tinfo_t();
        v177 = getinf();
        sub_120450((__int64)v272, v260.m128i_i32[0], 61440, v177, v176, 0);
        v178 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 356LL);
        v258 = *(_QWORD **)(a1 + 832);
        v260.m128i_i32[0] = v178;
        LODWORD(v176) = get_dtype_size();
        sub_32C760((__int64 *)v270, (__int64)v258, v176, 2);
        sub_32F3F0((__int64)v275, v260.m128i_i32[0], v176);
        clear_tinfo_t();
        v260.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 360LL);
        v179 = get_tinfo_size();
        sub_32F3F0((__int64)v276, v260.m128i_i32[0], v179);
        *(_QWORD *)v270 = 21;
        copy_tinfo_t();
        clear_tinfo_t();
        memset(v270, 0, sizeof(v270));
        v271 = 0;
        *(_QWORD *)&v270[16] = qvector_reserve();
        *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
        sub_642D0(v264, (__int64 *)v270);
        v180 = *(__int64 **)&v270[16];
        *(_QWORD *)&v270[16] = 0;
        v181 = _mm_loadu_si128(&v271);
        v271 = 0;
        if ( v265 )
        {
          v261 = v181;
          v266.m128i_i64[0] = 0;
          qfree();
          v181 = _mm_load_si128(&v261);
        }
        v265 = v180;
        v266 = v181;
        if ( *(_QWORD *)&v270[16] )
        {
          v271.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        LODWORD(v258) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 356LL);
LABEL_179:
        v239 = 0;
        v33 = 1;
        v260.m128i_i8[0] = 0;
        v249 = 0;
        v241 = 0;
        LODWORD(v255) = 4;
        n = 1;
        v238 = -1;
        goto LABEL_39;
      }
      if ( (_WORD)v27 != 509 )
        goto LABEL_25;
      goto LABEL_125;
    }
    if ( (_WORD)v27 == 556 )
      goto LABEL_126;
    if ( (unsigned __int16)v27 <= 0x22Cu )
    {
      if ( (_WORD)v27 != 542 )
        goto LABEL_25;
      v28 = *(_QWORD *)(a1 + 72);
      v260.m128i_i64[0] = v28;
      switch ( v28 )
      {
        case 61441LL:
          if ( (getinf() & 0xF) != 1 )
          {
            v260.m128i_i64[0] = *(_QWORD *)(a1 + 72);
LABEL_306:
            v200 = *(__int64 ***)(a1 + 832);
            v201 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)v270 = 39;
            v255 = v200;
            v261.m128i_i64[0] = (__int64)v270;
            copy_tinfo_t();
            clear_tinfo_t();
            v202 = getinf();
            sub_120450((__int64)v272, (int)v255, v260.m128i_i32[0], v202, v201, 0);
            break;
          }
          v259 = "DbgRaiseAssertionFailure";
          break;
        case 61443LL:
          v259 = "__fastfail";
          break;
        case 61440LL:
          v259 = "__debugbreak";
          break;
        default:
          goto LABEL_306;
      }
      memset(v270, 0, sizeof(v270));
      v271 = 0;
      *(_QWORD *)&v270[16] = qvector_reserve();
      *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
      v261.m128i_i64[0] = (__int64)v270;
      sub_642D0(v264, (__int64 *)v270);
      v29 = *(__int64 **)&v270[16];
      *(_QWORD *)&v270[16] = 0;
      v30 = _mm_loadu_si128(&v271);
      v271 = 0;
      v31 = v29;
      if ( v265 )
      {
        v261 = v30;
        v266.m128i_i64[0] = 0;
        qfree();
        v32 = _mm_load_si128(&v261);
        v265 = v31;
        v266 = v32;
        if ( *(_QWORD *)&v270[16] )
        {
          v271.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        v265 = v29;
        v266 = v30;
      }
      qfree();
LABEL_38:
      v239 = 0;
      v33 = 0;
      v260.m128i_i8[0] = 0;
      v249 = 0;
      v241 = 0;
      LODWORD(v255) = 4;
      n = 1;
      v238 = -1;
      goto LABEL_39;
    }
    if ( (_WORD)v27 != 595 )
    {
      if ( (unsigned __int16)(v27 - 642) > 1u )
        goto LABEL_25;
      goto LABEL_255;
    }
LABEL_125:
    sub_151110(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
    goto LABEL_126;
  }
  if ( (unsigned __int16)v27 > 0x38Du )
  {
    if ( (_WORD)v27 != 1134 )
      goto LABEL_25;
    goto LABEL_125;
  }
  if ( (unsigned __int16)v27 > 0x380u )
  {
    v130 = 1LL << ((unsigned __int8)v27 + 127);
    if ( (v130 & 0x1A90) == 0 )
    {
      if ( (v130 & 0xC) == 0 )
      {
        if ( (v130 & 1) == 0 )
          goto LABEL_25;
        v131 = get_tinfo_size();
        sub_32F3F0((__int64)v272, v248, v131);
        v132 = get_tinfo_size();
        sub_32F3F0((__int64)v275, v256, v132);
        *(_QWORD *)v270 = 37;
        v261.m128i_i64[0] = (__int64)v270;
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_101;
      }
      v154 = get_tinfo_size();
      sub_32F3F0((__int64)v272, v248, v154);
      v261.m128i_i64[0] = *(_QWORD *)(a1 + 832);
      v155 = get_dtype_size();
      v156 = v261.m128i_i64[0];
      v261.m128i_i64[0] = (__int64)v270;
      sub_32C760((__int64 *)v270, v156, v155, 2);
      sub_32F3F0((__int64)v275, v256, v155);
      clear_tinfo_t();
      if ( *(_WORD *)(a1 + 48) == 900 )
      {
        *(_QWORD *)v270 = 37;
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_179;
      }
LABEL_229:
      copy_tinfo_t();
      goto LABEL_179;
    }
    v157 = *(_QWORD *)(a1 + 832);
    v158 = *(unsigned __int16 *)(v6 + 110);
    v159 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v157 + 168LL);
    if ( v159 == sub_3EA010 )
      v256 = sub_3EA010(v157, v158);
    else
      v256 = v159(v157, v158);
    v160 = get_tinfo_size();
    sub_32F3F0((__int64)v272, v256, v160);
    v161 = *(unsigned __int16 *)(v6 + 48);
    if ( (unsigned __int16)(v161 - 901) > 7u )
    {
      if ( (_WORD)v161 != 909 )
      {
LABEL_238:
        if ( *(_WORD *)(v6 + 70) != *(_WORD *)(v6 + 110) || *(_QWORD *)(v6 + 120) )
        {
          v163 = get_tinfo_size();
          sub_32F3F0((__int64)v275, v248, v163);
          LOWORD(v161) = *(_WORD *)(v6 + 48);
        }
        v239 = 1;
        v33 = 0;
        goto LABEL_242;
      }
    }
    else
    {
      v162 = 137;
      if ( !_bittest64(&v162, (unsigned int)(v161 - 901)) )
      {
        if ( (_WORD)v161 != 908 )
        {
LABEL_237:
          if ( (_WORD)v161 != 906 )
            goto LABEL_238;
          *(_QWORD *)v270 = 37;
          v261.m128i_i64[0] = (__int64)v270;
          sub_3ED9A0((__int64)v275, v248);
          v33 = 0;
          clear_tinfo_t();
          v239 = 0;
          LOWORD(v161) = *(_WORD *)(v6 + 48);
LABEL_242:
          memset(v270, 0, sizeof(v270));
          v255 = (__int64 **)&v270[16];
          v271 = 0;
          if ( (unsigned __int16)(v161 - 908) <= 1u )
          {
            *(_QWORD *)&v270[16] = qvector_reserve();
            *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
            v261.m128i_i64[0] = (__int64)v270;
            sub_63C80(v267, (__int64 *)v270);
            sub_317070((__int64 *)&v268, v255);
            if ( *(_QWORD *)&v270[16] )
            {
              v271.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            v203 = *(_QWORD *)(v6 + 8);
            memset(v263, 0, 24);
            v204 = *(__int64 ***)(v203 + 216);
            v260.m128i_i64[0] = v203;
            if ( v204 )
            {
              v255 = v204;
              nc = 16LL * (_QWORD)v204;
              v263[0] = qalloc_or_throw();
              v263[2] = (__int64)v255;
              memcpy((void *)v263[0], *(const void **)(v260.m128i_i64[0] + 208), nc);
              v263[1] = (__int64)v255;
            }
            memset(v270, 0, sizeof(v270));
            v205 = *(__int64 ***)(v260.m128i_i64[0] + 568);
            v260.m128i_i64[0] = *(_QWORD *)(v260.m128i_i64[0] + 576);
            if ( (__int64 **)((char *)v205 + v260.m128i_i64[0] - 1) >= v205 )
            {
              v255 = v205;
              *(_QWORD *)v270 = qvector_reserve();
              *(__m128 *)(*(_QWORD *)v270 + 16LL * (*(_QWORD *)&v270[8])++) = _mm_loadh_ps((const double *)v260.m128i_i64);
            }
            sub_318480(v263, (__m128i **)v261.m128i_i64[0]);
            if ( *(_QWORD *)v270 )
            {
              *(_QWORD *)&v270[8] = 0;
              qfree();
            }
            sub_318020((__int64 *)&v268, (__int64)v263);
            if ( v263[0] )
            {
              v263[1] = 0;
              qfree();
            }
          }
          else
          {
            *(_QWORD *)&v270[16] = qvector_reserve();
            *(__m128i *)(*(_QWORD *)&v270[16] + 16 * v271.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_41F900);
            v261.m128i_i64[0] = (__int64)v270;
            sub_63C80(v264, (__int64 *)v270);
            v260.m128i_i64[0] = (__int64)&v265;
            sub_317070((__int64 *)&v265, v255);
            if ( *(_QWORD *)&v270[16] )
            {
              v271.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            v164 = *(_QWORD *)(v6 + 8);
            memset(v263, 0, 24);
            v165 = *(_QWORD *)(v164 + 216);
            v255 = (__int64 **)v164;
            if ( v165 )
            {
              v254 = v165;
              nb = 16 * v165;
              v263[0] = qalloc_or_throw();
              v263[2] = v254;
              memcpy((void *)v263[0], v255[26], nb);
              v263[1] = v254;
            }
            memset(v270, 0, sizeof(v270));
            v166 = v255[71];
            v255 = (__int64 **)v255[72];
            if ( (char *)v255 + (_QWORD)v166 - 1 >= (char *)v166 )
            {
              *(_QWORD *)v270 = qvector_reserve();
              *(__m128 *)(*(_QWORD *)v270 + 16LL * (*(_QWORD *)&v270[8])++) = _mm_loadh_ps((const double *)&v255);
            }
            sub_318480(v263, (__m128i **)v261.m128i_i64[0]);
            if ( *(_QWORD *)v270 )
            {
              *(_QWORD *)&v270[8] = 0;
              qfree();
            }
            sub_318020((__int64 *)v260.m128i_i64[0], (__int64)v263);
            if ( v263[0] )
            {
              v263[1] = 0;
              qfree();
            }
          }
LABEL_118:
          v260.m128i_i8[0] = 0;
          v249 = 0;
          v241 = 0;
          LODWORD(v255) = 4;
          n = 1;
          v238 = -1;
          goto LABEL_39;
        }
        goto LABEL_359;
      }
      sub_3ECE40((__int64)v272, *(_QWORD *)(v6 + 832), *(_QWORD *)(v6 + 120), *(_QWORD *)(v6 + 40), 1);
      LOWORD(v161) = *(_WORD *)(v6 + 48);
      if ( (_WORD)v161 == 908 )
      {
LABEL_359:
        copy_tinfo_t();
        goto LABEL_337;
      }
      if ( (_WORD)v161 != 909 )
        goto LABEL_237;
    }
    *(_QWORD *)v270 = 37;
    v261.m128i_i64[0] = (__int64)v270;
    copy_tinfo_t();
    clear_tinfo_t();
LABEL_337:
    v239 = 0;
    LOWORD(v161) = *(_WORD *)(v6 + 48);
    v33 = 1;
    goto LABEL_242;
  }
  if ( (_WORD)v27 == 888 )
    goto LABEL_289;
  if ( (unsigned __int16)v27 > 0x378u )
  {
    if ( (_WORD)v27 != 895 )
      goto LABEL_25;
    v149 = get_tinfo_size();
    sub_32F3F0((__int64)v272, v248, v149);
    sub_3ECE40((__int64)v272, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), *(_QWORD *)(a1 + 40), 2);
    v150 = *(__int64 ***)(a1 + 192);
    v151 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)v270 = 39;
    v152 = *(_QWORD *)(a1 + 832);
    v255 = v150;
    v260.m128i_i64[0] = v152;
    v261.m128i_i64[0] = (__int64)v270;
    copy_tinfo_t();
    clear_tinfo_t();
    v153 = getinf();
    sub_120450((__int64)v275, v260.m128i_i32[0], (int)v255, v153, v151, 3);
    goto LABEL_229;
  }
  if ( (unsigned __int16)(v27 - 868) > 2u )
    goto LABEL_25;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 1) == 0 )
    goto LABEL_298;
  v260.m128i_i8[0] = *(_BYTE *)(a1 + 57);
  if ( (v260.m128i_i8[0] & 0x5C) == 0 )
  {
    v137 = *(_QWORD *)(a1 + 832);
    v138 = *(__int64 ***)(a1 + 40);
    *(_QWORD *)v270 = 7;
    v258 = (_QWORD *)v137;
    v255 = v138;
    v261.m128i_i64[0] = (__int64)v270;
    copy_tinfo_t();
    clear_tinfo_t();
    v139 = getinf();
    sub_120450((__int64)v275, (int)v258, v260.m128i_i8[0] & 7, v139, (__int64)v255, 0);
    sub_3EFFF0((__int64)v258);
    copy_tinfo_t();
    if ( *(_WORD *)(a1 + 48) != 869 || (v260.m128i_i8[0] & 6) != 0 )
    {
      if ( !v259 )
        goto LABEL_67;
    }
    else
    {
      v259 = "ptrauth_auth_function";
    }
    sub_32C5A0(v263, *(_QWORD *)(a1 + 832), *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL));
    sub_32C870(v261.m128i_i64[0], *(_QWORD *)(a1 + 832), v263);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    sub_3ED9A0((__int64)v272, v248);
    if ( *(_WORD *)(a1 + 48) != 870 )
    {
      if ( *(_BYTE *)(a1 + 105) )
      {
        v141 = v256;
      }
      else
      {
        v140 = sub_137B80(*(_QWORD **)(a1 + 8), *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL), 1);
        v141 = v140;
        if ( v140 == -1 )
          goto LABEL_67;
        v142 = v140;
        v143 = 2;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
          v143 = 7;
        sub_3F56D0(a1, 3u, v143, 0, 0x3BEA45E214ADDC55LL, v142, 0);
      }
      v276[0] = 10;
      v260.m128i_i64[0] = j__qalloc_or_throw();
      v144 = _mm_cvtsi32_si128(v141);
      v145 = v261.m128i_i64[0];
      v146 = v260.m128i_i64[0];
      v147 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL));
      *(_DWORD *)v270 = 1;
      LODWORD(v258) = _mm_cvtsi128_si32(v147);
      *(_QWORD *)&v270[4] = _mm_unpacklo_epi32(v147, v144).m128i_u64[0];
      sub_123480(v260.m128i_i64[0], (unsigned __int8 *)v261.m128i_i64[0]);
      *(_DWORD *)(v260.m128i_i64[0] + 20) = -1;
      *(_DWORD *)(v146 + 16) = _mm_cvtsi128_si32(_mm_cvtsi32_si128((unsigned int)v258));
      v278 = v146;
      sub_11C7E0(v145);
      copy_tinfo_t();
      v148 = *(_QWORD *)(a1 + 832);
      v277 = *(_DWORD *)(v148 + 84);
      sub_151110(v148, v148 + 712);
    }
    v239 = 0;
    v33 = 1;
    v260.m128i_i8[0] = 0;
    v249 = 0;
    LODWORD(v258) = v248;
    v241 = 0;
    LODWORD(v255) = 4;
    n = 1;
    v238 = -1;
    goto LABEL_40;
  }
LABEL_67:
  clear_tinfo_t();
  if ( v268 )
  {
    v269.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v265 )
  {
    v266.m128i_i64[0] = 0;
    qfree();
  }
  v44 = &v279;
  qfree();
  while ( 1 )
  {
    cleanup_argloc();
    if ( *((_QWORD *)v44 + 4) )
    {
      *((_QWORD *)v44 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v44);
    if ( v272 == v44 )
      break;
    v44 -= 80;
  }
  return (unsigned int)v8;
}

