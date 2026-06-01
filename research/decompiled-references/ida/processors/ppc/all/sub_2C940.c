__int64 __fastcall sub_2C940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rbx
  char v7; // bp
  __int64 **v8; // r12
  int v9; // r13d
  int v10; // r14d
  __int64 *v11; // r15
  __int64 **v12; // r12
  char v13; // kr00_1
  __int64 v14; // kr08_8
  int v15; // kr10_4
  __int64 **v16; // kr28_8
  __int64 v18; // rbx
  char v19; // bp
  int v20; // esi
  char v21; // al
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // r14
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v31; // r8d
  __int16 v32; // dx
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  int v35; // eax
  int v36; // r8d
  int v37; // r13d
  int v38; // eax
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  char v43; // cl
  unsigned int v44; // r8d
  __int16 v45; // ax
  __int64 *v46; // r15
  unsigned __int64 v47; // rdi
  int v48; // eax
  int v49; // r8d
  int v50; // r14d
  int v51; // r13d
  int v52; // eax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  char v57; // cl
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // r13
  __int64 *v64; // r15
  int v65; // eax
  int v66; // r8d
  int v67; // r14d
  int v68; // r13d
  int v69; // eax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  unsigned __int64 v74; // rdx
  char v75; // cl
  __int64 v76; // r15
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // r13
  __int64 *v82; // r15
  int v83; // eax
  int v84; // r8d
  int v85; // r14d
  int v86; // r13d
  int v87; // eax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rax
  __int64 v91; // rsi
  unsigned __int64 v92; // rdx
  char v93; // cl
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r14
  __int64 fchunk; // r13
  __int64 *v100; // r8
  int v101; // r13d
  int v102; // r15d
  int v103; // r14d
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // r15
  unsigned __int64 v106; // rax
  __int64 v107; // rsi
  unsigned __int64 v108; // rdx
  char v109; // cl
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  char v115; // [rsp+0h] [rbp-58h]
  __int64 v116; // [rsp+8h] [rbp-50h]
  __int64 v117; // [rsp+8h] [rbp-50h]
  __int64 v118; // [rsp+8h] [rbp-50h]
  __int64 v119; // [rsp+8h] [rbp-50h]
  __int64 *v120; // [rsp+8h] [rbp-50h]
  unsigned __int64 v121; // [rsp+8h] [rbp-50h]
  unsigned __int64 v122; // [rsp+8h] [rbp-50h]
  unsigned __int64 v123; // [rsp+8h] [rbp-50h]
  unsigned __int64 v124; // [rsp+8h] [rbp-50h]
  __int64 *v125; // [rsp+8h] [rbp-50h]
  int v126; // [rsp+14h] [rbp-44h]
  unsigned __int64 v127; // [rsp+18h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  v13 = v7;
  v14 = v6;
  v15 = v9;
  v16 = v8;
  v12 = (__int64 **)a3;
  v18 = a4;
  v19 = a6;
  switch ( a6 & 0x3F )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (BYTE2(a5) & 0xF) + 8;
      goto LABEL_7;
    case 2LL:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = ((a5 >> 20) & 0xF) + 8;
      goto LABEL_7;
    case 3LL:
      *(_BYTE *)(a4 + 1) = 7;
      *(_BYTE *)(a4 + 5) = 9;
      v94 = *(_QWORD *)(a2 + 8) + 2LL * SBYTE2(a5);
      v95 = getseg(*(_QWORD *)(a2 + 16));
      v96 = segm_adjust_ea(v95, v94);
      *(_QWORD *)(v18 + 16) = v96;
      v97 = 16LL * *(_QWORD *)a2 + v96;
      v98 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v97 != v98 )
      {
        v98 &= v97;
        if ( v97 == -1 )
          v98 = -1;
      }
      fchunk = get_fchunk(*(_QWORD *)(a2 + 16));
      if ( !fchunk || fchunk != get_fchunk(v98) )
      {
        if ( v12 )
        {
          v100 = *v12;
          if ( *v12 )
          {
            v101 = 8 * *((_DWORD *)v12 + 2);
            v102 = v101 + 22;
            v103 = v101 + 8;
            if ( v101 + 15 >= 0 )
              v102 = v101 + 15;
            v104 = v100[1];
            v105 = v102 >> 3;
            if ( v104 < v105 )
            {
              if ( v100[2] < v105 )
              {
                v125 = *v12;
                v114 = qvector_reserve(*v12, *v100, v105, 1);
                v100 = v125;
                *v125 = v114;
                v104 = v125[1];
              }
              v120 = v100;
              memset((void *)(*v100 + v104), 0, v105 - v104);
              v120[1] = v105;
              v100 = *v12;
            }
            v106 = v101;
            v107 = *v100;
            if ( v101 < (unsigned __int64)v103 )
            {
              do
              {
                v108 = v106;
                v109 = v106++;
                *(_BYTE *)(v107 + (v108 >> 3)) |= 1 << (v109 & 7);
              }
              while ( v103 != v106 );
            }
          }
        }
      }
      goto LABEL_7;
    case 4LL:
      *(_BYTE *)(a4 + 1) = 7;
      *(_BYTE *)(a4 + 5) = 9;
      v76 = *(_QWORD *)(a2 + 8) + (__int16)(2 * (a5 >> 1));
      v77 = getseg(*(_QWORD *)(a2 + 16));
      v78 = segm_adjust_ea(v77, v76);
      *(_QWORD *)(v18 + 16) = v78;
      v79 = 16LL * *(_QWORD *)a2 + v78;
      v80 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v79 != v80 )
      {
        v80 &= v79;
        if ( v79 == -1 )
          v80 = -1;
      }
      v81 = get_fchunk(*(_QWORD *)(a2 + 16));
      if ( !v81 || v81 != get_fchunk(v80) )
      {
        if ( v12 )
        {
          v82 = *v12;
          if ( *v12 )
          {
            v83 = 8 * *((_DWORD *)v12 + 2);
            v84 = v83 + 30;
            v85 = v83 + 16;
            v86 = v83 + 1;
            v87 = v83 + 23;
            if ( v87 >= 0 )
              v84 = v87;
            v88 = v82[1];
            v89 = v84 >> 3;
            if ( v88 < v89 )
            {
              if ( v82[2] < v89 )
              {
                v123 = v89;
                v112 = qvector_reserve(*v12, *v82, v89, 1);
                v89 = v123;
                *v82 = v112;
                v88 = v82[1];
              }
              v119 = v89;
              memset((void *)(*v82 + v88), 0, v89 - v88);
              v82[1] = v119;
              v82 = *v12;
            }
            v90 = v86;
            v91 = *v82;
            if ( v86 < (unsigned __int64)v85 )
            {
              do
              {
                v92 = v90;
                v93 = v90++;
                *(_BYTE *)(v91 + (v92 >> 3)) |= 1 << (v93 & 7);
              }
              while ( v85 != v90 );
            }
          }
        }
      }
      goto LABEL_7;
    case 5LL:
      *(_BYTE *)(a4 + 1) = 7;
      *(_BYTE *)(a4 + 5) = 9;
      v58 = *(_QWORD *)(a2 + 8) + ((__int64)((unsigned __int64)(a5 >> 1) << 40) >> 39);
      v59 = getseg(*(_QWORD *)(a2 + 16));
      v60 = segm_adjust_ea(v59, v58);
      *(_QWORD *)(v18 + 16) = v60;
      v61 = 16LL * *(_QWORD *)a2 + v60;
      v62 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v61 != v62 )
      {
        v62 &= v61;
        if ( v61 == -1 )
          v62 = -1;
      }
      v63 = get_fchunk(*(_QWORD *)(a2 + 16));
      if ( !v63 || v63 != get_fchunk(v62) )
      {
        if ( v12 )
        {
          v64 = *v12;
          if ( *v12 )
          {
            v65 = 8 * *((_DWORD *)v12 + 2);
            v66 = v65 + 39;
            v67 = v65 + 25;
            v68 = v65 + 1;
            v69 = v65 + 32;
            if ( v69 >= 0 )
              v66 = v69;
            v70 = v64[1];
            v71 = v66 >> 3;
            if ( v70 < v71 )
            {
              if ( v64[2] < v71 )
              {
                v124 = v71;
                v113 = qvector_reserve(*v12, *v64, v71, 1);
                v71 = v124;
                *v64 = v113;
                v70 = v64[1];
              }
              v118 = v71;
              memset((void *)(*v64 + v70), 0, v71 - v70);
              v64[1] = v118;
              v64 = *v12;
            }
            v72 = v68;
            v73 = *v64;
            if ( v68 < (unsigned __int64)v67 )
            {
              do
              {
                v74 = v72;
                v75 = v72++;
                *(_BYTE *)(v73 + (v74 >> 3)) |= 1 << (v75 & 7);
              }
              while ( v67 != v72 );
            }
          }
        }
      }
      goto LABEL_7;
    case 6LL:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = HIBYTE(a5) & 3;
      goto LABEL_7;
    case 7LL:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0xF;
      goto LABEL_7;
    case 8LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 26) & 1;
      goto LABEL_7;
    case 9LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 20) & 3;
      goto LABEL_7;
    case 0xALL:
    case 0xBLL:
    case 0xCLL:
      v20 = (char)a5;
      v21 = a6 - 10;
      goto LABEL_3;
    case 0xDLL:
    case 0x2ALL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int16)a5 >> 11;
      goto LABEL_7;
    case 0xELL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      v126 = -((a5 >> 10) & 1);
      *((_BYTE *)&v126 + ((a5 >> 8) & 3)) = a5;
      *(_QWORD *)(a4 + 8) = v126;
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 21, 0x1Fu, 0xFFu, 0, a6, v115);
      goto LABEL_7;
    case 0xFLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 2;
      v126 = ((int)(a5 >> 11 << 28) >> 28 << 16) | (a5 >> 5) & 0xF800 | a5 & 0x7FF;
      *(_QWORD *)(a4 + 8) = v126;
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 11, 0xFu, 0x11u, 31, a6, v115);
      goto LABEL_7;
    case 0x10LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = ((a5 >> 20) & 0x1F) + 1;
      if ( a3 )
      {
        v46 = *(__int64 **)a3;
        *(_BYTE *)(a3 + 24) = 1;
        if ( v46 )
        {
          v47 = v46[1];
          v48 = 8 * *(_DWORD *)(a3 + 8);
          v49 = v48 + 23;
          v50 = v48 + 9;
          v51 = v48 + 4;
          v52 = v48 + 16;
          if ( v52 >= 0 )
            v49 = v52;
          v53 = v49 >> 3;
          if ( v47 < v53 )
          {
            if ( v46[2] < v53 )
            {
              v121 = v53;
              v110 = qvector_reserve(v46, *v46, v53, 1);
              v47 = v46[1];
              v53 = v121;
              *v46 = v110;
            }
            v117 = v53;
            memset((void *)(*v46 + v47), 0, v53 - v47);
            v46[1] = v117;
            v46 = *v12;
          }
          v54 = v51;
          v55 = *v46;
          if ( v51 < (unsigned __int64)v50 )
          {
            do
            {
              v56 = v54;
              v57 = v54++;
              *(_BYTE *)(v55 + (v56 >> 3)) |= 1 << (v57 & 7);
            }
            while ( v50 != v54 );
          }
        }
      }
      goto LABEL_7;
    case 0x11LL:
      v44 = HIWORD(a5);
      goto LABEL_35;
    case 0x12LL:
      v44 = a5 >> 20;
LABEL_35:
      *(_BYTE *)(a4 + 1) = 1;
      v45 = v44 & 0xF;
      *(_BYTE *)(a4 + 5) = 2;
      if ( (v44 & 8) != 0 )
        v45 += 16;
      *(_WORD *)(a4 + 6) = v45;
      goto LABEL_7;
    case 0x13LL:
    case 0x14LL:
    case 0x15LL:
      v31 = HIWORD(a5);
      *(_BYTE *)(a4 + 1) = 4;
      *(_BYTE *)(a4 + 5) = a6 - 19;
      v32 = v31 & 0xF;
      v33 = (HIBYTE(a5) & 0xF) << (a6 - 19);
      if ( (v31 & 8) != 0 )
        v32 += 16;
      *(_QWORD *)(a4 + 16) = v33;
      *(_WORD *)(a4 + 6) = v32;
      if ( !v12 )
        goto LABEL_7;
      v11 = *v12;
      *((_BYTE *)v12 + 24) = 1;
      if ( !v11 )
        goto LABEL_7;
      v34 = v11[1];
      v35 = 8 * *((_DWORD *)v12 + 2);
      v36 = v35 + 26;
      v10 = v35 + 12;
      v37 = v35 + 8;
      v38 = v35 + 19;
      if ( v38 >= 0 )
        v36 = v38;
      v39 = v36 >> 3;
      if ( v34 >= v39 )
        goto LABEL_27;
      if ( v11[2] >= v39 )
        goto LABEL_125;
      goto LABEL_140;
    case 0x16LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      v126 = ((int)(a5 >> 21 << 27) >> 27 << 11) | a5 & 0x7FF;
      *(_QWORD *)(a4 + 8) = v126;
      if ( !a3 )
        goto LABEL_7;
      goto LABEL_109;
    case 0x17LL:
      *(_BYTE *)(a4 + 1) = 5;
      v126 = (__int16)a5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (__int16)a5;
      goto LABEL_17;
    case 0x18LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (a5 >> 10) & 0xF800 | a5 & 0x7FF;
      if ( a3 )
LABEL_109:
        sub_2A4E0((_QWORD *)a3, 6, 0xAu, 0x15u, 31, a6, v115);
      goto LABEL_7;
    case 0x19LL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (a5 >> 5) & 0xF800 | a5 & 0x7FF;
      if ( a3 )
        sub_2A4E0((_QWORD *)a3, 11, 0xFu, 0x15u, 31, a6, v115);
      goto LABEL_7;
    case 0x1ALL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 20) & 0x1F;
      goto LABEL_7;
    case 0x1BLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 20) & 0x7F;
      goto LABEL_7;
    case 0x1CLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (unsigned __int8)a5;
      goto LABEL_7;
    case 0x1DLL:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      goto LABEL_7;
    case 0x1ELL:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      goto LABEL_7;
    case 0x1FLL:
      *(_BYTE *)(a4 + 1) = 12;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 0x1F;
      goto LABEL_7;
    case 0x20LL:
      result = 0;
      if ( (a5 & 0x600000) != 0 )
        return result;
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 23) & 7;
      goto LABEL_7;
    case 0x21LL:
      result = 0;
      if ( (a5 & 0x30000) != 0 )
        return result;
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 18) & 7;
      goto LABEL_7;
    case 0x22LL:
    case 0x23LL:
    case 0x24LL:
      v26 = (__int16)a5;
      *(_BYTE *)(a4 + 1) = 4;
      v27 = HIWORD(a5) & 0x1F;
      v126 = v26;
      *(_QWORD *)(a4 + 16) = v26;
      *(_WORD *)(a4 + 6) = v27;
      *(_BYTE *)(a4 + 5) = a6 - 34;
      if ( !v27 )
      {
        v28 = getseg(*(_QWORD *)(a2 + 16));
        v29 = segm_adjust_ea(v28, v26);
        *(_BYTE *)(v18 + 1) = 2;
        *(_QWORD *)(v18 + 16) = v29;
      }
LABEL_17:
      if ( v12 )
        sub_2A4E0(v12, 16, 0x1Fu, 0xFFu, 0, a6, v115);
      *(_BYTE *)(v18 + 2) = 2;
      goto LABEL_7;
    case 0x25LL:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 0x1F;
      goto LABEL_7;
    case 0x26LL:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = BYTE2(a5) & 0x1F;
      goto LABEL_7;
    case 0x27LL:
      *(_BYTE *)(a4 + 1) = 1;
      *(_BYTE *)(a4 + 5) = 2;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      goto LABEL_7;
    case 0x28LL:
      result = 0;
      if ( (a5 & 0xF800) != 0 )
        return result;
      goto LABEL_7;
    case 0x29LL:
      *(_BYTE *)(a4 + 1) = 11;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (a5 >> 21) & 3;
      goto LABEL_7;
    case 0x2BLL:
      *(_BYTE *)(a4 + 1) = 10;
      *(_BYTE *)(a4 + 5) = 0;
      *(_WORD *)(a4 + 6) = (unsigned __int16)a5 >> 11;
      *(_BYTE *)(a4 + 33) = (a5 >> 1) & 0x1F;
      *(_BYTE *)(a4 + 32) = (a5 >> 6) & 0x1F;
      *(_DWORD *)(a2 + 28) |= 0xE0u;
      goto LABEL_7;
    case 0x2CLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_BYTE *)(a4 + 41) = 5;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 3;
      *(_BYTE *)(a4 + 45) = 0;
      *(_BYTE *)(a4 + 81) = 5;
      *(_QWORD *)(a4 + 48) = (a5 >> 14) & 1;
      *(_BYTE *)(a4 + 85) = 0;
      *(_BYTE *)(a4 + 121) = 5;
      *(_QWORD *)(a4 + 88) = (a5 >> 13) & 1;
      *(_BYTE *)(a4 + 125) = 0;
      *(_QWORD *)(a4 + 128) = (a5 >> 15) & 1;
      goto LABEL_7;
    case 0x2DLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (a5 >> 21) & 0x1F;
      goto LABEL_7;
    case 0x2ELL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 8) = (a5 >> 11) & 0x3FF;
      goto LABEL_7;
    case 0x2FLL:
      *(_BYTE *)(a4 + 1) = 5;
      *(_BYTE *)(a4 + 5) = 0;
      *(_QWORD *)(a4 + 8) = (a5 >> 1) & 0x1F;
      goto LABEL_7;
    case 0x30LL:
      v21 = 1;
      v20 = a5 & 0xFE;
      goto LABEL_3;
    case 0x31LL:
      v21 = 7;
      v20 = a5 & 0xFC;
      goto LABEL_3;
    case 0x32LL:
      v21 = 8;
      v20 = a5 & 0xF8;
LABEL_3:
      v126 = v20;
      v22 = HIWORD(a5) & 0x1F;
      *(_BYTE *)(a4 + 1) = 4;
      *(_QWORD *)(a4 + 16) = v20;
      *(_WORD *)(a4 + 6) = v22;
      *(_BYTE *)(a4 + 5) = v21;
      if ( !v22 )
      {
        v23 = getseg(*(_QWORD *)(a2 + 16));
        v24 = segm_adjust_ea(v23, v20);
        *(_BYTE *)(v18 + 1) = 2;
        *(_QWORD *)(v18 + 16) = v24;
      }
      if ( v12 )
        sub_2A4E0(v12, 24, 0x1Fu, 0xFFu, 0, a6, v115);
      goto LABEL_7;
    default:
      v12 = v16;
      v37 = v15;
      v18 = v14;
      v19 = v13;
      if ( under_debugger )
        BUG();
      interr(250);
LABEL_140:
      v122 = v39;
      v111 = qvector_reserve(v11, *v11, v39, 1);
      v34 = v11[1];
      v39 = v122;
      *v11 = v111;
LABEL_125:
      v116 = v39;
      memset((void *)(*v11 + v34), 0, v39 - v34);
      v11[1] = v116;
      v11 = *v12;
LABEL_27:
      v40 = v37;
      v41 = *v11;
      if ( v37 < (unsigned __int64)v10 )
      {
        do
        {
          v42 = v40;
          v43 = v40++;
          *(_BYTE *)(v41 + (v42 >> 3)) |= 1 << (v43 & 7);
        }
        while ( v10 != v40 );
      }
LABEL_7:
      if ( (*(_QWORD *)v18 & 0xFF000000FF00LL) == 0x20000000100LL )
      {
        if ( (v19 & 0x40) != 0 )
        {
          *(_BYTE *)(v18 + 5) = (unsigned __int8)~v19 >> 7;
        }
        else if ( v19 < 0 )
        {
          if ( (unsigned __int8)getinf_flag(3, 4) )
            *(_BYTE *)(v18 + 5) = 7;
        }
      }
      return 1;
  }
}

