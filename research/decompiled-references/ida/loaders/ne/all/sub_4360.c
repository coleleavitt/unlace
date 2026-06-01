__int64 __fastcall sub_4360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // r12
  __int64 result; // rax
  unsigned int v15; // r9d
  const char *v16; // r8
  __int64 v17; // rcx
  int v18; // r8d
  const char *v19; // r8
  int v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // rdi
  _BYTE *v23; // rsi
  __int16 v24; // cx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  const char *v29; // rdx
  char v30; // si
  const char *v31; // rdx
  char v32; // si
  const char *v33; // rdx
  char v34; // si
  const char *v35; // rdx
  char v36; // si
  const char *v37; // rdx
  char v38; // si
  const char *v39; // rdx
  char v40; // si
  const char *v41; // rdx
  char v42; // al
  const char *v43; // rdx
  char v44; // si
  const char *v45; // rdx
  char v46; // si
  const char *v47; // rdx
  char v48; // si
  const char *v49; // rdx
  char v50; // si
  __int64 v51; // r15
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128 v62; // xmm4
  __m128 v63; // xmm5
  char *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __m128 v74; // xmm4
  __m128 v75; // xmm5
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __m128 v79; // xmm4
  __m128 v80; // xmm5
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128 v84; // xmm4
  __m128 v85; // xmm5
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __m128 v89; // xmm4
  __m128 v90; // xmm5
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __m128 v94; // xmm4
  __m128 v95; // xmm5
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128 v99; // xmm4
  __m128 v100; // xmm5
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __m128 v105; // xmm4
  __m128 v106; // xmm5
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __m128 v110; // xmm4
  __m128 v111; // xmm5
  int v112; // eax
  unsigned __int64 v113; // r15
  __int16 v114; // cx
  const char *v115; // rdx
  char v116; // al
  _BYTE *v117; // rsi
  const char *v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // r8
  __m128 v122; // xmm4
  __m128 v123; // xmm5
  unsigned int v124; // esi
  char *v125; // rax
  const char *v126; // rdx
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // r8
  __m128 v130; // xmm4
  __m128 v131; // xmm5
  char v132; // cl
  _BYTE *v133; // r9
  unsigned __int64 v134; // rdi
  char v135; // al
  const char *v136; // rax
  const char *v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __m128 v143; // xmm4
  __m128 v144; // xmm5
  __int16 v145; // ax
  unsigned __int64 v146; // [rsp+0h] [rbp-978h]
  char v147; // [rsp+0h] [rbp-978h]
  char v148; // [rsp+0h] [rbp-978h]
  char v149; // [rsp+0h] [rbp-978h]
  char v150; // [rsp+0h] [rbp-978h]
  char v151; // [rsp+0h] [rbp-978h]
  char v152; // [rsp+0h] [rbp-978h]
  char v153; // [rsp+0h] [rbp-978h]
  char v154; // [rsp+0h] [rbp-978h]
  char v155; // [rsp+0h] [rbp-978h]
  char v156; // [rsp+0h] [rbp-978h]
  char v157; // [rsp+0h] [rbp-978h]
  char v158; // [rsp+0h] [rbp-978h]
  char v159; // [rsp+0h] [rbp-978h]
  __int64 v162; // [rsp+40h] [rbp-938h]
  unsigned __int64 v163; // [rsp+50h] [rbp-928h] BYREF
  unsigned __int16 v164; // [rsp+58h] [rbp-920h] BYREF
  unsigned __int16 v165; // [rsp+5Ah] [rbp-91Eh]
  unsigned __int16 v166; // [rsp+5Ch] [rbp-91Ch]
  unsigned __int16 v167; // [rsp+5Eh] [rbp-91Ah]
  _OWORD v168[2]; // [rsp+60h] [rbp-918h] BYREF
  __int64 v169; // [rsp+80h] [rbp-8F8h]
  __int64 v170; // [rsp+88h] [rbp-8F0h]
  __int64 v171; // [rsp+90h] [rbp-8E8h]
  __int128 v172; // [rsp+98h] [rbp-8E0h]
  __int128 v173; // [rsp+A8h] [rbp-8D0h]
  __int128 v174; // [rsp+B8h] [rbp-8C0h]
  __int128 v175; // [rsp+C8h] [rbp-8B0h]
  __int128 v176; // [rsp+D8h] [rbp-8A0h]
  __int128 v177; // [rsp+E8h] [rbp-890h]
  __int128 v178; // [rsp+F8h] [rbp-880h]
  __int128 v179; // [rsp+108h] [rbp-870h]
  unsigned __int64 v180; // [rsp+118h] [rbp-860h]
  _BYTE v181[8]; // [rsp+128h] [rbp-850h] BYREF
  char v182[1023]; // [rsp+130h] [rbp-848h] BYREF
  char v183; // [rsp+52Fh] [rbp-449h] BYREF
  _BYTE v184[1023]; // [rsp+530h] [rbp-448h] BYREF
  char v185; // [rsp+92Fh] [rbp-49h] BYREF
  _BYTE v186[8]; // [rsp+930h] [rbp-48h] BYREF
  unsigned __int64 v187; // [rsp+938h] [rbp-40h]

  v187 = __readfsqword(0x28u);
  if ( a4 )
  {
    v13 = 1;
    v162 = a4 + 1;
    while ( 1 )
    {
      qlseek(a2, a3, 0);
      lread(a2, &v164, 8);
      v24 = *(_WORD *)(a1 + 50);
      memset(v168, 0, sizeof(v168));
      v169 = 0;
      v146 = (unsigned __int64)v164 << v24;
      v172 = -1;
      v180 = 0xFFFFFFFF00000000LL;
      v170 = 0;
      v171 = 0;
      v173 = -1;
      v174 = -1;
      v175 = -1;
      v176 = -1;
      v177 = -1;
      v178 = -1;
      v179 = -1;
      qsnprintf(v181, 8, "%cseg%02d", (unsigned __int16)((v166 & 1) + 99), v13);
      v28 = v167;
      if ( !v167 )
        v28 = 0x10000;
      result = sub_3480((unsigned __int64 *)v168, (__int64)v181, v28, v25, v26, v27);
      if ( !(_DWORD)result )
        return result;
      LOWORD(v170) = 515;
      BYTE3(v170) = (v166 & 0x2000) != 0;
      if ( (v166 & 8) != 0 )
      {
        if ( *(_BYTE *)(a1 + 54) == 2 )
          LODWORD(result) = (*(_BYTE *)(a1 + 13) & 8) == 0;
      }
      else
      {
        LODWORD(result) = 0;
      }
      v15 = v165;
      v16 = "CODE";
      if ( (v166 & 1) != 0 )
        v16 = "DATA";
      if ( !v165 )
        v15 = (v164 != 0) << 16;
      sub_40F0((unsigned __int64 *)v168, a2, v146, (__int64)v181, (__int64)v16, v15, result);
      if ( (_DWORD)v13 == 1 )
        break;
LABEL_10:
      v163 = *(_QWORD *)&v168[0];
      netnode_supset(qword_B288, v13, &v163, 8, 65);
      sub_2D70(*(__int64 *)&v168[0], 1u, (__int64)"Segment Number    : %d", v13);
      v17 = v167;
      if ( !v167 )
        v17 = 0x10000;
      sub_2D70(*(__int64 *)&v168[0], 1u, (__int64)"Alloc Size        : %04Xh", v17);
      v18 = v165;
      if ( !v165 )
        v18 = (v164 != 0) << 16;
      sub_2D70(*(__int64 *)&v168[0], 1u, (__int64)"Offset in the file: %04llXh  Length: %04Xh", v146, v18);
      v19 = "CODE";
      if ( (v166 & 1) != 0 )
        v19 = "DATA";
      v20 = qsnprintf(v182, 1024, "Attributes  (%04X): %s", v166, v19);
      v21 = v166;
      v22 = (unsigned __int64)&v182[v20];
      if ( (v166 & 0x2000) != 0 )
      {
        if ( v22 >= (unsigned __int64)v184 )
        {
          if ( under_debugger )
            goto LABEL_255;
          goto LABEL_221;
        }
        v41 = " Use32";
        if ( v20 == 1023 )
        {
LABEL_78:
          *(_BYTE *)v22 = 0;
        }
        else
        {
          while ( 1 )
          {
            v42 = *v41++;
            *(_BYTE *)v22 = v42;
            if ( !v42 )
              break;
            if ( (char *)++v22 == &v183 )
              goto LABEL_78;
          }
        }
      }
      if ( (v21 & 2) == 0 )
        goto LABEL_18;
      if ( v22 >= (unsigned __int64)v184 )
      {
        if ( under_debugger )
          goto LABEL_255;
        goto LABEL_221;
      }
      v31 = " Allocated";
      if ( (char *)v22 != &v183 )
      {
        while ( 1 )
        {
          v32 = *v31++;
          *(_BYTE *)v22 = v32;
          if ( !v32 )
            break;
          if ( (char *)++v22 == &v183 )
            goto LABEL_45;
        }
LABEL_18:
        if ( (v21 & 4) == 0 )
          goto LABEL_19;
        if ( v22 >= (unsigned __int64)v184 )
        {
          if ( under_debugger )
            goto LABEL_255;
          goto LABEL_221;
        }
        if ( (char *)v22 != &v183 )
        {
          v45 = " Loaded";
          while ( 1 )
          {
            v46 = *v45++;
            *(_BYTE *)v22 = v46;
            if ( !v46 )
              break;
            if ( (char *)++v22 == &v183 )
              goto LABEL_92;
          }
LABEL_19:
          if ( (v21 & 8) == 0 )
            goto LABEL_20;
          if ( v22 >= (unsigned __int64)v184 )
          {
            if ( under_debugger )
              goto LABEL_255;
            goto LABEL_221;
          }
LABEL_47:
          if ( (char *)v22 != &v183 )
          {
            v33 = " Iterated";
            while ( 1 )
            {
              v34 = *v33++;
              *(_BYTE *)v22 = v34;
              if ( !v34 )
                break;
              if ( (char *)++v22 == &v183 )
                goto LABEL_51;
            }
LABEL_20:
            if ( (v21 & 0x10) == 0 )
              goto LABEL_21;
            if ( v22 >= (unsigned __int64)v184 )
            {
              if ( under_debugger )
                goto LABEL_255;
              goto LABEL_221;
            }
LABEL_94:
            if ( (char *)v22 != &v183 )
            {
              v47 = " Moveable";
              while ( 1 )
              {
                v48 = *v47++;
                *(_BYTE *)v22 = v48;
                if ( !v48 )
                  break;
                if ( (char *)++v22 == &v183 )
                  goto LABEL_98;
              }
LABEL_21:
              if ( (v21 & 0x20) == 0 )
                goto LABEL_22;
              if ( v22 >= (unsigned __int64)v184 )
              {
                if ( under_debugger )
                  goto LABEL_255;
                goto LABEL_221;
              }
LABEL_53:
              if ( (char *)v22 != &v183 )
              {
                v35 = " Pure";
                while ( 1 )
                {
                  v36 = *v35++;
                  *(_BYTE *)v22 = v36;
                  if ( !v36 )
                    break;
                  if ( (char *)++v22 == &v183 )
                    goto LABEL_57;
                }
LABEL_22:
                if ( (v21 & 0x40) == 0 )
                  goto LABEL_23;
                if ( v22 >= (unsigned __int64)v184 )
                {
                  if ( under_debugger )
                    goto LABEL_255;
                  goto LABEL_221;
                }
LABEL_100:
                if ( (char *)v22 != &v183 )
                {
                  v49 = " Preloaded";
                  while ( 1 )
                  {
                    v50 = *v49++;
                    *(_BYTE *)v22 = v50;
                    if ( !v50 )
                      break;
                    if ( (char *)++v22 == &v183 )
                      goto LABEL_104;
                  }
LABEL_23:
                  if ( (v21 & 0x80u) == 0 )
                    goto LABEL_24;
                  if ( v22 >= (unsigned __int64)v184 )
                  {
                    if ( under_debugger )
                      goto LABEL_255;
                    goto LABEL_221;
                  }
                  goto LABEL_59;
                }
                goto LABEL_104;
              }
              goto LABEL_57;
            }
            goto LABEL_98;
          }
          goto LABEL_51;
        }
        goto LABEL_92;
      }
LABEL_45:
      v183 = 0;
      if ( (v21 & 4) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 8) == 0 )
          goto LABEL_20;
        goto LABEL_47;
      }
LABEL_92:
      v183 = 0;
      if ( (v21 & 8) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 0x10) == 0 )
          goto LABEL_21;
        goto LABEL_94;
      }
LABEL_51:
      v183 = 0;
      if ( (v21 & 0x10) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 0x20) == 0 )
          goto LABEL_22;
        goto LABEL_53;
      }
LABEL_98:
      v183 = 0;
      if ( (v21 & 0x20) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 0x40) == 0 )
          goto LABEL_23;
        goto LABEL_100;
      }
LABEL_57:
      v183 = 0;
      if ( (v21 & 0x40) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 0x80u) == 0 )
          goto LABEL_24;
LABEL_59:
        v37 = " Executeonly";
        if ( (v21 & 1) != 0 )
          v37 = " Readonly";
        goto LABEL_61;
      }
LABEL_104:
      v183 = 0;
      if ( (v21 & 0x80u) != 0 )
      {
        v22 = (unsigned __int64)&v183;
        v37 = " Executeonly";
        if ( (v21 & 1) != 0 )
        {
LABEL_64:
          v183 = 0;
          goto LABEL_65;
        }
LABEL_61:
        if ( (char *)v22 != &v183 )
        {
          while ( 1 )
          {
            v38 = *v37++;
            *(_BYTE *)v22 = v38;
            if ( !v38 )
              break;
            if ( (char *)++v22 == &v183 )
              goto LABEL_64;
          }
LABEL_24:
          if ( (v21 & 0x100) == 0 )
            goto LABEL_25;
          if ( v22 >= (unsigned __int64)v184 )
          {
            if ( under_debugger )
              goto LABEL_255;
            goto LABEL_221;
          }
          if ( (char *)v22 != &v183 )
          {
            v43 = " Relocations";
            while ( 1 )
            {
              v44 = *v43++;
              *(_BYTE *)v22 = v44;
              if ( !v44 )
                break;
              if ( (char *)++v22 == &v183 )
                goto LABEL_84;
            }
LABEL_25:
            if ( (v21 & 0x200) == 0 )
              goto LABEL_26;
LABEL_67:
            if ( v22 >= (unsigned __int64)v184 )
            {
              if ( under_debugger )
                goto LABEL_255;
              goto LABEL_221;
            }
            if ( (char *)v22 == &v183 )
            {
LABEL_72:
              v183 = 0;
              if ( (v21 & 0x1000) != 0 )
LABEL_39:
                v183 = 0;
              v23 = (_BYTE *)(&dword_0 + 1);
              v22 = (unsigned __int64)&v183;
              goto LABEL_28;
            }
            v39 = " Conforming";
            while ( 1 )
            {
              v40 = *v39++;
              *(_BYTE *)v22 = v40;
              if ( !v40 )
                break;
              if ( (char *)++v22 == &v183 )
                goto LABEL_72;
            }
LABEL_26:
            if ( (v21 & 0x1000) == 0 )
              goto LABEL_27;
            if ( v22 >= (unsigned __int64)v184 )
              goto LABEL_220;
LABEL_35:
            if ( (char *)v22 == &v183 )
              goto LABEL_39;
            v29 = " Discardable";
            while ( 1 )
            {
              v30 = *v29++;
              *(_BYTE *)v22 = v30;
              if ( !v30 )
                goto LABEL_27;
              if ( (char *)++v22 == &v183 )
                goto LABEL_39;
            }
          }
          goto LABEL_84;
        }
        goto LABEL_64;
      }
LABEL_65:
      if ( (v21 & 0x100) == 0 )
      {
        v22 = (unsigned __int64)&v183;
        if ( (v21 & 0x200) != 0 )
          goto LABEL_67;
        goto LABEL_26;
      }
LABEL_84:
      v183 = 0;
      if ( (v21 & 0x200) != 0 )
        goto LABEL_72;
      v22 = (unsigned __int64)&v183;
      if ( (v21 & 0x1000) != 0 )
        goto LABEL_35;
LABEL_27:
      v23 = &v184[-v22];
LABEL_28:
      ++v13;
      qsnprintf(v22, v23, " DPL: %d", (v21 >> 10) & 3);
      sub_2D70(*(__int64 *)&v168[0], 1u, (__int64)"%s", v182);
      a3 += 8;
      if ( v13 == v162 )
        return 1;
    }
    ((void (__fastcall *)(_OWORD *, __int64))create_filename_cmt)(v168, a2);
    qlseek(a2, *(int *)(a1 + 44), 0);
    v163 = 0;
    v51 = 0;
    lread(a2, &v163, 1);
    v57 = v163;
    if ( v163 )
    {
      if ( v163 > 0x400 )
      {
        v163 = 1024;
        v57 = 1024;
      }
      lread(a2, v184, v57);
      v184[v163] = 0;
      v51 = qstrdup(v184);
    }
    sub_3140((__int64)"Title '%s'", v51, v57, v52, v53, v54, (__m128)-1LL, a6, a7, a8, v55, v56, a11, a12, v146);
    qfree(v51);
    switch ( *(_BYTE *)(a1 + 54) )
    {
      case 0:
        v64 = "unknown";
        break;
      case 1:
        v64 = "OS/2";
        break;
      case 2:
        v64 = "MS Windows";
        break;
      case 3:
        v64 = "DOS 4.x";
        break;
      case 4:
        v64 = "MS Windows 386";
        break;
      case 5:
        v64 = "Borland Operating System Services (BOSS)";
        break;
      default:
        qsnprintf(v184, 1024, "unknown (%04X)", *(unsigned __int8 *)(a1 + 54));
        v64 = v184;
        break;
    }
    sub_3140(
      (__int64)"Target operating system         %s",
      (__int64)v64,
      v58,
      v59,
      v60,
      v61,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v62,
      v63,
      a11,
      a12,
      v147);
    sub_3140(
      (__int64)"File Load CRC                   0%08Xh",
      *(unsigned int *)(a1 + 8),
      v65,
      v66,
      v67,
      v68,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v69,
      v70,
      a11,
      a12,
      v148);
    sub_3140(
      (__int64)"Program Entry Point   (CS:IP)   %04X:%04X",
      *(unsigned __int16 *)(a1 + 22),
      *(unsigned __int16 *)(a1 + 20),
      v71,
      v72,
      v73,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v74,
      v75,
      a11,
      a12,
      v149);
    sub_3140(
      (__int64)"Initial Stack Pointer (SS:SP)   %04X:%04X",
      *(unsigned __int16 *)(a1 + 26),
      *(unsigned __int16 *)(a1 + 24),
      v76,
      v77,
      v78,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v79,
      v80,
      a11,
      a12,
      v150);
    sub_3140(
      (__int64)"Auto Data Segment Index         %04Xh  ( %5u. )",
      *(unsigned __int16 *)(a1 + 14),
      *(unsigned __int16 *)(a1 + 14),
      v81,
      v82,
      v83,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v84,
      v85,
      a11,
      a12,
      v151);
    sub_3140(
      (__int64)"Initial Local Heap Size         %04Xh  ( %5u. )",
      *(unsigned __int16 *)(a1 + 16),
      *(unsigned __int16 *)(a1 + 16),
      v86,
      v87,
      v88,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v89,
      v90,
      a11,
      a12,
      v152);
    sub_3140(
      (__int64)"Initial Stack Size              %04Xh  ( %5u. )",
      *(unsigned __int16 *)(a1 + 18),
      *(unsigned __int16 *)(a1 + 18),
      v91,
      v92,
      v93,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v94,
      v95,
      a11,
      a12,
      v153);
    sub_3140(
      (__int64)"Linker Version                  %d.%d",
      *(unsigned __int8 *)(a1 + 2),
      *(unsigned __int8 *)(a1 + 3),
      v96,
      v97,
      v98,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v99,
      v100,
      a11,
      a12,
      v154);
    sub_3140(
      (__int64)"Minimum code swap area size     %d",
      *(unsigned __int16 *)(a1 + 60),
      v101,
      v102,
      v103,
      v104,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v105,
      v106,
      a11,
      a12,
      v155);
    sub_3140(
      (__int64)"Expected Windows Version        %d.%d",
      *(unsigned __int8 *)(a1 + 63),
      *(unsigned __int8 *)(a1 + 62),
      v107,
      v108,
      v109,
      (__m128)-1LL,
      a6,
      a7,
      a8,
      v110,
      v111,
      a11,
      a12,
      v156);
    v112 = qsnprintf(v184, 1024, "Program Flags (%04X): ", *(unsigned __int16 *)(a1 + 12));
    v113 = (unsigned __int64)&v184[v112];
    if ( v113 >= (unsigned __int64)v186 )
    {
LABEL_220:
      if ( !under_debugger )
        goto LABEL_221;
LABEL_255:
      BUG();
    }
    v114 = *(_WORD *)(a1 + 12);
    v115 = "Application";
    if ( v114 < 0 )
      v115 = "DLL";
    if ( v112 == 1023 )
    {
LABEL_189:
      *(_BYTE *)v113 = 0;
      v117 = (_BYTE *)(&dword_0 + 1);
    }
    else
    {
      while ( 1 )
      {
        v116 = *v115++;
        *(_BYTE *)v113 = v116;
        if ( !v116 )
          break;
        if ( (char *)++v113 == &v185 )
          goto LABEL_189;
      }
      v117 = &v186[-v113];
    }
    v118 = "Multiple";
    if ( (v114 & 2) == 0 )
    {
      v118 = "No";
      if ( (v114 & 1) != 0 )
        v118 = "Single";
    }
    v119 = qsnprintf(v113, v117, " %s data", v118);
    v124 = *(unsigned __int16 *)(a1 + 12);
    v125 = (char *)(v113 + v119);
    if ( (v124 & 4) != 0 )
    {
      if ( v125 >= v186 )
      {
        if ( under_debugger )
          goto LABEL_255;
        goto LABEL_221;
      }
      v126 = " Global initialization";
      if ( v125 == &v185 )
      {
LABEL_198:
        v185 = 0;
        v145 = v124 & 0x300;
        if ( (v124 & 0x300) != 0x200 )
        {
          if ( v145 == 768 )
          {
LABEL_190:
            v185 = 0;
LABEL_191:
            v125 = &v185;
            goto LABEL_139;
          }
          if ( v145 != 256 )
            goto LABEL_191;
          v125 = &v185;
          goto LABEL_133;
        }
        v125 = &v185;
        goto LABEL_203;
      }
      while ( 1 )
      {
        v120 = *(unsigned __int8 *)v126++;
        *v125 = v120;
        if ( !(_BYTE)v120 )
          break;
        if ( ++v125 == &v185 )
          goto LABEL_198;
      }
    }
    v126 = (const char *)v124;
    LOWORD(v126) = v124 & 0x300;
    if ( (v124 & 0x300) != 0x200 )
    {
      if ( (_WORD)v126 != 768 )
      {
        if ( (_WORD)v126 != 256 )
          goto LABEL_139;
LABEL_133:
        v126 = " Incompatible with PM";
        goto LABEL_134;
      }
      v126 = " Uses windowing API";
LABEL_134:
      if ( v125 >= v186 )
      {
        if ( under_debugger )
          goto LABEL_255;
        goto LABEL_221;
      }
      if ( v125 != &v185 )
      {
        while ( 1 )
        {
          v120 = *(unsigned __int8 *)v126++;
          *v125 = v120;
          if ( !(_BYTE)v120 )
            break;
          if ( ++v125 == &v185 )
            goto LABEL_190;
        }
LABEL_139:
        if ( (v124 & 0x800) == 0 )
          goto LABEL_147;
        v126 = (const char *)*(unsigned __int8 *)(a1 + 54);
        if ( (_BYTE)v126 == 2 )
        {
          if ( v125 >= v186 )
            goto LABEL_250;
          v126 = " Self loading";
          if ( v125 == &v185 )
            goto LABEL_192;
          while ( 1 )
          {
            v120 = *(unsigned __int8 *)v126++;
            *v125 = v120;
            if ( !(_BYTE)v120 )
              break;
            if ( ++v125 == &v185 )
              goto LABEL_192;
          }
        }
        else
        {
          if ( (_BYTE)v126 != 1 )
          {
            if ( v125 >= v186 )
              goto LABEL_250;
            if ( v125 != &v185 )
            {
              v126 = " Unknown (0x0800)";
              do
              {
                v120 = *(unsigned __int8 *)v126++;
                *v125 = v120;
                if ( !(_BYTE)v120 )
                  goto LABEL_147;
              }
              while ( ++v125 != &v185 );
            }
LABEL_192:
            v185 = 0;
            if ( (v124 & 0x2000) == 0 )
              goto LABEL_153;
            goto LABEL_193;
          }
          if ( v125 >= v186 )
          {
LABEL_250:
            if ( under_debugger )
              goto LABEL_255;
            goto LABEL_221;
          }
          if ( v125 == &v185 )
            goto LABEL_192;
          v126 = " Family API";
          while ( 1 )
          {
            v120 = *(unsigned __int8 *)v126++;
            *v125 = v120;
            if ( !(_BYTE)v120 )
              break;
            if ( ++v125 == &v185 )
              goto LABEL_192;
          }
        }
LABEL_147:
        if ( (v124 & 0x2000) == 0 )
          goto LABEL_153;
        if ( v125 >= v186 )
        {
          if ( under_debugger )
            goto LABEL_255;
          goto LABEL_221;
        }
        if ( v125 != &v185 )
        {
          v126 = " Errors in image";
          while ( 1 )
          {
            v120 = *(unsigned __int8 *)v126++;
            *v125 = v120;
            if ( !(_BYTE)v120 )
              break;
            if ( ++v125 == &v185 )
              goto LABEL_193;
          }
LABEL_153:
          sub_3140(
            (__int64)"%s",
            (__int64)v184,
            (__int64)v126,
            v120,
            v121,
            (__int64)v186,
            (__m128)-1LL,
            a6,
            a7,
            a8,
            v122,
            v123,
            a11,
            a12,
            v157);
          v127 = qsnprintf(v184, 1024, "Other EXE Flags (%04X):", *(unsigned __int8 *)(a1 + 55));
          v132 = *(_BYTE *)(a1 + 55);
          v133 = v186;
          v134 = (unsigned __int64)&v184[v127];
          if ( (v132 & 1) != 0 )
          {
            if ( v134 >= (unsigned __int64)v186 )
            {
              if ( under_debugger )
                goto LABEL_255;
LABEL_221:
              interr(520);
            }
            v128 = (__int64)" Long file names";
            if ( v127 == 1023 )
            {
LABEL_194:
              *(_BYTE *)v134 = 0;
            }
            else
            {
              while ( 1 )
              {
                v135 = *(_BYTE *)v128++;
                *(_BYTE *)v134 = v135;
                if ( !v135 )
                  break;
                if ( (char *)++v134 == &v185 )
                  goto LABEL_194;
              }
            }
          }
          if ( (v132 & 2) != 0 )
          {
            if ( v134 >= (unsigned __int64)v186 )
            {
              if ( under_debugger )
                goto LABEL_255;
              goto LABEL_221;
            }
            v136 = " 2.X protected mode";
            if ( (char *)v134 == &v185 )
            {
LABEL_195:
              v185 = 0;
              if ( (v132 & 4) == 0 )
              {
LABEL_196:
                v134 = (unsigned __int64)&v185;
                goto LABEL_171;
              }
LABEL_197:
              v185 = 0;
              goto LABEL_196;
            }
            while ( 1 )
            {
              v128 = *(unsigned __int8 *)v136++;
              *(_BYTE *)v134 = v128;
              if ( !(_BYTE)v128 )
                break;
              if ( (char *)++v134 == &v185 )
                goto LABEL_195;
            }
          }
          if ( (v132 & 4) == 0 )
          {
LABEL_171:
            v138 = v132 & 8;
            if ( (_DWORD)v138 )
              qsnprintf(
                v134,
                &v186[-v134],
                " Fastload area (start: %08X, size: %08X)",
                *(unsigned __int16 *)(a1 + 56) << *(_WORD *)(a1 + 50),
                *(unsigned __int16 *)(a1 + 58) << *(_WORD *)(a1 + 50));
            sub_3140(
              (__int64)"%s",
              (__int64)v184,
              v128,
              v138,
              v129,
              (__int64)v133,
              (__m128)-1LL,
              a6,
              a7,
              a8,
              v130,
              v131,
              a11,
              a12,
              v158);
            sub_3140(
              (__int64)"----------------------------------------------------------------------------",
              (__int64)v184,
              v139,
              v140,
              v141,
              v142,
              (__m128)-1LL,
              a6,
              a7,
              a8,
              v143,
              v144,
              a11,
              a12,
              v159);
            goto LABEL_10;
          }
          if ( v134 >= (unsigned __int64)v186 )
          {
            if ( under_debugger )
              goto LABEL_255;
            goto LABEL_221;
          }
          if ( (char *)v134 != &v185 )
          {
            v137 = " 2.X proportional font";
            while ( 1 )
            {
              v128 = *(unsigned __int8 *)v137++;
              *(_BYTE *)v134 = v128;
              if ( !(_BYTE)v128 )
                goto LABEL_171;
              if ( (char *)++v134 == &v185 )
                goto LABEL_197;
            }
          }
          goto LABEL_197;
        }
LABEL_193:
        v185 = 0;
        goto LABEL_153;
      }
      goto LABEL_190;
    }
LABEL_203:
    v126 = " Compatible with PM";
    goto LABEL_134;
  }
  return 1;
}

