unsigned __int64 __fastcall sub_4BDE0(const __m128i *a1, __int64 a2)
{
  int v4; // r12d
  const char *v5; // rdi
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r15
  __m128i si128; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // rax
  __int64 (*v12)(); // rdx
  const char *v13; // rax
  __int64 (*v14)(); // rcx
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdi
  _QWORD *v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  size_t v27; // r11
  __m128i v28; // xmm4
  __m128i v29; // xmm5
  int v30; // eax
  __int64 v31; // rdx
  __int64 (*v32)(); // rcx
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned int *v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // r14
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r14
  _QWORD *v50; // rax
  void *v51; // rdi
  char *v52; // rax
  const __m128i *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  const char *v57; // r9
  __int64 v58; // rax
  const char *v59; // rsi
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 *v63; // r8
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  const char *v72; // rax
  const char *v73; // rsi
  __int64 j; // rax
  __int64 v75; // r13
  __int64 v76; // r12
  int v77; // eax
  int v78; // r14d
  unsigned __int64 v79; // r13
  const __m128i *v80; // rdx
  char *v81; // rax
  const __m128i *v82; // r12
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  const char **v85; // rax
  const char *v86; // rsi
  const char **v87; // r12
  __int64 *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // [rsp+8h] [rbp-1848h]
  int v91; // [rsp+10h] [rbp-1840h]
  unsigned int v92; // [rsp+1Ch] [rbp-1834h]
  __int64 v93; // [rsp+20h] [rbp-1830h]
  size_t v94; // [rsp+20h] [rbp-1830h]
  __int64 v95; // [rsp+28h] [rbp-1828h]
  _QWORD *v96; // [rsp+28h] [rbp-1828h]
  _QWORD *v97; // [rsp+28h] [rbp-1828h]
  const char *v98; // [rsp+28h] [rbp-1828h]
  __int64 v99; // [rsp+30h] [rbp-1820h]
  unsigned __int64 v100; // [rsp+30h] [rbp-1820h]
  unsigned __int64 v101; // [rsp+30h] [rbp-1820h]
  char *v102; // [rsp+38h] [rbp-1818h]
  __int64 i; // [rsp+38h] [rbp-1818h]
  __int64 v104; // [rsp+38h] [rbp-1818h]
  __m128i n; // [rsp+40h] [rbp-1810h] BYREF
  __m256i *v106; // [rsp+50h] [rbp-1800h]
  __int64 v107; // [rsp+58h] [rbp-17F8h]
  int v108[2]; // [rsp+60h] [rbp-17F0h]
  const __m128i *v109; // [rsp+68h] [rbp-17E8h]
  char *v110; // [rsp+78h] [rbp-17D8h]
  __int64 v111; // [rsp+80h] [rbp-17D0h] BYREF
  __int128 v112; // [rsp+88h] [rbp-17C8h]
  __int64 v113; // [rsp+A0h] [rbp-17B0h] BYREF
  __int128 v114; // [rsp+A8h] [rbp-17A8h]
  unsigned int *v115; // [rsp+C0h] [rbp-1790h] BYREF
  __int128 v116; // [rsp+C8h] [rbp-1788h]
  _QWORD *v117; // [rsp+D8h] [rbp-1778h]
  char v118; // [rsp+E0h] [rbp-1770h]
  _QWORD v119[2]; // [rsp+F0h] [rbp-1760h] BYREF
  __m128i v120; // [rsp+100h] [rbp-1750h]
  __int64 v121; // [rsp+110h] [rbp-1740h]
  int v122; // [rsp+118h] [rbp-1738h]
  char v123; // [rsp+11Ch] [rbp-1734h]
  __int64 v124; // [rsp+120h] [rbp-1730h]
  char v125; // [rsp+128h] [rbp-1728h]
  __int64 v126; // [rsp+138h] [rbp-1718h]
  __int128 v127; // [rsp+140h] [rbp-1710h]
  __m128i v128; // [rsp+150h] [rbp-1700h]
  char v129; // [rsp+160h] [rbp-16F0h]
  __m128i v130; // [rsp+168h] [rbp-16E8h]
  __int64 v131; // [rsp+178h] [rbp-16D8h]
  __int128 v132; // [rsp+180h] [rbp-16D0h]
  __int16 v133; // [rsp+190h] [rbp-16C0h]
  int v134; // [rsp+1A0h] [rbp-16B0h]
  __int64 v135; // [rsp+1B8h] [rbp-1698h]
  __int128 v136; // [rsp+1C0h] [rbp-1690h]
  __int64 v137; // [rsp+1D0h] [rbp-1680h]
  __int128 v138; // [rsp+1D8h] [rbp-1678h]
  __int64 v139; // [rsp+1E8h] [rbp-1668h]
  __int128 v140; // [rsp+1F0h] [rbp-1660h]
  __int64 v141; // [rsp+200h] [rbp-1650h]
  __int128 v142; // [rsp+208h] [rbp-1648h]
  __int64 v143; // [rsp+218h] [rbp-1638h]
  __int128 v144; // [rsp+220h] [rbp-1630h]
  __int64 v145; // [rsp+230h] [rbp-1620h]
  __int128 v146; // [rsp+238h] [rbp-1618h]
  __int64 v147; // [rsp+248h] [rbp-1608h]
  __int128 v148; // [rsp+250h] [rbp-1600h]
  __int64 v149; // [rsp+260h] [rbp-15F0h]
  __int128 v150; // [rsp+268h] [rbp-15E8h]
  __int64 v151; // [rsp+278h] [rbp-15D8h]
  __int128 v152; // [rsp+280h] [rbp-15D0h]
  __int64 v153; // [rsp+290h] [rbp-15C0h]
  __int128 v154; // [rsp+298h] [rbp-15B8h]
  __int16 v155; // [rsp+2A8h] [rbp-15A8h]
  char v156; // [rsp+2AAh] [rbp-15A6h]
  int v157; // [rsp+2ACh] [rbp-15A4h]
  __int128 v158; // [rsp+2B0h] [rbp-15A0h]
  __int64 v159; // [rsp+2C0h] [rbp-1590h]
  __int64 v160; // [rsp+2C8h] [rbp-1588h]
  int v161; // [rsp+2D0h] [rbp-1580h]
  __int64 v162; // [rsp+2D8h] [rbp-1578h]
  __int128 v163; // [rsp+2E0h] [rbp-1570h]
  __int64 v164; // [rsp+2F0h] [rbp-1560h]
  __m256i v165; // [rsp+300h] [rbp-1550h] BYREF
  __int64 v166; // [rsp+320h] [rbp-1530h]
  int v167; // [rsp+328h] [rbp-1528h]
  char v168; // [rsp+32Ch] [rbp-1524h]
  __int64 v169; // [rsp+330h] [rbp-1520h]
  char v170; // [rsp+338h] [rbp-1518h]
  __int64 v171; // [rsp+348h] [rbp-1508h]
  __int128 v172; // [rsp+350h] [rbp-1500h]
  __int64 v173; // [rsp+360h] [rbp-14F0h]
  __int64 v174; // [rsp+368h] [rbp-14E8h]
  char v175; // [rsp+370h] [rbp-14E0h]
  __m128i v176; // [rsp+378h] [rbp-14D8h]
  __int64 v177; // [rsp+388h] [rbp-14C8h]
  __int128 v178; // [rsp+390h] [rbp-14C0h]
  __int16 v179; // [rsp+3A0h] [rbp-14B0h]
  __int64 v180; // [rsp+3C8h] [rbp-1488h]
  __int128 v181; // [rsp+3D0h] [rbp-1480h]
  __int64 v182; // [rsp+3E0h] [rbp-1470h]
  __int128 v183; // [rsp+3E8h] [rbp-1468h]
  __int64 v184; // [rsp+3F8h] [rbp-1458h]
  __int128 v185; // [rsp+400h] [rbp-1450h]
  __int64 v186; // [rsp+410h] [rbp-1440h]
  __int128 v187; // [rsp+418h] [rbp-1438h]
  __int64 v188; // [rsp+428h] [rbp-1428h]
  __int128 v189; // [rsp+430h] [rbp-1420h]
  __int64 v190; // [rsp+440h] [rbp-1410h]
  __int128 v191; // [rsp+448h] [rbp-1408h]
  __int64 v192; // [rsp+458h] [rbp-13F8h]
  __int128 v193; // [rsp+460h] [rbp-13F0h]
  __int64 v194; // [rsp+470h] [rbp-13E0h]
  __int128 v195; // [rsp+478h] [rbp-13D8h]
  __int64 v196; // [rsp+488h] [rbp-13C8h]
  __int128 v197; // [rsp+490h] [rbp-13C0h]
  __int64 v198; // [rsp+4A0h] [rbp-13B0h]
  __int128 v199; // [rsp+4A8h] [rbp-13A8h]
  __int16 v200; // [rsp+4B8h] [rbp-1398h]
  char v201; // [rsp+4BAh] [rbp-1396h]
  int v202; // [rsp+4BCh] [rbp-1394h]
  __int128 v203; // [rsp+4C0h] [rbp-1390h]
  const __m128i *v204; // [rsp+4D0h] [rbp-1380h]
  __int64 v205; // [rsp+4D8h] [rbp-1378h]
  int v206; // [rsp+4E0h] [rbp-1370h]
  __int64 v207; // [rsp+4E8h] [rbp-1368h]
  __int128 v208; // [rsp+4F0h] [rbp-1360h]
  __int64 v209; // [rsp+500h] [rbp-1350h]
  __int128 v210; // [rsp+510h] [rbp-1340h]
  __int64 v211; // [rsp+520h] [rbp-1330h]
  __int64 v212; // [rsp+528h] [rbp-1328h]
  __int64 v213; // [rsp+530h] [rbp-1320h]
  _BYTE v214[16]; // [rsp+538h] [rbp-1318h] BYREF
  unsigned __int64 v215; // [rsp+548h] [rbp-1308h]
  char v216; // [rsp+678h] [rbp-11D8h] BYREF
  __m128i v217; // [rsp+680h] [rbp-11D0h] BYREF
  __int64 v218; // [rsp+690h] [rbp-11C0h]
  __int64 v219; // [rsp+698h] [rbp-11B8h]
  __int64 v220; // [rsp+6A0h] [rbp-11B0h]
  __int128 v221; // [rsp+6A8h] [rbp-11A8h]
  __int128 v222; // [rsp+6B8h] [rbp-1198h]
  __int128 v223; // [rsp+6C8h] [rbp-1188h]
  __int128 v224; // [rsp+6D8h] [rbp-1178h]
  __int128 v225; // [rsp+6E8h] [rbp-1168h]
  __int128 v226; // [rsp+6F8h] [rbp-1158h]
  __int128 v227; // [rsp+708h] [rbp-1148h]
  __int64 v228; // [rsp+718h] [rbp-1138h]
  __int128 v229; // [rsp+720h] [rbp-1130h]
  __int64 v230; // [rsp+730h] [rbp-1120h]
  __int128 v231; // [rsp+738h] [rbp-1118h]
  __int64 v232; // [rsp+748h] [rbp-1108h]
  int v233; // [rsp+750h] [rbp-1100h]
  __int64 v234; // [rsp+758h] [rbp-10F8h]
  __int64 v235; // [rsp+760h] [rbp-10F0h]
  int v236; // [rsp+768h] [rbp-10E8h]
  __int128 v237; // [rsp+770h] [rbp-10E0h]
  __int64 v238; // [rsp+780h] [rbp-10D0h]
  __int128 v239; // [rsp+788h] [rbp-10C8h]
  __int64 v240; // [rsp+798h] [rbp-10B8h]
  __int128 v241; // [rsp+7A0h] [rbp-10B0h]
  __int64 v242; // [rsp+7B0h] [rbp-10A0h]
  __int128 v243; // [rsp+7B8h] [rbp-1098h]
  __int128 v244; // [rsp+7C8h] [rbp-1088h]
  __int128 v245; // [rsp+7D8h] [rbp-1078h]
  int v246; // [rsp+7E8h] [rbp-1068h]
  unsigned int v247; // [rsp+7ECh] [rbp-1064h]
  __int128 v248; // [rsp+7F0h] [rbp-1060h]
  __int128 v249; // [rsp+800h] [rbp-1050h] BYREF
  char s[4104]; // [rsp+810h] [rbp-1040h] BYREF
  unsigned __int64 v251; // [rsp+1818h] [rbp-38h]

  v109 = a1;
  v251 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_exist() )
  {
    if ( netnode_supfirst() != -1 )
    {
      v4 = netnode_altval();
      if ( (unsigned int)(v4 - 1) <= 1 && netnode_supval() != -1 )
      {
        if ( netnode_supstr() > 0 )
        {
LABEL_13:
          v8 = open_linput();
          if ( !v8 )
          {
            __errno_location();
            v13 = (const char *)winerr();
            sub_112F0((__int64)"warning: failed to open %s: %s\n", s, v13);
            return v251 - __readfsqword(0x28u);
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
          v10 = _mm_load_si128((const __m128i *)&xmmword_574C0);
          v11 = v109->m128i_i64[1];
          v128 = _mm_load_si128((const __m128i *)&xmmword_57480);
          v119[0] = &off_62AA0;
          v119[1] = v11;
          v123 = 1;
          v121 = -1;
          v122 = 8;
          v124 = v8;
          v125 = 0;
          v126 = 0;
          v129 = 0;
          v131 = 0;
          v133 = 0;
          v135 = 0;
          v137 = 0;
          v139 = 0;
          v141 = 0;
          v143 = 0;
          v145 = 0;
          v120 = si128;
          v127 = 0;
          v130 = v10;
          v132 = 0;
          v136 = 0;
          v138 = 0;
          v140 = 0;
          v142 = 0;
          v144 = 0;
          v146 = 0;
          v147 = 0;
          v149 = 0;
          v151 = 0;
          v153 = 0;
          v155 = 0;
          v156 = 0;
          v157 = 0;
          v159 = 0;
          v160 = 0;
          v161 = 0;
          v162 = 0;
          v164 = 0;
          *(_QWORD *)v108 = v119;
          v148 = 0;
          v150 = 0;
          v152 = 0;
          v154 = 0;
          v158 = -1;
          v163 = 0;
          if ( !sub_25BB0((__int64)v119) || !sub_25EF0(*(__int64 *)v108, 0, 0, 0) || v134 != 12 )
          {
            sub_112F0((__int64)"warning: %s is not a valid kernel cache\n", s);
LABEL_18:
            sub_162E0(*(__int64 *)v108);
            close_linput();
            return v251 - __readfsqword(0x28u);
          }
          v165.m256i_i8[16] = 0;
          v106 = &v165;
          *(__m128i *)v165.m256i_i8 = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)off_63268,
                                        (__m128i)(unsigned __int64)&v249);
          sub_27280(*(__int64 *)v108, (__m128i *)&v165, v12, (__int64 (*)())off_63268);
          if ( !v165.m256i_i8[16] || v249 != v248 )
          {
            sub_112F0((__int64)"warning: UUID of %s does not match the linked cache info in the input file\n", s);
            goto LABEL_18;
          }
          v92 = 0;
          if ( !HIBYTE(v155) )
            sub_4BCC0(*(__int64 *)v108, (__int64)&v165, *((_QWORD *)&v249 + 1) ^ *((_QWORD *)&v248 + 1), v14);
          v15 = (unsigned __int64)s;
          if ( !(_QWORD)v144 )
          {
            sub_112F0((__int64)"warning: no subfiles found in %s\n", s);
            goto LABEL_18;
          }
          sub_112F0((__int64)"importing symbols from: %s\n", s);
          v218 = 0;
          v219 = 0;
          v16 = _mm_loadu_si128(v109);
          v220 = 0;
          v228 = 0;
          v217 = v16;
          v226 = 0;
          v227 = 0;
          v229 = 0;
          v231 = 0;
          v239 = 0;
          v241 = 0;
          v243 = 0;
          v230 = 0;
          v232 = 0;
          v233 = -1;
          v234 = 0;
          v235 = -1;
          v236 = 0;
          v238 = 0;
          v240 = 0;
          v242 = 0;
          v246 = 0;
          v237 = -1;
          v221 = 0;
          v222 = 0;
          v223 = 0;
          v224 = 0;
          v225 = 0;
          v244 = 0;
          v245 = 0;
          v247 = 1024;
          if ( (_QWORD)v144 )
          {
            v107 = v144;
            v242 = qvector_reserve();
            v17 = v107;
            v18 = v243;
            v15 = (unsigned __int64)v109;
            v19 = 24 * v243;
            if ( (unsigned __int64)v243 < v107 )
            {
              do
              {
                ++v18;
                v20 = v19 + v242;
                v19 += 24;
                *(_QWORD *)v20 = 0;
                *(_OWORD *)(v20 + 8) = 0;
              }
              while ( v17 != v18 );
              v109 = (const __m128i *)v15;
            }
            *(_QWORD *)&v243 = v17;
          }
          sub_19440((__int64)"Resolving kernelcache symbols");
          v102 = (char *)v144;
          if ( (_QWORD)v144 )
          {
            v107 = 0;
            do
            {
              v22 = callui(27, v15, v21);
              v23 = v242;
              if ( v22 )
                goto LABEL_78;
              v24 = (_QWORD *)(v143 + 80 * v107);
              v25 = v242 + 24 * v107;
              if ( (_QWORD *)v25 != v24 + 5 )
              {
                v26 = v24[6];
                if ( v26 && (v27 = v26 - 1, v26 != 1) )
                {
                  n.m128i_i64[1] = v24[5];
                  if ( *(_QWORD *)(v25 + 16) < v26 )
                  {
                    v94 = v26 - 1;
                    v97 = (_QWORD *)(v143 + 80 * v107);
                    v101 = v26;
                    n.m128i_i64[0] = v242 + 24 * v107;
                    v70 = qvector_reserve();
                    v25 = n.m128i_i64[0];
                    v27 = v94;
                    v24 = v97;
                    v26 = v101;
                    *(_QWORD *)n.m128i_i64[0] = v70;
                  }
                  *(_QWORD *)(v25 + 8) = v26;
                  v51 = *(void **)v25;
                  v96 = v24;
                  v100 = v26;
                  n.m128i_i64[0] = v25;
                  memmove(v51, (const void *)n.m128i_i64[1], v27);
                  v24 = v96;
                  *(_BYTE *)(*(_QWORD *)n.m128i_i64[0] + v100 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v25 + 8) = 0;
                }
              }
              v28 = _mm_load_si128((const __m128i *)&xmmword_574B0);
              v29 = _mm_load_si128((const __m128i *)&xmmword_574C0);
              v30 = (v247 >> 3) & 2;
              v31 = v24[4];
              v166 = -1;
              if ( (v247 & 0x80) != 0 )
                v30 = (v247 >> 3) & 2 | 4;
              v15 = v109->m128i_u64[1];
              v167 = 8;
              v165.m256i_i64[0] = (__int64)&off_62AA0;
              v173 = v31;
              v179 = 0;
              v165.m256i_i64[1] = v15;
              v168 = 1;
              v169 = v8;
              v170 = 0;
              v171 = 0;
              v174 = -1;
              v175 = 0;
              v177 = 0;
              v180 = 0;
              v182 = 0;
              v184 = 0;
              v186 = 0;
              v188 = 0;
              *(__m128i *)&v165.m256i_u64[2] = v28;
              v172 = 0;
              v176 = v29;
              v178 = 0;
              v181 = 0;
              v183 = 0;
              v185 = 0;
              v187 = 0;
              v189 = 0;
              v190 = 0;
              v192 = 0;
              v194 = 0;
              v196 = 0;
              v198 = 0;
              v200 = 0;
              v201 = 0;
              v202 = 0;
              v204 = v109 + 1;
              v205 = v234;
              v206 = v30;
              v207 = 0;
              v209 = 0;
              v191 = 0;
              v193 = 0;
              v195 = 0;
              v197 = 0;
              v199 = 0;
              v203 = -1;
              v208 = 0;
              if ( sub_25BB0((__int64)v106) )
              {
                v15 = 0;
                if ( sub_25EF0((__int64)v106, 0, 0, 0) )
                {
                  v15 = (unsigned __int64)&v115;
                  v173 = 0;
                  v115 = nullptr;
                  v117 = nullptr;
                  v118 = 0;
                  v116 = 0;
                  sub_33800(v106, (__int64)&v115, nullptr, v32);
                  v35 = v115;
                  for ( n.m128i_i64[1] = (__int64)&v115[4 * v116]; (unsigned int *)n.m128i_i64[1] != v35; v35 += 4 )
                  {
                    if ( v117 )
                    {
                      v36 = v117[2];
                      if ( v36 )
                      {
                        v15 = *v35;
                        if ( v15 < v36 - 1 )
                        {
                          v37 = *v117;
                          n.m128i_i64[0] = (__int64)v35;
                          v95 = (*(__int64 (__fastcall **)(double, double, double, double, double, double, double))(v37 + 16))(
                                  0.0,
                                  NAN,
                                  *(double *)si128.m128i_i64,
                                  *(double *)v10.m128i_i64,
                                  v33,
                                  v34,
                                  NAN);
                          v35 = (unsigned int *)n.m128i_i64[0];
                          if ( v95 )
                          {
                            if ( (~*(_BYTE *)(n.m128i_i64[0] + 4) & 0xE) == 0 && *(_BYTE *)(n.m128i_i64[0] + 4) <= 0x1Fu )
                            {
                              v99 = n.m128i_i64[0];
                              v15 = *(_QWORD *)(n.m128i_i64[0] + 8) & *(_QWORD *)(v109->m128i_i64[1] + 16);
                              n.m128i_i64[0] = v15;
                              v38 = netnode_altval();
                              v35 = (unsigned int *)v99;
                              if ( !v38 )
                              {
                                netnode_supset();
                                v15 = n.m128i_i64[0];
                                v110 = (char *)(v107 + 1);
                                netnode_supset();
                                v35 = (unsigned int *)v99;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( v118 && v117 )
                    (*(void (__fastcall **)(_QWORD *, double, double, double, double, double, double, double))(*v117 + 8LL))(
                      v117,
                      0.0,
                      NAN,
                      *(double *)si128.m128i_i64,
                      *(double *)v10.m128i_i64,
                      v33,
                      v34,
                      NAN);
                  if ( v115 )
                  {
                    *(_QWORD *)&v116 = 0;
                    qfree();
                  }
                }
              }
              sub_162E0((__int64)v106);
              ++v107;
            }
            while ( (char *)v107 != v102 );
            v102 = (char *)v144;
          }
          v111 = 0;
          v113 = 0;
          v112 = 0;
          v114 = 0;
          if ( v102 )
          {
            n.m128i_i64[1] = (__int64)&v111;
            n.m128i_i64[0] = (__int64)&v113;
            v107 = (__int64)&v217;
            v113 = qvector_reserve();
            v52 = (char *)v114;
            v53 = v109;
            v54 = 24 * v114;
            if ( (unsigned __int64)v114 < (unsigned __int64)v102 )
            {
              do
              {
                ++v52;
                v55 = v54 + v113;
                v54 += 24;
                *(_QWORD *)v55 = 0;
                *(_OWORD *)(v55 + 8) = 0;
              }
              while ( v102 != v52 );
              v109 = v53;
            }
            *(_QWORD *)&v114 = v102;
          }
          if ( !(_BYTE)v155 )
          {
            n.m128i_i64[0] = (__int64)&v113;
            n.m128i_i64[1] = (__int64)&v111;
            v107 = (__int64)&v217;
            sub_28840(*(__int64 *)v108);
          }
          v90 = *((_QWORD *)&v158 + 1);
          n.m128i_i64[0] = (__int64)&v113;
          n.m128i_i64[1] = (__int64)&v111;
          v107 = (__int64)&v217;
          for ( i = netnode_supfirst(); ; i = netnode_supnext() )
          {
            if ( i == -1 )
            {
              v72 = "SYSTEM";
              if ( v4 == 1 )
                v72 = "BOOT";
              v107 = (__int64)&v217;
              n.m128i_i64[1] = (__int64)&v111;
              n.m128i_i64[0] = (__int64)&v113;
              sub_418A0((__int64)v109, (__int64)&v217, (int)v92, 8, &v113, &v111, a2, v72);
              sub_19440((__int64)"Patching kernelcache fixups");
              v73 = (_BYTE *)(&qword_60 + 6);
              for ( j = netnode_supfirst(); ; j = netnode_supnext() )
              {
                v76 = j;
                if ( j == -1 )
                  break;
                if ( (unsigned __int8)callui(27, v73, &callui) )
                  goto LABEL_63;
                if ( netnode_altval() )
                {
                  if ( netnode_altval() )
                  {
                    v75 = netnode_altval();
                    if ( v75 )
                    {
                      if ( (v109[855].m128i_i8[9] & 8) == 0 )
                        patch_qword();
                      sub_1DF00((__int64)v109, v107, v76, v75, 3, 0, 1, 0);
                    }
                  }
                }
                v73 = (const char *)v76;
              }
              if ( v109[847].m128i_i64[1] >= (unsigned __int64)v109[848].m128i_i64[0]
                || v109[848].m128i_i64[1] >= (unsigned __int64)v109[849].m128i_i64[0]
                || (v77 = *(_DWORD *)(v109->m128i_i64[0] + 4)) != 0 && v77 != 13 )
              {
LABEL_63:
                if ( v113 )
                {
                  if ( (_QWORD)v114 )
                  {
                    v39 = v113;
                    v40 = 0;
                    v41 = v114;
                    do
                    {
                      v42 = (_QWORD *)(v39 + 24 * v40);
                      if ( *v42 )
                      {
                        v42[1] = 0;
                        qfree();
                        v39 = v113;
                      }
                      ++v40;
                    }
                    while ( v41 != v40 );
                  }
                  *(_QWORD *)&v114 = 0;
                  qfree();
                }
                if ( v111 )
                {
                  if ( (_QWORD)v112 )
                  {
                    v43 = v111;
                    v44 = 0;
                    v45 = v112;
                    do
                    {
                      v46 = (_QWORD *)(v43 + 24 * v44);
                      if ( *v46 )
                      {
                        v46[1] = 0;
                        qfree();
                        v43 = v111;
                      }
                      ++v44;
                    }
                    while ( v45 != v44 );
                  }
                  *(_QWORD *)&v112 = 0;
                  qfree();
                }
                v23 = v242;
LABEL_78:
                if ( v23 )
                {
                  v47 = 0;
                  v48 = v23;
                  v49 = v243;
                  if ( (_QWORD)v243 )
                  {
                    do
                    {
                      v50 = (_QWORD *)(v48 + 24 * v47);
                      if ( *v50 )
                      {
                        v50[1] = 0;
                        qfree();
                        v48 = v242;
                      }
                      ++v47;
                    }
                    while ( v49 != v47 );
                  }
                  *(_QWORD *)&v243 = 0;
                  qfree();
                }
                if ( v240 )
                {
                  *(_QWORD *)&v241 = 0;
                  qfree();
                }
                if ( v238 )
                {
                  *(_QWORD *)&v239 = 0;
                  qfree();
                }
                if ( v230 )
                {
                  *(_QWORD *)&v231 = 0;
                  qfree();
                }
                if ( v228 )
                {
                  *(_QWORD *)&v229 = 0;
                  qfree();
                }
                if ( *((_QWORD *)&v226 + 1) )
                {
                  *(_QWORD *)&v227 = 0;
                  qfree();
                }
                goto LABEL_18;
              }
              sub_19440((__int64)"Analyzing kernelcache stubs");
              v78 = 4;
              if ( !*(_DWORD *)(v109->m128i_i64[0] + 4) )
                v78 = 6;
              v79 = v109[847].m128i_u64[1];
              while ( 2 )
              {
                if ( v79 >= v109[848].m128i_i64[0] )
                  goto LABEL_182;
                if ( (unsigned __int8)callui(27, v73, &callui) )
                  goto LABEL_63;
                v211 = -1;
                v80 = v109;
                v212 = 0;
                v81 = v214;
                v213 = 0;
                v210 = -1;
                do
                {
                  *(_WORD *)v81 = 0;
                  v81 += 40;
                  *((_WORD *)v81 - 19) = 0;
                  *((_WORD *)v81 - 18) = 0;
                  *((_DWORD *)v81 - 2) = 0;
                  *((_WORD *)v81 - 17) = 0;
                  *((_OWORD *)v81 - 2) = 0;
                  *((_QWORD *)v81 - 2) = 0;
                }
                while ( &v216 != v81 );
                v73 = (const char *)v79;
                v109 = v80;
                v82 = v80;
                if ( v78 != (unsigned int)decode_insn() )
                {
LABEL_182:
                  sub_351A0((__int64 *)n.m128i_i64[0]);
                  sub_24A50((__int64 *)n.m128i_i64[1]);
                  sub_22FA0((_QWORD *)v107);
                  sub_162E0(*(__int64 *)v108);
                  close_linput();
                  return v251 - __readfsqword(0x28u);
                }
                if ( v214[1] == 2 && v215 >= v82[848].m128i_i64[1] && v215 < v82[849].m128i_i64[0] )
                {
                  auto_mark_range();
                  v104 = v215;
                  v73 = (const char *)netnode_altval();
                  if ( v73 )
                  {
                    v83 = netnode_altval();
                    if ( v83 )
                    {
                      v84 = (int)v83 - 1;
                      v98 = (const char *)v84;
                      if ( v84 < (unsigned __int64)v112 )
                      {
                        v85 = (const char **)(v111 + 24 * v84);
                        v86 = s1;
                        v87 = v85;
                        if ( v85[1] )
                          v86 = *v85;
                        sub_12040(v104, (__int64)v86, 1);
                        memset(&v165, 0, 24);
                        v165.m256i_i64[0] = qvector_reserve();
                        v88 = (__int64 *)v106;
                        v165.m256i_i64[1] = 5;
                        strcpy((char *)v165.m256i_i64[0], "_ptr");
                        sub_35210((__int64)&v115, (__int64)v87, (__int64)v88);
                        if ( v165.m256i_i64[0] )
                        {
                          v165.m256i_i64[1] = 0;
                          qfree();
                        }
                        set_name();
                        v73 = v98;
                        if ( netnode_altval() )
                        {
                          memset(&v165, 0, 24);
                          sub_35470(v106->m256i_i64);
                          set_name();
                          v73 = s1;
                          if ( v87[1] )
                            v73 = *v87;
                          set_name();
                          if ( v165.m256i_i64[0] )
                          {
                            v165.m256i_i64[1] = 0;
                            qfree();
                          }
                          if ( v115 )
                          {
LABEL_176:
                            *(_QWORD *)&v116 = 0;
                            qfree();
                          }
                        }
                        else if ( v115 )
                        {
                          goto LABEL_176;
                        }
                      }
                    }
                  }
                }
                v79 += v78;
                continue;
              }
            }
            v107 = (__int64)&v217;
            n.m128i_i64[1] = (__int64)&v111;
            n.m128i_i64[0] = (__int64)&v113;
            if ( (unsigned __int8)callui(27, &v217, &callui) )
              goto LABEL_63;
            v107 = (__int64)&v217;
            n.m128i_i64[1] = (__int64)&v111;
            n.m128i_i64[0] = (__int64)&v113;
            v68 = netnode_altval();
            v107 = (__int64)&v217;
            n.m128i_i64[1] = (__int64)&v111;
            n.m128i_i64[0] = (__int64)&v113;
            v93 = v68;
            if ( netnode_altval() )
              goto LABEL_124;
            v69 = *(_QWORD *)(v109->m128i_i64[1] + 16) & (v90 + v93);
            memset(&v165, 0, 24);
            v107 = v69;
            if ( netnode_qsupstr() <= 0 )
              break;
            v56 = netnode_altval();
            if ( !v56 )
              goto LABEL_130;
            v91 = v56 - 1;
            if ( (debug & 0x10) != 0 )
            {
              v57 = s1;
              v58 = v242 + 24LL * v91;
              if ( *(_QWORD *)(v58 + 8) )
                v57 = *(const char **)v58;
              v59 = "system";
              if ( v4 == 1 )
                v59 = "boot";
              sub_191F0(
                (__int64)"resolved symbol: type=%s offset=%08X kcache_ea=%a symidx=%d subfile=%s name=%s\n",
                v59,
                v93,
                0.0,
                v107,
                (const char *)v92,
                v57);
            }
            v107 = 0;
            n.m128i_i64[0] = v165.m256i_i64[1];
            if ( v165.m256i_i64[1] )
            {
              v107 = qalloc_or_throw();
              memcpy((void *)v107, (const void *)v165.m256i_i64[0], n.m128i_u64[0]);
            }
            v60 = v112;
            if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)(v112 + 1) )
            {
              n.m128i_i64[1] = (__int64)&v111;
              v111 = qvector_reserve();
              v60 = v112;
            }
            v61 = _mm_loadl_epi64(&n);
            v62 = v111 + 24 * v60;
            *(_QWORD *)v62 = v107;
            *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v61, v61);
            *(_QWORD *)&v112 = v112 + 1;
            v63 = (__int64 *)(v113 + 24LL * v91);
            LODWORD(v115) = v92;
            v64 = v63[1];
            v65 = *v63;
            v66 = v63[2];
            v67 = v64 + 1;
            if ( (unsigned __int64)&v115 < *v63 || (unsigned __int64)&v115 >= v65 + 4 * v66 )
            {
              if ( v66 < v67 )
              {
                v107 = v113 + 24LL * v91;
                v71 = qvector_reserve();
                v63 = (__int64 *)v107;
                v65 = v71;
                *(_QWORD *)v107 = v71;
                v64 = v63[1];
              }
              *(_DWORD *)(v65 + 4 * v64) = (_DWORD)v115;
            }
            else
            {
              if ( v66 < v67 )
              {
                v107 = v113 + 24LL * v91;
                v89 = qvector_reserve();
                v63 = (__int64 *)v107;
                v65 = v89;
                *(_QWORD *)v107 = v89;
                v64 = v63[1];
              }
              *(_DWORD *)(v65 + 4 * v64) = v92;
            }
            ++v63[1];
            v115 = (unsigned int *)(int)++v92;
            netnode_supset();
            if ( v165.m256i_i64[0] )
            {
LABEL_123:
              v165.m256i_i64[1] = 0;
              qfree();
            }
LABEL_124:
            n.m128i_i64[0] = (__int64)&v113;
            n.m128i_i64[1] = (__int64)&v111;
            v107 = (__int64)&v217;
          }
          sub_112F0(
            (__int64)"symbol lookup failed: fixup=%a kcache_ea=%a offset=%08X kcache_ea=%a\n",
            0.0,
            NAN,
            i,
            *(double *)si128.m128i_i64);
          if ( (int)sub_19F30() <= 0 )
          {
            if ( v165.m256i_i64[0] )
            {
              v165.m256i_i64[1] = 0;
              qfree();
            }
            goto LABEL_63;
          }
LABEL_130:
          if ( v165.m256i_i64[0] )
            goto LABEL_123;
          goto LABEL_124;
        }
        memset(&v165, 0, 24);
        sub_35470(v165.m256i_i64);
        memset(s, 0, 0x1000u);
        v5 = s1;
        if ( v165.m256i_i64[1] )
          v5 = (const char *)v165.m256i_i64[0];
        v6 = sub_19E60((__int64)v5, s);
        v7 = v165.m256i_i64[0];
        if ( v6 >= 0 && strlen(s) )
        {
          if ( v7 )
          {
            v165.m256i_i64[1] = 0;
            qfree();
          }
          goto LABEL_13;
        }
        if ( v7 )
        {
          v165.m256i_i64[1] = 0;
          qfree();
        }
      }
    }
  }
  return v251 - __readfsqword(0x28u);
}

