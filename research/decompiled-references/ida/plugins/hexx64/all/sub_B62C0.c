__int64 __fastcall sub_B62C0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, int a6, double a7)
{
  __int64 v7; // rax
  unsigned int *v8; // rbx
  __int64 v10; // rdi
  unsigned __int8 *v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int8 *v13; // r13
  unsigned __int64 v14; // r14
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  unsigned __int64 *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 *i; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // ebx
  __int64 j; // rsi
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  __int64 v34; // r13
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  char v38; // si
  unsigned __int64 *v39; // rcx
  char v40; // r15
  char v41; // al
  bool v42; // zf
  char v43; // r15
  char v44; // al
  unsigned __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  char v50; // r13
  char v51; // al
  int v52; // eax
  __int64 v53; // r14
  __int128 v54; // rdi
  unsigned __int64 *v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rsi
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r15
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v72; // rax
  __int64 v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // r15
  unsigned __int64 v76; // r14
  __int64 v77; // rax
  char v78; // r14
  char v79; // al
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdi
  unsigned __int64 v86; // [rsp+8h] [rbp-268h]
  _DWORD *v87; // [rsp+18h] [rbp-258h]
  _QWORD *v88; // [rsp+20h] [rbp-250h]
  unsigned __int8 *n; // [rsp+30h] [rbp-240h]
  size_t na; // [rsp+30h] [rbp-240h]
  __int64 nb; // [rsp+30h] [rbp-240h]
  __int64 nc; // [rsp+30h] [rbp-240h]
  int v93; // [rsp+44h] [rbp-22Ch]
  __int64 v94; // [rsp+48h] [rbp-228h]
  __int64 v95; // [rsp+50h] [rbp-220h]
  _QWORD *v96; // [rsp+60h] [rbp-210h]
  unsigned __int64 *v97; // [rsp+68h] [rbp-208h]
  __m128i v98; // [rsp+70h] [rbp-200h] BYREF
  __int64 v99; // [rsp+80h] [rbp-1F0h]
  _QWORD *v100; // [rsp+88h] [rbp-1E8h]
  __int64 v101; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 v102; // [rsp+98h] [rbp-1D8h]
  unsigned __int64 *v103; // [rsp+A0h] [rbp-1D0h] BYREF
  __m128i v104; // [rsp+A8h] [rbp-1C8h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-1A8h]
  unsigned __int64 *v107; // [rsp+D0h] [rbp-1A0h] BYREF
  __m128i v108; // [rsp+D8h] [rbp-198h] BYREF
  _QWORD v109[2]; // [rsp+F0h] [rbp-180h] BYREF
  __int64 v110[2]; // [rsp+100h] [rbp-170h] BYREF
  void *src; // [rsp+110h] [rbp-160h]
  __m128i v112; // [rsp+118h] [rbp-158h]
  __int64 v113[2]; // [rsp+128h] [rbp-148h] BYREF
  void *v114; // [rsp+138h] [rbp-138h]
  __m128i v115; // [rsp+140h] [rbp-130h]
  unsigned __int8 v116[16]; // [rsp+150h] [rbp-120h] BYREF
  unsigned __int8 v117[16]; // [rsp+160h] [rbp-110h] BYREF
  __int64 v118[2]; // [rsp+170h] [rbp-100h] BYREF
  void *v119; // [rsp+180h] [rbp-F0h]
  __m128i v120; // [rsp+188h] [rbp-E8h] BYREF
  __int64 v121[2]; // [rsp+198h] [rbp-D8h] BYREF
  void *v122; // [rsp+1A8h] [rbp-C8h]
  __m128i v123; // [rsp+1B0h] [rbp-C0h] BYREF
  __int64 v124[2]; // [rsp+1C0h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+1D0h] [rbp-A0h] BYREF
  __int128 v126; // [rsp+1D8h] [rbp-98h] BYREF
  __int64 v127; // [rsp+1F0h] [rbp-80h]
  __m128i v128; // [rsp+1F8h] [rbp-78h]
  __int64 v129; // [rsp+208h] [rbp-68h] BYREF
  __int64 v130; // [rsp+218h] [rbp-58h]
  __m128i v131; // [rsp+220h] [rbp-50h]
  unsigned __int64 v132; // [rsp+238h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 480);
  v8 = *(unsigned int **)(a1 + 48);
  v132 = __readfsqword(0x28u);
  v94 = *(_QWORD *)(v7 + 112);
  v88 = (_QWORD *)(v94 + 104);
  if ( !v8 )
  {
    v97 = nullptr;
    v95 = 0;
    v93 = 0;
    goto LABEL_42;
  }
  v96 = (_QWORD *)(v94 + 104);
  v95 = 0;
  v97 = nullptr;
  v93 = 0;
  do
  {
    v10 = *((_QWORD *)v8 + 2);
    if ( !v10
      || *(_QWORD *)(v10 + 24) != *((_QWORD *)v8 + 3)
      || *v8 != 4 && (*v8 != 67 || v8[17] != v8[9])
      || *(_DWORD *)v10 != 4 && (*(_DWORD *)v10 != 67 || *(_DWORD *)(v10 + 36) != *(_DWORD *)(v10 + 68))
      || (*(_BYTE *)(v10 + 6) & 2) == 0
      || (unsigned __int8)sub_1205A0((_BYTE *)v10, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1, a4, a5, a6) )
    {
      goto LABEL_5;
    }
    v11 = (unsigned __int8 *)(v8 + 8);
    if ( *((_BYTE *)v8 + 32) == 1 )
    {
      if ( sub_125B60((unsigned __int8 *)v8 + 32, *((_QWORD *)v8 + 2) + 64LL, 0)
        && (unsigned __int8)sub_64A10(v88, v8[10], v8[9]) )
      {
        sub_125180(*((_QWORD *)v8 + 2) + 64LL, (unsigned __int8 *)v8 + 64);
        sub_11CA10((char *)v8 + 32, (char *)v8 + 64);
      }
LABEL_5:
      if ( *((_BYTE *)v8 + 32) == 1 && !sub_64930(v96, v8[10]) )
      {
        v13 = (unsigned __int8 *)(v8 + 12);
        if ( *((_BYTE *)v8 + 48) == 1 && !sub_64930(v96, v8[14]) || !v97 )
          goto LABEL_19;
        goto LABEL_14;
      }
      v11 = (unsigned __int8 *)(v8 + 8);
    }
    if ( !v97 )
    {
      v13 = (unsigned __int8 *)(v8 + 12);
      if ( *((_BYTE *)v8 + 48) == 1 )
        sub_64930(v96, v8[14]);
      goto LABEL_19;
    }
    v12 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v12 )
    {
      if ( (*(_BYTE *)(*v97 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_13;
      while ( 1 )
      {
        if ( sub_11DA40(v11, (unsigned __int8 *)(v12 + 24)) >= 0 )
        {
          if ( sub_11DA40((unsigned __int8 *)(v12 + 24), v11) >= 0 )
          {
            if ( v97 != (unsigned __int64 *)v12 )
              break;
LABEL_13:
            v13 = (unsigned __int8 *)(v8 + 12);
            if ( *((_BYTE *)v8 + 48) != 1 )
              goto LABEL_14;
LABEL_82:
            if ( !sub_64930(v96, v8[14]) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v12 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v12 = *(_QWORD *)(v12 + 8);
        }
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_13;
      }
    }
    v43 = *((_BYTE *)v8 + 33);
    sub_125180((__int64)v11, (unsigned __int8 *)(v12 + 40));
    ++v93;
    v44 = v43 | *((_BYTE *)v8 + 33);
    v42 = *((_BYTE *)v8 + 32) == 4;
    *((_BYTE *)v8 + 33) = v44;
    if ( !v42 || (v44 & 2) == 0 )
      goto LABEL_13;
    v13 = (unsigned __int8 *)(v8 + 12);
    *(_BYTE *)(*((_QWORD *)v8 + 5) + 65LL) |= 2u;
    if ( *((_BYTE *)v8 + 48) == 1 )
      goto LABEL_82;
LABEL_14:
    v14 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v14 )
      goto LABEL_75;
    if ( (*(_BYTE *)(*v97 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
    {
      do
      {
        if ( sub_11DA40(v13, (unsigned __int8 *)(v14 + 24)) >= 0 )
        {
          if ( sub_11DA40((unsigned __int8 *)(v14 + 24), v13) >= 0 )
          {
            if ( v97 != (unsigned __int64 *)v14 )
            {
LABEL_75:
              v40 = *((_BYTE *)v8 + 49);
              sub_125180((__int64)v13, (unsigned __int8 *)(v14 + 40));
              ++v93;
              v41 = v40 | *((_BYTE *)v8 + 49);
              v42 = *((_BYTE *)v8 + 48) == 4;
              *((_BYTE *)v8 + 49) = v41;
              if ( v42 && (v41 & 2) != 0 )
                *(_BYTE *)(*((_QWORD *)v8 + 7) + 65LL) |= 2u;
            }
            break;
          }
          v14 = *(_QWORD *)(v14 + 16);
        }
        else
        {
          v14 = *(_QWORD *)(v14 + 8);
        }
      }
      while ( (*(_BYTE *)v14 & 2) == 0 );
    }
LABEL_19:
    if ( !sub_11E8C0(v8) )
    {
      if ( *((_BYTE *)v8 + 64) == 1 && !sub_64930(v96, v8[18]) || !v97 )
        goto LABEL_41;
      a3 = (unsigned __int8 *)(v8 + 16);
      v45 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v45 )
        goto LABEL_102;
      if ( (*(_BYTE *)(*v97 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_41;
      while ( 1 )
      {
        n = a3;
        v46 = sub_11DA40(a3, (unsigned __int8 *)(v45 + 24));
        a3 = n;
        if ( v46 >= 0 )
        {
          v52 = sub_11DA40((unsigned __int8 *)(v45 + 24), n);
          a3 = n;
          if ( v52 >= 0 )
          {
            if ( v97 == (unsigned __int64 *)v45 )
              goto LABEL_41;
LABEL_102:
            v50 = *((_BYTE *)v8 + 65);
            sub_125180((__int64)a3, (unsigned __int8 *)(v45 + 40));
            ++v93;
            v51 = v50 | *((_BYTE *)v8 + 65);
            v42 = *((_BYTE *)v8 + 64) == 4;
            *((_BYTE *)v8 + 65) = v51;
            if ( v42 && (v51 & 2) != 0 )
              *(_BYTE *)(*((_QWORD *)v8 + 9) + 65LL) |= 2u;
            goto LABEL_41;
          }
          v45 = *(_QWORD *)(v45 + 16);
        }
        else
        {
          v45 = *(_QWORD *)(v45 + 8);
        }
        if ( (*(_BYTE *)v45 & 2) != 0 )
          goto LABEL_41;
      }
    }
    sub_167810(a1, v8, 0);
    v17 = *v8;
    if ( *v8 != 2 )
      goto LABEL_21;
    if ( *((_BYTE *)v8 + 48) != 1 )
      goto LABEL_22;
    if ( sub_64930(v96, v8[14]) || !v97 )
      goto LABEL_128;
    v75 = 24;
    v76 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v76 )
    {
LABEL_190:
      if ( *(_BYTE *)(v75 + 16) != 10 )
        goto LABEL_128;
      v77 = *(_QWORD *)(v75 + 24);
      if ( *(_BYTE *)v77 != 6 || !(unsigned __int8)sub_342B40(*(_QWORD *)(v94 + 96), *(_QWORD *)(v77 + 8), (int)v8[17]) )
        goto LABEL_128;
      v78 = *((_BYTE *)v8 + 49);
      sub_125180((__int64)v13, (unsigned __int8 *)(v75 + 16));
      v79 = v78 | *((_BYTE *)v8 + 49);
      v42 = *((_BYTE *)v8 + 48) == 4;
      *((_BYTE *)v8 + 49) = v79;
      if ( v42 && (v79 & 2) != 0 )
        *(_BYTE *)(*((_QWORD *)v8 + 7) + 65LL) |= 2u;
      v8[1] |= 0x20000u;
      sub_167810(a1, v8, 0);
      ++v93;
      v17 = *v8;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(*v97 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_128;
    while ( 1 )
    {
      v75 = v76 + 24;
      if ( sub_11DA40(v13, (unsigned __int8 *)(v76 + 24)) >= 0 )
        break;
      v76 = *(_QWORD *)(v76 + 8);
LABEL_187:
      if ( (*(_BYTE *)v76 & 2) != 0 )
      {
        v17 = *v8;
        goto LABEL_21;
      }
    }
    if ( sub_11DA40((unsigned __int8 *)(v76 + 24), v13) < 0 )
    {
      v76 = *(_QWORD *)(v76 + 16);
      goto LABEL_187;
    }
    if ( v97 != (unsigned __int64 *)v76 )
      goto LABEL_190;
LABEL_128:
    v17 = *v8;
LABEL_21:
    if ( v17 == 20 )
    {
      if ( (unsigned __int8)sub_11FD80((char *)v13, v116, 1u) )
      {
        if ( *(_QWORD *)v116 )
        {
          v86 = -*(_QWORD *)v116;
          if ( (~*(_QWORD *)v116 & -*(_QWORD *)v116) == 0 )
          {
            v53 = (__int64)v8;
            v87 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
            if ( (unsigned __int64)(4 * v87[20]) >= -*(_QWORD *)v116 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v53 + 36) == v87[21] && *(_BYTE *)(v53 + 32) == 1 && v87[15] == *(_DWORD *)(v53 + 40) )
                {
                  *v8 = 4;
                  sub_11CDA0((__int64)v13);
                  sub_167810(a1, v8, 0);
                  goto LABEL_22;
                }
                *(_QWORD *)&v54 = a1;
                v124[0] = 0;
                *((_QWORD *)&v54 + 1) = v124;
                na = v53 + 32;
                v124[1] = 0;
                v125 = 0;
                v126 = 0;
                sub_123EA0(v54, v53 + 32, 1, 0xFFFF0000);
                v53 = sub_129150(a1, v124, *(_QWORD *)(v53 + 16), 0, 0, 0, 0x101u);
                if ( !v53 || !sub_125B60((unsigned __int8 *)(v53 + 64), na, 0) )
                  break;
                if ( *(_DWORD *)v53 == 13 )
                {
                  if ( !(unsigned __int8)sub_11FD80((char *)(v53 + 48), v116, 0) || *(_QWORD *)v116 % v86 )
                    break;
                }
                else if ( *(_DWORD *)v53 != 4 )
                {
                  break;
                }
                if ( v125 )
                {
                  *(_QWORD *)&v126 = 0;
                  qfree(v125);
                }
                qfree(v124[0]);
              }
              if ( v125 )
              {
                *(_QWORD *)&v126 = 0;
                qfree(v125);
              }
              qfree(v124[0]);
            }
          }
        }
      }
    }
LABEL_22:
    sub_127A20((__int64)&v101, a1, (__int64)v8, 1, v15, v16);
    sub_124680((__int64)&v105, a1, (__int64)v8, 1u);
    if ( v97 )
    {
      if ( v95 )
      {
        v18 = (unsigned __int64 *)v97[1];
        if ( v18 != v97 )
        {
          while ( 2 )
          {
            if ( (unsigned __int8)sub_64780(v18 + 12, &v101)
              || (unsigned __int8)sub_318470((unsigned __int64 **)v18 + 14, (__int64)&v103)
              || (unsigned __int8)sub_64780(v18 + 7, &v101) )
            {
              v19 = *v18;
            }
            else
            {
              v38 = sub_318470((unsigned __int64 **)v18 + 9, (__int64)&v103);
              v19 = *v18;
              if ( !v38 )
              {
                if ( (*v18 & 2) == 0 )
                {
                  v39 = (unsigned __int64 *)v18[2];
                  if ( (*(_BYTE *)v39 & 2) != 0 )
                  {
                    v55 = (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
                    v56 = *v55;
                    if ( (*v55 & 2) == 0 )
                    {
                      while ( (unsigned __int64 *)v55[2] == v18 )
                      {
                        v18 = v55;
                        v57 = v56 & 0xFFFFFFFFFFFFFFFCLL;
                        v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v56 & 2) != 0 )
                        {
                          v18 = (unsigned __int64 *)v57;
                          goto LABEL_33;
                        }
                        v55 = (unsigned __int64 *)v57;
                      }
                    }
                    v18 = v55;
                  }
                  else
                  {
                    do
                    {
                      v18 = v39;
                      v39 = (unsigned __int64 *)v39[1];
                    }
                    while ( (*(_BYTE *)v39 & 2) == 0 );
                  }
                }
LABEL_33:
                if ( v97 == v18 )
                  goto LABEL_34;
                continue;
              }
            }
            break;
          }
          v20 = (unsigned __int64)v18;
          if ( (v19 & 2) == 0 )
          {
            v20 = v18[2];
            if ( (*(_BYTE *)v20 & 2) == 0 )
            {
              v21 = *(_QWORD *)(v20 + 8);
              for ( i = v97; (*(_BYTE *)v21 & 2) == 0; v21 = *(_QWORD *)(v21 + 8) )
                v20 = v21;
              goto LABEL_31;
            }
            v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
            v47 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v47 & 2) == 0 )
            {
              i = v97;
              v48 = (unsigned __int64)v18;
              while ( *(_QWORD *)(v20 + 16) == v48 )
              {
                v49 = v47 & 0xFFFFFFFFFFFFFFFCLL;
                v47 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v47 & 2) != 0 )
                {
                  v20 = v49;
                  goto LABEL_32;
                }
                v48 = v20;
                v20 = v49;
              }
LABEL_31:
              v97 = i;
            }
          }
LABEL_32:
          v98.m128i_i64[0] = (__int64)v97;
          v98.m128i_i64[1] = v95;
          v99 = v94;
          v100 = v96;
          sub_B2090((unsigned __int64 **)&v98, (__int64 *)v18);
          v18 = (unsigned __int64 *)v20;
          v95 = v98.m128i_i64[1];
          v97 = (unsigned __int64 *)v98.m128i_i64[0];
          v94 = v99;
          v96 = v100;
          goto LABEL_33;
        }
      }
    }
LABEL_34:
    if ( sub_32ED70(*v8)
      && (*((_BYTE *)v8 + 6) & 2) == 0
      && !(unsigned __int8)sub_1205A0(v8, v94, 0, v23, v24, v25)
      && !(unsigned __int8)sub_64780(&v105, &v101)
      && !(unsigned __int8)sub_318470(&v107, (__int64)&v103)
      && ((unsigned __int8)sub_64780(&v101, v96)
       || (unsigned __int8)sub_318470(&v103, (__int64)(v96 + 2))
       || (*v8 == 4 || *v8 == 67 && v8[9] == v8[17])
       && *((_BYTE *)v8 + 64) == 1
       && *((_BYTE *)v8 + 32) == 10
       && **((_BYTE **)v8 + 5) == 6) )
    {
      v58 = _mm_loadu_si128(&v108);
      v59 = _mm_loadu_si128(&v104);
      v109[0] = 0xFFFFFFFF00000000LL;
      v115 = v58;
      v113[0] = v105;
      v109[1] = 0;
      v113[1] = v106;
      v105 = 0;
      v114 = v107;
      v106 = 0;
      v110[0] = v101;
      v107 = nullptr;
      v110[1] = v102;
      v101 = 0;
      src = v103;
      v102 = 0;
      v103 = nullptr;
      v108 = 0;
      v112 = v59;
      v104 = 0;
      sub_1262E0((__int64)v109, (unsigned __int8 *)v8);
      sub_123A40((__int64)v116, (unsigned __int8 *)v8 + 64, v60, v61);
      sub_123A40((__int64)v117, (unsigned __int8 *)v109, v62, v63);
      sub_64000(v118, (__int64)v110, 0.0);
      v65 = v112.m128i_i64[0];
      v119 = nullptr;
      v120 = 0;
      if ( v112.m128i_i64[0] )
      {
        nb = 16 * v112.m128i_i64[0];
        v119 = (void *)qalloc_or_throw(16 * v112.m128i_i64[0], (__int64)v110, 16 * v112.m128i_i64[0], v64);
        v120.m128i_i64[1] = v65;
        memcpy(v119, src, nb);
        v120.m128i_i64[0] = v65;
      }
      sub_64000(v121, (__int64)v113, 0.0);
      v68 = v115.m128i_i64[0];
      v122 = nullptr;
      v123 = 0;
      if ( v115.m128i_i64[0] )
      {
        nc = 16 * v115.m128i_i64[0];
        v122 = (void *)qalloc_or_throw(16 * v115.m128i_i64[0], (__int64)v113, 16 * v115.m128i_i64[0], v67);
        v123.m128i_i64[1] = v68;
        memcpy(v122, v114, nc);
        v123.m128i_i64[0] = v68;
      }
      sub_123A40((__int64)v124, v116, v66, v67);
      sub_123A40((__int64)&v125, v117, v69, v70);
      sub_64000((__int64 *)&v126 + 1, (__int64)v118, 0.0);
      v71 = _mm_loadu_si128(&v120);
      v72 = (__int64)v119;
      v119 = nullptr;
      v128 = v71;
      v127 = v72;
      v120 = 0;
      sub_64000(&v129, (__int64)v121, 0.0);
      v73 = (__int64)v122;
      v74 = _mm_load_si128(&v123);
      v122 = nullptr;
      v130 = v73;
      v131 = v74;
      a7 = 0.0;
      v98.m128i_i64[0] = (__int64)v97;
      v123 = 0;
      v98.m128i_i64[1] = v95;
      v99 = v94;
      v100 = v96;
      sub_B60F0(&v98, (unsigned __int8 *)v124, (__m128)0LL);
      v95 = v98.m128i_i64[1];
      v97 = (unsigned __int64 *)v98.m128i_i64[0];
      v94 = v99;
      v96 = v100;
      if ( v130 )
      {
        v131.m128i_i64[0] = 0;
        qfree(v130);
      }
      qfree(v129);
      if ( v127 )
      {
        v128.m128i_i64[0] = 0;
        qfree(v127);
      }
      qfree(*((__int64 *)&v126 + 1));
      sub_11CDA0((__int64)&v125);
      sub_11CDA0((__int64)v124);
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree((__int64)v122);
      }
      qfree(v121[0]);
      if ( v119 )
      {
        v120.m128i_i64[0] = 0;
        qfree((__int64)v119);
      }
      qfree(v118[0]);
      sub_11CDA0((__int64)v117);
      sub_11CDA0((__int64)v116);
      if ( v114 )
      {
        v115.m128i_i64[0] = 0;
        qfree((__int64)v114);
      }
      qfree(v113[0]);
      if ( src )
      {
        v112.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      qfree(v110[0]);
      sub_11CDA0((__int64)v109);
    }
    if ( v107 )
    {
      v108.m128i_i64[0] = 0;
      qfree((__int64)v107);
    }
    qfree(v105);
    if ( v103 )
    {
      v104.m128i_i64[0] = 0;
      qfree((__int64)v103);
    }
    qfree(v101);
LABEL_41:
    v8 = *((unsigned int **)v8 + 1);
  }
  while ( v8 );
LABEL_42:
  v26 = sub_A7590(a1, 1, (__int64)a3, a4, a5, a6);
  *(_DWORD *)(a1 + 24) |= 0x80u;
  v27 = v26 + v93;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1344LL) + 8LL) )
  {
    for ( j = *(_QWORD *)(a1 + 48); j; j = *((_QWORD *)sub_A6830(a1, j) + 1) )
      ;
  }
  sub_A6B60((_QWORD *)a1, a7);
  sub_138440(*(_QWORD *)(a1 + 64));
  if ( !v97 )
    return v27;
  if ( !v95 )
    goto LABEL_65;
  v29 = *v97;
  v30 = *v97 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v30 & 2) != 0 )
    goto LABEL_65;
  v31 = *(_QWORD *)(v30 + 8);
  if ( (*(_BYTE *)v31 & 2) != 0 )
  {
    v34 = *(_QWORD *)(v30 + 16);
    if ( (*(_BYTE *)v34 & 2) == 0 )
      goto LABEL_56;
LABEL_196:
    v80 = *(_QWORD *)(v30 + 112);
    if ( v80 )
    {
      *(_QWORD *)(v30 + 120) = 0;
      qfree(v80);
    }
    qfree(*(_QWORD *)(v30 + 96));
    v81 = *(_QWORD *)(v30 + 72);
    if ( v81 )
    {
      *(_QWORD *)(v30 + 80) = 0;
      qfree(v81);
    }
    qfree(*(_QWORD *)(v30 + 56));
    sub_11CDA0(v30 + 40);
    sub_11CDA0(v30 + 24);
    *(_QWORD *)v30 |= 2uLL;
    goto LABEL_63;
  }
  v32 = *(_QWORD **)(v31 + 8);
  if ( (*(_BYTE *)v32 & 2) != 0 )
  {
    v33 = *(_QWORD **)(v31 + 16);
    if ( (*(_BYTE *)v33 & 2) == 0 )
    {
LABEL_51:
      sub_A1CC0(v33);
      goto LABEL_52;
    }
    goto LABEL_204;
  }
  sub_A1CC0(v32);
  v33 = *(_QWORD **)(v31 + 16);
  if ( (*(_BYTE *)v33 & 2) == 0 )
    goto LABEL_51;
LABEL_52:
  if ( (*(_BYTE *)v31 & 2) == 0 )
  {
LABEL_204:
    v82 = *(_QWORD *)(v31 + 112);
    if ( v82 )
    {
      *(_QWORD *)(v31 + 120) = 0;
      qfree(v82);
    }
    qfree(*(_QWORD *)(v31 + 96));
    v83 = *(_QWORD *)(v31 + 72);
    if ( v83 )
    {
      *(_QWORD *)(v31 + 80) = 0;
      qfree(v83);
    }
    qfree(*(_QWORD *)(v31 + 56));
    sub_11CDA0(v31 + 40);
    sub_11CDA0(v31 + 24);
    *(_QWORD *)v31 |= 2uLL;
  }
  if ( v31 )
    qfree(v31);
  v34 = *(_QWORD *)(v30 + 16);
  if ( (*(_BYTE *)v34 & 2) == 0 )
  {
LABEL_56:
    v35 = *(_QWORD **)(v34 + 8);
    if ( (*(_BYTE *)v35 & 2) != 0 )
    {
      v36 = *(_QWORD **)(v34 + 16);
      if ( (*(_BYTE *)v36 & 2) == 0 )
      {
LABEL_58:
        sub_A1CC0(v36);
        goto LABEL_59;
      }
    }
    else
    {
      sub_A1CC0(v35);
      v36 = *(_QWORD **)(v34 + 16);
      if ( (*(_BYTE *)v36 & 2) == 0 )
        goto LABEL_58;
LABEL_59:
      if ( (*(_BYTE *)v34 & 2) != 0 )
      {
LABEL_60:
        if ( v34 )
          qfree(v34);
        goto LABEL_62;
      }
    }
    v84 = *(_QWORD *)(v34 + 112);
    if ( v84 )
    {
      *(_QWORD *)(v34 + 120) = 0;
      qfree(v84);
    }
    qfree(*(_QWORD *)(v34 + 96));
    v85 = *(_QWORD *)(v34 + 72);
    if ( v85 )
    {
      *(_QWORD *)(v34 + 80) = 0;
      qfree(v85);
    }
    qfree(*(_QWORD *)(v34 + 56));
    sub_11CDA0(v34 + 40);
    sub_11CDA0(v34 + 24);
    *(_QWORD *)v34 |= 2uLL;
    goto LABEL_60;
  }
LABEL_62:
  if ( (*(_BYTE *)v30 & 2) == 0 )
    goto LABEL_196;
LABEL_63:
  if ( v29 > 3 )
    qfree(v30);
LABEL_65:
  qfree((__int64)v97);
  return v27;
}

