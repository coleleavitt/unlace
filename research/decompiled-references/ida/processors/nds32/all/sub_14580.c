__int64 __fastcall sub_14580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int *v25; // rdx
  unsigned int v26; // edx
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 nlist_size; // r14
  __int64 nlist_ea; // r12
  const char *nlist_name; // rax
  const char *v37; // r15
  size_t v38; // r13
  const char *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  char *v42; // r13
  char *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rsi
  _QWORD *v50; // rbp
  void (__fastcall *v51)(_QWORD); // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdi
  unsigned int v57; // edx
  __int64 *v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 *v62; // rcx
  unsigned int v63; // edx
  __int64 *v64; // rcx
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rdi
  const char *v68; // r9
  __int64 v69; // rsi
  unsigned int v70; // r10d
  __int64 v71; // rdi
  __int64 v72; // r11
  __int64 v73; // rsi
  __int64 *v74; // rbp
  _DWORD *v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rcx
  unsigned int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rdi
  int *v83; // rdx
  unsigned int v84; // edx
  _QWORD *v85; // rcx
  unsigned int v86; // edx
  __int64 *v87; // rcx
  __int64 v88; // rbp
  __int64 v89; // rdi
  __int16 flags; // r12
  int v91; // eax
  __int64 v92; // r9
  int v93; // r13d
  _QWORD *v94; // rax
  unsigned int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 *v99; // rdx
  unsigned int v100; // edx
  __int64 *v101; // rcx
  unsigned int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // rsi
  _WORD *v105; // rdi
  const __m128i **v106; // rdx
  unsigned int v107; // edx
  __int64 **v108; // rcx
  unsigned int v109; // edx
  __int64 v110; // rcx
  int v111; // edx
  _QWORD *v112; // rcx
  unsigned int v113; // ecx
  __int64 v114; // rdx
  __int64 v115; // rdi
  _DWORD *v116; // rbp
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 *v119; // rdx
  unsigned int v120; // edx
  __int64 *v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // r8
  __int64 v124; // r9
  _QWORD *v125; // rax
  int v126; // edx
  unsigned int v127; // edx
  __int64 v128; // rcx
  unsigned __int16 v129; // cx
  __int64 v130; // rdx
  unsigned int v131; // edx
  __int64 v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // rdi
  _DWORD *v135; // rcx
  __int16 v136; // dx
  unsigned int v137; // edx
  _QWORD *v138; // rcx
  unsigned int v139; // ecx
  __int64 v140; // rdx
  __int64 v141; // rsi
  __int64 *v142; // rdi
  __int64 *v143; // rdx
  unsigned int v144; // edx
  const char **v145; // rcx
  const char *v146; // rbx
  char v147; // al
  unsigned int v148; // eax
  int v149; // edx
  int v150; // edx
  int v151; // edx
  int v152; // edx
  int v153; // edx
  char v154; // dl
  char v155; // al
  char v156; // al
  unsigned int v157; // eax
  unsigned int v158; // eax
  unsigned int v159; // eax
  unsigned int v160; // eax
  unsigned int v161; // ecx
  __int64 v162; // rdx
  __int64 v163; // rsi
  __int64 *v164; // rbp
  __int64 *v165; // rdx
  unsigned int v166; // edx
  _DWORD **v167; // rcx
  _DWORD *v168; // rcx
  unsigned int v169; // ecx
  __int64 v170; // rdx
  __int64 v171; // rdi
  _QWORD *v172; // rbp
  __int64 v173; // rsi
  __int64 v174; // rdi
  unsigned int *v175; // rdx
  __int64 v176; // rsi
  __int64 v177; // rdx
  char *v178; // rcx
  char *v179; // rdi
  unsigned int v180; // ecx
  __int64 v181; // rdx
  __int64 v182; // rdi
  _QWORD *v183; // r8
  __int64 v184; // rsi
  _QWORD *v185; // rdi
  _QWORD **v186; // rdx
  unsigned int v187; // ecx
  __int64 v188; // rdx
  __int64 v189; // rsi
  __int64 v190; // rdi
  __int64 v191; // r8
  __int64 v192; // rsi
  _DWORD *v193; // rdx
  unsigned int v194; // edx
  __int64 v195; // rcx
  int v196; // edx
  _QWORD *v197; // rcx
  __int64 v198; // rdi
  __int64 *v199; // rcx
  _QWORD *v200; // rdx
  __int64 *v201; // rdx
  __int64 *v202; // rcx
  _QWORD *v203; // rdx
  _DWORD **v204; // rdx
  __int64 *v205; // rcx
  _WORD **v206; // rcx
  __int64 **v207; // rcx
  const char **v208; // rdx
  unsigned int *v209; // rcx
  __int64 *v210; // rdx
  _QWORD **v211; // rcx
  __int64 *v212; // rcx
  __int64 *v213; // rcx
  __int64 *v214; // rdx
  _QWORD *v215; // rcx
  _QWORD *v216; // rdx
  _QWORD **v217; // rdx
  _QWORD *v218; // rcx
  _QWORD **v219; // rcx
  _DWORD **v220; // rcx
  _DWORD **v221; // rdx
  _QWORD **v222; // rdx
  _QWORD **v223; // rcx
  _QWORD *v224; // rcx
  char *v225; // rax
  __int64 v226; // r12
  __int64 v227; // [rsp+0h] [rbp-1D8h]
  char *haystack; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v229; // [rsp+18h] [rbp-1C0h]
  char v230; // [rsp+28h] [rbp-1B0h]
  __int128 v231; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v232; // [rsp+40h] [rbp-198h]
  __int64 v233; // [rsp+48h] [rbp-190h]
  __int64 v234; // [rsp+50h] [rbp-188h]
  _QWORD v235[40]; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v236[8]; // [rsp+198h] [rbp-40h] BYREF

  v236[0] = __readfsqword(0x28u);
  if ( a2 > 98 )
  {
    if ( a2 == 2009 )
    {
      v194 = *(_DWORD *)a3;
      if ( v194 > 0x2F )
      {
        v197 = *(_QWORD **)(a3 + 8);
        v196 = (_DWORD)v197 + 8;
        *(_QWORD *)(a3 + 8) = v197 + 1;
      }
      else
      {
        v195 = v194;
        v196 = v194 + 8;
        v197 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v195);
        *(_DWORD *)a3 = v196;
      }
      if ( (unsigned __int8)sub_17EF0(a1, *v197, v196, (_DWORD)v197, a5, a6) )
        return 1;
      return -1;
    }
    if ( a2 <= 2009 )
    {
      if ( a2 != 2004 )
      {
        if ( a2 != 2008 )
          return 0;
        v14 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v214 = *(__int64 **)(a3 + 8);
          v215 = v214 + 1;
          *(_QWORD *)(a3 + 8) = v214 + 1;
          v17 = *v214;
        }
        else
        {
          v15 = *(_QWORD *)(a3 + 16);
          v16 = v14 + 8;
          *(_DWORD *)a3 = v16;
          v17 = *(_QWORD *)(v15 + v14);
          if ( (unsigned int)v16 <= 0x2F )
          {
            v18 = v14 + 16;
            *(_DWORD *)a3 = v18;
            v19 = *(_QWORD *)(v15 + v16);
            if ( (unsigned int)v18 <= 0x2F )
            {
              v20 = (unsigned int *)(v18 + v15);
              *(_DWORD *)a3 = v14 + 24;
              goto LABEL_18;
            }
            v20 = *(unsigned int **)(a3 + 8);
LABEL_265:
            *(_QWORD *)(a3 + 8) = v20 + 2;
LABEL_18:
            if ( (unsigned __int8)sub_17C10(a1, v17, v19, *v20) )
              return 1;
            return -1;
          }
          v215 = *(_QWORD **)(a3 + 8);
        }
        v20 = (unsigned int *)(v215 + 1);
        *(_QWORD *)(a3 + 8) = v215 + 1;
        v19 = *v215;
        goto LABEL_265;
      }
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v224 = *(_QWORD **)(a3 + 8);
        v25 = (unsigned int *)(v224 + 1);
        *(_QWORD *)(a3 + 8) = v224 + 1;
        v24 = *v224;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 16);
        v23 = v21 + 8;
        *(_DWORD *)a3 = v23;
        v24 = *(_QWORD *)(v22 + v21);
        if ( (unsigned int)v23 <= 0x2F )
        {
          v25 = (unsigned int *)(v23 + v22);
          *(_DWORD *)a3 = v21 + 16;
          return (unsigned __int8)sub_17880(a1, v24, *v25);
        }
        v25 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v25 + 2;
      return (unsigned __int8)sub_17880(a1, v24, *v25);
    }
    if ( a2 != 2010 )
      return 0;
    v187 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v201 = *(__int64 **)(a3 + 8);
      v202 = v201 + 1;
      *(_QWORD *)(a3 + 8) = v201 + 1;
      v190 = *v201;
    }
    else
    {
      v188 = *(_QWORD *)(a3 + 16);
      v189 = v187 + 8;
      *(_DWORD *)a3 = v189;
      v190 = *(_QWORD *)(v188 + v187);
      if ( (unsigned int)v189 <= 0x2F )
      {
        LODWORD(a6) = v187 + 16;
        *(_DWORD *)a3 = v187 + 16;
        v191 = *(_QWORD *)(v188 + v189);
        if ( v187 + 16 <= 0x2F )
        {
          v192 = v187 + 24;
          *(_DWORD *)a3 = v192;
          if ( (unsigned int)v192 <= 0x2F )
          {
            v193 = (_DWORD *)(v192 + v188);
            *(_DWORD *)a3 = v187 + 32;
            goto LABEL_220;
          }
          v193 = *(_DWORD **)(a3 + 8);
LABEL_237:
          *(_QWORD *)(a3 + 8) = v193 + 2;
LABEL_220:
          if ( (unsigned __int8)sub_18160(a1, v190, v191, *v193, v191, a6) )
            return 1;
          return -1;
        }
        v203 = *(_QWORD **)(a3 + 8);
LABEL_236:
        v193 = v203 + 1;
        goto LABEL_237;
      }
      v202 = *(__int64 **)(a3 + 8);
    }
    v203 = v202 + 1;
    *(_QWORD *)(a3 + 8) = v202 + 1;
    v191 = *v202;
    goto LABEL_236;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      netnode_check(a1 + 120, "$ nds32", 0, 1);
      *(_QWORD *)(a1 + 136) = sub_1D0D0(a1);
      hook_event_listener(3, a1 + 144, &LPH, 0);
      return 0;
    case 1LL:
      v49 = a1 + 144;
      unhook_event_listener(3, a1 + 144);
      v50 = *(_QWORD **)(a1 + 136);
      if ( v50 )
      {
        v51 = *(void (__fastcall **)(_QWORD))(*v50 + 8LL);
        if ( (char *)v51 == (char *)sub_13090 )
        {
          v52 = *(_QWORD *)(a1 + 136);
          *v50 = &off_29050;
          reg_finder_dtr(v52);
          v55 = v50[26];
          if ( v55 )
          {
            v50[27] = 0;
            qfree(v55, v49, v53, v54);
          }
          v56 = v50[10];
          if ( v56 )
          {
            v50[11] = 0;
            qfree(v56, v49, v53, v54);
          }
          operator delete(v50, 0xF8u);
        }
        else
        {
          v51(*(_QWORD *)(a1 + 136));
        }
      }
      *(_QWORD *)(a1 + 136) = 0;
      clr_module_data((unsigned int)dword_2A524);
      return 0;
    case 4LL:
      v31 = netnode_altval(*(_QWORD *)(a1 + 120), -2, 65);
      if ( v31 )
        sub_136C0(a1, v31 - 1, 0);
      v32 = netnode_altval(*(_QWORD *)(a1 + 120), -3, 65);
      if ( v32 )
        sub_13800(a1, v32 - 1, 0);
      v33 = 0;
      setinf(59, 4);
      setinf(60, 1);
      setinf(61, 4);
      setinf(63, 2);
      setinf(64, 4);
      setinf(65, 8);
      setinf(62, 4);
      nlist_size = get_nlist_size();
      if ( !nlist_size )
        goto LABEL_226;
      while ( 1 )
      {
        nlist_ea = get_nlist_ea(v33);
        if ( nlist_ea != -1 )
        {
          nlist_name = (const char *)get_nlist_name(v33);
          haystack = nullptr;
          v37 = nlist_name;
          v229 = 0;
          if ( nlist_name )
          {
            v38 = strlen(nlist_name);
            v39 = v37;
            haystack = (char *)qvector_reserve(&haystack, 0, v38 + 1, 1);
            *(_QWORD *)&v229 = v38 + 1;
            memmove(haystack, v37, v38);
            haystack[v38] = 0;
            v42 = haystack;
            if ( (unsigned __int64)v229 > 1 )
            {
              v39 = "@got";
              v43 = strstr(haystack, "@got");
              if ( !v43 || v43 - v42 == -1 )
              {
                v44 = getseg(nlist_ea);
                if ( v44 && (*(_BYTE *)(v44 + 42) & 1) != 0 )
                {
                  v45 = 0;
                  if ( (~((unsigned __int16)get_flags_ex(nlist_ea, 0) >> 8) & 6) != 0 )
                  {
                    v232 = -1;
                    v48 = v235;
                    v233 = 0;
                    v234 = 0;
                    v231 = -1;
                    do
                    {
                      *(_WORD *)v48 = 0;
                      v48 += 5;
                      *((_WORD *)v48 - 19) = 0;
                      *((_WORD *)v48 - 18) = 0;
                      *((_DWORD *)v48 - 2) = 0;
                      *((_WORD *)v48 - 17) = 0;
                      *((_OWORD *)v48 - 2) = 0;
                      *(v48 - 2) = 0;
                    }
                    while ( v236 != v48 );
                    v45 = nlist_ea;
                    if ( (int)decode_insn(&v231, nlist_ea, v236, v47, 0, 0, 0.0) > 0 )
                    {
                      v45 = (__int64)&v231;
                      if ( (int)sub_D8F0(a1, (__int64)&v231) > 49 )
                      {
                        del_items(nlist_ea, 0, 1, 0);
                        create_insn(nlist_ea, 0);
                        auto_mark_range(nlist_ea, nlist_ea + 1, 20);
                        v45 = -1;
                        sub_12E10(nlist_ea, -1);
                      }
                    }
                  }
                  if ( haystack )
                  {
                    *(_QWORD *)&v229 = 0;
                    qfree(haystack, v45, v46, v47);
                  }
                  goto LABEL_40;
                }
                v42 = haystack;
              }
            }
            if ( v42 )
            {
              *(_QWORD *)&v229 = 0;
              qfree(v42, v39, v40, v41);
            }
          }
        }
LABEL_40:
        if ( nlist_size == ++v33 )
        {
LABEL_226:
          v198 = *(_QWORD *)(a1 + 120);
          haystack = (char *)*(unsigned __int16 *)(a1 + 168);
          netnode_supset(v198, -1, &haystack, 8, 65);
          return 0;
        }
      }
    case 5LL:
      goto LABEL_5;
    case 8LL:
      v65 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v208 = *(const char ***)(a3 + 8);
        v209 = (unsigned int *)(v208 + 1);
        *(_QWORD *)(a3 + 8) = v208 + 1;
        v68 = *v208;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        v67 = v65 + 8;
        *(_DWORD *)a3 = v67;
        v68 = *(const char **)(v66 + v65);
        if ( (unsigned int)v67 <= 0x2F )
        {
          v69 = v65 + 16;
          *(_DWORD *)a3 = v69;
          v70 = *(_DWORD *)(v66 + v67);
          if ( (unsigned int)v69 <= 0x2F )
          {
            v71 = v65 + 24;
            *(_DWORD *)a3 = v71;
            v72 = *(_QWORD *)(v66 + v69);
            if ( (unsigned int)v71 <= 0x2F )
            {
              v73 = v65 + 32;
              *(_DWORD *)a3 = v73;
              v74 = *(__int64 **)(v66 + v71);
              if ( (unsigned int)v73 <= 0x2F )
              {
                v75 = (_DWORD *)(v73 + v66);
                *(_DWORD *)a3 = v65 + 40;
                goto LABEL_79;
              }
              v75 = *(_DWORD **)(a3 + 8);
LABEL_250:
              *(_QWORD *)(a3 + 8) = v75 + 2;
LABEL_79:
              v76 = sub_131C0(a1, v68, v70, v72, *v75 != 0);
              if ( v76 )
              {
                if ( v74 )
                  *v74 = v76;
                return -1;
              }
              return 1;
            }
            v211 = *(_QWORD ***)(a3 + 8);
LABEL_249:
            v75 = v211 + 1;
            *(_QWORD *)(a3 + 8) = v211 + 1;
            v74 = *v211;
            goto LABEL_250;
          }
          v210 = *(__int64 **)(a3 + 8);
LABEL_248:
          v211 = (_QWORD **)(v210 + 1);
          *(_QWORD *)(a3 + 8) = v210 + 1;
          v72 = *v210;
          goto LABEL_249;
        }
        v209 = *(unsigned int **)(a3 + 8);
      }
      v210 = (__int64 *)(v209 + 2);
      *(_QWORD *)(a3 + 8) = v209 + 2;
      v70 = *v209;
      goto LABEL_248;
    case 10LL:
      v63 = *(_DWORD *)a3;
      if ( v63 > 0x2F )
      {
        v64 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 1;
      }
      else
      {
        v64 = (__int64 *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      return (int)sub_9280(a1, *v64);
    case 11LL:
      v59 = *(_DWORD *)a3;
      if ( v59 > 0x2F )
      {
        v62 = *(__int64 **)(a3 + 8);
        v61 = (__int64)(v62 + 1);
        *(_QWORD *)(a3 + 8) = v62 + 1;
      }
      else
      {
        v60 = v59;
        v61 = v59 + 8;
        v62 = (__int64 *)(*(_QWORD *)(a3 + 16) + v60);
        *(_DWORD *)a3 = v61;
      }
      if ( !(unsigned int)sub_EC80(a1, *v62, v61, (__int64)v62, a5) )
        return -1;
      return 1;
    case 12LL:
      v57 = *(_DWORD *)a3;
      if ( v57 > 0x2F )
      {
        v58 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v58 + 1;
      }
      else
      {
        v58 = (__int64 *)(*(_QWORD *)(a3 + 16) + v57);
        *(_DWORD *)a3 = v57 + 8;
      }
      sub_10580(a1, *v58);
      return 1;
    case 13LL:
      v100 = *(_DWORD *)a3;
      if ( v100 > 0x2F )
      {
        v101 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v101 + 1;
      }
      else
      {
        v101 = (__int64 *)(*(_QWORD *)(a3 + 16) + v100);
        *(_DWORD *)a3 = v100 + 8;
      }
      sub_105A0(a1, *v101);
      return 1;
    case 14LL:
      v95 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v212 = *(__int64 **)(a3 + 8);
        v99 = v212 + 1;
        *(_QWORD *)(a3 + 8) = v212 + 1;
        v98 = *v212;
      }
      else
      {
        v96 = *(_QWORD *)(a3 + 16);
        v97 = v95 + 8;
        *(_DWORD *)a3 = v97;
        v98 = *(_QWORD *)(v96 + v95);
        if ( (unsigned int)v97 <= 0x2F )
        {
          v99 = (__int64 *)(v97 + v96);
          *(_DWORD *)a3 = v95 + 16;
          goto LABEL_109;
        }
        v99 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v99 + 1;
LABEL_109:
      sub_10650(a1, v98, *v99);
      return 1;
    case 17LL:
      v107 = *(_DWORD *)a3;
      if ( v107 > 0x2F )
      {
        v108 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v108 + 1;
      }
      else
      {
        v108 = (__int64 **)(*(_QWORD *)(a3 + 16) + v107);
        *(_DWORD *)a3 = v107 + 8;
      }
      sub_11DB0(a1, *v108);
      return 1;
    case 19LL:
      v102 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v206 = *(_WORD ***)(a3 + 8);
        v106 = (const __m128i **)(v206 + 1);
        *(_QWORD *)(a3 + 8) = v206 + 1;
        v105 = *v206;
      }
      else
      {
        v103 = *(_QWORD *)(a3 + 16);
        v104 = v102 + 8;
        *(_DWORD *)a3 = v104;
        v105 = *(_WORD **)(v103 + v102);
        if ( (unsigned int)v104 <= 0x2F )
        {
          v106 = (const __m128i **)(v104 + v103);
          *(_DWORD *)a3 = v102 + 16;
          goto LABEL_117;
        }
        v106 = *(const __m128i ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v106 + 1;
LABEL_117:
      if ( !(unsigned __int8)sub_107F0(a1, v105, *v106) )
        return -1;
      return 1;
    case 27LL:
      v86 = *(_DWORD *)a3;
      if ( v86 > 0x2F )
      {
        v87 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v87 + 1;
      }
      else
      {
        v87 = (__int64 *)(*(_QWORD *)(a3 + 16) + v86);
        *(_DWORD *)a3 = v86 + 8;
      }
      v88 = *v87;
      v89 = *v87;
      flags = get_flags_ex(*v87, 0);
      if ( (flags & 0x600) != 0 )
        return get_item_end(v89) - v88;
      v91 = sub_D870(v89);
      v93 = v91;
      if ( !v91 || (flags & 0x1000) != 0 )
        goto LABEL_98;
      v226 = v91;
      if ( (unsigned __int8)create_align(v88, v91, 0) )
        return v226;
      if ( v93 == 2 )
      {
        if ( (unsigned __int16)get_word(v88) == 146 )
          return (int)create_insn(v88, 0);
      }
      else if ( v93 == 4 && (unsigned int)get_dword(v88) == 9568402 )
      {
        return (int)create_insn(v88, 0);
      }
LABEL_98:
      v232 = -1;
      v94 = v235;
      v233 = 0;
      v234 = 0;
      v231 = -1;
      do
      {
        *(_WORD *)v94 = 0;
        v94 += 5;
        *((_WORD *)v94 - 19) = 0;
        *((_WORD *)v94 - 18) = 0;
        *((_DWORD *)v94 - 2) = 0;
        *((_WORD *)v94 - 17) = 0;
        *((_OWORD *)v94 - 2) = 0;
        *(v94 - 2) = 0;
      }
      while ( v94 != v236 );
      if ( (int)decode_insn(&v231, v88, v236, 0, 0, v92, 0.0) <= 0
        || !sub_D9C0(a1, (__int64)&v231, 1)
        || (int)sub_D8F0(a1, (__int64)&v231) <= 89
        || (int)create_insn(v88, 0) <= 0 )
      {
        return 0;
      }
      sub_12E10(v88, -1);
      v89 = v88;
      return get_item_end(v89) - v88;
    case 28LL:
      v84 = *(_DWORD *)a3;
      if ( v84 > 0x2F )
      {
        v85 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v85 + 1;
      }
      else
      {
        v85 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v84);
        *(_DWORD *)a3 = v84 + 8;
      }
      netnode_supdel(*(_QWORD *)(a1 + 120), *v85, 356);
      return 0;
    case 32LL:
      v79 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v213 = *(__int64 **)(a3 + 8);
        v83 = (int *)(v213 + 1);
        *(_QWORD *)(a3 + 8) = v213 + 1;
        v82 = *v213;
      }
      else
      {
        v80 = *(_QWORD *)(a3 + 16);
        v81 = v79 + 8;
        *(_DWORD *)a3 = v81;
        v82 = *(_QWORD *)(v80 + v79);
        if ( (unsigned int)v81 <= 0x2F )
        {
          v83 = (int *)(v81 + v80);
          *(_DWORD *)a3 = v79 + 16;
          goto LABEL_88;
        }
        v83 = *(int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v83 + 2;
LABEL_88:
      if ( !sub_D9C0(a1, v82, *v83) )
        return -1;
      return 1;
    case 34LL:
      v77 = *(_DWORD *)a3;
      if ( v77 > 0x2F )
      {
        v78 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v78 + 8;
      }
      else
      {
        v78 = *(_QWORD *)(a3 + 16) + v77;
        *(_DWORD *)a3 = v77 + 8;
      }
      return (*(_WORD *)(*(_QWORD *)v78 + 24LL) == 99) | (unsigned __int8)(*(_WORD *)(*(_QWORD *)v78 + 24LL) == 96);
    case 35LL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v199 = *(__int64 **)(a3 + 8);
        v200 = v199 + 1;
        *(_QWORD *)(a3 + 8) = v199 + 1;
        v30 = *v199;
      }
      else
      {
        v29 = (__int64 *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
        v30 = *v29;
        if ( v28 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v28 + 16;
          return (*(_WORD *)(v30 + 24) == 98) | (unsigned __int8)((*(_WORD *)(v30 + 24) & 0xFFFD) == 481);
        }
        v200 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v200 + 1;
      return (*(_WORD *)(v30 + 24) == 98) | (unsigned __int8)((*(_WORD *)(v30 + 24) & 0xFFFD) == 481);
    case 36LL:
      v26 = *(_DWORD *)a3;
      if ( v26 > 0x2F )
      {
        v27 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v27 = (__int64 *)(*(_QWORD *)(a3 + 16) + v26);
        *(_DWORD *)a3 = v26 + 8;
      }
      return (int)sub_D8F0(a1, *v27);
    case 37LL:
      v131 = *(_DWORD *)a3;
      if ( v131 > 0x2F )
      {
        v216 = *(_QWORD **)(a3 + 8);
        v135 = v216 + 1;
        *(_QWORD *)(a3 + 8) = v216 + 1;
        v134 = *v216;
      }
      else
      {
        v132 = *(_QWORD *)(a3 + 16);
        v133 = v131 + 8;
        *(_DWORD *)a3 = v133;
        v134 = *(_QWORD *)(v132 + v131);
        if ( (unsigned int)v133 <= 0x2F )
        {
          v135 = (_DWORD *)(v133 + v132);
          *(_DWORD *)a3 = v131 + 16;
          goto LABEL_152;
        }
        v135 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v135 + 2;
LABEL_152:
      v136 = *(_WORD *)(v134 + 24);
      if ( v136 == 96 || v136 == 99 )
        return *v135 != 0;
      else
        return (v136 == 95) | (unsigned __int8)((unsigned __int16)(v136 - 97) <= 1u);
    case 38LL:
      v127 = *(_DWORD *)a3;
      if ( v127 > 0x2F )
      {
        v128 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v128 + 8;
      }
      else
      {
        v128 = *(_QWORD *)(a3 + 16) + v127;
        *(_DWORD *)a3 = v127 + 8;
      }
      v129 = *(_WORD *)(*(_QWORD *)v128 + 24LL);
      if ( v129 > 0x79u )
        return (unsigned __int16)(v129 - 475) <= 3u;
      if ( v129 <= 0x5Eu )
        return 0;
      v130 = 1LL << ((unsigned __int8)v129 - 95);
      if ( (v130 & 0x6007F81) != 0 )
        return 1;
      result = 2;
      if ( (v130 & 0x44) != 0 )
        return result;
      return 0;
    case 43LL:
      v120 = *(_DWORD *)a3;
      if ( v120 > 0x2F )
      {
        v121 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v121 + 1;
      }
      else
      {
        v121 = (__int64 *)(*(_QWORD *)(a3 + 16) + v120);
        *(_DWORD *)a3 = v120 + 8;
      }
      v122 = *v121;
      LODWORD(result) = sub_D870(*v121);
      if ( (_DWORD)result )
        return (int)result;
      v232 = -1;
      v125 = v235;
      v233 = 0;
      v234 = 0;
      v231 = -1;
      do
      {
        *(_WORD *)v125 = 0;
        v125 += 5;
        *((_WORD *)v125 - 19) = 0;
        *((_WORD *)v125 - 18) = 0;
        *((_DWORD *)v125 - 2) = 0;
        *((_WORD *)v125 - 17) = 0;
        *((_OWORD *)v125 - 2) = 0;
        *(v125 - 2) = 0;
      }
      while ( v236 != v125 );
      v126 = decode_insn(&v231, v122, v236, 0, v123, v124, 0.0);
      result = 0;
      if ( v126 > 0
        && ((_WORD)v233 == 191
         || (_WORD)v233 == 1
         && (v235[0] & 0xFFFF00000000FF00LL) == 0x100
         && (v235[5] & 0xFFFF00000000FF00LL) == 0x400
         && !v235[7]) )
      {
        return WORD1(v233);
      }
      return result;
    case 46LL:
      v113 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v204 = *(_DWORD ***)(a3 + 8);
        v205 = (__int64 *)(v204 + 1);
        *(_QWORD *)(a3 + 8) = v204 + 1;
        v116 = *v204;
      }
      else
      {
        v114 = *(_QWORD *)(a3 + 16);
        v115 = v113 + 8;
        *(_DWORD *)a3 = v115;
        v116 = *(_DWORD **)(v114 + v113);
        if ( (unsigned int)v115 <= 0x2F )
        {
          v117 = v113 + 16;
          *(_DWORD *)a3 = v117;
          v118 = *(_QWORD *)(v114 + v115);
          if ( (unsigned int)v117 <= 0x2F )
          {
            v119 = (__int64 *)(v117 + v114);
            *(_DWORD *)a3 = v113 + 24;
            goto LABEL_129;
          }
          v119 = *(__int64 **)(a3 + 8);
LABEL_240:
          *(_QWORD *)(a3 + 8) = v119 + 1;
LABEL_129:
          *v116 = sub_13380(a1, v118, *v119);
          return 1;
        }
        v205 = *(__int64 **)(a3 + 8);
      }
      v119 = v205 + 1;
      *(_QWORD *)(a3 + 8) = v205 + 1;
      v118 = *v205;
      goto LABEL_240;
    case 52LL:
      v144 = *(_DWORD *)a3;
      if ( v144 > 0x2F )
      {
        v145 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v145 + 1;
      }
      else
      {
        v145 = (const char **)(*(_QWORD *)(a3 + 16) + v144);
        *(_DWORD *)a3 = v144 + 8;
      }
      v146 = *v145;
      if ( !*v145 )
        return 0;
      v147 = *v146;
      if ( !*v146 )
        return 0;
      if ( v147 == 36 )
        v147 = *++v146;
      if ( (v147 & 0xDF) == 0x52 && (unsigned __int8)(v146[1] - 48) <= 9u )
      {
        v148 = strtol(v146 + 1, nullptr, 10);
        if ( v148 <= 0x1F )
        {
          LODWORD(result) = v148 + 1;
          return (int)result;
        }
      }
      v149 = strcasecmp(v146, "sp");
      result = 32;
      if ( !v149 )
        return result;
      v150 = strcasecmp(v146, "lp");
      result = 31;
      if ( !v150 )
        return result;
      v151 = strcasecmp(v146, "gp");
      result = 30;
      if ( !v151 )
        return result;
      v152 = strcasecmp(v146, "fp");
      result = 29;
      if ( !v152 )
        return result;
      v153 = strcasecmp(v146, "ta");
      result = 16;
      if ( !v153 )
        return result;
      v154 = *v146;
      v155 = *v146 & 0xDF;
      if ( v155 != 70 )
        goto LABEL_186;
      v156 = v146[1] & 0xDF;
      if ( v156 != 83 )
        goto LABEL_182;
      if ( (unsigned __int8)(v146[2] - 48) > 9u )
        goto LABEL_303;
      v157 = strtol(v146 + 2, nullptr, 10);
      if ( v157 <= 0x3F )
        return (int)(v157 + 37);
      v154 = *v146;
      v155 = *v146 & 0xDF;
      if ( v155 == 70 )
      {
        v156 = v146[1] & 0xDF;
LABEL_182:
        if ( v156 == 68 && (unsigned __int8)(v146[2] - 48) <= 9u )
        {
          v158 = strtol(v146 + 2, nullptr, 10);
          if ( v158 <= 0x1F )
            return (int)(v158 + 101);
          v155 = *v146 & 0xDF;
        }
        else
        {
LABEL_303:
          v155 = v154 & 0xDF;
        }
      }
LABEL_186:
      if ( v155 == 68 && (unsigned __int8)(v146[1] - 48) <= 9u )
      {
        v159 = strtol(v146 + 1, nullptr, 10);
        if ( v159 <= 0x1F )
          return (int)(v159 + 133);
      }
      if ( !strncasecmp(v146, "cpr", 3u) && (unsigned __int8)(v146[3] - 48) <= 9u )
      {
        v160 = strtol(v146 + 3, nullptr, 10);
        if ( v160 <= 0x1F )
          return (int)(v160 + 165);
      }
      return 0;
    case 53LL:
      v139 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v207 = *(__int64 ***)(a3 + 8);
        v143 = (__int64 *)(v207 + 1);
        *(_QWORD *)(a3 + 8) = v207 + 1;
        v142 = *v207;
      }
      else
      {
        v140 = *(_QWORD *)(a3 + 16);
        v141 = v139 + 8;
        *(_DWORD *)a3 = v141;
        v142 = *(__int64 **)(v140 + v139);
        if ( (unsigned int)v141 <= 0x2F )
        {
          v143 = (__int64 *)(v141 + v140);
          *(_DWORD *)a3 = v139 + 16;
          return sub_13D70(a1, v142, *v143);
        }
        v143 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v143 + 1;
      return sub_13D70(a1, v142, *v143);
    case 55LL:
      v180 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v222 = *(_QWORD ***)(a3 + 8);
        v223 = v222 + 1;
        *(_QWORD *)(a3 + 8) = v222 + 1;
        v183 = *v222;
      }
      else
      {
        v181 = *(_QWORD *)(a3 + 16);
        v182 = v180 + 8;
        *(_DWORD *)a3 = v182;
        v183 = *(_QWORD **)(v181 + v180);
        if ( (unsigned int)v182 <= 0x2F )
        {
          v184 = v180 + 16;
          *(_DWORD *)a3 = v184;
          v185 = *(_QWORD **)(v181 + v182);
          if ( (unsigned int)v184 <= 0x2F )
          {
            v186 = (_QWORD **)(v184 + v181);
            *(_DWORD *)a3 = v180 + 24;
            return (int)sub_13440(a1, v183, v185, *v186, (__int64)v183, a6);
          }
          v186 = *(_QWORD ***)(a3 + 8);
LABEL_279:
          *(_QWORD *)(a3 + 8) = v186 + 1;
          return (int)sub_13440(a1, v183, v185, *v186, (__int64)v183, a6);
        }
        v223 = *(_QWORD ***)(a3 + 8);
      }
      v186 = v223 + 1;
      *(_QWORD *)(a3 + 8) = v223 + 1;
      v185 = *v223;
      goto LABEL_279;
    case 59LL:
      v137 = *(_DWORD *)a3;
      if ( v137 > 0x2F )
      {
        v138 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v138 + 1;
      }
      else
      {
        v138 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v137);
        *(_DWORD *)a3 = v137 + 8;
      }
      return (unsigned __int8)sub_1B1A0(a1, *v138, 0, (_DWORD)v138, a5, a6);
    case 60LL:
      v166 = *(_DWORD *)a3;
      if ( v166 > 0x2F )
      {
        v220 = *(_DWORD ***)(a3 + 8);
        v221 = v220 + 1;
        *(_QWORD *)(a3 + 8) = v220 + 1;
        v168 = *v220;
      }
      else
      {
        v167 = (_DWORD **)(*(_QWORD *)(a3 + 16) + v166);
        *(_DWORD *)a3 = v166 + 8;
        v168 = *v167;
        if ( v166 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v166 + 16;
          goto LABEL_200;
        }
        v221 = *(_DWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v221 + 1;
LABEL_200:
      *v168 = 0;
      return 1;
    case 81LL:
      v161 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v219 = *(_QWORD ***)(a3 + 8);
        v165 = (__int64 *)(v219 + 1);
        *(_QWORD *)(a3 + 8) = v219 + 1;
        v164 = *v219;
      }
      else
      {
        v162 = *(_QWORD *)(a3 + 16);
        v163 = v161 + 8;
        *(_DWORD *)a3 = v163;
        v164 = *(__int64 **)(v162 + v161);
        if ( (unsigned int)v163 <= 0x2F )
        {
          v165 = (__int64 *)(v163 + v162);
          *(_DWORD *)a3 = v161 + 16;
          goto LABEL_196;
        }
        v165 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v165 + 1;
LABEL_196:
      *v164 = sub_D160(a1, *v165);
      return 1;
    case 83LL:
      v169 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v217 = *(_QWORD ***)(a3 + 8);
        v218 = v217 + 1;
        *(_QWORD *)(a3 + 8) = v217 + 1;
        v172 = *v217;
LABEL_270:
        v175 = (unsigned int *)(v218 + 1);
        *(_QWORD *)(a3 + 8) = v218 + 1;
        v174 = *v218;
        goto LABEL_271;
      }
      v170 = *(_QWORD *)(a3 + 16);
      v171 = v169 + 8;
      *(_DWORD *)a3 = v171;
      v172 = *(_QWORD **)(v170 + v169);
      if ( (unsigned int)v171 > 0x2F )
      {
        v218 = *(_QWORD **)(a3 + 8);
        goto LABEL_270;
      }
      v173 = v169 + 16;
      *(_DWORD *)a3 = v173;
      v174 = *(_QWORD *)(v170 + v171);
      if ( (unsigned int)v173 <= 0x2F )
      {
        v175 = (unsigned int *)(v173 + v170);
        *(_DWORD *)a3 = v169 + 24;
        goto LABEL_205;
      }
      v175 = *(unsigned int **)(a3 + 8);
LABEL_271:
      *(_QWORD *)(a3 + 8) = v175 + 2;
LABEL_205:
      v176 = *v175;
      v230 = 0;
      haystack = nullptr;
      v229 = 0;
      if ( (unsigned __int8)sub_1D1E0(&haystack, v176, *(_QWORD *)(v174 + 16), a1, 0)
        && (unsigned __int8)(v230 - 10) <= 1u )
      {
        v179 = haystack;
        v178 = (char *)v229;
        v177 = *(_QWORD *)haystack;
        if ( (_QWORD)v229 == 1
          || (v225 = haystack + 24, v176 = 24 * v229, v178 = &haystack[24 * v229], 24LL * (_QWORD)v229 == 24) )
        {
LABEL_295:
          *v172 = v177;
          result = 1;
          v179 = haystack;
        }
        else
        {
          while ( *(_QWORD *)v225 == v177 )
          {
            v225 += 24;
            if ( v225 == v178 )
              goto LABEL_295;
          }
          result = -1;
        }
      }
      else
      {
        v179 = haystack;
        result = -1;
      }
      if ( v179 )
      {
        v227 = result;
        *(_QWORD *)&v229 = 0;
        qfree(v179, v176, v177, v178);
        return v227;
      }
      return result;
    case 86LL:
      invalidate_regfinder_cache(-1, -1, 0);
LABEL_5:
      v8 = netnode_altval(*(_QWORD *)(a1 + 120), -2, 65);
      v9 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 128) = v8 - 1;
      v10 = netnode_altval(v9, -3, 65);
      v11 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 176) = v10 - 1;
      v12 = netnode_altval(v11, -1, 65);
      if ( !v12 )
        LOWORD(v12) = 31;
      *(_WORD *)(a1 + 168) = v12;
      return 0;
    case 94LL:
      v109 = *(_DWORD *)a3;
      if ( v109 > 0x2F )
      {
        v112 = *(_QWORD **)(a3 + 8);
        v111 = (_DWORD)v112 + 8;
        *(_QWORD *)(a3 + 8) = v112 + 1;
      }
      else
      {
        v110 = v109;
        v111 = v109 + 8;
        v112 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v110);
        *(_DWORD *)a3 = v111;
      }
      sub_1D4F0(*v112, a2, v111, (_DWORD)v112, a5, a6);
      return 0;
    case 95LL:
      netnode_check(a1 + 120, "$ nds32", 0, 1);
      return 0;
    case 98LL:
      return *(_QWORD *)(a1 + 136);
    default:
      return 0;
  }
}

