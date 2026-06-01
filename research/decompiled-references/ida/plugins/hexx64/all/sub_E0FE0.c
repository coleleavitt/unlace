__int64 __fastcall sub_E0FE0(__int64 a1, int a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r14d
  int v10; // ebx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rax
  __m128i v14; // xmm0
  unsigned int v16; // eax
  unsigned __int8 v17; // cl
  unsigned __int64 *v18; // rdi
  __int64 v19; // rdx
  unsigned int v20; // r14d
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  _DWORD *v23; // r13
  __int64 v24; // rax
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 *v28; // rcx
  unsigned __int64 *v29; // rax
  int v30; // eax
  __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r8
  __int64 v37; // r12
  int *v38; // r13
  int v39; // edx
  __int64 v40; // rax
  unsigned __int64 *v41; // rax
  char v42; // cl
  unsigned __int64 v43; // rsi
  int *v44; // rdx
  unsigned int *v45; // r12
  unsigned int v46; // ecx
  __int64 v47; // rdi
  int v48; // esi
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 i; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 *v58; // rdi
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r15
  __int64 v62; // r12
  __int64 v63; // r12
  __int64 *v64; // rdi
  __int64 *v65; // rdi
  unsigned __int64 *v66; // rax
  __m128i v67; // xmm0
  char v68; // r12
  __int64 *v69; // rdi
  __int64 *v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 *v75; // [rsp+20h] [rbp-150h]
  __int64 v76; // [rsp+28h] [rbp-148h]
  __int64 v77; // [rsp+30h] [rbp-140h]
  __int64 v78; // [rsp+38h] [rbp-138h]
  __int64 v80; // [rsp+50h] [rbp-120h]
  __int64 v81; // [rsp+58h] [rbp-118h]
  bool v82; // [rsp+60h] [rbp-110h]
  int v83; // [rsp+60h] [rbp-110h]
  int v84; // [rsp+64h] [rbp-10Ch]
  unsigned __int64 *v85; // [rsp+68h] [rbp-108h]
  char v86; // [rsp+70h] [rbp-100h]
  __int64 v87; // [rsp+70h] [rbp-100h]
  int v88; // [rsp+88h] [rbp-E8h]
  bool v89; // [rsp+8Ch] [rbp-E4h]
  unsigned __int64 *v90; // [rsp+90h] [rbp-E0h]
  int v91; // [rsp+98h] [rbp-D8h]
  __int64 v92; // [rsp+98h] [rbp-D8h]
  __int64 v93[2]; // [rsp+A0h] [rbp-D0h] BYREF
  unsigned __int64 *v94; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-B8h]
  int v96; // [rsp+C0h] [rbp-B0h]
  __int64 v97; // [rsp+D0h] [rbp-A0h] BYREF
  __int128 v98; // [rsp+D8h] [rbp-98h]
  int v99; // [rsp+E8h] [rbp-88h]
  __int64 v100; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-78h]
  int v102; // [rsp+108h] [rbp-68h]
  __int64 v103; // [rsp+110h] [rbp-60h] BYREF
  __int64 v104; // [rsp+118h] [rbp-58h]
  __int64 v105; // [rsp+120h] [rbp-50h]
  __int128 v106; // [rsp+128h] [rbp-48h]
  unsigned __int64 v107; // [rsp+138h] [rbp-38h]

  v3.m128i_i64[0] = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v107 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a1;
  v102 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v94 = nullptr;
  v95 = 0;
  v96 = -1;
  v98 = 0;
  v101 = 0;
  sub_1109A0(*(_QWORD **)(v5 + 784), &v97, &v100, 64, &v94, *(_DWORD *)(v6 + 72));
  v7 = *(_QWORD *)(a1 + 16);
  v93[0] = 0;
  v93[1] = 0;
  v84 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 80LL);
  if ( !v94 )
    goto LABEL_4;
  v8 = *v94 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 )
  {
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v85 = v94;
      do
      {
        v17 = *(_BYTE *)(v8 + 56);
        if ( v17 <= 4u || v17 == 5 && *(__int64 *)(v8 + 48) < 0 )
        {
          v8 = *(_QWORD *)(v8 + 16);
        }
        else
        {
          v85 = (unsigned __int64 *)v8;
          v8 = *(_QWORD *)(v8 + 8);
        }
      }
      while ( (*(_BYTE *)v8 & 2) == 0 );
      if ( v94 != v85 )
        goto LABEL_37;
    }
LABEL_4:
    v81 = 0;
    goto LABEL_5;
  }
  v85 = nullptr;
LABEL_37:
  v81 = 0;
  v75 = (__int64 *)(a1 + 72);
  do
  {
    v90 = v85 + 3;
    if ( *((_BYTE *)v85 + 56) != 5 )
      sub_DABF0(0.0);
    v18 = v85 + 3;
    v19 = *(_QWORD *)a1;
    v20 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
    v92 = v85[6];
    v21 = (_DWORD *)v85[3];
    v22 = &v21[v85[4]];
    if ( v21 == v22 )
    {
      if ( a2 == -1 )
      {
        if ( (*(_BYTE *)(v19 + 24) & 8) != 0 )
          goto LABEL_87;
        goto LABEL_172;
      }
      v89 = *(_DWORD *)(v19 + 352) == 1;
LABEL_46:
      if ( (*(_BYTE *)(v19 + 24) & 8) != 0 )
        goto LABEL_47;
      v18 = v85 + 3;
      if ( v21 != v22 )
        goto LABEL_139;
LABEL_81:
      if ( !v89 )
        goto LABEL_47;
      if ( a2 != -1 )
        goto LABEL_83;
LABEL_172:
      if ( (*(_BYTE *)(a1 + 356) & 4) == 0 )
      {
LABEL_83:
        v37 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
        v103 = 0;
        v104 = 0;
        v38 = (int *)*v90;
        if ( 4 * v90[1] )
        {
          do
            sub_64190(&v103, *v38++, 0.0);
          while ( v38 != (int *)(*v90 + 4 * v90[1]) );
        }
        if ( sub_64930(&v103, 0) )
        {
          qfree(v103);
        }
        else
        {
          v68 = sub_6FC30(v37, &v103, 0, v20, 0.0);
          qfree(v103);
          if ( v68 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
              goto LABEL_165;
            v31 = v90[3] + *((int *)v90 + 10);
            if ( *((_BYTE *)v90 + 32) != 5 )
              sub_DABF0(0.0);
LABEL_69:
            if ( v31 % v84 )
            {
              v26 = *v85;
              v32 = (unsigned __int64)v85;
              v27 = *v85 & 2;
              if ( (*v85 & 2) == 0 )
              {
                v33 = v85[2];
                if ( (*(_BYTE *)v33 & 2) != 0 )
                {
                  v32 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                  v34 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v34 & 2) == 0 )
                  {
                    v35 = (unsigned __int64)v85;
                    do
                    {
                      if ( *(_QWORD *)(v32 + 16) != v35 )
                        break;
                      v35 = v32;
                      v36 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                      v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                      v32 = v36;
                    }
                    while ( (v34 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v32 = v33;
                    v33 = *(_QWORD *)(v33 + 8);
                  }
                  while ( (*(_BYTE *)v33 & 2) == 0 );
                }
              }
              v25 = v94;
              if ( v94 != (unsigned __int64 *)v32 )
              {
                if ( *(_BYTE *)(v32 + 56) != 5 )
                  sub_DABF0(0.0);
                if ( *(_QWORD *)(v32 + 48) < ((v31 + v84 - 1) & -v84) )
                  goto LABEL_50;
              }
            }
            break;
          }
        }
      }
LABEL_87:
      v89 = 1;
LABEL_47:
      v23 = v22;
LABEL_48:
      sub_63E80(v75, v92, *((_DWORD *)v90 + 10), 0.0);
      v77 = *((int *)v90 + 10) + v92;
      v24 = *(_QWORD *)(a1 + 328);
      if ( v24 >= v77 )
        goto LABEL_49;
      v80 = *((int *)v90 + 10);
      if ( v77 <= v92 )
        goto LABEL_49;
      while ( 1 )
      {
        v39 = v84;
        if ( v80 <= v84 )
          v39 = v80;
        v78 = v92 - v24;
        v88 = v39;
        v76 = v39;
        if ( v39 + v92 - v24 <= v81 )
          goto LABEL_117;
        v40 = *(_QWORD *)a1;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v106 = 0;
        sub_122B20(
          &v103,
          (*(_QWORD *)(*(_QWORD *)(v40 + 64) + 1440LL) + v92)
        & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 64) + 1496LL) + 24LL) + 16LL),
          v39);
        if ( a2 == -1 )
          goto LABEL_131;
        v41 = v94;
        if ( v94 && v95 )
          v41 = (unsigned __int64 *)v94[1];
        if ( v41 != v85 )
          goto LABEL_131;
        v42 = 1;
        if ( a2 )
          break;
LABEL_98:
        v43 = v90[1];
        v44 = (int *)*v90;
        v45 = (unsigned int *)*v90;
        if ( !(4 * v43) )
        {
LABEL_141:
          if ( v105 )
          {
            *(_QWORD *)&v106 = 0;
            qfree(v105);
          }
          qfree(v103);
          goto LABEL_5;
        }
        v82 = 0;
        v86 = v42;
        do
        {
          v46 = *v45;
          if ( v23 == v22 || *(_DWORD *)(*(_QWORD *)a1 + 72LL) == v46 )
          {
            v9 = sub_DF9D0(a1, v92, v88, v46, &v97, &v103, v86);
            if ( v9 )
            {
              if ( v9 == 1 && v89 )
                goto LABEL_141;
              if ( v9 == -1 )
              {
                v47 = v105;
                *(_BYTE *)(a1 + 364) = 1;
                if ( v47 )
                {
                  *(_QWORD *)&v106 = 0;
                  qfree(v47);
                }
                qfree(v103);
                goto LABEL_15;
              }
            }
            else
            {
              if ( !v89 )
                goto LABEL_133;
              v82 = v89;
            }
            v44 = (int *)*v90;
            v43 = v90[1];
          }
          ++v45;
        }
        while ( v45 != (unsigned int *)&v44[v43] );
        if ( !v82 )
          goto LABEL_141;
LABEL_133:
        v56 = -v84;
        if ( v78 <= 0 )
        {
          v78 = 0;
          v48 = 0;
        }
        else
        {
          v48 = v78;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
          {
            v78 &= v56;
            v48 = v78;
          }
        }
        v81 = v56 & (v78 + v76 + v84 - 1);
        sub_63E80(v93, v48, (v56 & (v78 + v76 + v84 - 1)) - v48, 0.0);
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree(v105);
        }
        qfree(v103);
LABEL_117:
        v92 += v84;
        v80 -= v84;
        if ( v77 <= v92 )
          goto LABEL_49;
        v24 = *(_QWORD *)(a1 + 328);
      }
      v87 = 0;
      v49 = *(_QWORD *)a1;
      v83 = 0;
      if ( *(int *)(*(_QWORD *)a1 + 352LL) > 0 )
      {
        while ( 1 )
        {
          v50 = *(_QWORD *)(v49 + 64);
          v51 = *(unsigned int *)(*(_QWORD *)(v49 + 344) + 4 * v87);
          if ( (unsigned int)v51 >= *(_DWORD *)(v50 + 64) )
            sub_DAC10(0.0);
          for ( i = *(_QWORD *)(*(_QWORD *)(v50 + 528) + 8 * v51);
                *(_DWORD *)(i + 72);
                i = *(_QWORD *)(*(_QWORD *)(v54 + 528) + 8 * v55) )
          {
            if ( sub_330DE0(i) )
              break;
            v53 = *(_QWORD *)(i + 352);
            if ( !(_DWORD)v53 )
              goto LABEL_130;
            if ( (int)v53 > 1 )
              break;
            v54 = *(_QWORD *)(i + 64);
            v55 = **(unsigned int **)(i + 344);
            if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 64) )
            {
              if ( !under_debugger )
                sub_383060(0xCDEFu, 0.0);
              goto LABEL_205;
            }
          }
          if ( v83 )
            break;
          v83 = 1;
LABEL_130:
          if ( *(_DWORD *)(v49 + 352) <= (int)++v87 )
            goto LABEL_131;
        }
        v42 = 1;
        goto LABEL_98;
      }
LABEL_131:
      v42 = 0;
      goto LABEL_98;
    }
    v23 = (_DWORD *)v85[3];
    do
    {
      if ( v20 == *v23 )
      {
        v89 = 1;
        if ( a2 != -1 )
LABEL_44:
          v89 = *(_DWORD *)(v19 + 352) == 1;
        if ( v23 != v22 )
          goto LABEL_48;
        goto LABEL_46;
      }
      ++v23;
    }
    while ( v22 != v23 );
    if ( a2 != -1 )
      goto LABEL_44;
    if ( (*(_BYTE *)(v19 + 24) & 8) != 0 )
      goto LABEL_87;
    v89 = 1;
    if ( !*v21 )
      goto LABEL_66;
    while ( 2 )
    {
      if ( v22 == ++v21 )
      {
        v90 = v18;
        goto LABEL_81;
      }
LABEL_139:
      if ( *v21 )
        continue;
      break;
    }
LABEL_66:
    v90 = v18;
    if ( v22 == v21 )
      goto LABEL_81;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
    {
      v31 = v92 + *((int *)v18 + 10);
      goto LABEL_69;
    }
LABEL_165:
    if ( v92 - *(_QWORD *)(a1 + 328) >= v81 )
      break;
LABEL_49:
    v25 = v94;
    v26 = *v85;
    v27 = *v85 & 2;
LABEL_50:
    if ( !v27 )
    {
      v28 = (unsigned __int64 *)v85[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v29 = (unsigned __int64 *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
        v57 = *v29;
        if ( (*v29 & 2) == 0 )
        {
          v58 = v85;
          while ( v58 == (unsigned __int64 *)v29[2] )
          {
            v58 = v29;
            v59 = v57 & 0xFFFFFFFFFFFFFFFCLL;
            v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v57 & 2) != 0 )
            {
              v85 = (unsigned __int64 *)v59;
              goto LABEL_54;
            }
            v29 = (unsigned __int64 *)v59;
          }
        }
      }
      else
      {
        do
        {
          v29 = v28;
          v28 = (unsigned __int64 *)v28[1];
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
      }
      v85 = v29;
    }
LABEL_54:
    ;
  }
  while ( v85 != v25 );
LABEL_5:
  if ( v81 - a3 <= 0 )
    goto LABEL_12;
  v9 = 0;
  v91 = 0;
  while ( 2 )
  {
    v10 = v91 + a3;
    if ( sub_64930(v93, v91 + a3) )
    {
      v9 = ++v91;
      goto LABEL_9;
    }
    v16 = *(_DWORD *)(a1 + 360);
    if ( v16 <= 0x10 )
    {
      v16 = getinf();
      if ( v16 == 176 )
        break;
    }
    else if ( v16 == 176 )
    {
      break;
    }
    if ( v16 != 256
      && (unsigned __int8)getinf_flag()
      && !(v10 % v84)
      && ((v10 / v84) & 1) != 0
      && !(unsigned __int8)sub_64A60(v93, v10, v84)
      && (unsigned __int8)sub_64A10(v93, v84 + v10, 2 * v84) )
    {
      v91 += v84 + 1;
LABEL_9:
      if ( v91 >= v81 - a3 )
        break;
      continue;
    }
    break;
  }
  if ( v9 <= 0 )
  {
    if ( !v9 )
    {
LABEL_12:
      v9 = 0;
      goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(0xC3A2u, 0.0);
LABEL_205:
    BUG();
  }
  v30 = sub_CFF70();
  if ( v30 > 0 && v9 > v30 )
    v9 = v30;
LABEL_13:
  *(_QWORD *)(a1 + 336) = -v84 & (v84 - 1 + v9);
  sub_DFE70(a1, (unsigned __int64 *)&v94);
  if ( (v9 & (v84 - 1)) != 0 )
  {
    sub_3311F0(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 304), 1u, (unsigned int)v9);
    v9 &= -v84;
  }
LABEL_15:
  qfree(v93[0]);
  v11 = v94;
  if ( !v94 )
    goto LABEL_20;
  v12 = *v94;
  if ( v95 )
  {
    v60 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v61 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_162:
      *v11 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL | v12 & 3;
      v66 = v94;
      v67 = (__m128i)(unsigned __int64)v94;
      *v94 &= ~1uLL;
      v3 = _mm_unpacklo_epi64(v67, v67);
      *(__m128i *)(v66 + 1) = v3;
      *v94 |= 2u;
      v95 = 0;
      goto LABEL_18;
    }
    v62 = *(_QWORD *)(v60 + 8);
    if ( (*(_BYTE *)v62 & 2) != 0 )
    {
      v63 = *(_QWORD *)(v60 + 16);
      if ( (*(_BYTE *)v63 & 2) != 0 )
        goto LABEL_187;
      goto LABEL_152;
    }
    v69 = *(__int64 **)(v62 + 8);
    if ( (*(_BYTE *)v69 & 2) != 0 )
    {
      v70 = *(__int64 **)(v62 + 16);
      if ( (*(_BYTE *)v70 & 2) != 0 )
      {
LABEL_195:
        v73 = *(_QWORD *)(v62 + 24);
        if ( v73 )
        {
          *(_QWORD *)(v62 + 32) = 0;
          qfree(v73);
        }
        *(_QWORD *)v62 |= 2uLL;
LABEL_181:
        if ( v62 )
          qfree(v62);
        v63 = *(_QWORD *)(v61 + 16);
        if ( (*(_BYTE *)v63 & 2) != 0 )
        {
LABEL_158:
          if ( (*(_BYTE *)v61 & 2) != 0 )
          {
LABEL_159:
            if ( v12 > 3 )
              qfree(v12 & 0xFFFFFFFFFFFFFFFCLL);
            v11 = v94;
            v12 = *v94;
            goto LABEL_162;
          }
LABEL_187:
          v71 = *(_QWORD *)(v61 + 24);
          if ( v71 )
          {
            *(_QWORD *)(v61 + 32) = 0;
            qfree(v71);
          }
          *(_QWORD *)v61 |= 2uLL;
          goto LABEL_159;
        }
LABEL_152:
        v64 = *(__int64 **)(v63 + 8);
        if ( (*(_BYTE *)v64 & 2) != 0 )
        {
          v65 = *(__int64 **)(v63 + 16);
          if ( (*(_BYTE *)v65 & 2) != 0 )
            goto LABEL_191;
        }
        else
        {
          sub_DAC90(v64);
          v65 = *(__int64 **)(v63 + 16);
          if ( (*(_BYTE *)v65 & 2) != 0 )
            goto LABEL_155;
        }
        sub_DAC90(v65);
LABEL_155:
        if ( (*(_BYTE *)v63 & 2) != 0 )
        {
LABEL_156:
          if ( v63 )
            qfree(v63);
          goto LABEL_158;
        }
LABEL_191:
        v72 = *(_QWORD *)(v63 + 24);
        if ( v72 )
        {
          *(_QWORD *)(v63 + 32) = 0;
          qfree(v72);
        }
        *(_QWORD *)v63 |= 2uLL;
        goto LABEL_156;
      }
    }
    else
    {
      sub_DAC90(v69);
      v70 = *(__int64 **)(v62 + 16);
      if ( (*(_BYTE *)v70 & 2) != 0 )
        goto LABEL_180;
    }
    sub_DAC90(v70);
LABEL_180:
    if ( (*(_BYTE *)v62 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_195;
  }
  *v94 = (unsigned __int64)v94 & 0xFFFFFFFFFFFFFFFCLL | *v94 & 3;
  v13 = v94;
  v14 = (__m128i)(unsigned __int64)v94;
  *v94 &= ~1uLL;
  v3 = _mm_unpacklo_epi64(v14, v14);
  *(__m128i *)(v13 + 1) = v3;
  *v94 |= 2u;
LABEL_18:
  if ( v94 )
    qfree((__int64)v94);
LABEL_20:
  sub_66C80((__int64)&v100, *(double *)v3.m128i_i64);
  sub_66C80((__int64)&v97, *(double *)v3.m128i_i64);
  return (unsigned int)v9;
}

