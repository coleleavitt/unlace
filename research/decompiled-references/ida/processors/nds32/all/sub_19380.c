__int64 __fastcall sub_19380(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 v3; // cx
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  int *v10; // r9
  int *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edi
  int *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r15
  int v25; // r12d
  __int64 v26; // rax
  int v27; // r13d
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rcx
  int v56; // esi
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // edi
  _QWORD *v61; // rsi
  _QWORD *v62; // r12
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // r13d
  bool v72; // sf
  __int64 v73; // rax
  __int64 v74; // r12
  int *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r12
  int v79; // edi
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // r14
  int *v83; // rsi
  __int64 v84; // rax
  int v85; // ecx
  _QWORD *v86; // r15
  __int64 v87; // rax
  int *v88; // rdx
  _QWORD *v89; // r12
  _BOOL8 v90; // rdi
  __int64 v91; // rax
  unsigned __int16 v92; // cx
  __int64 v93; // rsi
  unsigned __int16 v94; // ax
  int v95; // eax
  char v96; // r13
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // r14d
  __int64 v105; // rbp
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // r13d
  __int64 v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rax
  _QWORD *v113; // [rsp+0h] [rbp-88h]
  int v114; // [rsp+0h] [rbp-88h]
  int v115; // [rsp+Ch] [rbp-7Ch]
  __int64 v116; // [rsp+10h] [rbp-78h]
  int v117; // [rsp+18h] [rbp-70h]
  __int64 v118; // [rsp+18h] [rbp-70h]
  __int64 v119; // [rsp+18h] [rbp-70h]
  __int64 v120; // [rsp+18h] [rbp-70h]
  __int64 v121; // [rsp+20h] [rbp-68h]
  __int64 v122; // [rsp+28h] [rbp-60h]
  int v123; // [rsp+3Ch] [rbp-4Ch] BYREF
  int *v124[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (_QWORD *)a1;
  v3 = *(_WORD *)(a2 + 24);
  v124[1] = (int *)__readfsqword(0x28u);
  v4 = a2;
  if ( v3 > 0x3Au )
  {
    if ( v3 == 191 )
      return 1;
    if ( v3 > 0xBFu )
    {
      if ( v3 != 469 )
      {
        if ( v3 != 480 )
          return 2;
        v7 = *(unsigned __int16 *)(a2 + 46);
        v8 = a1 + 80;
        v116 = *(_QWORD *)(a2 + 88);
        v9 = *(_QWORD *)(a1 + 88);
        if ( !v9 )
          goto LABEL_86;
        a1 += 80;
        do
        {
          a2 = *(_QWORD *)(v9 + 16);
          if ( *(int *)(v9 + 32) > 30 )
          {
            a1 = v9;
            v9 = *(_QWORD *)(v9 + 16);
          }
          else
          {
            v9 = *(_QWORD *)(v9 + 24);
          }
        }
        while ( v9 );
        if ( a1 == v8 || *(int *)(a1 + 32) > 31 )
          goto LABEL_86;
        v24 = *(_QWORD *)(a1 + 40);
        v115 = v7 - 2;
        if ( (int)v7 <= 5 )
        {
          v113 = v2 + 2;
        }
        else
        {
          v117 = v7;
          v25 = 6;
          v113 = v2 + 2;
          v26 = v4;
          v27 = v7 + 1;
          v28 = *(_QWORD *)(a1 + 40);
          v121 = v28;
          v29 = v26;
          v122 = v8;
          do
          {
            v31 = v2[3];
            v32 = *(_QWORD *)(v29 + 16);
            v28 -= 4;
            v33 = v2[2];
            v34 = v31 + 1;
            if ( v2[4] < (unsigned __int64)(v31 + 1) )
            {
              v35 = qvector_reserve(v113, v33, v34, 32);
              v2[2] = v35;
              v33 = v35;
              v31 = v2[3];
              v34 = v31 + 1;
            }
            v2[3] = v34;
            v30 = v33 + 32 * v31;
            *(_DWORD *)(v30 + 24) = v25++;
            *(_QWORD *)v30 = v32;
            *(_QWORD *)(v30 + 8) = v28;
            *(_QWORD *)(v30 + 16) = 4;
          }
          while ( v25 != v27 );
          v4 = v29;
          v8 = v122;
          v24 = v121 - 4LL * (unsigned int)(v117 - 5);
        }
        v36 = v2[3];
        v37 = *(_QWORD *)(v4 + 16);
        v38 = v2[2];
        v39 = v36 + 1;
        if ( v2[4] < (unsigned __int64)(v36 + 1) )
        {
          v118 = v8;
          v64 = qvector_reserve(v113, v38, v39, 32);
          v8 = v118;
          v2[2] = v64;
          v38 = v64;
          v36 = v2[3];
          v39 = v36 + 1;
        }
        v2[3] = v39;
        v40 = 32 * v36 + v38;
        *(_QWORD *)(v40 + 8) = v24 - 4;
        v41 = v24 - 8;
        *(_QWORD *)v40 = v37;
        *(_QWORD *)(v40 + 16) = 4;
        *(_DWORD *)(v40 + 24) = 28;
        v42 = v2[3];
        v43 = *(_QWORD *)(v4 + 16);
        v44 = v2[2];
        v45 = v42 + 1;
        if ( v2[4] < (unsigned __int64)(v42 + 1) )
        {
          v120 = v8;
          v66 = qvector_reserve(v113, v44, v45, 32);
          v8 = v120;
          v2[2] = v66;
          v44 = v66;
          v42 = v2[3];
          v45 = v42 + 1;
        }
        v2[3] = v45;
        v46 = v24 - 12;
        v47 = 32 * v42 + v44;
        *(_QWORD *)v47 = v43;
        *(_QWORD *)(v47 + 8) = v41;
        *(_QWORD *)(v47 + 16) = 4;
        *(_DWORD *)(v47 + 24) = 29;
        v48 = v2[3];
        v49 = *(_QWORD *)(v4 + 16);
        v50 = v2[2];
        v51 = v48 + 1;
        if ( v2[4] < (unsigned __int64)(v48 + 1) )
        {
          v119 = v8;
          v65 = qvector_reserve(v113, v50, v51, 32);
          v8 = v119;
          v2[2] = v65;
          v50 = v65;
          v48 = v2[3];
          v51 = v48 + 1;
        }
        v2[3] = v51;
        v52 = 32 * v48 + v50;
        *(_QWORD *)v52 = v49;
        *(_QWORD *)(v52 + 8) = v46;
        *(_QWORD *)(v52 + 16) = 4;
        *(_DWORD *)(v52 + 24) = 30;
        v53 = v2[11];
        if ( v53 )
        {
          v54 = v8;
          do
          {
            if ( *(int *)(v53 + 32) > 30 )
            {
              v54 = v53;
              v53 = *(_QWORD *)(v53 + 16);
            }
            else
            {
              v53 = *(_QWORD *)(v53 + 24);
            }
          }
          while ( v53 );
          if ( v54 != v8 && *(int *)(v54 + 32) <= 31 )
            v8 = v54;
        }
        *(_QWORD *)(v8 + 40) -= (unsigned int)(v116 + 4 * v115);
        return 0;
      }
      if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        v59 = *(_QWORD *)(a1 + 88);
        v60 = *(unsigned __int16 *)(a2 + 86);
        v61 = v2 + 10;
        if ( v59 )
        {
          v62 = v2 + 10;
          v63 = v2[11];
          do
          {
            if ( v60 <= *(_DWORD *)(v63 + 32) )
            {
              v62 = (_QWORD *)v63;
              v63 = *(_QWORD *)(v63 + 16);
            }
            else
            {
              v63 = *(_QWORD *)(v63 + 24);
            }
          }
          while ( v63 );
          if ( v61 != v62 && v60 >= *((_DWORD *)v62 + 8) )
          {
            v79 = *(unsigned __int16 *)(v4 + 46);
            v80 = v62[5];
            v81 = (__int64)(v2 + 10);
            v123 = v79;
            do
            {
              if ( v79 <= *(_DWORD *)(v59 + 32) )
              {
                v81 = v59;
                v59 = *(_QWORD *)(v59 + 16);
              }
              else
              {
                v59 = *(_QWORD *)(v59 + 24);
              }
            }
            while ( v59 );
            if ( (_QWORD *)v81 == v61 || v79 < *(_DWORD *)(v81 + 32) )
            {
              v124[0] = &v123;
              v81 = sub_18740(v2 + 9, v81, v124);
            }
            *(_QWORD *)(v81 + 40) = v80;
            if ( *(_WORD *)(v4 + 46) == 28 )
            {
              v2[16] = *(_QWORD *)(v4 + 16);
              v2[15] = v62[5];
            }
          }
        }
      }
    }
    else
    {
      if ( v3 == 114 )
      {
        if ( *(_BYTE *)(a2 + 41) != 1 || *(_BYTE *)(a2 + 81) != 1 || *(_BYTE *)(a2 + 121) != 5 )
          return 1;
        v13 = *(_QWORD *)(a1 + 88);
        v14 = *(unsigned __int16 *)(a2 + 86);
        v15 = (int *)(v2 + 10);
        if ( v13 )
        {
          v16 = (__int64)(v2 + 10);
          v17 = v2[11];
          do
          {
            if ( v14 <= *(_DWORD *)(v17 + 32) )
            {
              v16 = v17;
              v17 = *(_QWORD *)(v17 + 16);
            }
            else
            {
              v17 = *(_QWORD *)(v17 + 24);
            }
          }
          while ( v17 );
          if ( (int *)v16 != v15 && v14 >= *(_DWORD *)(v16 + 32) )
          {
            v82 = *(_QWORD *)(v16 + 40) + *(_QWORD *)(a2 + 128);
            v83 = (int *)(v2 + 10);
            if ( *(_WORD *)(v4 + 46) != 31 )
            {
              v84 = operator new(0x30u);
              v85 = *(unsigned __int16 *)(v4 + 46);
              *(_QWORD *)(v84 + 40) = 0;
              v86 = (_QWORD *)v84;
              *(_DWORD *)(v84 + 32) = v85;
              v114 = v85;
              v87 = sub_184B0(v2 + 9, v16, v85);
              v89 = (_QWORD *)v87;
              if ( v88 )
              {
                v90 = v87 || v15 == v88 || v114 < v88[8];
                v89 = v86;
                std::_Rb_tree_insert_and_rebalance(v90, v86, v88, v2 + 10);
                ++v2[14];
              }
              else if ( v86 )
              {
                operator delete(v86, 0x30u);
              }
              v89[5] = v82;
              if ( *(_WORD *)(v4 + 46) == 28 )
              {
                v91 = *(_QWORD *)(v4 + 16);
                v2[15] = v82;
                v2[16] = v91;
              }
              return 1;
            }
            do
            {
              if ( *(int *)(v13 + 32) > 30 )
              {
                v83 = (int *)v13;
                v13 = *(_QWORD *)(v13 + 16);
              }
              else
              {
                v13 = *(_QWORD *)(v13 + 24);
              }
            }
            while ( v13 );
            if ( v15 == v83 || v83[8] > 31 )
            {
              if ( under_debugger )
                BUG();
              interr(10583);
            }
            if ( *((_QWORD *)v83 + 5) <= v82 )
              return 2;
            *((_QWORD *)v83 + 5) = v82;
            return 0;
          }
        }
        goto LABEL_16;
      }
      if ( v3 <= 0x72u )
      {
        if ( (unsigned __int16)(v3 - 93) <= 1u )
          return 1;
        return 2;
      }
      if ( v3 == 118 )
        return 1;
      if ( (unsigned __int16)(v3 - 122) > 1u )
        return 2;
    }
LABEL_15:
    if ( *(_BYTE *)(v4 + 41) != 1 )
      return 1;
LABEL_16:
    if ( *(_WORD *)(v4 + 46) != 31 )
      return 1;
    return 2;
  }
  if ( v3 <= 0x10u )
  {
    if ( (unsigned __int16)(v3 - 1) > 0xCu )
      return 2;
    if ( ((1LL << v3) & 0x2A) == 0 )
    {
      if ( ((1LL << v3) & 0xA00) == 0 )
      {
        if ( v3 == 13 )
        {
          if ( *(_BYTE *)(a2 + 81) == 4 )
          {
            while ( 1 )
            {
              v55 = *(_QWORD *)(a1 + 88);
              v56 = *(unsigned __int16 *)(v4 + 86);
              v57 = a1 + 80;
              if ( !v55 )
                break;
              a1 += 80;
              v58 = v55;
              do
              {
                if ( v56 <= *(_DWORD *)(v58 + 32) )
                {
                  a1 = v58;
                  v58 = *(_QWORD *)(v58 + 16);
                }
                else
                {
                  v58 = *(_QWORD *)(v58 + 24);
                }
              }
              while ( v58 );
              if ( v57 == a1 )
                break;
              if ( v56 < *(_DWORD *)(a1 + 32) )
                break;
              v76 = *(_QWORD *)(v4 + 96);
              v72 = *(_QWORD *)(a1 + 40) + v76 < 0;
              v77 = *(_QWORD *)(a1 + 40) + v76;
              v78 = v77;
              if ( !v72 )
                break;
              a2 = v57;
              do
              {
                v7 = *(_QWORD *)(v55 + 16);
                if ( *(int *)(v55 + 32) > 30 )
                {
                  a2 = v55;
                  v55 = *(_QWORD *)(v55 + 16);
                }
                else
                {
                  v55 = *(_QWORD *)(v55 + 24);
                }
              }
              while ( v55 );
              if ( a2 != v57 && *(int *)(a2 + 32) <= 31 )
              {
                if ( v77 >= *(_QWORD *)(a2 + 40) )
                {
                  v108 = v2[3];
                  v109 = *(unsigned __int16 *)(v4 + 46);
                  v110 = *(_QWORD *)(v4 + 16);
                  v111 = v108 + 1;
                  if ( v2[4] < (unsigned __int64)(v108 + 1) )
                  {
                    v2[2] = qvector_reserve(v2 + 2, v2[2], v111, 32);
                    v108 = v2[3];
                    v111 = v108 + 1;
                  }
                  v112 = v2[2] + 32 * v108;
                  v2[3] = v111;
                  *(_QWORD *)v112 = v110;
                  *(_QWORD *)(v112 + 8) = v78;
                  *(_QWORD *)(v112 + 16) = 4;
                  *(_DWORD *)(v112 + 24) = v109;
                }
                return 1;
              }
LABEL_86:
              sub_181A0(a1, a2, v7);
            }
          }
          return 1;
        }
        return 2;
      }
      if ( *(_BYTE *)(a2 + 81) == 4 )
      {
        a2 = *(_QWORD *)(a1 + 88);
        a1 = *(unsigned __int16 *)(v4 + 86);
        v10 = (int *)(v2 + 10);
        if ( a2 )
        {
          v11 = (int *)(v2 + 10);
          v12 = v2[11];
          do
          {
            if ( (int)a1 <= *(_DWORD *)(v12 + 32) )
            {
              v11 = (int *)v12;
              v12 = *(_QWORD *)(v12 + 16);
            }
            else
            {
              v12 = *(_QWORD *)(v12 + 24);
            }
          }
          while ( v12 );
          if ( v11 != v10 && (int)a1 >= v11[8] )
          {
            v70 = *(_QWORD *)(v4 + 96);
            v71 = (v3 != 9) + 1;
            v72 = *((_QWORD *)v11 + 5) + v70 < 0;
            v73 = *((_QWORD *)v11 + 5) + v70;
            v74 = v73;
            if ( v72 )
            {
              v75 = (int *)(v2 + 10);
              do
              {
                v7 = *(_QWORD *)(a2 + 16);
                if ( *(int *)(a2 + 32) > 30 )
                {
                  v75 = (int *)a2;
                  a2 = *(_QWORD *)(a2 + 16);
                }
                else
                {
                  a2 = *(_QWORD *)(a2 + 24);
                }
              }
              while ( a2 );
              if ( v10 == v75 || v75[8] > 31 )
                goto LABEL_86;
              if ( v73 >= *((_QWORD *)v75 + 5) )
              {
                v103 = v2[3];
                v104 = *(unsigned __int16 *)(v4 + 46);
                v105 = *(_QWORD *)(v4 + 16);
                v106 = v103 + 1;
                if ( v2[4] < (unsigned __int64)(v103 + 1) )
                {
                  v2[2] = qvector_reserve(v2 + 2, v2[2], v106, 32);
                  v103 = v2[3];
                  v106 = v103 + 1;
                }
                v107 = v2[2] + 32 * v103;
                v2[3] = v106;
                *(_QWORD *)v107 = v105;
                *(_QWORD *)(v107 + 8) = v74;
                *(_QWORD *)(v107 + 16) = v71;
                *(_DWORD *)(v107 + 24) = v104;
              }
            }
          }
        }
      }
      return 1;
    }
    goto LABEL_55;
  }
  v6 = 1LL << v3;
  if ( ((1LL << v3) & 0x4001FEF80000000LL) != 0 )
    goto LABEL_15;
  if ( (v6 & 0xA0000) != 0 )
  {
LABEL_55:
    if ( *(_BYTE *)(a2 + 81) != 4 )
      return 1;
    v20 = *(_QWORD *)(a1 + 88);
    v21 = *(unsigned __int16 *)(a2 + 86);
    v22 = a1 + 80;
    if ( !v20 )
      return 1;
    v23 = a1 + 80;
    do
    {
      if ( v21 <= *(_DWORD *)(v20 + 32) )
      {
        v23 = v20;
        v20 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v20 = *(_QWORD *)(v20 + 24);
      }
    }
    while ( v20 );
    if ( v23 == v22 )
      return 1;
    if ( v21 < *(_DWORD *)(v23 + 32) )
      return 1;
    v67 = *(_QWORD *)(v23 + 40) + *(_QWORD *)(v4 + 96);
    if ( v67 >= 0 )
      return 1;
    v68 = v2[2];
    v69 = v68 + 32LL * v2[3];
    if ( v68 != v69 )
    {
      while ( v67 != *(_QWORD *)(v68 + 8) )
      {
        v68 += 32;
        if ( v69 == v68 )
          return 2;
      }
      return 1;
    }
    return 2;
  }
  if ( (v6 & 0x14000000) == 0 )
    return 2;
  v7 = 0x1F000000000300LL;
  if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1F000000000300LL )
    return 1;
  v18 = *(_QWORD *)(a1 + 88);
  v19 = a1 + 80;
  if ( !v18 )
    goto LABEL_86;
  a2 = a1 + 80;
  do
  {
    v7 = *(_QWORD *)(v18 + 24);
    if ( *(int *)(v18 + 32) > 30 )
    {
      a2 = v18;
      v18 = *(_QWORD *)(v18 + 16);
    }
    else
    {
      v18 = *(_QWORD *)(v18 + 24);
    }
  }
  while ( v18 );
  if ( v19 == a2 || *(int *)(a2 + 32) > 31 )
    goto LABEL_86;
  v92 = *(_WORD *)(v4 + 46);
  v93 = *(_QWORD *)(a2 + 40);
  v94 = *(_WORD *)(v4 + 126);
  if ( v92 == 31 && v94 == 31 )
    goto LABEL_156;
  if ( v94 > 0x1Fu )
    v94 = 31;
  if ( v94 < v92 )
LABEL_156:
    v95 = 0;
  else
    v95 = (unsigned __int16)(v94 - v92) + 1;
  v96 = *(_BYTE *)(v4 + 33) & 0xFA;
  v97 = 4
      * (v95
       - (((*(_QWORD *)(v4 + 168) & 2) == 0)
        - 1)
       - (((*(_QWORD *)(v4 + 168) & 4) == 0)
        - 1)
       - (((*(_QWORD *)(v4 + 168) & 8) == 0)
        - 1));
  sub_19140((_QWORD *)a1, v4, v93);
  v98 = *(_QWORD *)(a1 + 88);
  if ( v98 )
  {
    v99 = a1 + 80;
    do
    {
      if ( *(int *)(v98 + 32) > 30 )
      {
        v99 = v98;
        v98 = *(_QWORD *)(v98 + 16);
      }
      else
      {
        v98 = *(_QWORD *)(v98 + 24);
      }
    }
    while ( v98 );
    if ( v19 != v99 && *(int *)(v99 + 32) <= 31 )
      v19 = v99;
  }
  v100 = *(_QWORD *)(v19 + 40);
  v101 = v97 + v100;
  v102 = v100 - v97;
  if ( v96 != 8 )
    v102 = v101;
  *(_QWORD *)(v19 + 40) = v102;
  return 0;
}

