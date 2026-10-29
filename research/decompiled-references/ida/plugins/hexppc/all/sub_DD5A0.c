__int64 __fastcall sub_DD5A0(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // r14d
  int v11; // ebx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rax
  __m128i v17; // xmm0
  unsigned int v19; // eax
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  unsigned int v22; // r14d
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  _DWORD *v25; // r13
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 *v33; // rax
  int v34; // eax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  __int64 v42; // r12
  int *v43; // r13
  int v44; // edx
  __int64 v45; // rax
  __int64 *v46; // rdi
  unsigned __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rsi
  int *v50; // rdx
  unsigned int *v51; // r12
  unsigned int v52; // ecx
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // r15
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 *v68; // rdi
  __int64 *v69; // rdi
  unsigned __int64 *v70; // rax
  __m128i v71; // xmm0
  char v72; // al
  char v73; // r12
  __int64 *v74; // rdi
  __int64 *v75; // rdi
  int v76; // [rsp+0h] [rbp-170h]
  __int64 v77; // [rsp+8h] [rbp-168h]
  unsigned __int64 **v78; // [rsp+10h] [rbp-160h]
  __int64 *v79; // [rsp+18h] [rbp-158h]
  __int64 *v80; // [rsp+20h] [rbp-150h]
  __int64 v81; // [rsp+28h] [rbp-148h]
  __int64 v82; // [rsp+30h] [rbp-140h]
  __int64 v83; // [rsp+38h] [rbp-138h]
  __int64 v85; // [rsp+50h] [rbp-120h]
  __int64 v86; // [rsp+58h] [rbp-118h]
  bool v87; // [rsp+60h] [rbp-110h]
  int v88; // [rsp+60h] [rbp-110h]
  int v89; // [rsp+64h] [rbp-10Ch]
  __int64 *v90; // [rsp+68h] [rbp-108h]
  char v91; // [rsp+70h] [rbp-100h]
  __int64 v92; // [rsp+70h] [rbp-100h]
  int v93; // [rsp+88h] [rbp-E8h]
  bool v94; // [rsp+8Ch] [rbp-E4h]
  __int64 v95; // [rsp+90h] [rbp-E0h]
  int v96; // [rsp+98h] [rbp-D8h]
  __int64 v97; // [rsp+98h] [rbp-D8h]
  __int64 v98[2]; // [rsp+A0h] [rbp-D0h] BYREF
  unsigned __int64 *v99; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-B8h]
  int v101; // [rsp+C0h] [rbp-B0h]
  __int64 v102; // [rsp+D0h] [rbp-A0h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-98h]
  int v104; // [rsp+E8h] [rbp-88h]
  __int64 v105; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v106; // [rsp+F8h] [rbp-78h]
  int v107; // [rsp+108h] [rbp-68h]
  __int64 v108; // [rsp+110h] [rbp-60h] BYREF
  __int64 v109; // [rsp+118h] [rbp-58h]
  __int64 v110; // [rsp+120h] [rbp-50h]
  __int128 v111; // [rsp+128h] [rbp-48h]
  unsigned __int64 v112; // [rsp+138h] [rbp-38h]

  v4 = (__int64)&v102;
  v77 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v112 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a1;
  v107 = 0;
  v102 = 0;
  v104 = 0;
  v105 = 0;
  v99 = nullptr;
  v100 = 0;
  v101 = -1;
  v78 = &v99;
  v79 = &v105;
  v103 = 0;
  v106 = 0;
  v7 = *(_QWORD *)(v5 + 784);
  sub_10CF60(v7, &v102, &v105, 64, &v99, *(unsigned int *)(v6 + 72));
  v8 = *(_QWORD *)(a1 + 16);
  v98[0] = 0;
  v98[1] = 0;
  v89 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 80LL);
  if ( !v99 )
    goto LABEL_4;
  v9 = *v99 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v90 = (__int64 *)v99;
      do
      {
        v20 = *(_BYTE *)(v9 + 56);
        v4 = v9 + 24;
        if ( v20 <= 4u || v20 == 5 && *(__int64 *)(v9 + 48) < 0 )
        {
          v9 = *(_QWORD *)(v9 + 16);
        }
        else
        {
          v90 = (__int64 *)v9;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      while ( (*(_BYTE *)v9 & 2) == 0 );
      if ( v99 != (unsigned __int64 *)v90 )
        goto LABEL_37;
    }
LABEL_4:
    v86 = 0;
    goto LABEL_5;
  }
  v90 = nullptr;
LABEL_37:
  v86 = 0;
  v80 = (__int64 *)(a1 + 72);
  do
  {
    v95 = (__int64)(v90 + 3);
    if ( *((_BYTE *)v90 + 56) != 5 )
      sub_D71B0(v7, v4);
    v7 = (__int64)(v90 + 3);
    v21 = *(_QWORD *)a1;
    v22 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
    v97 = v90[6];
    v23 = (_DWORD *)v90[3];
    v24 = &v23[v90[4]];
    if ( v23 == v24 )
    {
      if ( a2 == -1 )
      {
        if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
          goto LABEL_87;
        goto LABEL_172;
      }
      v94 = *(_DWORD *)(v21 + 352) == 1;
LABEL_46:
      if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
        goto LABEL_47;
      v7 = (__int64)(v90 + 3);
      if ( v23 != v24 )
        goto LABEL_139;
LABEL_81:
      if ( !v94 )
        goto LABEL_47;
      if ( a2 != -1 )
        goto LABEL_83;
LABEL_172:
      if ( (*(_BYTE *)(a1 + 356) & 4) == 0 )
      {
LABEL_83:
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
        v108 = 0;
        v109 = 0;
        v43 = *(int **)v95;
        if ( 4LL * *(_QWORD *)(v95 + 8) )
        {
          do
            sub_60750(&v108, *v43++);
          while ( v43 != (int *)(*(_QWORD *)v95 + 4LL * *(_QWORD *)(v95 + 8)) );
        }
        if ( sub_60EF0(&v108, 0) )
        {
          qfree();
        }
        else
        {
          v4 = (__int64)&v108;
          v72 = sub_6C1F0(v42, &v108, 0, v22);
          v7 = v108;
          v73 = v72;
          qfree();
          if ( v73 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
              goto LABEL_165;
            v35 = *(_QWORD *)(v95 + 24) + *(int *)(v95 + 40);
            if ( *(_BYTE *)(v95 + 32) != 5 )
              sub_D71B0(v7, v35);
LABEL_69:
            if ( v35 % v89 )
            {
              v30 = *v90;
              v36 = (unsigned __int64)v90;
              v31 = *v90 & 2;
              if ( (*v90 & 2) == 0 )
              {
                v37 = v90[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v36 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v38 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v38 & 2) == 0 )
                  {
                    v39 = (unsigned __int64)v90;
                    do
                    {
                      if ( *(_QWORD *)(v36 + 16) != v39 )
                        break;
                      v39 = v36;
                      v40 = v38 & 0xFFFFFFFFFFFFFFFCLL;
                      v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
                      v36 = v40;
                    }
                    while ( (v38 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v36 = v37;
                    v37 = *(_QWORD *)(v37 + 8);
                  }
                  while ( (*(_BYTE *)v37 & 2) == 0 );
                }
              }
              v29 = v99;
              if ( v99 != (unsigned __int64 *)v36 )
              {
                v41 = v36 + 24;
                if ( *(_BYTE *)(v36 + 56) != 5 )
                  sub_D71B0(v36, v35);
                v7 = v35 + v89 - 1;
                v4 = v7 & -v89;
                if ( *(_QWORD *)(v41 + 24) < v4 )
                  goto LABEL_50;
              }
            }
            break;
          }
        }
      }
LABEL_87:
      v94 = 1;
LABEL_47:
      v25 = v24;
LABEL_48:
      v4 = (unsigned int)v97;
      sub_60440(v80, v97, *(_DWORD *)(v95 + 40));
      v82 = *(int *)(v95 + 40) + v97;
      v7 = v82;
      v28 = *(_QWORD *)(a1 + 328);
      if ( v28 >= v82 )
        goto LABEL_49;
      v4 = v89;
      v85 = *(int *)(v95 + 40);
      v7 = v97;
      if ( v82 <= v97 )
        goto LABEL_49;
      while ( 1 )
      {
        v44 = v89;
        if ( v85 <= v89 )
          v44 = v85;
        v83 = v97 - v28;
        v4 = v86;
        v93 = v44;
        v81 = v44;
        if ( v44 + v97 - v28 <= v86 )
          goto LABEL_117;
        v45 = *(_QWORD *)a1;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v111 = 0;
        v46 = &v108;
        sub_11F0E0(
          (unsigned int)&v108,
          (*(_DWORD *)(*(_QWORD *)(v45 + 64) + 1440LL) + v97)
        & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 64) + 1496LL) + 24LL) + 16LL),
          v44,
          v44,
          v26,
          v27,
          v76,
          v77,
          (_DWORD)v78,
          (_DWORD)v79,
          (__int64)v80);
        if ( a2 == -1 )
          goto LABEL_131;
        v47 = v99;
        if ( v99 && v100 )
          v47 = (unsigned __int64 *)v99[1];
        if ( v47 != (unsigned __int64 *)v90 )
          goto LABEL_131;
        v48 = 1;
        if ( a2 )
          break;
LABEL_98:
        v49 = *(_QWORD *)(v95 + 8);
        v50 = *(int **)v95;
        v51 = *(unsigned int **)v95;
        if ( !(4 * v49) )
        {
LABEL_141:
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree();
          }
          qfree();
          goto LABEL_5;
        }
        v87 = 0;
        v91 = v48;
        do
        {
          v52 = *v51;
          if ( v25 == v24 || *(_DWORD *)(*(_QWORD *)a1 + 72LL) == v52 )
          {
            v10 = sub_DBF90(a1, v97, v93, v52, &v102, &v108, v91);
            if ( v10 )
            {
              if ( v10 == 1 && v94 )
                goto LABEL_141;
              if ( v10 == -1 )
              {
                v53 = v110;
                *(_BYTE *)(a1 + 364) = 1;
                if ( v53 )
                {
                  *(_QWORD *)&v111 = 0;
                  qfree();
                }
                qfree();
                goto LABEL_15;
              }
            }
            else
            {
              if ( !v94 )
                goto LABEL_133;
              v87 = v94;
            }
            v50 = *(int **)v95;
            v49 = *(_QWORD *)(v95 + 8);
          }
          ++v51;
        }
        while ( v51 != (unsigned int *)&v50[v49] );
        if ( !v87 )
          goto LABEL_141;
LABEL_133:
        v62 = -v89;
        if ( v83 <= 0 )
        {
          v83 = 0;
          v4 = 0;
        }
        else
        {
          v4 = (unsigned int)v83;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
          {
            v83 &= v62;
            v4 = (unsigned int)v83;
          }
        }
        v86 = v62 & (v83 + v81 + v89 - 1);
        sub_60440(v98, v4, (v62 & (v83 + v81 + v89 - 1)) - v4);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree();
        }
        qfree();
LABEL_117:
        v7 = v89;
        v97 += v89;
        v85 -= v89;
        if ( v82 <= v97 )
          goto LABEL_49;
        v28 = *(_QWORD *)(a1 + 328);
      }
      v92 = 0;
      v54 = *(_QWORD *)a1;
      v88 = 0;
      v55 = *(unsigned int *)(*(_QWORD *)a1 + 352LL);
      if ( (int)v55 > 0 )
      {
        while ( 1 )
        {
          v56 = *(_QWORD *)(v54 + 64);
          v57 = *(unsigned int *)(*(_QWORD *)(v54 + 344) + 4 * v92);
          if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 64) )
            sub_D71D0(v46, v92, v56, v48, v55);
          v58 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v57);
          v46 = (__int64 *)*(unsigned int *)(v58 + 72);
          if ( (_DWORD)v46 )
          {
            do
            {
              v46 = (__int64 *)v58;
              if ( sub_32C980(v58) )
                break;
              v59 = *(_QWORD *)(v58 + 352);
              if ( !(_DWORD)v59 )
                goto LABEL_130;
              if ( (int)v59 > 1 )
                break;
              v60 = *(_QWORD *)(v58 + 64);
              v61 = **(unsigned int **)(v58 + 344);
              if ( (unsigned int)v61 >= *(_DWORD *)(v60 + 64) )
              {
                if ( !under_debugger )
                  sub_37EEE0(52719);
                goto LABEL_205;
              }
              v58 = *(_QWORD *)(*(_QWORD *)(v60 + 528) + 8 * v61);
              v48 = *(unsigned int *)(v58 + 72);
            }
            while ( (_DWORD)v48 );
          }
          if ( v88 )
            break;
          v88 = 1;
LABEL_130:
          if ( *(_DWORD *)(v54 + 352) <= (int)++v92 )
            goto LABEL_131;
        }
        LOBYTE(v48) = 1;
        goto LABEL_98;
      }
LABEL_131:
      LOBYTE(v48) = 0;
      goto LABEL_98;
    }
    v25 = (_DWORD *)v90[3];
    v4 = (__int64)(v90 + 3);
    do
    {
      if ( v22 == *v25 )
      {
        v94 = 1;
        if ( a2 != -1 )
LABEL_44:
          v94 = *(_DWORD *)(v21 + 352) == 1;
        if ( v25 != v24 )
          goto LABEL_48;
        goto LABEL_46;
      }
      ++v25;
    }
    while ( v24 != v25 );
    if ( a2 != -1 )
      goto LABEL_44;
    if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
      goto LABEL_87;
    v94 = 1;
    if ( !*v23 )
      goto LABEL_66;
    while ( 2 )
    {
      if ( v24 == ++v23 )
      {
        v95 = v7;
        goto LABEL_81;
      }
LABEL_139:
      if ( *v23 )
        continue;
      break;
    }
LABEL_66:
    v95 = v7;
    if ( v24 == v23 )
      goto LABEL_81;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
    {
      v35 = v97 + *(int *)(v7 + 40);
      goto LABEL_69;
    }
LABEL_165:
    if ( v97 - *(_QWORD *)(a1 + 328) >= v86 )
      break;
LABEL_49:
    v29 = v99;
    v30 = *v90;
    v31 = *v90 & 2;
LABEL_50:
    if ( !v31 )
    {
      v32 = (__int64 *)v90[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v33 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
        v63 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          v7 = (__int64)v90;
          while ( v7 == v33[2] )
          {
            v7 = (__int64)v33;
            v4 = v63 & 0xFFFFFFFFFFFFFFFCLL;
            v63 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v63 & 2) != 0 )
            {
              v90 = (__int64 *)v4;
              goto LABEL_54;
            }
            v33 = (__int64 *)v4;
          }
        }
      }
      else
      {
        do
        {
          v33 = v32;
          v32 = (__int64 *)v32[1];
        }
        while ( (*(_BYTE *)v32 & 2) == 0 );
      }
      v90 = v33;
    }
LABEL_54:
    ;
  }
  while ( v90 != (__int64 *)v29 );
LABEL_5:
  if ( v86 - v77 <= 0 )
    goto LABEL_12;
  v10 = 0;
  v96 = 0;
  while ( 2 )
  {
    v11 = v96 + v77;
    if ( sub_60EF0(v98, v96 + v77) )
    {
      v10 = ++v96;
      goto LABEL_9;
    }
    v19 = *(_DWORD *)(a1 + 360);
    if ( v19 <= 0x10 )
    {
      v19 = getinf();
      if ( v19 == 176 )
        break;
    }
    else if ( v19 == 176 )
    {
      break;
    }
    if ( v19 != 256
      && (unsigned __int8)getinf_flag()
      && !(v11 % v89)
      && ((v11 / v89) & 1) != 0
      && !(unsigned __int8)sub_61020(v98, v11, v89)
      && (unsigned __int8)sub_60FD0(v98, v89 + v11, 2 * v89) )
    {
      v96 += v89 + 1;
LABEL_9:
      if ( v96 >= v86 - v77 )
        break;
      continue;
    }
    break;
  }
  if ( v10 <= 0 )
  {
    if ( !v10 )
    {
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37EEE0(50082);
LABEL_205:
    BUG();
  }
  v34 = sub_CC530();
  if ( v34 > 0 && v10 > v34 )
    v10 = v34;
LABEL_13:
  *(_QWORD *)(a1 + 336) = -v89 & (v89 - 1 + v10);
  sub_DC430(a1, v78);
  if ( (v10 & (v89 - 1)) != 0 )
  {
    sub_32CD90(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 304), 1, v10, v12, v13);
    v10 &= -v89;
  }
LABEL_15:
  qfree();
  v14 = v99;
  if ( !v99 )
    goto LABEL_20;
  v15 = *v99;
  if ( v100 )
  {
    v64 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    v65 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_162:
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | v15 & 3;
      v70 = v99;
      v71 = (__m128i)(unsigned __int64)v99;
      *v99 &= ~1uLL;
      *(__m128i *)(v70 + 1) = _mm_unpacklo_epi64(v71, v71);
      *v99 |= 2u;
      v100 = 0;
      goto LABEL_18;
    }
    v66 = *(_QWORD *)(v64 + 8);
    if ( (*(_BYTE *)v66 & 2) != 0 )
    {
      v67 = *(_QWORD *)(v64 + 16);
      if ( (*(_BYTE *)v67 & 2) != 0 )
        goto LABEL_187;
      goto LABEL_152;
    }
    v74 = *(__int64 **)(v66 + 8);
    if ( (*(_BYTE *)v74 & 2) != 0 )
    {
      v75 = *(__int64 **)(v66 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
      {
LABEL_195:
        if ( *(_QWORD *)(v66 + 24) )
        {
          *(_QWORD *)(v66 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v66 |= 2uLL;
LABEL_181:
        if ( v66 )
          qfree();
        v67 = *(_QWORD *)(v65 + 16);
        if ( (*(_BYTE *)v67 & 2) != 0 )
        {
LABEL_158:
          if ( (*(_BYTE *)v65 & 2) != 0 )
          {
LABEL_159:
            if ( v15 > 3 )
              qfree();
            v14 = v99;
            v15 = *v99;
            goto LABEL_162;
          }
LABEL_187:
          if ( *(_QWORD *)(v65 + 24) )
          {
            *(_QWORD *)(v65 + 32) = 0;
            qfree();
          }
          *(_QWORD *)v65 |= 2uLL;
          goto LABEL_159;
        }
LABEL_152:
        v68 = *(__int64 **)(v67 + 8);
        if ( (*(_BYTE *)v68 & 2) != 0 )
        {
          v69 = *(__int64 **)(v67 + 16);
          if ( (*(_BYTE *)v69 & 2) != 0 )
            goto LABEL_191;
        }
        else
        {
          sub_D7250(v68);
          v69 = *(__int64 **)(v67 + 16);
          if ( (*(_BYTE *)v69 & 2) != 0 )
            goto LABEL_155;
        }
        sub_D7250(v69);
LABEL_155:
        if ( (*(_BYTE *)v67 & 2) != 0 )
        {
LABEL_156:
          if ( v67 )
            qfree();
          goto LABEL_158;
        }
LABEL_191:
        if ( *(_QWORD *)(v67 + 24) )
        {
          *(_QWORD *)(v67 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v67 |= 2uLL;
        goto LABEL_156;
      }
    }
    else
    {
      sub_D7250(v74);
      v75 = *(__int64 **)(v66 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
        goto LABEL_180;
    }
    sub_D7250(v75);
LABEL_180:
    if ( (*(_BYTE *)v66 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_195;
  }
  *v99 = (unsigned __int64)v99 & 0xFFFFFFFFFFFFFFFCLL | *v99 & 3;
  v16 = v99;
  v17 = (__m128i)(unsigned __int64)v99;
  *v99 &= ~1uLL;
  *(__m128i *)(v16 + 1) = _mm_unpacklo_epi64(v17, v17);
  *v99 |= 2u;
LABEL_18:
  if ( v99 )
    qfree();
LABEL_20:
  sub_63240(v79);
  sub_63240(&v102);
  return (unsigned int)v10;
}

