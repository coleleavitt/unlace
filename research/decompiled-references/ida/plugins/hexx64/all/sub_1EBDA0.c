unsigned __int64 __fastcall sub_1EBDA0(__int64 a1, __int64 **a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r11
  int v20; // ecx
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  _QWORD *v27; // r12
  int v28; // r10d
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  int v32; // r15d
  int *v33; // r11
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // esi
  int *v37; // rdi
  int v38; // eax
  unsigned __int64 v39; // rsi
  _QWORD *v40; // rdx
  __int64 v41; // rsi
  _QWORD *v42; // rdx
  int v43; // r8d
  unsigned int v44; // r9d
  __int64 v45; // rax
  _QWORD *v46; // rcx
  unsigned __int64 v47; // rax
  __int16 v48; // si
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rbp
  _QWORD *v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r14
  __int64 *v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 i; // r13
  __int64 *v66; // rbx
  __int64 v67; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned __int64 v74; // r12
  __int64 *v75; // rbp
  __int64 v76; // r14
  int v77; // r10d
  __int64 v78; // rdx
  unsigned __int64 v79; // r9
  int *v80; // r11
  unsigned __int64 v81; // rdx
  unsigned int v82; // eax
  int v83; // esi
  int *v84; // rcx
  int v85; // edi
  unsigned __int64 v86; // rsi
  _QWORD *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rsi
  __int64 v96; // [rsp+0h] [rbp-150h]
  int v97; // [rsp+8h] [rbp-148h]
  char v98; // [rsp+10h] [rbp-140h]
  __int64 v99; // [rsp+18h] [rbp-138h]
  int v100; // [rsp+24h] [rbp-12Ch]
  _QWORD *v101; // [rsp+28h] [rbp-128h]
  __int64 v102; // [rsp+30h] [rbp-120h]
  _QWORD *v103; // [rsp+38h] [rbp-118h]
  int v104; // [rsp+40h] [rbp-110h]
  __int64 v105; // [rsp+48h] [rbp-108h]
  __int64 v106; // [rsp+58h] [rbp-F8h] BYREF
  __int128 v107; // [rsp+60h] [rbp-F0h]
  __int64 v108; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v109; // [rsp+80h] [rbp-D0h]
  __int64 v110; // [rsp+90h] [rbp-C0h]
  __int128 v111; // [rsp+98h] [rbp-B8h]
  __int64 *v112; // [rsp+A8h] [rbp-A8h] BYREF
  _BYTE v113[24]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v114; // [rsp+C8h] [rbp-88h]
  __int128 v115; // [rsp+D0h] [rbp-80h]
  __int64 v116; // [rsp+E0h] [rbp-70h]
  __int64 v117; // [rsp+E8h] [rbp-68h]
  __int64 v118; // [rsp+F0h] [rbp-60h]
  __int128 v119; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v120; // [rsp+110h] [rbp-40h]

  v4 = *(int *)(a1 + 64);
  v120 = __readfsqword(0x28u);
  v109 = 0;
  v108 = 0;
  v110 = 0;
  v106 = 0;
  v112 = &v108;
  memset(v113, 0, sizeof(v113));
  v114 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v111 = 0;
  v107 = 0;
  v115 = 0;
  v119 = 0;
  if ( v4 )
  {
    a2 = nullptr;
    v6 = qvector_reserve((__int64)&v106, 0, v4, 96);
    v8 = v107;
    v106 = v6;
    if ( (unsigned __int64)v107 < v4 )
    {
      while ( 1 )
      {
        a2 = &v112;
        sub_1EBC40(v6 + 96 * v8, &v112, 96 * v8, v7);
        if ( v4 == ++v8 )
          break;
        v6 = v106;
      }
    }
    *(_QWORD *)&v107 = v4;
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree(v118);
    }
    v9 = v116;
  }
  else
  {
    v9 = 0;
  }
  qfree(v9);
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  if ( *(_QWORD *)v113 )
  {
    *(_QWORD *)&v113[8] = 0;
    qfree(*(__int64 *)v113);
  }
  v12 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      a2 = (__int64 **)(v106 + 96 * v12);
      sub_1EB940(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v12), (unsigned __int64)a2);
      v13 = *(_DWORD *)(a1 + 64);
      v10 = (unsigned int)(v12 + 1);
      if ( v13 <= (int)v10 )
        goto LABEL_14;
      ++v12;
    }
    while ( (unsigned int)v12 < v13 );
    if ( !under_debugger )
      sub_383060(0xCDEFu, 0.0);
LABEL_134:
    BUG();
  }
LABEL_14:
  v14 = sub_670E0((_QWORD *)a1, (__int64)a2, v10, v11);
  v99 = sub_110340(v14, 0, v15, v16, v17, v18, 0.0, a4);
  if ( !v99 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_134;
  }
  ++*(_DWORD *)(v99 + 24);
  v112 = nullptr;
  memset(v113, 0, 20);
  nullsub_40();
  sub_66C80((__int64)&v112, 0.0);
  v19 = 0;
  v20 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v21 = (_QWORD *)(v19 + *(_QWORD *)v99);
      v22 = (_QWORD *)*v21;
      if ( *v21 )
      {
        if ( v21[1] )
        {
          v23 = (_QWORD *)v22[1];
          if ( v23 != v22 )
            break;
        }
      }
LABEL_39:
      ++v20;
      v19 += 24;
      if ( *(_DWORD *)(a1 + 64) <= v20 )
        goto LABEL_40;
    }
    v105 = 4 * v19;
LABEL_20:
    if ( v23[4] != 1 )
      goto LABEL_35;
    v24 = *(int *)v23[3];
    if ( !(_DWORD)v24 )
      goto LABEL_35;
    v98 = *((_BYTE *)v23 + 56);
    if ( v98 == 1 )
    {
      v96 = *((int *)v23 + 12);
    }
    else
    {
      if ( v98 != 5 )
      {
        if ( !under_debugger )
          sub_383060(0xCAB5u, 0.0);
        goto LABEL_134;
      }
      v96 = v23[6];
    }
    v25 = v106 + 96 * v24;
    v97 = *((_DWORD *)v23 + 16);
    v26 = *(_QWORD *)(v25 + 16);
    if ( !v26 )
      goto LABEL_35;
    v27 = *(_QWORD **)v25;
    v100 = v20;
    v28 = 0;
    v101 = v21;
    v29 = *(_QWORD *)(v25 + 8);
    v30 = 0;
    v31 = v27[4];
    v102 = v19;
    v103 = v23;
    v32 = *((_DWORD *)v23 + 16);
    while ( 1 )
    {
      v33 = (int *)(v29 + 8 * v30);
      v34 = (unsigned int)*v33;
      v35 = *v33;
      if ( v34 >= v31 )
      {
        v38 = *v33;
        v36 = 0;
      }
      else
      {
        v36 = 0;
        while ( 1 )
        {
          v37 = (int *)(v27[3] + 8 * v34);
          v38 = v35;
          v35 = *v37;
          if ( *v37 == v38 )
            break;
          v34 = v35;
          v36 += v37[1];
          if ( v35 >= v31 )
          {
            v38 = *v37;
            break;
          }
        }
      }
      v39 = (unsigned int)(v33[1] + v36);
      v40 = (_QWORD *)(*v27 + 24 * v34);
      if ( v39 >= v40[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC7A1u, 0.0);
        goto LABEL_134;
      }
      v41 = *v40 + (v39 << 6);
      if ( *(_BYTE *)(v41 + 56) )
      {
        v69 = *(_QWORD *)(v41 + 8);
        if ( *(_BYTE *)v69 == 1 )
        {
          v72 = *(int *)(v69 + 8);
          v71 = *(_DWORD *)(v69 + 4);
          if ( v98 != 1 )
            goto LABEL_33;
        }
        else
        {
          if ( *(_BYTE *)v69 != 5 || v98 != 5 )
            goto LABEL_33;
          v70 = *(_QWORD *)(v69 + 8);
          v71 = *(_DWORD *)(v69 + 4);
          v72 = *(_QWORD *)(v70 + 8);
        }
        if ( v96 >= v72 && v96 <= v72 && v71 >= v32 )
        {
          v20 = v100;
          v19 = v102;
          v23 = v103;
          if ( v38 == -1 )
            goto LABEL_35;
          v73 = v105 + v106;
          v74 = *(_QWORD *)(v105 + v106 + 40);
          if ( !v74 )
            goto LABEL_35;
          v75 = *(__int64 **)v73;
          v76 = *(_QWORD *)(v73 + 32);
          v104 = v38;
          v77 = 0;
          v78 = 0;
          v79 = v75[4];
          while ( 2 )
          {
            v80 = (int *)(v76 + 8 * v78);
            v81 = (unsigned int)*v80;
            v82 = *v80;
            if ( v81 >= v79 )
            {
              v85 = *v80;
              v83 = 0;
            }
            else
            {
              v83 = 0;
              while ( 1 )
              {
                v84 = (int *)(v75[3] + 8 * v81);
                v85 = v82;
                v82 = *v84;
                if ( *v84 == v85 )
                  break;
                v81 = v82;
                v83 += v84[1];
                if ( v82 >= v79 )
                {
                  v85 = *v84;
                  break;
                }
              }
            }
            v86 = (unsigned int)(v80[1] + v83);
            v87 = (_QWORD *)(*v75 + 24 * v81);
            if ( v86 >= v87[1] )
            {
              if ( !under_debugger )
                sub_383060(0xC7A1u, 0.0);
              goto LABEL_134;
            }
            v88 = *v87 + (v86 << 6);
            if ( *(_BYTE *)(v88 + 56) )
              goto LABEL_97;
            v89 = *(_QWORD *)(v88 + 8);
            if ( *(_BYTE *)v89 == 1 )
            {
              v92 = *(int *)(v89 + 8);
              v91 = *(_DWORD *)(v89 + 4);
              if ( v98 == 1 )
                goto LABEL_105;
LABEL_97:
              v78 = ++v77;
              if ( v77 >= v74 )
              {
                v20 = v100;
                v19 = v102;
                goto LABEL_35;
              }
              continue;
            }
            break;
          }
          if ( *(_BYTE *)v89 != 5 || v98 != 5 )
            goto LABEL_97;
          v90 = *(_QWORD *)(v89 + 8);
          v91 = *(_DWORD *)(v89 + 4);
          v92 = *(_QWORD *)(v90 + 8);
LABEL_105:
          if ( v96 < v92 || v96 > v92 || v91 > v97 )
            goto LABEL_97;
          v20 = v100;
          v19 = v102;
          if ( v85 != -1 )
          {
            sub_1EB110(v75, v85, v104, 0.0);
            v19 = v102;
            v21 = v101;
            v20 = v100;
          }
LABEL_35:
          if ( (*v23 & 2) != 0 )
          {
LABEL_38:
            if ( (_QWORD *)*v21 == v23 )
              goto LABEL_39;
          }
          else
          {
            v42 = (_QWORD *)v23[2];
            if ( (*(_BYTE *)v42 & 2) == 0 )
            {
              do
              {
                v23 = v42;
                v42 = (_QWORD *)v42[1];
              }
              while ( (*(_BYTE *)v42 & 2) == 0 );
              goto LABEL_38;
            }
            v93 = (_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFFCLL);
            v94 = *v93;
            if ( (*v93 & 2) != 0 )
            {
LABEL_112:
              v23 = v93;
              if ( (_QWORD *)*v21 == v93 )
                goto LABEL_39;
            }
            else
            {
              while ( 1 )
              {
                if ( v23 != (_QWORD *)v93[2] )
                  goto LABEL_112;
                v23 = v93;
                v95 = v94 & 0xFFFFFFFFFFFFFFFCLL;
                v94 = *(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v94 & 2) != 0 )
                  break;
                v93 = (_QWORD *)v95;
              }
              v23 = (_QWORD *)v95;
              if ( *v21 == v95 )
                goto LABEL_39;
            }
          }
          goto LABEL_20;
        }
      }
LABEL_33:
      v30 = ++v28;
      if ( v28 >= v26 )
      {
        v20 = v100;
        v19 = v102;
        v23 = v103;
        goto LABEL_35;
      }
    }
  }
LABEL_40:
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( (_QWORD)v109 )
  {
    while ( 1 )
    {
      v46 = (_QWORD *)(v108 + 24 * v45);
      v47 = v46[1];
      if ( v47 > 1 )
        break;
      v48 = 0;
      if ( v47 )
        goto LABEL_44;
LABEL_49:
      v45 = ++v43;
      if ( v43 >= (unsigned __int64)v109 )
        goto LABEL_50;
    }
    ++v44;
    v48 = 0;
    if ( v44 <= 0xFFFF )
      v48 = v44;
LABEL_44:
    v49 = 0;
    v50 = 0;
    do
    {
      while ( 1 )
      {
        v51 = *(_QWORD *)(*v46 + (v50 << 6) + 8);
        if ( *(_BYTE *)v51 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) == *(_DWORD *)(v51 + 8) )
          break;
        ++v49;
        *(_WORD *)(v51 + 2) = v48;
        v50 = v49;
        if ( (unsigned __int64)v49 >= v46[1] )
          goto LABEL_49;
      }
      v50 = ++v49;
    }
    while ( (unsigned __int64)v49 < v46[1] );
    goto LABEL_49;
  }
LABEL_50:
  sub_104E10(v99, 0.0);
  v52 = v106;
  if ( v106 )
  {
    v53 = v107;
    if ( (_QWORD)v107 )
    {
      v54 = 0;
      do
      {
        v55 = (_QWORD *)(v52 + 96 * v54);
        v56 = v55[9];
        if ( v56 )
        {
          v55[10] = 0;
          qfree(v56);
        }
        qfree(v55[7]);
        v57 = v55[4];
        if ( v57 )
        {
          v55[5] = 0;
          qfree(v57);
        }
        v58 = v55[1];
        if ( v58 )
        {
          v55[2] = 0;
          qfree(v58);
        }
        ++v54;
        v52 = v106;
      }
      while ( v53 != v54 );
    }
    *(_QWORD *)&v107 = 0;
    qfree(v52);
  }
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v110);
  }
  v59 = v108;
  if ( v108 )
  {
    v60 = v109;
    if ( (_QWORD)v109 )
    {
      v61 = 0;
      do
      {
        v62 = (__int64 *)(v59 + 24 * v61);
        v63 = *v62;
        if ( *v62 )
        {
          v64 = v62[1];
          if ( v64 )
          {
            for ( i = 0; i != v64; ++i )
            {
              v66 = (__int64 *)(v63 + (i << 6));
              v67 = v66[4];
              if ( v67 )
              {
                v66[5] = 0;
                qfree(v67);
              }
              qfree(v66[2]);
              v63 = *v62;
            }
          }
          v62[1] = 0;
          qfree(v63);
          v59 = v108;
        }
        ++v61;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v59);
  }
  return v120 - __readfsqword(0x28u);
}

