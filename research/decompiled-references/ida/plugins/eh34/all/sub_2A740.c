unsigned __int64 __fastcall sub_2A740(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  __int64 v8; // rsi
  const __m128i *v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // rax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD); // rax
  unsigned __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, int); // rax
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  int v19; // r13d
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  int *v23; // r8
  int v24; // r15d
  const __m128i *v25; // r15
  const __m128i *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  _QWORD *v30; // rax
  int *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  int *v35; // r9
  int *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  _BOOL8 v39; // rdi
  __int64 v40; // rax
  __int64 (__fastcall *v41)(__int64, _QWORD *, _QWORD); // rax
  __int64 v42; // rbx
  const __m128i *v43; // rbx
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  int *v50; // r9
  const __m128i *v51; // r15
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  char v55; // r10
  __int8 *v56; // rax
  unsigned __int32 v57; // r14d
  unsigned __int32 v58; // r15d
  void (__fastcall *v59)(__int64, _QWORD *, _QWORD, _QWORD); // rax
  void (__fastcall *v60)(__int64, _QWORD *, __int64 *, __int64); // rax
  void (__fastcall *v61)(__int64, _QWORD *, int *, __int64 *, __int64); // rax
  _QWORD *v62; // rsi
  __int64 v63; // rdi
  unsigned int *v64; // rbx
  unsigned int *v65; // r13
  void (__fastcall *v66)(__int64, _QWORD *, __int64 **); // rax
  __int64 v67; // r14
  __int64 v68; // rbx
  int v69; // r13d
  __int64 v70; // r8
  __int64 v71; // r15
  __int64 v72; // rdx
  int *v73; // r15
  __int64 v74; // rcx
  int *v75; // rax
  char v76; // r10
  int v77; // edi
  int *v78; // rsi
  bool v79; // r15
  __m128i v80; // xmm1
  __m128i *v81; // rax
  int *v82; // rcx
  int *v83; // rdx
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  bool v87; // zf
  __int64 v88; // rdx
  __int64 (__fastcall *v89)(__int64, int); // rax
  __int64 v90; // rdi
  __int64 v91; // rcx
  int *v92; // rdi
  int v93; // esi
  __int64 v94; // rax
  int *v95; // rbx
  int v96; // edi
  __int64 v97; // rsi
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rbp
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rdi
  __int64 v106; // rbp
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rbp
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __m128i *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  signed int **v121; // rsi
  __int64 v122; // rdx
  __m128i v123; // xmm0
  bool v124; // cf
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  char v128; // r10
  __int64 v129; // rdx
  int *v130; // xmm0_8
  int *v131; // r9
  __m128i v132; // xmm1
  __int64 v133; // rax
  __int64 v134; // rdi
  __int64 v135; // r12
  __int64 v136; // rbp
  __int64 v137; // rax
  __int64 v138; // rdi
  __int64 v139; // rbp
  __int64 v140; // rax
  __int64 v141; // [rsp+0h] [rbp-288h]
  int *v142; // [rsp+8h] [rbp-280h]
  __m128i *i; // [rsp+10h] [rbp-278h]
  __int64 v144; // [rsp+18h] [rbp-270h]
  int *v145; // [rsp+20h] [rbp-268h]
  __m128i *v146; // [rsp+28h] [rbp-260h]
  const __m128i *v147; // [rsp+30h] [rbp-258h]
  int *v148; // [rsp+38h] [rbp-250h]
  unsigned int v149; // [rsp+44h] [rbp-244h]
  _QWORD *v150; // [rsp+48h] [rbp-240h]
  int *v151; // [rsp+50h] [rbp-238h]
  unsigned int v152; // [rsp+58h] [rbp-230h]
  int v153; // [rsp+5Ch] [rbp-22Ch]
  int v154; // [rsp+60h] [rbp-228h] BYREF
  __int64 v155; // [rsp+64h] [rbp-224h]
  int v156; // [rsp+6Ch] [rbp-21Ch]
  const __m128i *v157; // [rsp+70h] [rbp-218h] BYREF
  __int128 v158; // [rsp+78h] [rbp-210h]
  __int64 v159; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v160; // [rsp+98h] [rbp-1F0h]
  __int64 v161; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v162; // [rsp+B8h] [rbp-1D0h]
  _QWORD v163[4]; // [rsp+D0h] [rbp-1B8h] BYREF
  _QWORD v164[4]; // [rsp+F0h] [rbp-198h] BYREF
  signed int *v165; // [rsp+110h] [rbp-178h] BYREF
  __int64 v166; // [rsp+118h] [rbp-170h]
  int v167; // [rsp+138h] [rbp-150h] BYREF
  __m128i *v168; // [rsp+140h] [rbp-148h]
  const __m128i *v169; // [rsp+148h] [rbp-140h]
  int *v170; // [rsp+150h] [rbp-138h]
  __int64 v171; // [rsp+158h] [rbp-130h]
  char v172; // [rsp+160h] [rbp-128h] BYREF
  int v173; // [rsp+168h] [rbp-120h] BYREF
  void *v174; // [rsp+170h] [rbp-118h]
  int *v175; // [rsp+178h] [rbp-110h]
  int *v176; // [rsp+180h] [rbp-108h]
  __int64 v177; // [rsp+188h] [rbp-100h]
  __int64 *v178; // [rsp+190h] [rbp-F8h] BYREF
  __int128 v179; // [rsp+198h] [rbp-F0h]
  unsigned __int64 v180; // [rsp+1A8h] [rbp-E0h] BYREF
  __int128 v181; // [rsp+1B0h] [rbp-D8h]
  __m128i v182; // [rsp+1C0h] [rbp-C8h] BYREF
  int *v183; // [rsp+1D0h] [rbp-B8h]
  int *v184; // [rsp+1D8h] [rbp-B0h]
  __int64 *v185; // [rsp+1E0h] [rbp-A8h]
  __int64 v186; // [rsp+1E8h] [rbp-A0h]
  __m128i v187; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v188; // [rsp+200h] [rbp-88h]
  __int128 v189; // [rsp+208h] [rbp-80h]
  __int64 v190; // [rsp+218h] [rbp-70h]
  __int128 v191; // [rsp+220h] [rbp-68h]
  __int64 v192; // [rsp+230h] [rbp-58h]
  __int128 v193; // [rsp+238h] [rbp-50h]
  unsigned __int64 v194; // [rsp+248h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 268) )
    return v194 - __readfsqword(0x28u);
  v187.m128i_i64[0] = (__int64)a1;
  v187.m128i_i8[8] = 1;
  v188 = 0;
  v190 = 0;
  v146 = &v187;
  v189 = 0;
  v191 = 0;
  sub_C5F0(&v187, a2);
  v192 = 0;
  v193 = 0;
  v4 = (_QWORD *)sub_C7D0((__int64)&v187);
  v5 = *((unsigned __int8 *)a1 + 268);
  if ( !(_BYTE)v5 )
    sub_7964();
  v6 = *v4 + 16LL * *((int *)a1 + 66);
  v167 = 0;
  v147 = (const __m128i *)&v167;
  v169 = (const __m128i *)&v167;
  v170 = &v167;
  v142 = &v173;
  v175 = &v173;
  v176 = &v173;
  v168 = nullptr;
  v171 = 0;
  v157 = nullptr;
  v173 = 0;
  v174 = nullptr;
  v177 = 0;
  v150 = a1 + 27;
  v158 = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(&v187, a2);
  v8 = (__int64)(a1 + 27);
  v9 = (const __m128i *)(&qword_E0 + 3);
  v149 = hexdsp(227, a1 + 27, 0);
  if ( *((_DWORD *)a1 + 56) != v149 )
  {
    while ( 1 )
    {
      LODWORD(v164[0]) = v149;
      v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(227, v8);
      v11 = v6;
      v12 = v10(227, v6, 0);
      i = &v182;
      if ( *(_DWORD *)(v6 + 8) != v12 )
        break;
LABEL_62:
      v41 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(227, v11);
      v8 = (__int64)v150;
      v9 = (const __m128i *)(&qword_E0 + 3);
      v149 = v41(227, v150, v149 + 1);
      if ( *((_DWORD *)a1 + 56) == v149 )
        goto LABEL_63;
    }
LABEL_10:
    sub_28EA0((__int64)i, (__int64)a1, v12);
    v15 = (unsigned __int64)sub_BA40;
    v16 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
    if ( v16 == sub_BA40 )
    {
      if ( !a1[7] )
        goto LABEL_7;
      v17 = *(_DWORD *)(a1[6] + 24LL * v12 + 8);
    }
    else
    {
      v15 = (unsigned int)v12;
      v17 = v16((__int64)a1, v12);
    }
    if ( v17 != 2 )
    {
LABEL_7:
      v13 = v182.m128i_i64[0];
      if ( v182.m128i_i64[0] )
        goto LABEL_8;
      goto LABEL_9;
    }
    v141 = 0;
    v144 = 24LL * v12;
    v145 = (int *)&v178;
LABEL_15:
    v18 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v18 == sub_BA80 )
      v19 = *(_DWORD *)(*(_QWORD *)(a1[6] + v144) + 4 * v141);
    else
      v19 = v18((__int64)a1, v12, v141);
    v15 = LODWORD(v164[0]);
    v20 = sub_BE60((__int64)v146, v164[0], v19);
    v24 = v164[0];
    if ( !v20 )
    {
      if ( v19 != LODWORD(v164[0]) )
        goto LABEL_52;
      v25 = v168;
      if ( v168 )
        goto LABEL_25;
LABEL_57:
      v25 = v147;
      if ( v169 == v147 )
      {
        LOBYTE(v148) = v5;
        v25 = v147;
LABEL_32:
        v28 = operator new(0x28u);
        *(_DWORD *)(v28 + 32) = v12;
        v29 = (unsigned __int8)v148;
        *(_DWORD *)(v28 + 36) = v19;
        std::_Rb_tree_insert_and_rebalance(v29, v28, v25, v147);
        ++v171;
        goto LABEL_33;
      }
LABEL_61:
      v27 = std::_Rb_tree_decrement(v25, v15, v21, v22, v23);
      LODWORD(v22) = *(_DWORD *)(v27 + 32);
      goto LABEL_28;
    }
    if ( v19 == LODWORD(v164[0]) )
    {
      v88 = a1[46];
      v15 = (unsigned __int64)(a1 + 45);
      v89 = (__int64 (__fastcall *)(__int64, int))(a1 + 45);
      if ( !v88 )
        goto LABEL_132;
      do
      {
        while ( 1 )
        {
          v90 = *(_QWORD *)(v88 + 16);
          v91 = *(_QWORD *)(v88 + 24);
          if ( SLODWORD(v164[0]) > *(_DWORD *)(v88 + 32) )
            break;
          v89 = (__int64 (__fastcall *)(__int64, int))v88;
          v88 = *(_QWORD *)(v88 + 16);
          if ( !v90 )
            goto LABEL_130;
        }
        v88 = *(_QWORD *)(v88 + 24);
      }
      while ( v91 );
LABEL_130:
      if ( (__int64 (__fastcall *)(__int64, int))v15 == v89 || *((_DWORD *)v89 + 8) > SLODWORD(v164[0]) )
      {
LABEL_132:
        v15 = (unsigned __int64)v89;
        v165 = (signed int *)v164;
        v89 = (__int64 (__fastcall *)(__int64, int))sub_28040(a1 + 44, (__int64)v89, &v165);
      }
      *((_DWORD *)v89 + 9) = v24;
      *((_DWORD *)v89 + 10) = v12;
      goto LABEL_52;
    }
    v25 = v168;
    if ( !v168 )
      goto LABEL_57;
    while ( 1 )
    {
LABEL_25:
      v22 = v25[2].m128i_u32[0];
      if ( (int)v22 > v12 || (_DWORD)v22 == v12 && v19 < v25[2].m128i_i32[1] )
      {
        v26 = (const __m128i *)v25[1].m128i_i64[0];
        v15 = v5;
        if ( !v26 )
        {
LABEL_27:
          v27 = (__int64)v25;
          if ( (_BYTE)v15 )
          {
            if ( v169 == v25 )
            {
LABEL_31:
              LOBYTE(v148) = v5;
              if ( v25 != v147 )
              {
                v87 = v25[2].m128i_i32[0] == v12;
                if ( v25[2].m128i_i32[0] <= v12 )
                {
                  LOBYTE(v148) = 0;
                  if ( v87 )
                    LOBYTE(v148) = v19 < v25[2].m128i_i32[1];
                }
              }
              goto LABEL_32;
            }
            goto LABEL_61;
          }
LABEL_28:
          if ( (int)v22 < v12 || (_DWORD)v22 == v12 && v19 > *(_DWORD *)(v27 + 36) )
            goto LABEL_31;
LABEL_33:
          v30 = v174;
          if ( !v174 )
          {
            v31 = v142;
            goto LABEL_40;
          }
          v31 = v142;
          do
          {
            while ( 1 )
            {
              v32 = v30[2];
              v33 = v30[3];
              if ( SLODWORD(v164[0]) > *((_DWORD *)v30 + 8) )
                break;
              v31 = (int *)v30;
              v30 = (_QWORD *)v30[2];
              if ( !v32 )
                goto LABEL_38;
            }
            v30 = (_QWORD *)v30[3];
          }
          while ( v33 );
LABEL_38:
          if ( v31 == v142 || SLODWORD(v164[0]) < v31[8] )
          {
LABEL_40:
            v34 = operator new(0x58u);
            v32 = LODWORD(v164[0]);
            *(_DWORD *)(v34 + 48) = 0;
            v23 = (int *)v34;
            v34 += 48;
            *(_QWORD *)(v34 + 8) = 0;
            v35 = (int *)&v172;
            *(_DWORD *)(v34 - 16) = v32;
            *((_QWORD *)v23 + 8) = v34;
            *((_QWORD *)v23 + 9) = v34;
            v36 = v142;
            *((_QWORD *)v23 + 10) = 0;
            if ( v31 == v36 )
            {
              if ( !v177 )
                goto LABEL_115;
              v33 = (__int64)v176;
              v31 = nullptr;
              if ( (int)v32 <= v176[8] )
                goto LABEL_115;
LABEL_46:
              if ( !v33 )
                goto LABEL_111;
              if ( !v31 && (int *)v33 != v142 )
              {
                LODWORD(v37) = *(_DWORD *)(v33 + 32);
                goto LABEL_135;
              }
              v39 = 1;
LABEL_50:
              v148 = v23;
              std::_Rb_tree_insert_and_rebalance(v39, v23, v33, v142);
              v31 = v148;
              ++v177;
            }
            else
            {
              v37 = (unsigned int)v31[8];
              v148 = (int *)&v172;
              if ( (int)v32 < (int)v37 )
              {
                v33 = (__int64)v31;
                if ( v175 == v31 )
                  goto LABEL_46;
                v152 = v32;
                v151 = v23;
                v38 = std::_Rb_tree_decrement(v31, v37, v31, v32, v23);
                v32 = v152;
                v23 = v151;
                v35 = v148;
                v33 = v38;
                if ( (signed int)v152 > *(_DWORD *)(v38 + 32) )
                {
                  if ( *(_QWORD *)(v38 + 24) )
                    v33 = (__int64)v31;
                  else
                    v31 = nullptr;
                  goto LABEL_46;
                }
LABEL_115:
                v151 = v23;
                LODWORD(v148) = v32;
                v85 = sub_27C40((__int64)v35, (unsigned int)v32, v33, v32, (__int64)v23);
                v32 = (unsigned int)v148;
                v23 = v151;
                v31 = (int *)v85;
                goto LABEL_46;
              }
              if ( (int)v32 > (int)v37 )
              {
                if ( v176 != v31 )
                {
                  v152 = v32;
                  v151 = v23;
                  v153 = v37;
                  v86 = std::_Rb_tree_increment(v31);
                  v32 = v152;
                  v23 = v151;
                  v35 = v148;
                  v33 = v86;
                  if ( (signed int)v152 >= *(_DWORD *)(v86 + 32) )
                    goto LABEL_115;
                  LODWORD(v37) = v153;
                  if ( *((_QWORD *)v31 + 3) )
                  {
                    v31 = (int *)v86;
                    goto LABEL_46;
                  }
                }
                v33 = (__int64)v31;
                if ( v31 )
                {
LABEL_135:
                  v39 = (int)v32 < (int)v37;
                  goto LABEL_50;
                }
              }
LABEL_111:
              if ( v23 )
                operator delete(v23, 0x58u);
            }
          }
          v15 = (unsigned __int64)v145;
          v178 = (__int64 *)__PAIR64__(v12, v19);
          sub_29FC0((_QWORD *)v31 + 5, v145, v33, v32, (__int64)v23);
LABEL_52:
          v40 = v141;
          v141 = 1;
          if ( v40 == 1 )
          {
            v13 = v182.m128i_i64[0];
            if ( v182.m128i_i64[0] )
            {
LABEL_8:
              v182.m128i_i64[1] = 0;
              qfree(v13);
            }
LABEL_9:
            v14 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v13, v15);
            v11 = v6;
            v12 = v14(227, v6, (unsigned int)(v12 + 1));
            if ( *(_DWORD *)(v6 + 8) == v12 )
              goto LABEL_62;
            goto LABEL_10;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v26 = (const __m128i *)v25[1].m128i_i64[1];
        v15 = 0;
        if ( !v26 )
          goto LABEL_27;
      }
      v25 = v26;
    }
  }
LABEL_63:
  v42 = v171;
  if ( v171 )
  {
    v43 = v169;
    for ( i = (__m128i *)v163; v43 != v147; v43 = (const __m128i *)std::_Rb_tree_increment(v43) )
    {
      v44 = _mm_loadl_epi64(v43 + 2);
      v45 = a1[52];
      v46 = (__int64)(a1 + 51);
      v47 = _mm_cvtsi128_si32(v44);
      v48 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v44, 229));
      v182.m128i_i64[0] = v44.m128i_i64[0];
      v163[0] = v44.m128i_i64[0];
      if ( !v45 )
        goto LABEL_76;
      do
      {
        while ( *(_DWORD *)(v45 + 32) >= v47 && (*(_DWORD *)(v45 + 32) != v47 || *(_DWORD *)(v45 + 36) >= v48) )
        {
          v46 = v45;
          v45 = *(_QWORD *)(v45 + 16);
          if ( !v45 )
            goto LABEL_72;
        }
        v45 = *(_QWORD *)(v45 + 24);
      }
      while ( v45 );
LABEL_72:
      if ( (_QWORD *)v46 == a1 + 51
        || *(_DWORD *)(v46 + 32) > v47
        || *(_DWORD *)(v46 + 32) == v47 && *(_DWORD *)(v46 + 36) > v48 )
      {
LABEL_76:
        v9 = (const __m128i *)(a1 + 50);
        v141 = v44.m128i_i64[0];
        v178 = (__int64 *)i;
        v49 = sub_2A220(a1 + 50, v46, (__int64)&unk_78AE8, &v178);
        v44.m128i_i64[0] = v141;
        v46 = v49;
      }
      v50 = *(int **)(v46 + 40);
      v51 = v157;
      v52 = *((_QWORD *)&v158 + 1);
      v182.m128i_i64[1] = (__int64)v50;
      LODWORD(v183) = *(_DWORD *)(v46 + 48);
      v53 = v158;
      v54 = v158 + 1;
      if ( &v182 < v157 || &v182 >= (const __m128i *)((char *)v157 + 20 * *((_QWORD *)&v158 + 1)) )
      {
        if ( *((_QWORD *)&v158 + 1) < v54 )
        {
          v120 = qvector_reserve(&v157, 0, v158 + 1, 20);
          v121 = *((signed int ***)&v158 + 1);
          v51 = (const __m128i *)v120;
          *((_QWORD *)&v158 + 1) = v52;
          v9 = v157;
          v122 = v158 - 1;
          if ( (__int64)v158 - 1 >= 0 )
          {
            do
            {
              v123 = _mm_loadu_si128(v9);
              v120 += 20;
              v9 = (const __m128i *)((char *)v9 + 20);
              *(__m128i *)(v120 - 20) = v123;
              *(_DWORD *)(v120 - 4) = v9[-1].m128i_i32[3];
              v124 = v122-- == 0;
            }
            while ( !v124 );
            v9 = v157;
          }
          v141 = (__int64)v121;
          qfree(v9);
          v54 = v141;
          v53 = v158;
          v157 = v51;
          *((_QWORD *)&v158 + 1) = v141;
        }
        v118 = (__m128i *)((char *)v51 + 20 * v53);
        *v118 = _mm_load_si128(&v182);
        v118[1].m128i_i32[0] = (int)v183;
      }
      else
      {
        v55 = (char)v183;
        if ( *((_QWORD *)&v158 + 1) < v54 )
        {
          v54 = 0;
          LOBYTE(v141) = (_BYTE)v183;
          v145 = v50;
          v144 = v44.m128i_i64[0];
          v126 = qvector_reserve(&v157, 0, v158 + 1, 20);
          v127 = *((_QWORD *)&v158 + 1);
          v51 = (const __m128i *)v126;
          *((_QWORD *)&v158 + 1) = v52;
          v9 = v157;
          v128 = v141;
          v129 = v158 - 1;
          v130 = (int *)v144;
          v131 = v145;
          if ( (__int64)v158 - 1 >= 0 )
          {
            do
            {
              v132 = _mm_loadu_si128(v9);
              v126 += 20;
              v9 = (const __m128i *)((char *)v9 + 20);
              *(__m128i *)(v126 - 20) = v132;
              v54 = v9[-1].m128i_u32[3];
              *(_DWORD *)(v126 - 4) = v54;
              v124 = v129-- == 0;
            }
            while ( !v124 );
            v9 = v157;
          }
          v146 = (__m128i *)v131;
          v144 = v127;
          LOBYTE(v141) = v128;
          v145 = v130;
          qfree(v9);
          v53 = v158;
          v157 = v51;
          v50 = (int *)v146;
          v44.m128i_i64[0] = (__int64)v145;
          *((_QWORD *)&v158 + 1) = v144;
          v55 = v141;
        }
        v56 = &v51->m128i_i8[20 * v53];
        *((_QWORD *)v56 + 1) = v50;
        v56[16] = v55;
        *(_QWORD *)v56 = v44.m128i_i64[0];
      }
      *(_QWORD *)&v158 = v158 + 1;
      v57 = v43[2].m128i_u32[1];
      v58 = v43[2].m128i_u32[0];
      v59 = (void (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))get_hexdsp(v9, v54);
      v8 = (__int64)a1;
      v59(266, a1, v58, v57);
      v9 = v43;
    }
    v159 = 0;
    v161 = 0;
    v151 = (int *)&v159;
    v160 = 0;
    v162 = 0;
    v60 = (void (__fastcall *)(__int64, _QWORD *, __int64 *, __int64))get_hexdsp(v9, v8);
    v151 = (int *)&v159;
    v60(259, a1, &v159, 1);
    v61 = (void (__fastcall *)(__int64, _QWORD *, int *, __int64 *, __int64))get_hexdsp(259, a1);
    v62 = a1;
    v63 = 260;
    v61(260, a1, v151, &v161, 1);
    v64 = (unsigned int *)v157;
    v65 = (unsigned int *)v157 + 5 * v158;
    if ( v65 != (unsigned int *)v157 )
    {
      do
      {
        v63 = (__int64)a1;
        v62 = (_QWORD *)*v64;
        sub_2A560(a1, (int)v62, v64[1], *((_QWORD *)v64 + 1), v64[4]);
        v64 += 5;
      }
      while ( v65 != v64 );
    }
    v178 = nullptr;
    v180 = 0;
    v179 = 0;
    v181 = 0;
    v66 = (void (__fastcall *)(__int64, _QWORD *, __int64 **))get_hexdsp(v63, v62);
    v66(262, a1, &v178);
    v67 = (__int64)v175;
    v150 = v163;
    if ( v175 == v142 )
      goto LABEL_155;
LABEL_85:
    sub_28EA0((__int64)v150, (__int64)a1, *(_DWORD *)(v67 + 32));
    v182.m128i_i32[2] = 0;
    v184 = &v182.m128i_i32[2];
    v185 = &v182.m128i_i64[1];
    v183 = nullptr;
    v186 = 0;
    v68 = *(_QWORD *)(v67 + 64);
    v145 = &v182.m128i_i32[2];
    i = (__m128i *)(v67 + 48);
    if ( v67 + 48 == v68 )
    {
      v92 = nullptr;
LABEL_202:
      sub_28690(v92);
      v100 = v163[0];
      if ( v163[0] )
        goto LABEL_153;
      goto LABEL_154;
    }
    v141 = (__int64)v164;
    v144 = (__int64)&v165;
LABEL_87:
    sub_28EA0(v141, (__int64)a1, *(_DWORD *)(v68 + 36));
    v69 = *(_DWORD *)(v161 + 4LL * *(int *)(v68 + 36));
    if ( v69 == -1 )
      goto LABEL_138;
    sub_28EA0(v144, (__int64)a1, v69);
    v71 = v181;
    if ( !(_QWORD)v181 )
    {
      v113 = v179;
      v154 = -1;
      if ( !(_QWORD)v179 )
        goto LABEL_136;
      v114 = v180;
      if ( (unsigned __int64)&v154 < v180 || (unsigned __int64)&v154 >= v180 + 4LL * *((_QWORD *)&v181 + 1) )
      {
        v119 = 0;
        if ( *((_QWORD *)&v181 + 1) >= (unsigned __int64)v179
          || (v146 = (__m128i *)v179,
              v125 = qvector_reserve(&v180, v180, v179, 4),
              v119 = v181,
              v113 = (__int64)v146,
              v180 = v125,
              v114 = v125,
              (unsigned __int64)v181 < (unsigned __int64)v146) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v114 + 4 * v119++) = -1;
            if ( v113 == v119 )
              break;
            v114 = v180;
          }
        }
      }
      else
      {
        v115 = 0;
        if ( *((_QWORD *)&v181 + 1) >= (unsigned __int64)v179
          || (v146 = (__m128i *)v179,
              v133 = qvector_reserve(&v180, v180, v179, 4),
              v180 = v133,
              v114 = v133,
              v113 = (__int64)v146,
              v115 = v181,
              (unsigned __int64)v181 < (unsigned __int64)v146) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v114 + 4 * v115++) = -1;
            if ( v115 == v113 )
              break;
            v114 = v180;
          }
        }
      }
      *(_QWORD *)&v181 = v113;
      do
      {
        v116 = *((int *)v178 + v71);
        if ( (_DWORD)v116 != -1 )
          *(_DWORD *)(v180 + 4 * v116) = v71;
        ++v71;
      }
      while ( v71 != v113 );
    }
    if ( v69 < 0 || v69 >= (unsigned __int64)v181 || (v72 = *(unsigned int *)(v180 + 4LL * v69), (_DWORD)v72 == -1) )
    {
LABEL_136:
      if ( v165 )
      {
        v166 = 0;
        qfree(v165);
      }
LABEL_138:
      v84 = v164[0];
      if ( v164[0] )
        goto LABEL_139;
      goto LABEL_140;
    }
    v73 = v183;
    v74 = *(unsigned int *)(v68 + 32);
    if ( !v183 )
    {
      v78 = v184;
      v73 = v145;
      if ( v184 == v145 )
      {
        v79 = v5;
LABEL_105:
        v80 = _mm_cvtsi32_si128(*(_DWORD *)(v68 + 36));
        v149 = v72;
        v148 = v78;
        LODWORD(v147) = v74;
        LODWORD(v146) = _mm_cvtsi128_si32(v80);
        v81 = (__m128i *)operator new(0x30u);
        v82 = v145;
        v83 = v148;
        v81[2] = _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v149), _mm_cvtsi32_si128((unsigned int)v147)),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v146), _mm_cvtsi32_si128(v69)));
        std::_Rb_tree_insert_and_rebalance(v79, v81, v83, v82);
        ++v186;
        goto LABEL_106;
      }
      goto LABEL_193;
    }
    while ( 1 )
    {
      v77 = v73[8];
      if ( (int)v72 < v77 || (_DWORD)v72 == v77 && (int)v74 < v73[9] )
      {
        v75 = *((int **)v73 + 2);
        v76 = v5;
        if ( !v75 )
        {
LABEL_100:
          v78 = v73;
          if ( v76 )
          {
            v78 = v184;
            if ( v73 == v184 )
            {
LABEL_104:
              v79 = v5;
              if ( v78 != v145 && (int)v72 >= v78[8] )
              {
                v79 = 0;
                if ( (_DWORD)v72 == v78[8] )
                  v79 = (int)v74 < v78[9];
              }
              goto LABEL_105;
            }
LABEL_193:
            LODWORD(v147) = *(_DWORD *)(v180 + 4LL * v69);
            LODWORD(v146) = v74;
            v117 = std::_Rb_tree_decrement(v73, v78, v72, v74, v70);
            v78 = v73;
            LODWORD(v72) = (_DWORD)v147;
            LODWORD(v74) = (_DWORD)v146;
            v77 = *(_DWORD *)(v117 + 32);
            v73 = (int *)v117;
          }
          if ( (int)v72 > v77 || (_DWORD)v72 == v77 && (int)v74 > v73[9] )
            goto LABEL_104;
LABEL_106:
          if ( v165 )
          {
            v166 = 0;
            qfree(v165);
          }
          v84 = v164[0];
          if ( v164[0] )
          {
LABEL_139:
            v164[1] = 0;
            qfree(v84);
          }
LABEL_140:
          v68 = std::_Rb_tree_increment(v68);
          if ( i == (__m128i *)v68 )
          {
            v92 = v183;
            if ( !v186 )
              goto LABEL_202;
            LOBYTE(v156) = 0;
            v93 = *(_DWORD *)(v67 + 32);
            v155 = -4294967290LL;
            sub_2A560(a1, v93, v184[11], -4294967290LL, 0);
            sub_28EA0((__int64)&v165, (__int64)a1, v184[11]);
            v94 = a1[46];
            v95 = v184;
            if ( !v94 )
            {
              v97 = (__int64)(a1 + 45);
              goto LABEL_149;
            }
            v96 = *(_DWORD *)(v67 + 32);
            v97 = (__int64)(a1 + 45);
            do
            {
              while ( 1 )
              {
                v98 = *(_QWORD *)(v94 + 16);
                v99 = *(_QWORD *)(v94 + 24);
                if ( *(_DWORD *)(v94 + 32) < v96 )
                  break;
                v97 = v94;
                v94 = *(_QWORD *)(v94 + 16);
                if ( !v98 )
                  goto LABEL_147;
              }
              v94 = *(_QWORD *)(v94 + 24);
            }
            while ( v99 );
LABEL_147:
            if ( (_QWORD *)v97 == a1 + 45 || v96 < *(_DWORD *)(v97 + 32) )
            {
LABEL_149:
              v164[0] = v67 + 32;
              v97 = sub_28040(a1 + 44, v97, (signed int **)v141);
            }
            *(_QWORD *)(v97 + 36) = *(_QWORD *)(v95 + 9);
            if ( v165 )
            {
              v166 = 0;
              qfree(v165);
            }
            sub_28690(v183);
            v100 = v163[0];
            if ( v163[0] )
            {
LABEL_153:
              v163[1] = 0;
              qfree(v100);
            }
LABEL_154:
            v67 = std::_Rb_tree_increment(v67);
            if ( (int *)v67 == v142 )
            {
LABEL_155:
              if ( v180 )
              {
                *(_QWORD *)&v181 = 0;
                qfree(v180);
              }
              if ( v178 )
              {
                *(_QWORD *)&v179 = 0;
                qfree(v178);
              }
              if ( v161 )
              {
                *(_QWORD *)&v162 = 0;
                qfree(v161);
              }
              v101 = v159;
              if ( v159 )
              {
                v102 = v160;
                if ( (_QWORD)v160 )
                {
                  v103 = 0;
                  do
                  {
                    v104 = v103++;
                    qfree(*(_QWORD *)(v101 + 16 * v104));
                    v101 = v159;
                  }
                  while ( v102 != v103 );
                }
                *(_QWORD *)&v160 = 0;
                qfree(v101);
              }
              sub_28440((void **)v174);
              if ( v157 )
              {
                *(_QWORD *)&v158 = 0;
                qfree(v157);
              }
              sub_28860(v168);
              v105 = v192;
              if ( v192 )
              {
                v106 = v193;
                if ( (_QWORD)v193 )
                {
                  v107 = 0;
                  do
                  {
                    v108 = v107++;
                    qfree(*(_QWORD *)(v105 + 16 * v108));
                    v105 = v192;
                  }
                  while ( v106 != v107 );
                }
                *(_QWORD *)&v193 = 0;
                qfree(v105);
              }
              v109 = v190;
              if ( v190 )
              {
                v110 = v191;
                if ( (_QWORD)v191 )
                {
                  v111 = 0;
                  do
                  {
                    v112 = v111++;
                    qfree(*(_QWORD *)(v109 + 16 * v112));
                    v109 = v190;
                  }
                  while ( v110 != v111 );
                }
                *(_QWORD *)&v191 = 0;
                qfree(v109);
              }
              if ( v188 )
              {
                *(_QWORD *)&v189 = 0;
                qfree(v188);
              }
              return v194 - __readfsqword(0x28u);
            }
            goto LABEL_85;
          }
          goto LABEL_87;
        }
      }
      else
      {
        v75 = *((int **)v73 + 3);
        v76 = 0;
        if ( !v75 )
          goto LABEL_100;
      }
      v73 = v75;
    }
  }
  sub_28440((void **)v174);
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    qfree(v157);
  }
  sub_28860(v168);
  v134 = v192;
  if ( v192 )
  {
    v135 = v193;
    if ( (_QWORD)v193 )
    {
      v136 = 0;
      do
      {
        v137 = v136++;
        qfree(*(_QWORD *)(v134 + 16 * v137));
        v134 = v192;
      }
      while ( v135 != v136 );
    }
    *(_QWORD *)&v193 = 0;
    qfree(v134);
  }
  v138 = v190;
  if ( v190 )
  {
    v139 = v191;
    if ( (_QWORD)v191 )
    {
      do
      {
        v140 = v42++;
        qfree(*(_QWORD *)(v138 + 16 * v140));
        v138 = v190;
      }
      while ( v139 != v42 );
    }
    *(_QWORD *)&v191 = 0;
    qfree(v138);
  }
  if ( v188 )
  {
    *(_QWORD *)&v189 = 0;
    qfree(v188);
  }
  return v194 - __readfsqword(0x28u);
}

