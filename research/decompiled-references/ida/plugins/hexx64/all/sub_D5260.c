unsigned __int64 __fastcall sub_D5260(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        double a7,
        char a8,
        char a9)
{
  int v11; // ebx
  int v12; // r13d
  double v13; // xmm0_8
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  _DWORD *v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // r12
  unsigned int v22; // edi
  unsigned int v23; // ecx
  __int64 v24; // rax
  int **v25; // rax
  int *v26; // rdx
  __int64 v27; // rdi
  int *v28; // rax
  char v29; // r8
  char v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rsi
  _DWORD *v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rdi
  _DWORD *v41; // rax
  _DWORD *v42; // r12
  char v43; // al
  unsigned int v44; // r8d
  __int64 v45; // r12
  unsigned int v46; // eax
  int v47; // ecx
  signed int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  char v51; // al
  _DWORD *v52; // rax
  __int64 v53; // rsi
  _DWORD *v54; // rcx
  _DWORD *v55; // rax
  _DWORD *v56; // r12
  int v57; // eax
  _DWORD *v58; // rax
  __int64 v59; // rsi
  char v60; // al
  __int64 v61; // r9
  char v62; // al
  unsigned int v63; // eax
  int v64; // esi
  int v65; // kr08_4
  signed int v66; // eax
  int v67; // eax
  _DWORD *v68; // rax
  _DWORD *v69; // rcx
  unsigned int v70; // edx
  __int64 v71; // rdx
  _DWORD *v72; // rdi
  __int64 v73; // [rsp+8h] [rbp-98h]
  int v74; // [rsp+8h] [rbp-98h]
  unsigned int v75; // [rsp+10h] [rbp-90h]
  unsigned int v76; // [rsp+10h] [rbp-90h]
  int v79; // [rsp+20h] [rbp-80h]
  int v80; // [rsp+24h] [rbp-7Ch]
  __int64 v82; // [rsp+30h] [rbp-70h]
  unsigned int v83; // [rsp+38h] [rbp-68h]
  unsigned int v84; // [rsp+38h] [rbp-68h]
  unsigned int v85; // [rsp+38h] [rbp-68h]
  unsigned int v86; // [rsp+38h] [rbp-68h]
  unsigned int v87; // [rsp+38h] [rbp-68h]
  unsigned int v88; // [rsp+38h] [rbp-68h]
  unsigned int v89; // [rsp+38h] [rbp-68h]
  int v90; // [rsp+38h] [rbp-68h]
  unsigned int v91; // [rsp+3Ch] [rbp-64h]
  unsigned int v92; // [rsp+3Ch] [rbp-64h]
  unsigned int v93; // [rsp+3Ch] [rbp-64h]
  unsigned int v94; // [rsp+3Ch] [rbp-64h]
  unsigned int v95; // [rsp+3Ch] [rbp-64h]
  unsigned int v96; // [rsp+3Ch] [rbp-64h]
  unsigned int v97; // [rsp+3Ch] [rbp-64h]
  unsigned int v98; // [rsp+3Ch] [rbp-64h]
  int v99; // [rsp+40h] [rbp-60h]
  unsigned int v100; // [rsp+48h] [rbp-58h]
  __int64 v101; // [rsp+48h] [rbp-58h]
  unsigned int *v102; // [rsp+50h] [rbp-50h] BYREF
  __int128 v103; // [rsp+58h] [rbp-48h]
  unsigned __int64 v104; // [rsp+68h] [rbp-38h]

  v99 = a5;
  v104 = __readfsqword(0x28u);
  v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  v100 = *(_DWORD *)(a1 + 72);
  if ( ((a5 - 1) & a5) != 0 )
    sub_CF1B0(a1, (__int64)a2);
  v11 = 0;
  v12 = 2 * v79;
  if ( a5 <= 2 * v79 )
  {
    if ( a5 >= v79 )
    {
      if ( v100 > 0x10 )
      {
LABEL_5:
        if ( v100 == 176 || v100 == 256 )
          goto LABEL_49;
        goto LABEL_7;
      }
LABEL_220:
      v100 = getinf();
      goto LABEL_5;
    }
    if ( v100 > 0x10 )
    {
LABEL_46:
      if ( v100 == 176 || v100 == 256 )
        goto LABEL_8;
      goto LABEL_48;
    }
LABEL_218:
    v100 = getinf();
    goto LABEL_46;
  }
  if ( v100 <= 0x10 )
  {
    v67 = getinf();
    if ( v67 == 176 || v67 == 256 )
    {
      if ( v79 <= v12 )
      {
LABEL_219:
        v99 = 2 * v79;
        goto LABEL_220;
      }
LABEL_217:
      v99 = 2 * v79;
      goto LABEL_218;
    }
  }
  else if ( v100 == 176 || v100 == 256 )
  {
    if ( v79 <= v12 )
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
    v99 = v12;
    goto LABEL_8;
  }
  if ( (unsigned __int8)getinf_flag() )
    goto LABEL_8;
  if ( v79 <= v12 )
  {
    if ( v100 > 0x10 )
    {
      v99 = 2 * v79;
LABEL_7:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_8;
LABEL_49:
      v99 = v79;
      if ( *(_DWORD *)a3 != 1 )
        goto LABEL_9;
      return sub_D5110(a1, (__int64)a2, *(_QWORD *)(a3 + 8), a4, v99, a6, a7, a9);
    }
    goto LABEL_219;
  }
  if ( v100 <= 0x10 )
    goto LABEL_217;
  v99 = 2 * v79;
LABEL_48:
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_49;
LABEL_8:
  if ( *(_DWORD *)a3 == 1 )
    return sub_D5110(a1, (__int64)a2, *(_QWORD *)(a3 + 8), a4, v99, a6, a7, a9);
LABEL_9:
  v13 = 0.0;
  v102 = nullptr;
  v103 = 0;
  sub_D2BA0(a1, (__int64)&v102, (_DWORD *)a3, (unsigned int)a4, a8);
  v14 = v103;
  v101 = (__int64)v102;
  if ( (_QWORD)v103 )
  {
    if ( a8 )
    {
      if ( *(_DWORD *)a3 == 4 )
      {
        v71 = *(_QWORD *)(a1 + 80);
        if ( !*(_BYTE *)(v71 + 145) )
        {
          v15 = *(_QWORD *)(a1 + 120);
          if ( !v15 )
            goto LABEL_13;
          goto LABEL_229;
        }
        v72 = *(_DWORD **)(v71 + 112);
        if ( v72[4] != 12 )
          goto LABEL_238;
        if ( (*(_DWORD *)a1 & 0xFFFFFFFB) != 2 )
          goto LABEL_238;
        v68 = *(_DWORD **)(a1 + 32);
        v69 = &v68[*(_QWORD *)(a1 + 40)];
        v70 = *v102;
        if ( v68 == v69 )
          goto LABEL_238;
        while ( v70 != *v68 )
        {
          if ( v69 == ++v68 )
            goto LABEL_238;
        }
        if ( v69 == v68 )
        {
LABEL_238:
          v15 = *(_QWORD *)(a1 + 120);
          if ( !v15 )
            goto LABEL_13;
          goto LABEL_230;
        }
        *(_QWORD *)&v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v102[1]), _mm_cvtsi32_si128(v70)).m128i_u64[0];
        *(double *)v102 = v13;
        v15 = *(_QWORD *)(a1 + 120);
        if ( !v15 )
          goto LABEL_13;
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 120);
        if ( !v15 )
        {
LABEL_13:
          v80 = 0;
LABEL_14:
          v82 = a1 + 8;
LABEL_15:
          v16 = 0;
          while ( 1 )
          {
            v17 = *(unsigned int *)(v101 + 4 * v16);
            if ( a8 )
            {
              v18 = *(_DWORD **)(a1 + 8);
              v19 = &v18[*(_QWORD *)(a1 + 16)];
              if ( v18 != v19 )
              {
                v20 = *(_DWORD **)(a1 + 8);
                while ( (_DWORD)v17 != *v20 )
                {
                  if ( v19 == ++v20 )
                    goto LABEL_145;
                }
                if ( v20 != v19 )
                {
                  LODWORD(v21) = v20 - v18;
                  if ( (_DWORD)v21 != -1 )
                    goto LABEL_23;
                }
              }
LABEL_145:
              v54 = *(_DWORD **)(a1 + 32);
              v40 = v101;
              v55 = &v54[*(_QWORD *)(a1 + 40)];
              v56 = v54;
              if ( v54 == v55 )
                goto LABEL_190;
              while ( (_DWORD)v17 != *v56 )
              {
                if ( v55 == ++v56 )
                  goto LABEL_189;
              }
              if ( v55 == v56 )
                goto LABEL_190;
              v21 = v56 - v54;
              v23 = v21;
              if ( (_DWORD)v21 != -1 )
                goto LABEL_81;
            }
            else
            {
              v36 = *(_DWORD **)(a1 + 88);
              v37 = &v36[*(_QWORD *)(a1 + 96)];
              if ( v36 != v37 )
              {
                v38 = *(_DWORD **)(a1 + 88);
                while ( (_DWORD)v17 != *v38 )
                {
                  if ( v37 == ++v38 )
                    goto LABEL_75;
                }
                if ( v38 != v37 )
                {
                  LODWORD(v21) = v38 - v36;
                  if ( (_DWORD)v21 != -1 )
                  {
LABEL_23:
                    if ( *(_DWORD *)a1 == 3 )
                      goto LABEL_86;
                    if ( *(_DWORD *)a1 != 5 )
                    {
                      v23 = -1;
                      goto LABEL_87;
                    }
                    v22 = a2[6];
                    v23 = -1;
                    if ( (v22 & 1) != 0 )
                      goto LABEL_26;
                    goto LABEL_135;
                  }
                }
              }
LABEL_75:
              v39 = *(_DWORD **)(a1 + 112);
              v40 = v101;
              v41 = &v39[*(_QWORD *)(a1 + 120)];
              v42 = v39;
              if ( v39 == v41 )
              {
LABEL_190:
                if ( *(_DWORD *)a1 != 5 )
                {
LABEL_152:
                  v24 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_31;
                  v23 = -1;
LABEL_203:
                  LODWORD(v21) = -1;
                  goto LABEL_89;
                }
                v22 = a2[6];
                if ( (v22 & 1) != 0 )
                {
LABEL_84:
                  if ( !under_debugger )
                    sub_383060(0xCCB9u, v13);
LABEL_257:
                  BUG();
                }
                v23 = -1;
                LODWORD(v21) = -1;
                goto LABEL_135;
              }
              while ( (_DWORD)v17 != *v42 )
              {
                if ( v41 == ++v42 )
                {
LABEL_189:
                  v101 = v40;
                  goto LABEL_190;
                }
              }
              if ( v42 == v41 )
                goto LABEL_190;
              v21 = v42 - v39;
              v23 = v21;
              if ( (_DWORD)v21 != -1 )
              {
LABEL_81:
                if ( *(_DWORD *)a1 == 3 )
                {
LABEL_86:
                  v23 = v21;
LABEL_87:
                  v24 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_107;
                  goto LABEL_89;
                }
                if ( *(_DWORD *)a1 != 5 )
                {
                  v24 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_94;
                  goto LABEL_203;
                }
                goto LABEL_83;
              }
            }
            if ( *(_DWORD *)a1 != 5 )
              goto LABEL_152;
LABEL_83:
            v22 = a2[6];
            if ( (v22 & 1) != 0 )
              goto LABEL_84;
            LODWORD(v21) = -1;
LABEL_135:
            v52 = *(_DWORD **)v82;
            v53 = *(_QWORD *)v82 + 4LL * *(_QWORD *)(v82 + 8);
            if ( *(_QWORD *)v82 == v53 )
              goto LABEL_142;
            while ( (_DWORD)v17 != *v52 )
            {
              if ( (_DWORD *)v53 == ++v52 )
                goto LABEL_142;
            }
            if ( (_DWORD *)v53 == v52 )
            {
LABEL_142:
              v24 = *(_QWORD *)(a1 + 80);
              if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
              {
LABEL_92:
                if ( (_DWORD)v21 != -1 )
                {
LABEL_107:
                  v17 = *a2;
                  if ( v11 )
                  {
                    if ( (_DWORD)v17 != (_DWORD)v21 )
                      goto LABEL_169;
                    *a2 = v21 + 1;
                    if ( v23 == -1 )
                      goto LABEL_31;
                    goto LABEL_110;
                  }
                  goto LABEL_116;
                }
                if ( v23 == -1 )
                  goto LABEL_31;
LABEL_94:
                v44 = a2[1];
                goto LABEL_95;
              }
              goto LABEL_89;
            }
            a2[6] = v22 | 1;
            if ( (_DWORD)v21 == -1 )
              goto LABEL_84;
LABEL_26:
            v24 = *(_QWORD *)(a1 + 80);
            if ( *(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) == 13 )
            {
              v17 = *a2;
              if ( v11 )
                goto LABEL_168;
LABEL_115:
              v23 = -1;
              goto LABEL_116;
            }
            if ( !*(_QWORD *)(a1 + 120) )
            {
              v17 = *a2;
              if ( v11 )
              {
                if ( (_DWORD)v21 != (_DWORD)v17 )
                  goto LABEL_169;
LABEL_30:
                *a2 = v21 + 1;
                goto LABEL_31;
              }
              goto LABEL_115;
            }
            v23 = -1;
LABEL_89:
            v83 = v23;
            v91 = v17;
            v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 112) + 200LL))(
                    *(_QWORD *)(v24 + 112),
                    **(unsigned int **)(a1 + 112));
            v17 = v91;
            v23 = v83;
            if ( !v43 )
            {
              if ( *(_QWORD *)(a1 + 120) <= 1u
                || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
              {
                goto LABEL_92;
              }
LABEL_193:
              v86 = v23;
              v94 = v17;
              v57 = round_down_power2();
              v23 = v86;
              v17 = v94;
              goto LABEL_159;
            }
            v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                    **(unsigned int **)(a1 + 112));
            v17 = v91;
            v23 = v83;
            if ( *(_QWORD *)(a1 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v57 )
            {
              goto LABEL_193;
            }
LABEL_159:
            if ( v57 > 7 )
              goto LABEL_92;
            if ( v23 == -1 )
            {
              if ( (_DWORD)v21 == -1 )
                goto LABEL_31;
              v17 = *a2;
              if ( v11 )
              {
LABEL_168:
                if ( (_DWORD)v17 != (_DWORD)v21 )
                  goto LABEL_169;
                goto LABEL_30;
              }
              goto LABEL_116;
            }
            v44 = a2[1];
            if ( v44 + 1 != v23 )
            {
              if ( (_DWORD)v21 != -1 )
              {
LABEL_163:
                v17 = *a2;
                if ( v11 )
                {
                  if ( (_DWORD)v21 != (_DWORD)v17 )
                    goto LABEL_169;
LABEL_165:
                  *a2 = v21 + 1;
LABEL_110:
                  if ( a2[1] != v23 )
                    goto LABEL_244;
                  a2[1] = v23 + 1;
                  if ( *(_DWORD *)a1 == 4 )
                  {
LABEL_112:
                    if ( !under_debugger )
                      sub_383060(0xCB03u, v13);
                    goto LABEL_257;
                  }
                  goto LABEL_31;
                }
LABEL_116:
                v49 = *(_DWORD *)(a1 + 72);
                if ( v49 - 208 > 0x2F && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL) < v99 )
                {
LABEL_182:
                  if ( v49 <= 0x10 )
                  {
                    v89 = v17;
                    v97 = v23;
                    v49 = getinf();
                    v17 = v89;
                    v23 = v97;
                  }
                  if ( v49 != 176 && v49 != 256 )
                  {
                    v85 = v17;
                    v93 = v23;
                    v60 = getinf_flag();
                    v23 = v93;
                    v17 = v85;
                    if ( v60 )
                    {
                      v17 = (v85 + 1) & 0xFFFFFFFE;
                      if ( (_DWORD)v17 != (_DWORD)v21 )
                      {
LABEL_169:
                        if ( !under_debugger )
                          sub_383060(0xC7DEu, v13);
                        goto LABEL_257;
                      }
                      goto LABEL_118;
                    }
                  }
                }
                if ( (_DWORD)v21 != (_DWORD)v17 )
                  goto LABEL_169;
LABEL_118:
                *a2 = v21 + 1;
                if ( v23 == -1 )
                  goto LABEL_31;
                goto LABEL_119;
              }
LABEL_95:
              if ( v11 )
              {
                if ( v23 != v44 )
                  goto LABEL_244;
LABEL_97:
                a2[1] = v44 + 1;
                if ( *(_DWORD *)a1 == 4 )
                  goto LABEL_98;
                goto LABEL_31;
              }
              LODWORD(v21) = -1;
LABEL_120:
              if ( v80 < v99 )
              {
LABEL_121:
                v50 = *(_DWORD *)(a1 + 72);
                if ( v50 <= 0x10 )
                {
                  v88 = v44;
                  v96 = v23;
                  v50 = getinf();
                  v44 = v88;
                  v23 = v96;
                }
                if ( v50 != 176 && v50 != 256 )
                {
                  v84 = v44;
                  v92 = v23;
                  v51 = getinf_flag();
                  v44 = v84;
                  v23 = v92;
                  if ( v51 )
                    v44 = (v84 + 1) & 0xFFFFFFFE;
                }
                v17 = v44 - a2[1];
                if ( (int)(v44 - a2[1]) > 0 && *(_DWORD *)a1 == 4 )
                {
                  v61 = *(_QWORD *)(a1 + 16);
                  if ( *(_QWORD *)(a1 + 120) )
                  {
                    v73 = *(_QWORD *)(a1 + 16);
                    v75 = v44;
                    v87 = v44 - a2[1];
                    v95 = v23;
                    v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                            *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                            **(unsigned int **)(a1 + 112));
                    v23 = v95;
                    LODWORD(v17) = v87;
                    v44 = v75;
                    LODWORD(v61) = v73;
                    if ( v62 )
                    {
                      v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                              **(unsigned int **)(a1 + 112),
                              v87,
                              v95,
                              v75,
                              v73);
                      v23 = v95;
                      LODWORD(v17) = v87;
                      v44 = v75;
                      LODWORD(v61) = v73;
                    }
                    else
                    {
                      v63 = 8;
                    }
                    if ( *(_QWORD *)(a1 + 120) > 1u
                      && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v63 )
                    {
                      v74 = v61;
                      v76 = v44;
                      v90 = v17;
                      v98 = v23;
                      v63 = round_down_power2();
                      v23 = v98;
                      LODWORD(v17) = v90;
                      v44 = v76;
                      LODWORD(v61) = v74;
                    }
                  }
                  else
                  {
                    v63 = 8;
                  }
                  v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v65 = (v64 + v63 * v17 - 1) & -v64;
                  v17 = (unsigned int)(v65 >> 31);
                  LODWORD(v17) = v65 % v64;
                  v66 = *a2 + v65 / v64;
                  if ( v66 > (int)v61 )
                    v66 = v61;
                  *a2 = v66;
                }
              }
              if ( v44 != v23 )
              {
LABEL_244:
                if ( !under_debugger )
                  sub_383060(0xC7DFu, v13);
                goto LABEL_257;
              }
              a2[1] = v44 + 1;
              if ( *(_DWORD *)a1 == 4 )
              {
                if ( (_DWORD)v21 != -1 )
                  goto LABEL_112;
                v45 = *(_QWORD *)(a1 + 16);
                if ( !*(_QWORD *)(a1 + 120) )
                {
LABEL_133:
                  v46 = 8;
LABEL_104:
                  v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v48 = *a2 + (int)((v47 + v46 - 1) & -v47) / v47;
                  if ( v48 > (int)v45 )
                    v48 = v45;
                  *a2 = v48;
                  goto LABEL_31;
                }
LABEL_99:
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80)
                                                                                              + 112LL)
                                                                                + 200LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112),
                       v17) )
                {
                  v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                          **(unsigned int **)(a1 + 112));
                }
                else
                {
                  v46 = 8;
                }
                if ( *(_QWORD *)(a1 + 120) > 1u
                  && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v46 )
                {
                  v46 = round_down_power2();
                }
                goto LABEL_104;
              }
              goto LABEL_31;
            }
            a2[1] = v23;
            if ( (v23 & 1) != 0 )
            {
              if ( !under_debugger )
                sub_383060(0xCCBAu, v13);
              goto LABEL_257;
            }
            v58 = *(_DWORD **)v82;
            v59 = *(_QWORD *)v82 + 4LL * *(_QWORD *)(v82 + 8);
            if ( *(_QWORD *)v82 != v59 )
            {
              while ( (_DWORD)v17 != *v58 )
              {
                if ( (_DWORD *)v59 == ++v58 )
                  goto LABEL_177;
              }
              if ( v58 != (_DWORD *)v59 )
              {
                if ( !under_debugger )
                  sub_383060(0xCCBBu, v13);
                goto LABEL_257;
              }
            }
LABEL_177:
            if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 )
            {
              if ( (_DWORD)v21 != -1 )
                goto LABEL_163;
            }
            else
            {
              LODWORD(v21) = *a2;
              if ( *a2 != -1 )
              {
                if ( v11 )
                  goto LABEL_165;
                v49 = *(_DWORD *)(a1 + 72);
                v17 = v49 - 208;
                if ( (unsigned int)v17 > 0x2F )
                {
                  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL);
                  if ( v99 > *(_DWORD *)(v17 + 80) )
                  {
                    v17 = (unsigned int)v21;
                    goto LABEL_182;
                  }
                  goto LABEL_118;
                }
                *a2 = v21 + 1;
LABEL_119:
                v44 = a2[1];
                goto LABEL_120;
              }
            }
            if ( v11 )
            {
              v44 = v23;
              goto LABEL_97;
            }
            if ( v80 < v99 )
            {
              v44 = v23;
              LODWORD(v21) = -1;
              goto LABEL_121;
            }
            a2[1] = v23 + 1;
            if ( *(_DWORD *)a1 == 4 )
            {
LABEL_98:
              v45 = *(_QWORD *)(a1 + 16);
              if ( !*(_QWORD *)(a1 + 120) )
                goto LABEL_133;
              goto LABEL_99;
            }
LABEL_31:
            v16 = ++v11;
            if ( v11 >= v14 )
              goto LABEL_32;
          }
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 120);
      if ( !v15 )
      {
        v80 = 0;
        goto LABEL_65;
      }
    }
    v71 = *(_QWORD *)(a1 + 80);
LABEL_229:
    v72 = *(_DWORD **)(v71 + 112);
LABEL_230:
    v80 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v72 + 32LL))(
            v72,
            *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4 * v15 - 4));
    if ( a8 )
      goto LABEL_14;
LABEL_65:
    v82 = a1 + 88;
    goto LABEL_15;
  }
LABEL_32:
  if ( *(_DWORD *)a3 != 2 )
    goto LABEL_40;
  v25 = *(int ***)(a3 + 8);
  v26 = *v25;
  v27 = (__int64)&(*v25)[6 * (_QWORD)v25[1]];
  if ( *v25 == (int *)v27 )
    goto LABEL_40;
  v28 = *v25;
  v29 = 0;
  v30 = 0;
  do
  {
    while ( 1 )
    {
      v31 = *v28;
      if ( (unsigned int)(*v28 - 3) <= 1 )
        break;
      v28 += 6;
      v29 |= v31 == 1;
      if ( (int *)v27 == v28 )
        goto LABEL_38;
    }
    v28 += 6;
    v30 = 1;
  }
  while ( (int *)v27 != v28 );
LABEL_38:
  if ( v30 && v29 )
  {
    while ( *v26 != 1 )
    {
      v26 += 6;
      if ( (int *)v27 == v26 )
        goto LABEL_42;
    }
    v34 = *((_QWORD *)a2 + 2);
    v35 = *((unsigned __int16 *)v26 + 8);
    if ( v34 != -1 )
    {
      *((_QWORD *)a2 + 2) = ((v34 + v99 - 1) & -v99) + v35;
      LODWORD(v35) = *((unsigned __int16 *)v26 + 8);
    }
    sub_D5110(a1, (__int64)a2, *((_QWORD *)v26 + 1), a4 - v35, v79, a6, v13, a9);
  }
  else
  {
LABEL_40:
    v32 = *((_QWORD *)a2 + 2);
    if ( v32 != -1 )
      *((_QWORD *)a2 + 2) = a4 + ((v32 + v99 - 1) & -v99);
  }
LABEL_42:
  if ( v101 )
    qfree(v101);
  return v104 - __readfsqword(0x28u);
}

