unsigned __int64 __fastcall sub_4BD60(const __m128i *a1, _QWORD *a2)
{
  int v4; // r12d
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rcx
  const char *v8; // rdx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rdi
  int v13; // eax
  void *v14; // r15
  __int64 v15; // r15
  __m128i si128; // xmm2
  __m128i v17; // xmm3
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int *v23; // rax
  int v24; // eax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  const __m128i *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r9d
  __m128i v36; // xmm0
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rdi
  _QWORD *v41; // r8
  void **v42; // r9
  char *v43; // r10
  size_t v44; // r11
  __m128i v45; // xmm4
  __m128i v46; // xmm5
  int v47; // eax
  __int64 v48; // rdx
  double v49; // xmm4_8
  double v50; // xmm5_8
  unsigned int *v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // r14
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // r14
  __int64 *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 *v70; // rax
  __int64 v71; // rdi
  void *v72; // rdi
  char *v73; // rax
  const __m128i *v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  const char *v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 *v87; // r8
  __int64 v88; // rax
  __int64 v89; // rsi
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  __int64 v92; // rdi
  void *v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rdi
  unsigned __int64 v99; // rdx
  int v100; // r9d
  int v101; // ecx
  int v102; // r8d
  int v103; // r9d
  void *v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rax
  const char *v107; // rax
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // r9d
  __int64 j; // rax
  int v113; // edx
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // r13
  const __m128i *v119; // r12
  unsigned __int64 v120; // rcx
  int v121; // eax
  int v122; // r14d
  unsigned __int64 v123; // r13
  const __m128i *v124; // rdx
  char *v125; // rax
  const __m128i *v126; // r12
  __int64 v127; // rax
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rax
  const char *v130; // rsi
  unsigned __int64 v131; // r12
  void **v132; // rdx
  const char *v133; // rsi
  __int64 v134; // rcx
  int v135; // r8d
  int v136; // r9d
  const char *v137; // rdx
  const char *v138; // rsi
  char *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // [rsp-8h] [rbp-1858h]
  int v142; // [rsp+0h] [rbp-1850h]
  __int64 v143; // [rsp+8h] [rbp-1848h]
  const char **v144; // [rsp+10h] [rbp-1840h]
  int v145; // [rsp+10h] [rbp-1840h]
  int v146; // [rsp+1Ch] [rbp-1834h]
  const __m128i *v147; // [rsp+20h] [rbp-1830h]
  size_t v148; // [rsp+20h] [rbp-1830h]
  __int64 v149; // [rsp+28h] [rbp-1828h]
  _QWORD *v150; // [rsp+28h] [rbp-1828h]
  _QWORD *v151; // [rsp+28h] [rbp-1828h]
  const __m128i *v152; // [rsp+28h] [rbp-1828h]
  __int64 v153; // [rsp+30h] [rbp-1820h]
  char *v154; // [rsp+30h] [rbp-1820h]
  char *v155; // [rsp+30h] [rbp-1820h]
  char *v156; // [rsp+38h] [rbp-1818h]
  __int64 i; // [rsp+38h] [rbp-1818h]
  unsigned __int64 v158; // [rsp+38h] [rbp-1818h]
  __int64 v159; // [rsp+38h] [rbp-1818h]
  __m128i n; // [rsp+40h] [rbp-1810h] BYREF
  void **v161; // [rsp+50h] [rbp-1800h]
  unsigned __int64 v162; // [rsp+58h] [rbp-17F8h]
  int v163[2]; // [rsp+60h] [rbp-17F0h]
  const __m128i *v164; // [rsp+68h] [rbp-17E8h]
  char *v165; // [rsp+78h] [rbp-17D8h] BYREF
  __int64 v166; // [rsp+80h] [rbp-17D0h] BYREF
  __int128 v167; // [rsp+88h] [rbp-17C8h]
  __int64 v168; // [rsp+A0h] [rbp-17B0h] BYREF
  __int128 v169; // [rsp+A8h] [rbp-17A8h]
  char *v170; // [rsp+C0h] [rbp-1790h] BYREF
  __int128 v171; // [rsp+C8h] [rbp-1788h]
  _QWORD *v172; // [rsp+D8h] [rbp-1778h]
  char v173; // [rsp+E0h] [rbp-1770h]
  _QWORD v174[2]; // [rsp+F0h] [rbp-1760h] BYREF
  __m128i v175; // [rsp+100h] [rbp-1750h]
  __int64 v176; // [rsp+110h] [rbp-1740h]
  int v177; // [rsp+118h] [rbp-1738h]
  char v178; // [rsp+11Ch] [rbp-1734h]
  __int64 v179; // [rsp+120h] [rbp-1730h]
  char v180; // [rsp+128h] [rbp-1728h]
  __int64 v181; // [rsp+138h] [rbp-1718h]
  __int128 v182; // [rsp+140h] [rbp-1710h]
  __m128i v183; // [rsp+150h] [rbp-1700h]
  char v184; // [rsp+160h] [rbp-16F0h]
  __m128i v185; // [rsp+168h] [rbp-16E8h]
  __int64 v186; // [rsp+178h] [rbp-16D8h]
  __int128 v187; // [rsp+180h] [rbp-16D0h]
  __int16 v188; // [rsp+190h] [rbp-16C0h]
  int v189; // [rsp+1A0h] [rbp-16B0h]
  __int64 v190; // [rsp+1B8h] [rbp-1698h]
  __int128 v191; // [rsp+1C0h] [rbp-1690h]
  __int64 v192; // [rsp+1D0h] [rbp-1680h]
  __int128 v193; // [rsp+1D8h] [rbp-1678h]
  __int64 v194; // [rsp+1E8h] [rbp-1668h]
  __int128 v195; // [rsp+1F0h] [rbp-1660h]
  __int64 v196; // [rsp+200h] [rbp-1650h]
  __int128 v197; // [rsp+208h] [rbp-1648h]
  __int64 v198; // [rsp+218h] [rbp-1638h]
  __int128 v199; // [rsp+220h] [rbp-1630h]
  __int64 v200; // [rsp+230h] [rbp-1620h]
  __int128 v201; // [rsp+238h] [rbp-1618h]
  __int64 v202; // [rsp+248h] [rbp-1608h]
  __int128 v203; // [rsp+250h] [rbp-1600h]
  __int64 v204; // [rsp+260h] [rbp-15F0h]
  __int128 v205; // [rsp+268h] [rbp-15E8h]
  __int64 v206; // [rsp+278h] [rbp-15D8h]
  __int128 v207; // [rsp+280h] [rbp-15D0h]
  __int64 v208; // [rsp+290h] [rbp-15C0h]
  __int128 v209; // [rsp+298h] [rbp-15B8h]
  __int16 v210; // [rsp+2A8h] [rbp-15A8h]
  char v211; // [rsp+2AAh] [rbp-15A6h]
  int v212; // [rsp+2ACh] [rbp-15A4h]
  __int128 v213; // [rsp+2B0h] [rbp-15A0h]
  __int64 v214; // [rsp+2C0h] [rbp-1590h]
  __int64 v215; // [rsp+2C8h] [rbp-1588h]
  int v216; // [rsp+2D0h] [rbp-1580h]
  __int64 v217; // [rsp+2D8h] [rbp-1578h]
  __int128 v218; // [rsp+2E0h] [rbp-1570h]
  __int64 v219; // [rsp+2F0h] [rbp-1560h]
  void *v220[5]; // [rsp+300h] [rbp-1550h] BYREF
  int v221; // [rsp+328h] [rbp-1528h]
  char v222; // [rsp+32Ch] [rbp-1524h]
  __int64 v223; // [rsp+330h] [rbp-1520h]
  char v224; // [rsp+338h] [rbp-1518h]
  __int64 v225; // [rsp+348h] [rbp-1508h]
  __int128 v226; // [rsp+350h] [rbp-1500h]
  __int64 v227; // [rsp+360h] [rbp-14F0h]
  __int64 v228; // [rsp+368h] [rbp-14E8h]
  char v229; // [rsp+370h] [rbp-14E0h]
  __m128i v230; // [rsp+378h] [rbp-14D8h]
  __int64 v231; // [rsp+388h] [rbp-14C8h]
  __int128 v232; // [rsp+390h] [rbp-14C0h]
  __int16 v233; // [rsp+3A0h] [rbp-14B0h]
  __int64 v234; // [rsp+3C8h] [rbp-1488h]
  __int128 v235; // [rsp+3D0h] [rbp-1480h]
  __int64 v236; // [rsp+3E0h] [rbp-1470h]
  __int128 v237; // [rsp+3E8h] [rbp-1468h]
  __int64 v238; // [rsp+3F8h] [rbp-1458h]
  __int128 v239; // [rsp+400h] [rbp-1450h]
  __int64 v240; // [rsp+410h] [rbp-1440h]
  __int128 v241; // [rsp+418h] [rbp-1438h]
  __int64 v242; // [rsp+428h] [rbp-1428h]
  __int128 v243; // [rsp+430h] [rbp-1420h]
  __int64 v244; // [rsp+440h] [rbp-1410h]
  __int128 v245; // [rsp+448h] [rbp-1408h]
  __int64 v246; // [rsp+458h] [rbp-13F8h]
  __int128 v247; // [rsp+460h] [rbp-13F0h]
  __int64 v248; // [rsp+470h] [rbp-13E0h]
  __int128 v249; // [rsp+478h] [rbp-13D8h]
  __int64 v250; // [rsp+488h] [rbp-13C8h]
  __int128 v251; // [rsp+490h] [rbp-13C0h]
  __int64 v252; // [rsp+4A0h] [rbp-13B0h]
  __int128 v253; // [rsp+4A8h] [rbp-13A8h]
  __int16 v254; // [rsp+4B8h] [rbp-1398h]
  char v255; // [rsp+4BAh] [rbp-1396h]
  int v256; // [rsp+4BCh] [rbp-1394h]
  __int128 v257; // [rsp+4C0h] [rbp-1390h]
  const __m128i *v258; // [rsp+4D0h] [rbp-1380h]
  __int64 v259; // [rsp+4D8h] [rbp-1378h]
  int v260; // [rsp+4E0h] [rbp-1370h]
  __int64 v261; // [rsp+4E8h] [rbp-1368h]
  __int128 v262; // [rsp+4F0h] [rbp-1360h]
  __int64 v263; // [rsp+500h] [rbp-1350h]
  __int128 v264; // [rsp+510h] [rbp-1340h] BYREF
  __int64 v265; // [rsp+520h] [rbp-1330h]
  __int64 v266; // [rsp+528h] [rbp-1328h]
  __int64 v267; // [rsp+530h] [rbp-1320h]
  _BYTE v268[16]; // [rsp+538h] [rbp-1318h] BYREF
  unsigned __int64 v269; // [rsp+548h] [rbp-1308h]
  char v270; // [rsp+678h] [rbp-11D8h] BYREF
  __m128i v271; // [rsp+680h] [rbp-11D0h] BYREF
  __int64 v272; // [rsp+690h] [rbp-11C0h]
  __int64 v273; // [rsp+698h] [rbp-11B8h]
  __int64 v274; // [rsp+6A0h] [rbp-11B0h]
  __int128 v275; // [rsp+6A8h] [rbp-11A8h]
  __int128 v276; // [rsp+6B8h] [rbp-1198h]
  __int128 v277; // [rsp+6C8h] [rbp-1188h]
  __int128 v278; // [rsp+6D8h] [rbp-1178h]
  __int128 v279; // [rsp+6E8h] [rbp-1168h]
  __int128 v280; // [rsp+6F8h] [rbp-1158h]
  __int128 v281; // [rsp+708h] [rbp-1148h]
  __int64 v282; // [rsp+718h] [rbp-1138h]
  __int128 v283; // [rsp+720h] [rbp-1130h]
  __int64 v284; // [rsp+730h] [rbp-1120h]
  __int128 v285; // [rsp+738h] [rbp-1118h]
  __int64 v286; // [rsp+748h] [rbp-1108h]
  int v287; // [rsp+750h] [rbp-1100h]
  __int64 v288; // [rsp+758h] [rbp-10F8h]
  __int64 v289; // [rsp+760h] [rbp-10F0h]
  int v290; // [rsp+768h] [rbp-10E8h]
  __int128 v291; // [rsp+770h] [rbp-10E0h]
  __int64 v292; // [rsp+780h] [rbp-10D0h]
  __int128 v293; // [rsp+788h] [rbp-10C8h]
  __int64 v294; // [rsp+798h] [rbp-10B8h]
  __int128 v295; // [rsp+7A0h] [rbp-10B0h]
  __int64 v296; // [rsp+7B0h] [rbp-10A0h] BYREF
  __int128 v297; // [rsp+7B8h] [rbp-1098h]
  __int128 v298; // [rsp+7C8h] [rbp-1088h]
  __int128 v299; // [rsp+7D8h] [rbp-1078h]
  int v300; // [rsp+7E8h] [rbp-1068h]
  unsigned int v301; // [rsp+7ECh] [rbp-1064h]
  __int128 v302; // [rsp+7F0h] [rbp-1060h] BYREF
  __int128 v303; // [rsp+800h] [rbp-1050h] BYREF
  char s[4104]; // [rsp+810h] [rbp-1040h] BYREF
  unsigned __int64 v305; // [rsp+1818h] [rbp-38h]

  v164 = a1;
  v305 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_exist(a2) )
  {
    if ( netnode_supfirst(*a2, 102) != -1 )
    {
      v4 = netnode_altval(*a2, 0, 97);
      if ( (unsigned int)(v4 - 1) <= 1 && netnode_supval(*a2, 1, &v302, 16, 97) != -1 )
      {
        if ( netnode_supstr(*a2, 2, s, 4096, 97) > 0 )
        {
LABEL_15:
          v15 = open_linput(s, 0);
          if ( !v15 )
          {
            v23 = __errno_location();
            v24 = winerr((unsigned int)*v23);
            sub_112F0((unsigned int)"warning: failed to open %s: %s\n", (unsigned int)s, v24, v25, v26, v27);
            return v305 - __readfsqword(0x28u);
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
          v17 = _mm_load_si128((const __m128i *)&xmmword_574C0);
          v18 = v164->m128i_i64[1];
          v183 = _mm_load_si128((const __m128i *)&xmmword_57480);
          v174[0] = &off_62AA0;
          v174[1] = v18;
          v178 = 1;
          v176 = -1;
          v177 = 8;
          v179 = v15;
          v180 = 0;
          v181 = 0;
          v184 = 0;
          v186 = 0;
          v188 = 0;
          v190 = 0;
          v192 = 0;
          v194 = 0;
          v196 = 0;
          v198 = 0;
          v200 = 0;
          v175 = si128;
          v182 = 0;
          v185 = v17;
          v187 = 0;
          v191 = 0;
          v193 = 0;
          v195 = 0;
          v197 = 0;
          v199 = 0;
          v201 = 0;
          v202 = 0;
          v204 = 0;
          v206 = 0;
          v208 = 0;
          v210 = 0;
          v211 = 0;
          v212 = 0;
          v214 = 0;
          v215 = 0;
          v216 = 0;
          v217 = 0;
          v219 = 0;
          *(_QWORD *)v163 = v174;
          v203 = 0;
          v205 = 0;
          v207 = 0;
          v209 = 0;
          v213 = -1;
          v218 = 0;
          if ( !(unsigned __int8)sub_25BB0(v174) || !(unsigned __int8)sub_25EF0(*(_QWORD *)v163, 0, 0, 0) || v189 != 12 )
          {
            sub_112F0((unsigned int)"warning: %s is not a valid kernel cache\n", (unsigned int)s, v19, v20, v21, v22);
LABEL_20:
            sub_162E0(*(_QWORD *)v163);
            close_linput(v15);
            return v305 - __readfsqword(0x28u);
          }
          LOBYTE(v220[2]) = 0;
          v161 = v220;
          *(__m128i *)v220 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63268, (__m128i)(unsigned __int64)&v303);
          sub_27280(*(_QWORD *)v163, v220);
          if ( !LOBYTE(v220[2]) || (v28 = DWORD2(v303) ^ DWORD2(v302), v303 != v302) )
          {
            sub_112F0(
              (unsigned int)"warning: UUID of %s does not match the linked cache info in the input file\n",
              (unsigned int)s,
              v28,
              v29,
              v30,
              v31);
            goto LABEL_20;
          }
          v146 = 0;
          if ( !HIBYTE(v210) )
            sub_4BC40(v163[0]);
          v32 = (const __m128i *)s;
          if ( !(_QWORD)v199 )
          {
            sub_112F0((unsigned int)"warning: no subfiles found in %s\n", (unsigned int)s, v28, v29, v30, v31);
            goto LABEL_20;
          }
          sub_112F0((unsigned int)"importing symbols from: %s\n", (unsigned int)s, v28, v29, v30, v31);
          v272 = 0;
          v273 = 0;
          v36 = _mm_loadu_si128(v164);
          v274 = 0;
          v282 = 0;
          v271 = v36;
          v280 = 0;
          v281 = 0;
          v283 = 0;
          v285 = 0;
          v293 = 0;
          v295 = 0;
          v297 = 0;
          v284 = 0;
          v286 = 0;
          v287 = -1;
          v288 = 0;
          v289 = -1;
          v290 = 0;
          v292 = 0;
          v294 = 0;
          v296 = 0;
          v300 = 0;
          v291 = -1;
          v275 = 0;
          v276 = 0;
          v277 = 0;
          v278 = 0;
          v279 = 0;
          v298 = 0;
          v299 = 0;
          v301 = 1024;
          LODWORD(v37) = v199;
          if ( (_QWORD)v199 )
          {
            v162 = v199;
            v296 = qvector_reserve(&v296, 0, v199, 24);
            v37 = v162;
            v38 = v297;
            v32 = v164;
            v33 = 24 * v297;
            if ( (unsigned __int64)v297 < v162 )
            {
              do
              {
                ++v38;
                v34 = v33 + v296;
                v33 += 24;
                *(_QWORD *)v34 = 0;
                *(_OWORD *)(v34 + 8) = 0;
              }
              while ( v37 != v38 );
              v164 = v32;
            }
            *(_QWORD *)&v297 = v37;
          }
          sub_19440((unsigned int)"Resolving kernelcache symbols", (_DWORD)v32, v33, v34, v37, v35);
          v156 = (char *)v199;
          if ( (_QWORD)v199 )
          {
            v162 = 0;
            do
            {
              v39 = callui(27);
              v40 = v296;
              if ( v39 )
                goto LABEL_80;
              v41 = (_QWORD *)(v198 + 80 * v162);
              v42 = (void **)(v296 + 24 * v162);
              if ( v42 != v41 + 5 )
              {
                v43 = (char *)v41[6];
                if ( v43 && (v44 = (size_t)(v43 - 1), v43 != (_BYTE *)&dword_0 + 1) )
                {
                  n.m128i_i64[1] = v41[5];
                  if ( v42[2] < v43 )
                  {
                    v104 = *v42;
                    v148 = (size_t)(v43 - 1);
                    v151 = (_QWORD *)(v198 + 80 * v162);
                    v155 = v43;
                    n.m128i_i64[0] = v296 + 24 * v162;
                    v105 = qvector_reserve(n.m128i_i64[0], v104, v43, 1);
                    v42 = (void **)n.m128i_i64[0];
                    v44 = v148;
                    v41 = v151;
                    v43 = v155;
                    *(_QWORD *)n.m128i_i64[0] = v105;
                  }
                  v42[1] = v43;
                  v72 = *v42;
                  v150 = v41;
                  v154 = v43;
                  n.m128i_i64[0] = (__int64)v42;
                  memmove(v72, (const void *)n.m128i_i64[1], v44);
                  v41 = v150;
                  v154[*(_QWORD *)n.m128i_i64[0] - 1] = 0;
                }
                else
                {
                  v42[1] = 0;
                }
              }
              v45 = _mm_load_si128((const __m128i *)&xmmword_574B0);
              v46 = _mm_load_si128((const __m128i *)&xmmword_574C0);
              v47 = (v301 >> 3) & 2;
              v48 = v41[4];
              v220[4] = (void *)-1LL;
              if ( (v301 & 0x80) != 0 )
                v47 = (v301 >> 3) & 2 | 4;
              v32 = (const __m128i *)v164->m128i_i64[1];
              v221 = 8;
              v220[0] = &off_62AA0;
              v227 = v48;
              v233 = 0;
              v220[1] = (void *)v32;
              v222 = 1;
              v223 = v15;
              v224 = 0;
              v225 = 0;
              v228 = -1;
              v229 = 0;
              v231 = 0;
              v234 = 0;
              v236 = 0;
              v238 = 0;
              v240 = 0;
              v242 = 0;
              *(__m128i *)&v220[2] = v45;
              v226 = 0;
              v230 = v46;
              v232 = 0;
              v235 = 0;
              v237 = 0;
              v239 = 0;
              v241 = 0;
              v243 = 0;
              v244 = 0;
              v246 = 0;
              v248 = 0;
              v250 = 0;
              v252 = 0;
              v254 = 0;
              v255 = 0;
              v256 = 0;
              v258 = v164 + 1;
              v259 = v288;
              v260 = v47;
              v261 = 0;
              v263 = 0;
              v245 = 0;
              v247 = 0;
              v249 = 0;
              v251 = 0;
              v253 = 0;
              v257 = -1;
              v262 = 0;
              if ( (unsigned __int8)sub_25BB0(v161) )
              {
                v32 = 0;
                if ( (unsigned __int8)sub_25EF0(v161, 0, 0, 0) )
                {
                  v32 = (const __m128i *)&v170;
                  v227 = 0;
                  v170 = 0;
                  v172 = 0;
                  v173 = 0;
                  v144 = (const char **)&v170;
                  v171 = 0;
                  sub_33800(
                    v161,
                    &v170,
                    0,
                    0.0,
                    NAN,
                    *(double *)si128.m128i_i64,
                    *(double *)v17.m128i_i64,
                    v49,
                    v50,
                    NAN);
                  v51 = (unsigned int *)v170;
                  n.m128i_i64[1] = (__int64)&v170[16 * v171];
                  if ( (char *)n.m128i_i64[1] != v170 )
                  {
                    do
                    {
                      if ( v172 )
                      {
                        v52 = v172[2];
                        if ( v52 )
                        {
                          v32 = (const __m128i *)*v51;
                          if ( (unsigned __int64)v32 < v52 - 1 )
                          {
                            v53 = *v172;
                            n.m128i_i64[0] = (__int64)v51;
                            v149 = (*(__int64 (**)(void))(v53 + 16))();
                            v51 = (unsigned int *)n.m128i_i64[0];
                            if ( v149 )
                            {
                              if ( (~*(_BYTE *)(n.m128i_i64[0] + 4) & 0xE) == 0
                                && *(_BYTE *)(n.m128i_i64[0] + 4) <= 0x1Fu )
                              {
                                v54 = *a2;
                                v153 = n.m128i_i64[0];
                                n.m128i_i64[0] = *(_QWORD *)(n.m128i_i64[0] + 8) & *(_QWORD *)(v164->m128i_i64[1] + 16);
                                v32 = (const __m128i *)n.m128i_i64[0];
                                v55 = netnode_altval(v54, n.m128i_i64[0], 98);
                                v51 = (unsigned int *)v153;
                                if ( !v55 )
                                {
                                  netnode_supset(*a2, n.m128i_i64[0], v149, 0, 115);
                                  v56 = *a2;
                                  v32 = (const __m128i *)n.m128i_i64[0];
                                  v165 = (char *)(v162 + 1);
                                  netnode_supset(v56, n.m128i_i64[0], &v165, 8, 98);
                                  v51 = (unsigned int *)v153;
                                }
                              }
                            }
                          }
                        }
                      }
                      v51 += 4;
                    }
                    while ( (unsigned int *)n.m128i_i64[1] != v51 );
                  }
                  if ( v173 && v172 )
                    (*(void (__fastcall **)(_QWORD *))(*v172 + 8LL))(v172);
                  if ( v170 )
                  {
                    *(_QWORD *)&v171 = 0;
                    qfree(v170, v32);
                  }
                }
              }
              sub_162E0(v161);
              ++v162;
            }
            while ( (char *)v162 != v156 );
            v156 = (char *)v199;
          }
          v166 = 0;
          v168 = 0;
          v167 = 0;
          v169 = 0;
          if ( v156 )
          {
            n.m128i_i64[1] = (__int64)&v166;
            n.m128i_i64[0] = (__int64)&v168;
            v162 = (unsigned __int64)&v271;
            v168 = qvector_reserve(&v168, 0, v156, 24);
            v73 = (char *)v169;
            v74 = v164;
            v75 = 24 * v169;
            if ( (unsigned __int64)v169 < (unsigned __int64)v156 )
            {
              do
              {
                ++v73;
                v76 = v75 + v168;
                v75 += 24;
                *(_QWORD *)v76 = 0;
                *(_OWORD *)(v76 + 8) = 0;
              }
              while ( v156 != v73 );
              v164 = v74;
            }
            *(_QWORD *)&v169 = v156;
          }
          if ( !(_BYTE)v210 )
          {
            n.m128i_i64[0] = (__int64)&v168;
            n.m128i_i64[1] = (__int64)&v166;
            v162 = (unsigned __int64)&v271;
            sub_28840(*(_QWORD *)v163);
          }
          v77 = *a2;
          v143 = *((_QWORD *)&v213 + 1);
          n.m128i_i64[0] = (__int64)&v168;
          n.m128i_i64[1] = (__int64)&v166;
          v162 = (unsigned __int64)&v271;
          for ( i = netnode_supfirst(v77, 102); ; i = netnode_supnext(v94, i, 102) )
          {
            if ( i == -1 )
            {
              v107 = "SYSTEM";
              if ( v4 == 1 )
                v107 = "BOOT";
              v162 = (unsigned __int64)&v271;
              n.m128i_i64[1] = (__int64)&v166;
              n.m128i_i64[0] = (__int64)&v168;
              sub_41820(
                (_DWORD)v164,
                (unsigned int)&v271,
                v146,
                8,
                (unsigned int)&v168,
                (unsigned int)&v166,
                (__int64)a2,
                (__int64)v107,
                v142,
                v143,
                (_DWORD)v144);
              sub_19440((unsigned int)"Patching kernelcache fixups", (unsigned int)&v271, v108, v109, v110, v111);
              v32 = (const __m128i *)(&qword_60 + 6);
              for ( j = netnode_supfirst(*a2, 102); ; j = netnode_supnext(*a2, v119, 102) )
              {
                v119 = (const __m128i *)j;
                if ( j == -1 )
                  break;
                if ( (unsigned __int8)callui(27) )
                  goto LABEL_65;
                v116 = netnode_altval(*a2, v119, 102);
                if ( v116 )
                {
                  v117 = netnode_altval(*a2, v116, 105);
                  if ( v117 )
                  {
                    v118 = netnode_altval(*a2, (int)v117 - 1, 65);
                    if ( v118 )
                    {
                      if ( (v164[855].m128i_i8[9] & 8) == 0 )
                        patch_qword(v119, v118);
                      sub_1DF00((_DWORD)v164, v162, (_DWORD)v119, v118, 3, 0, 1, 0);
                    }
                  }
                }
                v32 = v119;
              }
              if ( v164[847].m128i_i64[1] >= (unsigned __int64)v164[848].m128i_i64[0]
                || (v120 = v164[849].m128i_u64[0], v164[848].m128i_i64[1] >= v120)
                || (v121 = *(_DWORD *)(v164->m128i_i64[0] + 4)) != 0 && v121 != 13 )
              {
LABEL_65:
                if ( v168 )
                {
                  if ( (_QWORD)v169 )
                  {
                    v57 = v168;
                    v58 = 0;
                    v59 = v169;
                    do
                    {
                      v60 = (__int64 *)(v57 + 24 * v58);
                      v61 = *v60;
                      if ( *v60 )
                      {
                        v60[1] = 0;
                        qfree(v61, v32);
                        v57 = v168;
                      }
                      ++v58;
                    }
                    while ( v59 != v58 );
                  }
                  else
                  {
                    v57 = v168;
                  }
                  *(_QWORD *)&v169 = 0;
                  qfree(v57, v32);
                }
                if ( v166 )
                {
                  if ( (_QWORD)v167 )
                  {
                    v62 = v166;
                    v63 = 0;
                    v64 = v167;
                    do
                    {
                      v65 = (__int64 *)(v62 + 24 * v63);
                      v66 = *v65;
                      if ( *v65 )
                      {
                        v65[1] = 0;
                        qfree(v66, v32);
                        v62 = v166;
                      }
                      ++v63;
                    }
                    while ( v64 != v63 );
                  }
                  else
                  {
                    v62 = v166;
                  }
                  *(_QWORD *)&v167 = 0;
                  qfree(v62, v32);
                }
                v40 = v296;
LABEL_80:
                if ( v40 )
                {
                  v67 = 0;
                  v68 = v40;
                  v69 = v297;
                  if ( (_QWORD)v297 )
                  {
                    do
                    {
                      v70 = (__int64 *)(v68 + 24 * v67);
                      v71 = *v70;
                      if ( *v70 )
                      {
                        v70[1] = 0;
                        qfree(v71, v32);
                        v68 = v296;
                      }
                      ++v67;
                    }
                    while ( v69 != v67 );
                    v40 = v68;
                  }
                  *(_QWORD *)&v297 = 0;
                  qfree(v40, v32);
                }
                if ( v294 )
                {
                  *(_QWORD *)&v295 = 0;
                  qfree(v294, v32);
                }
                if ( v292 )
                {
                  *(_QWORD *)&v293 = 0;
                  qfree(v292, v32);
                }
                if ( v284 )
                {
                  *(_QWORD *)&v285 = 0;
                  qfree(v284, v32);
                }
                if ( v282 )
                {
                  *(_QWORD *)&v283 = 0;
                  qfree(v282, v32);
                }
                if ( *((_QWORD *)&v280 + 1) )
                {
                  *(_QWORD *)&v281 = 0;
                  qfree(*((_QWORD *)&v280 + 1), v32);
                }
                goto LABEL_20;
              }
              sub_19440((unsigned int)"Analyzing kernelcache stubs", (_DWORD)v32, v113, v120, v114, v115);
              v122 = 4;
              if ( !*(_DWORD *)(v164->m128i_i64[0] + 4) )
                v122 = 6;
              v123 = v164[847].m128i_u64[1];
              while ( 2 )
              {
                if ( v123 >= v164[848].m128i_i64[0] )
                  goto LABEL_191;
                if ( (unsigned __int8)callui(27) )
                  goto LABEL_65;
                v265 = -1;
                v124 = v164;
                v266 = 0;
                v125 = v268;
                v267 = 0;
                v264 = -1;
                do
                {
                  *(_WORD *)v125 = 0;
                  v125 += 40;
                  *((_WORD *)v125 - 19) = 0;
                  *((_WORD *)v125 - 18) = 0;
                  *((_DWORD *)v125 - 2) = 0;
                  *((_WORD *)v125 - 17) = 0;
                  *((_OWORD *)v125 - 2) = 0;
                  *((_QWORD *)v125 - 2) = 0;
                }
                while ( &v270 != v125 );
                v32 = (const __m128i *)v123;
                v164 = v124;
                v126 = v124;
                if ( v122 != (unsigned int)decode_insn(&v264, v123) )
                {
LABEL_191:
                  sub_351A0(n.m128i_i64[0]);
                  sub_24A50(n.m128i_i64[1]);
                  sub_22F90(v162);
                  sub_162E0(*(_QWORD *)v163);
                  close_linput(v15);
                  return v305 - __readfsqword(0x28u);
                }
                if ( v268[1] == 2 && v269 >= v126[848].m128i_i64[1] && v269 < v126[849].m128i_i64[0] )
                {
                  auto_mark_range(v123, v123 + 1, 20);
                  v158 = v269;
                  v32 = (const __m128i *)netnode_altval(*a2, v269, 102);
                  if ( v32 )
                  {
                    v127 = netnode_altval(*a2, v32, 105);
                    if ( v127 )
                    {
                      v128 = (int)v127 - 1;
                      v152 = (const __m128i *)v128;
                      if ( v128 < (unsigned __int64)v167 )
                      {
                        v129 = v166 + 24 * v128;
                        v130 = s1;
                        v131 = v129;
                        if ( *(_QWORD *)(v129 + 8) )
                          v130 = *(const char **)v129;
                        sub_12040(v158, v130, 1);
                        memset(v220, 0, 24);
                        v220[0] = (void *)qvector_reserve(v161, 0, 5, 1);
                        v132 = v161;
                        v220[1] = &byte_5;
                        strcpy((char *)v220[0], "_ptr");
                        sub_35210(&v170, v131, v132);
                        if ( v220[0] )
                        {
                          v220[1] = 0;
                          qfree(v220[0], v131);
                        }
                        v133 = s1;
                        if ( (_QWORD)v171 )
                          v133 = v170;
                        set_name(v158, v133, 6144);
                        v32 = v152;
                        v134 = netnode_altval(*a2, v152, 65);
                        if ( v134 )
                        {
                          v137 = s1;
                          memset(v220, 0, 24);
                          if ( *(_QWORD *)(v131 + 8) )
                            v137 = *(const char **)v131;
                          v159 = v134;
                          sub_35470((_DWORD)v161, (unsigned int)"__imp_%s", (_DWORD)v137, v134, v135, v136);
                          v138 = s1;
                          if ( v220[1] )
                            v138 = (const char *)v220[0];
                          set_name(v159, v138, 6144);
                          v32 = (const __m128i *)s1;
                          if ( *(_QWORD *)(v131 + 8) )
                            v32 = *(const __m128i **)v131;
                          set_name(v123, v32, 6144);
                          if ( v220[0] )
                          {
                            v220[1] = 0;
                            qfree(v220[0], v32);
                          }
                          v139 = v170;
                          if ( v170 )
                          {
LABEL_185:
                            *(_QWORD *)&v171 = 0;
                            qfree(v139, v32);
                          }
                        }
                        else
                        {
                          v139 = v170;
                          if ( v170 )
                            goto LABEL_185;
                        }
                      }
                    }
                  }
                }
                v123 += v122;
                continue;
              }
            }
            v32 = &v271;
            v162 = (unsigned __int64)&v271;
            n.m128i_i64[1] = (__int64)&v166;
            n.m128i_i64[0] = (__int64)&v168;
            if ( (unsigned __int8)callui(27) )
              goto LABEL_65;
            v162 = (unsigned __int64)&v271;
            v95 = *a2;
            n.m128i_i64[1] = (__int64)&v166;
            n.m128i_i64[0] = (__int64)&v168;
            v96 = netnode_altval(v95, i, 102);
            v97 = *a2;
            v162 = (unsigned __int64)&v271;
            n.m128i_i64[1] = (__int64)&v166;
            n.m128i_i64[0] = (__int64)&v168;
            v147 = (const __m128i *)v96;
            if ( netnode_altval(v97, v96, 105) )
              goto LABEL_127;
            v98 = *a2;
            v99 = *(_QWORD *)(v164->m128i_i64[1] + 16) & ((unsigned __int64)v147->m128i_u64 + v143);
            memset(v220, 0, 24);
            v162 = v99;
            if ( netnode_qsupstr(v98, v161, v99, 115) <= 0 )
              break;
            v32 = (const __m128i *)v162;
            v78 = netnode_altval(*a2, v162, 98);
            if ( !v78 )
              goto LABEL_133;
            v145 = v78 - 1;
            if ( (debug & 0x10) != 0 )
            {
              v81 = s1;
              v82 = v296 + 24LL * v145;
              if ( *(_QWORD *)(v82 + 8) )
                v81 = *(const char **)v82;
              v32 = (const __m128i *)"system";
              if ( v4 == 1 )
                v32 = (const __m128i *)"boot";
              v141 = v80;
              sub_191F0(
                (unsigned int)"resolved symbol: type=%s offset=%08X kcache_ea=%a symidx=%d subfile=%s name=%s\n",
                (_DWORD)v32,
                (_DWORD)v147,
                v162,
                v146,
                (_DWORD)v81);
              v79 = v141;
            }
            v162 = 0;
            n.m128i_i64[0] = (__int64)v220[1];
            if ( v220[1] )
            {
              v162 = qalloc_or_throw(v220[1], v32, v79);
              memcpy((void *)v162, v220[0], n.m128i_u64[0]);
            }
            v83 = v167;
            if ( *((_QWORD *)&v167 + 1) < (unsigned __int64)(v167 + 1) )
            {
              n.m128i_i64[1] = (__int64)&v166;
              v166 = qvector_reserve(&v166, v166, v167 + 1, 24);
              v83 = v167;
            }
            v84 = _mm_loadl_epi64(&n);
            v85 = v166 + 24 * v83;
            *(_QWORD *)v85 = v162;
            *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v84, v84);
            *(_QWORD *)&v167 = v167 + 1;
            v86 = 3LL * v145;
            v144 = (const char **)&v170;
            v87 = (__int64 *)(v168 + 8 * v86);
            LODWORD(v170) = v146;
            v88 = v87[1];
            v89 = *v87;
            v90 = v87[2];
            v91 = v88 + 1;
            if ( (unsigned __int64)&v170 < *v87 || (unsigned __int64)&v170 >= v89 + 4 * v90 )
            {
              if ( v90 < v91 )
              {
                v162 = (unsigned __int64)v87;
                v106 = qvector_reserve(v87, v89, v91, 4);
                v87 = (__int64 *)v162;
                v89 = v106;
                *(_QWORD *)v162 = v106;
                v88 = v87[1];
              }
              *(_DWORD *)(v89 + 4 * v88) = (_DWORD)v170;
            }
            else
            {
              if ( v90 < v91 )
              {
                v162 = (unsigned __int64)v87;
                v140 = qvector_reserve(v87, v89, v91, 4);
                v87 = (__int64 *)v162;
                v89 = v140;
                *(_QWORD *)v162 = v140;
                v88 = v87[1];
              }
              *(_DWORD *)(v89 + 4 * v88) = v146;
            }
            ++v87[1];
            v92 = *a2;
            ++v146;
            v32 = v147;
            v170 = (char *)v146;
            netnode_supset(v92, v147, &v170, 8, 105);
            v93 = v220[0];
            if ( v220[0] )
            {
LABEL_126:
              v220[1] = 0;
              qfree(v93, v32);
            }
LABEL_127:
            v94 = *a2;
            n.m128i_i64[0] = (__int64)&v168;
            n.m128i_i64[1] = (__int64)&v166;
            v162 = (unsigned __int64)&v271;
          }
          sub_112F0(
            (unsigned int)"symbol lookup failed: fixup=%a kcache_ea=%a offset=%08X kcache_ea=%a\n",
            i,
            v162,
            (_DWORD)v147,
            v143,
            v100);
          v32 = (const __m128i *)"AUTOHIDE DATABASE\n"
                                 "HIDECANCEL\n"
                                 "The input file contains references to unknown symbols in:\n"
                                 "\n"
                                 "  %s\n"
                                 "\n"
                                 "It is possible this cache is not compatible with the input file. Do you wish to continu"
                                 "e processing imports?";
          if ( (int)sub_19F30(
                      0,
                      (unsigned int)"AUTOHIDE DATABASE\n"
                                    "HIDECANCEL\n"
                                    "The input file contains references to unknown symbols in:\n"
                                    "\n"
                                    "  %s\n"
                                    "\n"
                                    "It is possible this cache is not compatible with the input file. Do you wish to cont"
                                    "inue processing imports?",
                      (unsigned int)s,
                      v101,
                      v102,
                      v103,
                      v142) <= 0 )
          {
            if ( v220[0] )
            {
              v32 = 0;
              v220[1] = 0;
              qfree(v220[0], 0);
            }
            goto LABEL_65;
          }
LABEL_133:
          v93 = v220[0];
          if ( v220[0] )
            goto LABEL_126;
          goto LABEL_127;
        }
        v7 = "SystemKernelExtensions.kc";
        memset(v220, 0, 24);
        v8 = "system";
        if ( v4 == 1 )
        {
          v7 = "BootKernelExensions.kc";
          v8 = "boot";
        }
        sub_35470(
          (unsigned int)v220,
          (unsigned int)"BUTTON CANCEL Continue without importing\n"
                        "Kernel imports\n"
                        "\n"
                        "Detected pointers to symbols in the %s kext collection. To import them, provide the path to %s:\n"
                        "<Path:f:0:70::>\n",
          (_DWORD)v8,
          (_DWORD)v7,
          v5,
          v6);
        memset(s, 0, 0x1000u);
        v12 = s1;
        if ( v220[1] )
          LODWORD(v12) = v220[0];
        v13 = sub_19E60((_DWORD)v12, (unsigned int)s, v9, 0, v10, v11);
        v14 = v220[0];
        if ( v13 >= 0 && strlen(s) )
        {
          if ( v14 )
          {
            v220[1] = 0;
            qfree(v14, s);
          }
          goto LABEL_15;
        }
        if ( v14 )
        {
          v220[1] = 0;
          qfree(v14, s);
        }
      }
    }
  }
  return v305 - __readfsqword(0x28u);
}
