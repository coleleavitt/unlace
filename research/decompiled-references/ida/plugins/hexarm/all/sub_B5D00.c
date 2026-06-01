__int64 __fastcall sub_B5D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  unsigned int *v7; // rbx
  __int64 v9; // rdi
  unsigned int *v10; // r13
  unsigned __int64 v11; // r14
  unsigned int *v12; // r13
  unsigned __int64 v13; // r14
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 *i; // rdi
  int v20; // eax
  unsigned int v21; // ebx
  __int64 j; // rsi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  __int64 v28; // r13
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  char v32; // si
  __int64 *v33; // rcx
  char v34; // r15
  char v35; // al
  bool v36; // zf
  char v37; // r15
  char v38; // al
  unsigned __int64 v39; // r15
  int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  char v44; // r13
  char v45; // al
  int v46; // eax
  __int64 v47; // r14
  __int64 *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __int64 v53; // r15
  __int64 v54; // r15
  __m128i v55; // xmm0
  void *v56; // rax
  void *v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // r15
  unsigned __int64 v60; // r14
  __int64 v61; // rax
  char v62; // r14
  char v63; // al
  unsigned __int64 v64; // [rsp+8h] [rbp-268h]
  _DWORD *v65; // [rsp+18h] [rbp-258h]
  _QWORD *v66; // [rsp+20h] [rbp-250h]
  size_t n; // [rsp+30h] [rbp-240h]
  size_t na; // [rsp+30h] [rbp-240h]
  __int64 nb; // [rsp+30h] [rbp-240h]
  __int64 nc; // [rsp+30h] [rbp-240h]
  int v71; // [rsp+44h] [rbp-22Ch]
  __int64 v72; // [rsp+48h] [rbp-228h]
  __int64 v73; // [rsp+50h] [rbp-220h]
  _QWORD *v74; // [rsp+60h] [rbp-210h]
  __int64 *v75; // [rsp+68h] [rbp-208h]
  __m128i v76; // [rsp+70h] [rbp-200h] BYREF
  __int64 v77; // [rsp+80h] [rbp-1F0h]
  _QWORD *v78; // [rsp+88h] [rbp-1E8h]
  __int64 v79; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 v80; // [rsp+98h] [rbp-1D8h]
  void *v81; // [rsp+A0h] [rbp-1D0h] BYREF
  __m128i v82; // [rsp+A8h] [rbp-1C8h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-1A8h]
  void *v85; // [rsp+D0h] [rbp-1A0h] BYREF
  __m128i v86; // [rsp+D8h] [rbp-198h] BYREF
  _QWORD v87[2]; // [rsp+F0h] [rbp-180h] BYREF
  _QWORD v88[2]; // [rsp+100h] [rbp-170h] BYREF
  void *src; // [rsp+110h] [rbp-160h]
  __m128i v90; // [rsp+118h] [rbp-158h]
  _QWORD v91[2]; // [rsp+128h] [rbp-148h] BYREF
  void *v92; // [rsp+138h] [rbp-138h]
  __m128i v93; // [rsp+140h] [rbp-130h]
  _QWORD v94[2]; // [rsp+150h] [rbp-120h] BYREF
  _BYTE v95[16]; // [rsp+160h] [rbp-110h] BYREF
  __int64 v96[2]; // [rsp+170h] [rbp-100h] BYREF
  void *v97; // [rsp+180h] [rbp-F0h]
  __m128i v98; // [rsp+188h] [rbp-E8h] BYREF
  __int64 v99[2]; // [rsp+198h] [rbp-D8h] BYREF
  void *v100; // [rsp+1A8h] [rbp-C8h]
  __m128i v101; // [rsp+1B0h] [rbp-C0h] BYREF
  _QWORD v102[2]; // [rsp+1C0h] [rbp-B0h] BYREF
  __int64 v103; // [rsp+1D0h] [rbp-A0h] BYREF
  __int128 v104; // [rsp+1D8h] [rbp-98h] BYREF
  void *v105; // [rsp+1F0h] [rbp-80h]
  __m128i v106; // [rsp+1F8h] [rbp-78h]
  __int64 v107; // [rsp+208h] [rbp-68h] BYREF
  void *v108; // [rsp+218h] [rbp-58h]
  __m128i v109; // [rsp+220h] [rbp-50h]
  unsigned __int64 v110; // [rsp+238h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 480);
  v7 = *(unsigned int **)(a1 + 48);
  v110 = __readfsqword(0x28u);
  v72 = *(_QWORD *)(v6 + 112);
  v66 = (_QWORD *)(v72 + 104);
  if ( !v7 )
  {
    v75 = nullptr;
    v73 = 0;
    v71 = 0;
    goto LABEL_42;
  }
  v74 = (_QWORD *)(v72 + 104);
  v73 = 0;
  v75 = nullptr;
  v71 = 0;
  do
  {
    v9 = *((_QWORD *)v7 + 2);
    if ( !v9
      || *(_QWORD *)(v9 + 24) != *((_QWORD *)v7 + 3)
      || *v7 != 4 && (*v7 != 67 || v7[17] != v7[9])
      || *(_DWORD *)v9 != 4 && (*(_DWORD *)v9 != 67 || *(_DWORD *)(v9 + 36) != *(_DWORD *)(v9 + 68))
      || (*(_BYTE *)(v9 + 6) & 2) == 0
      || (unsigned __int8)sub_11FFE0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1) )
    {
      goto LABEL_5;
    }
    v10 = v7 + 8;
    if ( *((_BYTE *)v7 + 32) == 1 )
    {
      if ( (unsigned __int8)sub_1255A0(v7 + 8, *((_QWORD *)v7 + 2) + 64LL, 0)
        && (unsigned __int8)sub_64410(v66, v7[10], v7[9]) )
      {
        sub_124BC0(*((_QWORD *)v7 + 2) + 64LL);
        sub_11C450(v7 + 8, v7 + 16);
      }
LABEL_5:
      if ( *((_BYTE *)v7 + 32) == 1 && !sub_64330(v74, v7[10]) )
      {
        v12 = v7 + 12;
        if ( *((_BYTE *)v7 + 48) == 1 && !sub_64330(v74, v7[14]) || !v75 )
          goto LABEL_19;
        goto LABEL_14;
      }
      v10 = v7 + 8;
    }
    if ( !v75 )
    {
      v12 = v7 + 12;
      if ( *((_BYTE *)v7 + 48) == 1 )
        sub_64330(v74, v7[14]);
      goto LABEL_19;
    }
    v11 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v11 )
    {
      if ( (*(_BYTE *)(*v75 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_13;
      while ( 1 )
      {
        if ( (int)sub_11D480(v10, v11 + 24) >= 0 )
        {
          if ( (int)sub_11D480(v11 + 24, v10) >= 0 )
          {
            if ( v75 != (__int64 *)v11 )
              break;
LABEL_13:
            v12 = v7 + 12;
            if ( *((_BYTE *)v7 + 48) != 1 )
              goto LABEL_14;
LABEL_82:
            if ( !sub_64330(v74, v7[14]) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v11 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 8);
        }
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_13;
      }
    }
    v37 = *((_BYTE *)v7 + 33);
    sub_124BC0(v10);
    ++v71;
    v38 = v37 | *((_BYTE *)v7 + 33);
    v36 = *((_BYTE *)v7 + 32) == 4;
    *((_BYTE *)v7 + 33) = v38;
    if ( !v36 || (v38 & 2) == 0 )
      goto LABEL_13;
    v12 = v7 + 12;
    *(_BYTE *)(*((_QWORD *)v7 + 5) + 65LL) |= 2u;
    if ( *((_BYTE *)v7 + 48) == 1 )
      goto LABEL_82;
LABEL_14:
    v13 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v13 )
      goto LABEL_75;
    if ( (*(_BYTE *)(*v75 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
    {
      do
      {
        if ( (int)sub_11D480(v12, v13 + 24) >= 0 )
        {
          if ( (int)sub_11D480(v13 + 24, v12) >= 0 )
          {
            if ( v75 != (__int64 *)v13 )
            {
LABEL_75:
              v34 = *((_BYTE *)v7 + 49);
              sub_124BC0(v12);
              ++v71;
              v35 = v34 | *((_BYTE *)v7 + 49);
              v36 = *((_BYTE *)v7 + 48) == 4;
              *((_BYTE *)v7 + 49) = v35;
              if ( v36 && (v35 & 2) != 0 )
                *(_BYTE *)(*((_QWORD *)v7 + 7) + 65LL) |= 2u;
            }
            break;
          }
          v13 = *(_QWORD *)(v13 + 16);
        }
        else
        {
          v13 = *(_QWORD *)(v13 + 8);
        }
      }
      while ( (*(_BYTE *)v13 & 2) == 0 );
    }
LABEL_19:
    if ( !(unsigned __int8)sub_11E300(v7) )
    {
      if ( *((_BYTE *)v7 + 64) == 1 && !sub_64330(v74, v7[18]) || !v75 )
        goto LABEL_41;
      a3 = (__int64)(v7 + 16);
      v39 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v39 )
        goto LABEL_102;
      if ( (*(_BYTE *)(*v75 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_41;
      while ( 1 )
      {
        n = a3;
        v40 = sub_11D480(a3, v39 + 24);
        a3 = n;
        if ( v40 >= 0 )
        {
          v46 = sub_11D480(v39 + 24, n);
          a3 = n;
          if ( v46 >= 0 )
          {
            if ( v75 == (__int64 *)v39 )
              goto LABEL_41;
LABEL_102:
            v44 = *((_BYTE *)v7 + 65);
            sub_124BC0(a3);
            ++v71;
            v45 = v44 | *((_BYTE *)v7 + 65);
            v36 = *((_BYTE *)v7 + 64) == 4;
            *((_BYTE *)v7 + 65) = v45;
            if ( v36 && (v45 & 2) != 0 )
              *(_BYTE *)(*((_QWORD *)v7 + 9) + 65LL) |= 2u;
            goto LABEL_41;
          }
          v39 = *(_QWORD *)(v39 + 16);
        }
        else
        {
          v39 = *(_QWORD *)(v39 + 8);
        }
        if ( (*(_BYTE *)v39 & 2) != 0 )
          goto LABEL_41;
      }
    }
    sub_167250(a1, v7, 0);
    v14 = *v7;
    if ( *v7 != 2 )
      goto LABEL_21;
    if ( *((_BYTE *)v7 + 48) != 1 )
      goto LABEL_22;
    if ( sub_64330(v74, v7[14]) || !v75 )
      goto LABEL_128;
    v59 = 24;
    v60 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v60 )
    {
LABEL_190:
      if ( *(_BYTE *)(v59 + 16) != 10 )
        goto LABEL_128;
      v61 = *(_QWORD *)(v59 + 24);
      if ( *(_BYTE *)v61 != 6 || !(unsigned __int8)sub_343080(*(_QWORD *)(v72 + 96), *(_QWORD *)(v61 + 8), (int)v7[17]) )
        goto LABEL_128;
      v62 = *((_BYTE *)v7 + 49);
      sub_124BC0(v12);
      v63 = v62 | *((_BYTE *)v7 + 49);
      v36 = *((_BYTE *)v7 + 48) == 4;
      *((_BYTE *)v7 + 49) = v63;
      if ( v36 && (v63 & 2) != 0 )
        *(_BYTE *)(*((_QWORD *)v7 + 7) + 65LL) |= 2u;
      v7[1] |= 0x20000u;
      sub_167250(a1, v7, 0);
      ++v71;
      v14 = *v7;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(*v75 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_128;
    while ( 1 )
    {
      v59 = v60 + 24;
      if ( (int)sub_11D480(v12, v60 + 24) >= 0 )
        break;
      v60 = *(_QWORD *)(v60 + 8);
LABEL_187:
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
        v14 = *v7;
        goto LABEL_21;
      }
    }
    if ( (int)sub_11D480(v60 + 24, v12) < 0 )
    {
      v60 = *(_QWORD *)(v60 + 16);
      goto LABEL_187;
    }
    if ( v75 != (__int64 *)v60 )
      goto LABEL_190;
LABEL_128:
    v14 = *v7;
LABEL_21:
    if ( v14 == 20 )
    {
      if ( (unsigned __int8)sub_11F7C0(v12, v94, 1) )
      {
        if ( v94[0] )
        {
          v64 = -v94[0];
          if ( (~v94[0] & -v94[0]) == 0 )
          {
            v47 = (__int64)v7;
            v65 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
            if ( (unsigned __int64)(4 * v65[20]) >= -v94[0] )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v47 + 36) == v65[21] && *(_BYTE *)(v47 + 32) == 1 && v65[15] == *(_DWORD *)(v47 + 40) )
                {
                  *v7 = 4;
                  sub_11C7E0(v12);
                  sub_167250(a1, v7, 0);
                  goto LABEL_22;
                }
                v102[0] = 0;
                na = v47 + 32;
                v102[1] = 0;
                v103 = 0;
                v104 = 0;
                sub_1238E0(a1, v102, v47 + 32, 1, 4294901760LL);
                v47 = sub_128B90(a1, (unsigned int)v102, *(_QWORD *)(v47 + 16), 0, 0, 0, 257);
                if ( !v47 || !(unsigned __int8)sub_1255A0(v47 + 64, na, 0) )
                  break;
                if ( *(_DWORD *)v47 == 13 )
                {
                  if ( !(unsigned __int8)sub_11F7C0(v47 + 48, v94, 0) || v94[0] % v64 )
                    break;
                }
                else if ( *(_DWORD *)v47 != 4 )
                {
                  break;
                }
                if ( v103 )
                {
                  *(_QWORD *)&v104 = 0;
                  qfree();
                }
                qfree();
              }
              if ( v103 )
              {
                *(_QWORD *)&v104 = 0;
                qfree();
              }
              qfree();
            }
          }
        }
      }
    }
LABEL_22:
    sub_127460(&v79, a1, v7, 1);
    sub_1240C0(&v83, a1, v7, 1);
    if ( v75 )
    {
      if ( v73 )
      {
        v15 = (__int64 *)v75[1];
        if ( v15 != v75 )
        {
          while ( 2 )
          {
            if ( (unsigned __int8)sub_64180(v15 + 12, &v79)
              || (unsigned __int8)sub_318830(v15 + 14, &v81)
              || (unsigned __int8)sub_64180(v15 + 7, &v79) )
            {
              v16 = *v15;
            }
            else
            {
              v32 = sub_318830(v15 + 9, &v81);
              v16 = *v15;
              if ( !v32 )
              {
                if ( (*v15 & 2) == 0 )
                {
                  v33 = (__int64 *)v15[2];
                  if ( (*(_BYTE *)v33 & 2) != 0 )
                  {
                    v48 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                    v49 = *v48;
                    if ( (*v48 & 2) == 0 )
                    {
                      while ( (__int64 *)v48[2] == v15 )
                      {
                        v15 = v48;
                        v50 = v49 & 0xFFFFFFFFFFFFFFFCLL;
                        v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v49 & 2) != 0 )
                        {
                          v15 = (__int64 *)v50;
                          goto LABEL_33;
                        }
                        v48 = (__int64 *)v50;
                      }
                    }
                    v15 = v48;
                  }
                  else
                  {
                    do
                    {
                      v15 = v33;
                      v33 = (__int64 *)v33[1];
                    }
                    while ( (*(_BYTE *)v33 & 2) == 0 );
                  }
                }
LABEL_33:
                if ( v75 == v15 )
                  goto LABEL_34;
                continue;
              }
            }
            break;
          }
          v17 = (unsigned __int64)v15;
          if ( (v16 & 2) == 0 )
          {
            v17 = v15[2];
            if ( (*(_BYTE *)v17 & 2) == 0 )
            {
              v18 = *(_QWORD *)(v17 + 8);
              for ( i = v75; (*(_BYTE *)v18 & 2) == 0; v18 = *(_QWORD *)(v18 + 8) )
                v17 = v18;
              goto LABEL_31;
            }
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v41 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v41 & 2) == 0 )
            {
              i = v75;
              v42 = (unsigned __int64)v15;
              while ( *(_QWORD *)(v17 + 16) == v42 )
              {
                v43 = v41 & 0xFFFFFFFFFFFFFFFCLL;
                v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v41 & 2) != 0 )
                {
                  v17 = v43;
                  goto LABEL_32;
                }
                v42 = v17;
                v17 = v43;
              }
LABEL_31:
              v75 = i;
            }
          }
LABEL_32:
          v76.m128i_i64[0] = (__int64)v75;
          v76.m128i_i64[1] = v73;
          v77 = v72;
          v78 = v74;
          sub_B1AD0((unsigned __int64 **)&v76, v15);
          v15 = (__int64 *)v17;
          v73 = v76.m128i_i64[1];
          v75 = (__int64 *)v76.m128i_i64[0];
          v72 = v77;
          v74 = v78;
          goto LABEL_33;
        }
      }
    }
LABEL_34:
    if ( (unsigned __int8)sub_32F090(*v7)
      && (*((_BYTE *)v7 + 6) & 2) == 0
      && !(unsigned __int8)sub_11FFE0(v7, v72, 0)
      && !(unsigned __int8)sub_64180(&v83, &v79)
      && !(unsigned __int8)sub_318830(&v85, &v81)
      && ((unsigned __int8)sub_64180(&v79, v74)
       || (unsigned __int8)sub_318830(&v81, v74 + 2)
       || (*v7 == 4 || *v7 == 67 && v7[9] == v7[17])
       && *((_BYTE *)v7 + 64) == 1
       && *((_BYTE *)v7 + 32) == 10
       && **((_BYTE **)v7 + 5) == 6) )
    {
      v51 = _mm_loadu_si128(&v86);
      v52 = _mm_loadu_si128(&v82);
      v87[0] = 0xFFFFFFFF00000000LL;
      v93 = v51;
      v91[0] = v83;
      v87[1] = 0;
      v91[1] = v84;
      v83 = 0;
      v92 = v85;
      v84 = 0;
      v88[0] = v79;
      v85 = nullptr;
      v88[1] = v80;
      v79 = 0;
      src = v81;
      v80 = 0;
      v81 = nullptr;
      v86 = 0;
      v90 = v52;
      v82 = 0;
      sub_125D20(v87, v7);
      sub_123480(v94, v7 + 16);
      sub_123480(v95, v87);
      sub_63A00(v96, (__int64)v88);
      v53 = v90.m128i_i64[0];
      v97 = nullptr;
      v98 = 0;
      if ( v90.m128i_i64[0] )
      {
        nb = 16 * v90.m128i_i64[0];
        v97 = (void *)qalloc_or_throw();
        v98.m128i_i64[1] = v53;
        memcpy(v97, src, nb);
        v98.m128i_i64[0] = v53;
      }
      sub_63A00(v99, (__int64)v91);
      v54 = v93.m128i_i64[0];
      v100 = nullptr;
      v101 = 0;
      if ( v93.m128i_i64[0] )
      {
        nc = 16 * v93.m128i_i64[0];
        v100 = (void *)qalloc_or_throw();
        v101.m128i_i64[1] = v54;
        memcpy(v100, v92, nc);
        v101.m128i_i64[0] = v54;
      }
      sub_123480(v102, v94);
      sub_123480(&v103, v95);
      sub_63A00((__int64 *)&v104 + 1, (__int64)v96);
      v55 = _mm_loadu_si128(&v98);
      v56 = v97;
      v97 = nullptr;
      v106 = v55;
      v105 = v56;
      v98 = 0;
      sub_63A00(&v107, (__int64)v99);
      v57 = v100;
      v58 = _mm_load_si128(&v101);
      v100 = nullptr;
      v108 = v57;
      v109 = v58;
      v76.m128i_i64[0] = (__int64)v75;
      v101 = 0;
      v76.m128i_i64[1] = v73;
      v77 = v72;
      v78 = v74;
      sub_B5B30(&v76, (__int64)v102);
      v73 = v76.m128i_i64[1];
      v75 = (__int64 *)v76.m128i_i64[0];
      v72 = v77;
      v74 = v78;
      if ( v108 )
      {
        v109.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( v105 )
      {
        v106.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      sub_11C7E0(&v103);
      sub_11C7E0(v102);
      if ( v100 )
      {
        v101.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( v97 )
      {
        v98.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      sub_11C7E0(v95);
      sub_11C7E0(v94);
      if ( v92 )
      {
        v93.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( src )
      {
        v90.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      sub_11C7E0(v87);
    }
    if ( v85 )
    {
      v86.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
LABEL_41:
    v7 = *((unsigned int **)v7 + 1);
  }
  while ( v7 );
LABEL_42:
  v20 = sub_A6FD0(a1, 1, a3, a4, a5, a6);
  *(_DWORD *)(a1 + 24) |= 0x80u;
  v21 = v20 + v71;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1344LL) + 8LL) )
  {
    for ( j = *(_QWORD *)(a1 + 48); j; j = *((_QWORD *)sub_A6270(a1, j) + 1) )
      ;
  }
  sub_A65A0((_QWORD *)a1);
  sub_137E80(*(_QWORD *)(a1 + 64));
  if ( !v75 )
    return v21;
  if ( !v73 )
    goto LABEL_65;
  v23 = *v75;
  v24 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v24 & 2) != 0 )
    goto LABEL_65;
  v25 = *(_QWORD *)(v24 + 8);
  if ( (*(_BYTE *)v25 & 2) != 0 )
  {
    v28 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)v28 & 2) == 0 )
      goto LABEL_56;
LABEL_196:
    if ( *(_QWORD *)(v24 + 112) )
    {
      *(_QWORD *)(v24 + 120) = 0;
      qfree();
    }
    qfree();
    if ( *(_QWORD *)(v24 + 72) )
    {
      *(_QWORD *)(v24 + 80) = 0;
      qfree();
    }
    qfree();
    sub_11C7E0(v24 + 40);
    sub_11C7E0(v24 + 24);
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_63;
  }
  v26 = *(_QWORD **)(v25 + 8);
  if ( (*(_BYTE *)v26 & 2) != 0 )
  {
    v27 = *(_QWORD **)(v25 + 16);
    if ( (*(_BYTE *)v27 & 2) == 0 )
    {
LABEL_51:
      sub_A1700(v27);
      goto LABEL_52;
    }
    goto LABEL_204;
  }
  sub_A1700(v26);
  v27 = *(_QWORD **)(v25 + 16);
  if ( (*(_BYTE *)v27 & 2) == 0 )
    goto LABEL_51;
LABEL_52:
  if ( (*(_BYTE *)v25 & 2) == 0 )
  {
LABEL_204:
    if ( *(_QWORD *)(v25 + 112) )
    {
      *(_QWORD *)(v25 + 120) = 0;
      qfree();
    }
    qfree();
    if ( *(_QWORD *)(v25 + 72) )
    {
      *(_QWORD *)(v25 + 80) = 0;
      qfree();
    }
    qfree();
    sub_11C7E0(v25 + 40);
    sub_11C7E0(v25 + 24);
    *(_QWORD *)v25 |= 2uLL;
  }
  if ( v25 )
    qfree();
  v28 = *(_QWORD *)(v24 + 16);
  if ( (*(_BYTE *)v28 & 2) == 0 )
  {
LABEL_56:
    v29 = *(_QWORD **)(v28 + 8);
    if ( (*(_BYTE *)v29 & 2) != 0 )
    {
      v30 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v30 & 2) == 0 )
      {
LABEL_58:
        sub_A1700(v30);
        goto LABEL_59;
      }
    }
    else
    {
      sub_A1700(v29);
      v30 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v30 & 2) == 0 )
        goto LABEL_58;
LABEL_59:
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
LABEL_60:
        if ( v28 )
          qfree();
        goto LABEL_62;
      }
    }
    if ( *(_QWORD *)(v28 + 112) )
    {
      *(_QWORD *)(v28 + 120) = 0;
      qfree();
    }
    qfree();
    if ( *(_QWORD *)(v28 + 72) )
    {
      *(_QWORD *)(v28 + 80) = 0;
      qfree();
    }
    qfree();
    sub_11C7E0(v28 + 40);
    sub_11C7E0(v28 + 24);
    *(_QWORD *)v28 |= 2uLL;
    goto LABEL_60;
  }
LABEL_62:
  if ( (*(_BYTE *)v24 & 2) == 0 )
    goto LABEL_196;
LABEL_63:
  if ( v23 > 3 )
    qfree();
LABEL_65:
  qfree();
  return v21;
}

