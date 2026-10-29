unsigned __int64 __fastcall sub_770C0(__int64 a1, char a2, __int64 *a3, _QWORD *a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r15
  int v12; // eax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rax
  char *v21; // r15
  int v22; // r13d
  int v23; // ebx
  char *v24; // rdx
  char *v25; // r15
  char *v26; // rsi
  char *v27; // r12
  char *v28; // rdx
  size_t v29; // rbx
  char *v30; // r12
  char *v31; // r15
  char *v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  const char *v36; // rdi
  char tinfo_property; // al
  __int64 *v38; // rdx
  int v39; // r13d
  int v40; // ebx
  unsigned __int64 v41; // rbx
  int v42; // r13d
  int tinfo_size; // ebx
  __int64 *v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // r13
  int v47; // eax
  char v48; // r12
  const char *v49; // rcx
  __int64 v50; // rdi
  unsigned __int8 scalar_bt; // r14
  __m128i v52; // xmm0
  char *v53; // rdi
  char *v54; // rax
  size_t v55; // r12
  void *v56; // rax
  const void *v57; // rsi
  int v58; // edx
  __int64 v59; // rax
  int i; // r15d
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdi
  int v65; // r8d
  int v66; // r9d
  const char *v67; // rcx
  char *v68; // rdi
  char *v69; // r12
  char *v70; // r14
  char *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // rdi
  int v74; // eax
  __int64 v75; // rdi
  int v76; // r13d
  __int64 *v77; // rax
  __int64 v78; // rbx
  __int64 v79; // r12
  __int64 v80; // rsi
  int v81; // ecx
  char *v82; // rcx
  __int64 v83; // [rsp+8h] [rbp-5A8h]
  __int64 v84; // [rsp+10h] [rbp-5A0h]
  __int64 v85; // [rsp+18h] [rbp-598h]
  __int64 v87; // [rsp+28h] [rbp-588h]
  char *v88; // [rsp+30h] [rbp-580h]
  __int64 v89; // [rsp+38h] [rbp-578h]
  __int64 v91; // [rsp+50h] [rbp-560h]
  char *v93; // [rsp+60h] [rbp-550h]
  unsigned __int64 v94; // [rsp+60h] [rbp-550h]
  char *v95; // [rsp+60h] [rbp-550h]
  unsigned __int64 n; // [rsp+68h] [rbp-548h]
  size_t na; // [rsp+68h] [rbp-548h]
  size_t nb; // [rsp+68h] [rbp-548h]
  __int64 v99; // [rsp+78h] [rbp-538h] BYREF
  __int64 v100; // [rsp+80h] [rbp-530h] BYREF
  __int128 v101; // [rsp+88h] [rbp-528h]
  __int64 v102; // [rsp+A0h] [rbp-510h] BYREF
  __int128 v103; // [rsp+A8h] [rbp-508h]
  __int64 (__fastcall **v104)(); // [rsp+C0h] [rbp-4F0h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-4E8h]
  _QWORD *v106; // [rsp+D0h] [rbp-4E0h]
  __int64 v107; // [rsp+D8h] [rbp-4D8h]
  __m128i v108; // [rsp+E0h] [rbp-4D0h] BYREF
  _QWORD *v109; // [rsp+F0h] [rbp-4C0h]
  char v110; // [rsp+F8h] [rbp-4B8h]
  char *s2[3]; // [rsp+100h] [rbp-4B0h] BYREF
  __int128 v112; // [rsp+118h] [rbp-498h]
  __int64 v113; // [rsp+128h] [rbp-488h]
  __int128 v114; // [rsp+130h] [rbp-480h]
  _OWORD v115[3]; // [rsp+140h] [rbp-470h] BYREF
  __int64 v116; // [rsp+170h] [rbp-440h]
  int v117; // [rsp+178h] [rbp-438h]
  __int64 v118; // [rsp+180h] [rbp-430h]
  char v119; // [rsp+188h] [rbp-428h]
  _BYTE v120[1000]; // [rsp+190h] [rbp-420h] BYREF
  unsigned __int64 v121; // [rsp+578h] [rbp-38h]

  v121 = __readfsqword(0x28u);
  v87 = sub_84EB0(a7[1]);
  if ( !v87 )
    return v121 - __readfsqword(0x28u);
  v104 = off_C8C38;
  v105 = a1;
  v106 = a7;
  v107 = 0;
  v109 = a4;
  v110 = 0;
  v108 = 0;
  sub_9B730(a6, 2, &v104);
  if ( v110 || a2 && (get_tinfo_property(*a4, 2) & 0x3F) == 1 )
  {
    v99 = 0;
    *(_OWORD *)s2 = 0;
    v100 = 0;
    v102 = 0;
    copy_tinfo_t(&s2[1], &v102);
    s2[2] = nullptr;
    copy_tinfo_t(&s2[2], &v100);
    LODWORD(v112) = 0;
    WORD2(v112) = 0;
    clear_tinfo_t(&v102);
    clear_tinfo_t(&v100);
    copy_tinfo_t(s2, a4);
    create_tinfo(&v99, 10, 10, s2);
    clear_tinfo_t(&s2[2]);
    clear_tinfo_t(&s2[1]);
    clear_tinfo_t(s2);
    copy_tinfo_t(a4, &v99);
    v21 = nullptr;
    v22 = 0;
    memset(s2, 0, sizeof(s2));
LABEL_51:
    s2[0] = (char *)qvector_reserve(s2, v21, 3, 1);
    v21 = s2[0];
    while ( 1 )
    {
      v23 = 0;
      s2[1] = (_BYTE *)(&dword_0 + 3);
      *(_WORD *)v21 = 24432;
      s2[0][2] = 0;
      if ( v22 > 0 )
        break;
LABEL_36:
      v28 = *(char **)(a5 + 8);
      if ( v28 )
      {
        v29 = (size_t)(v28 - 1);
        if ( v28 != (_BYTE *)&dword_0 + 1 )
        {
          v30 = s2[1];
          v31 = v28 - 1;
          if ( s2[1] )
          {
            v30 = s2[1] - 1;
            v31 = &s2[1][v29 - 1];
            v28 += (unsigned __int64)(s2[1] - 1);
          }
          v32 = s2[0];
          if ( s2[2] < v28 )
          {
            v95 = v28;
            s2[0] = (char *)qvector_reserve(s2, s2[0], v28, 1);
            v28 = v95;
            v32 = s2[0];
          }
          s2[1] = v28;
          v31[(_QWORD)v32] = 0;
          memcpy(&v30[(unsigned __int64)s2[0]], *(const void **)a5, v29);
        }
      }
      v21 = s2[0];
      v33 = (__int64 *)a7[17];
      v34 = *v33;
      v35 = *v33 + 80 * v33[1];
      if ( *v33 == v35 )
        goto LABEL_95;
      while ( 1 )
      {
        v36 = src;
        if ( *(_QWORD *)(v34 + 40) )
          v36 = *(const char **)(v34 + 32);
        if ( !strcmp(v36, v21) )
          break;
        v34 += 80;
        if ( v35 == v34 )
          goto LABEL_95;
      }
      if ( !v34 )
      {
LABEL_95:
        v52 = _mm_loadu_si128((const __m128i *)&s2[1]);
        v53 = *(char **)a5;
        v54 = *(char **)(a5 + 16);
        *(_QWORD *)a5 = v21;
        *(__m128i *)(a5 + 8) = v52;
        s2[0] = v53;
        s2[2] = v54;
        if ( v53 )
        {
          s2[1] = nullptr;
          qfree(v53);
        }
        clear_tinfo_t(&v99);
        goto LABEL_4;
      }
      ++v22;
      if ( s2[2] <= (_BYTE *)&dword_0 + 2 )
        goto LABEL_51;
    }
    while ( 1 )
    {
      v27 = s2[1];
      if ( s2[1] )
      {
        v24 = s2[1] + 1;
        v25 = s2[1];
        v26 = s2[0];
        v27 = s2[1] - 1;
        if ( s2[2] < s2[1] + 1 )
          goto LABEL_35;
      }
      else
      {
        v26 = s2[0];
        v24 = (_BYTE *)(&dword_0 + 2);
        v25 = (_BYTE *)(&dword_0 + 1);
        if ( s2[2] < (_BYTE *)&dword_0 + 2 )
        {
LABEL_35:
          v93 = v24;
          s2[0] = (char *)qvector_reserve(s2, v26, v24, 1);
          v24 = v93;
          v26 = s2[0];
        }
      }
      s2[1] = v24;
      ++v23;
      v25[(_QWORD)v26] = 0;
      s2[0][(unsigned __int64)v27] = 95;
      if ( v22 == v23 )
        goto LABEL_36;
    }
  }
LABEL_4:
  n = *(_QWORD *)(a5 + 8);
  if ( !n )
  {
    v100 = 0;
    v88 = nullptr;
    v101 = 0;
LABEL_6:
    v9 = v108.m128i_i64[0];
LABEL_7:
    v10 = v107;
LABEL_8:
    v11 = v10;
    v89 = v10 + 40 * v9;
    if ( v10 == v89 )
      goto LABEL_15;
    while ( 1 )
    {
      v12 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 == 1 )
        break;
      if ( (unsigned int)(v12 - 3) > 1 )
      {
        if ( v12 == 2 )
        {
          v84 = *(_QWORD *)(v11 + 24);
          v83 = *(_QWORD *)(v11 + 16);
          tinfo_property = get_tinfo_property(*a4, 2);
          if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
          {
            tinfo_size = get_tinfo_size(0, *a4, 0);
            if ( ((tinfo_size - 2) & 0xFFFFFFFD) != 0 && ((tinfo_size - 8) & 0xFFFFFFF7) != 0 )
              goto LABEL_11;
            v44 = *(__int64 **)(v11 + 8);
            v45 = tinfo_size >> 1;
            na = *v44 + 24 * v44[1];
            if ( *v44 == na )
              goto LABEL_11;
            v46 = *v44;
            while ( 2 )
            {
              if ( v45 == *(unsigned __int16 *)(v46 + 18) )
              {
                v47 = *(unsigned __int16 *)(v46 + 16);
                if ( !(_WORD)v47 )
                {
                  memset(s2, 0, sizeof(s2));
                  v48 = 1;
                  v49 = "low";
                  goto LABEL_88;
                }
                if ( v45 == v47 )
                {
                  v48 = 0;
                  memset(s2, 0, sizeof(s2));
                  v49 = "high";
LABEL_88:
                  sub_20160((__int64 *)s2, (__int64)"%s_%s%u", v88, v49, v45);
                  scalar_bt = get_scalar_bt(v45);
                  if ( v48 || (unsigned int)get_tinfo_property(*a4, 3) != 1 )
                    scalar_bt = scalar_bt & 0xCF | 0x20;
                  v102 = scalar_bt;
                  if ( *(_DWORD *)v46 == 1 )
                  {
                    sub_75440(a7[2], v46, &v102, s2[0]);
                  }
                  else if ( (unsigned int)(*(_DWORD *)v46 - 3) <= 1 )
                  {
                    sub_70050((__int64)a7, v87, v46, v83, v84, &v102, (__int64)s2[0]);
                  }
                  clear_tinfo_t(&v102);
                  if ( s2[0] )
                  {
                    s2[1] = nullptr;
                    qfree(s2[0]);
                  }
                }
              }
              v46 += 24;
              if ( na == v46 )
                goto LABEL_11;
              continue;
            }
          }
          if ( (get_tinfo_property(*a4, 2) & 0x2F) != 0xD )
          {
            if ( (get_tinfo_property(*a4, 2) & 0xF) != 0xB )
            {
              if ( (debug & 0x400000) != 0 )
              {
                print_argloc(v120, 1000, v11, 0, 0);
                v102 = 0;
                v64 = *a4;
                memset(s2, 0, sizeof(s2));
                v113 = 0;
                LODWORD(v114) = 1;
                v103 = 0;
                v112 = 0;
                get_tinfo_details(v64, 13, s2);
                print_tinfo(&v102, 0, 0, 0, 32802, a4, 0);
                if ( (debug & 0x400000) != 0 )
                {
                  v67 = src;
                  if ( (_QWORD)v103 )
                    LODWORD(v67) = v102;
                  sub_88B80(
                    (unsigned int)"Unsupported scattered variable: argloc=%s, name=%s, type=%s\n",
                    (unsigned int)v120,
                    (_DWORD)v88,
                    (_DWORD)v67,
                    v65,
                    v66);
                }
                v68 = s2[0];
                if ( s2[0] )
                {
                  v69 = s2[1];
                  if ( s2[1] )
                  {
                    v70 = nullptr;
                    do
                    {
                      v71 = &v68[144 * (_QWORD)v70];
                      clear_tinfo_t(v71 + 64);
                      v72 = *((_QWORD *)v71 + 5);
                      if ( v72 )
                      {
                        *((_QWORD *)v71 + 6) = 0;
                        qfree(v72);
                      }
                      v73 = *((_QWORD *)v71 + 2);
                      if ( v73 )
                      {
                        *((_QWORD *)v71 + 3) = 0;
                        qfree(v73);
                      }
                      v68 = s2[0];
                      ++v70;
                    }
                    while ( v69 != v70 );
                  }
                  s2[1] = nullptr;
                  qfree(v68);
                }
                if ( v102 )
                {
                  *(_QWORD *)&v103 = 0;
                  qfree(v102);
                }
              }
              goto LABEL_11;
            }
            v74 = get_tinfo_size(0, *a4, 0);
            v75 = *a4;
            v76 = v74;
            v102 = 0;
            v102 = get_tinfo_property(v75, 289);
            nb = get_tinfo_size(0, v102, 0);
            v77 = *(__int64 **)(v11 + 8);
            v78 = *v77;
            v79 = *v77 + 24 * v77[1];
            if ( *v77 == v79 )
            {
LABEL_153:
              clear_tinfo_t(&v102);
              goto LABEL_11;
            }
            while ( 2 )
            {
              v80 = *(unsigned __int16 *)(v78 + 18);
              v81 = *(unsigned __int16 *)(v78 + 16);
              if ( v76 >= (int)v80 + v81 && nb == v80 && !((unsigned __int16)v81 % nb) )
              {
                memset(s2, 0, sizeof(s2));
                sub_20160((__int64 *)s2, (__int64)"%s_%d", v88, *(unsigned __int16 *)(v78 + 16) / nb);
                v82 = s2[0];
                if ( *(_DWORD *)v78 == 1 )
                {
                  sub_75440(a7[2], v78, &v102, s2[0]);
                }
                else
                {
                  if ( (unsigned int)(*(_DWORD *)v78 - 3) > 1 )
                  {
LABEL_150:
                    if ( v82 )
                    {
                      s2[1] = nullptr;
                      qfree(v82);
                    }
                    goto LABEL_152;
                  }
                  sub_70050((__int64)a7, v87, v78, v83, v84, &v102, (__int64)s2[0]);
                }
                v82 = s2[0];
                goto LABEL_150;
              }
LABEL_152:
              v78 += 24;
              if ( v79 == v78 )
                goto LABEL_153;
              continue;
            }
          }
          v38 = *(__int64 **)(v11 + 8);
          v85 = *v38 + 24 * v38[1];
          if ( *v38 != v85 )
          {
            v91 = *v38;
            while ( 1 )
            {
              v116 = 1;
              v113 = 0;
              v117 = -1;
              v118 = 0;
              v119 = 0;
              memset(s2, 0, sizeof(s2));
              v112 = 0;
              v114 = 0;
              v115[0] = 0;
              v39 = *(unsigned __int16 *)(v91 + 18);
              v40 = *(unsigned __int16 *)(v91 + 16);
              v99 = 0;
              copy_tinfo_t(&v99, a4);
              v41 = 8 * v40;
              v42 = 8 * v39;
              while ( 1 )
              {
                s2[0] = (char *)v41;
                if ( (unsigned int)find_tinfo_udt_member(s2, v99, 0) == -1 )
                {
LABEL_143:
                  clear_tinfo_t(&v99);
                  goto LABEL_68;
                }
                if ( (char *)v41 == s2[0] && (char *)v42 == s2[1] )
                  break;
                if ( s2[1] < (char *)v42 )
                  goto LABEL_143;
                v102 = 0;
                v102 = get_tinfo_property(*(_QWORD *)&v115[0], 289);
                v94 = get_tinfo_size(0, v102, 0);
                if ( v94 == -1 || (get_tinfo_property(v102, 2) & 0x2F) != 0xD )
                {
                  clear_tinfo_t(&v102);
                  clear_tinfo_t(&v99);
                  goto LABEL_68;
                }
                v41 -= (unsigned __int64)s2[0];
                if ( (get_tinfo_property(*(_QWORD *)&v115[0], 2) & 0xF) == 0xB )
                  v41 %= v94;
                copy_tinfo_t(&v99, &v102);
                clear_tinfo_t(&v102);
              }
              clear_tinfo_t(&v99);
              v102 = 0;
              v103 = 0;
              sub_20160(&v102, (__int64)"%s_%s", v88, s2[2]);
              v50 = v102;
              if ( *(_DWORD *)v91 == 1 )
                break;
              if ( (unsigned int)(*(_DWORD *)v91 - 3) <= 1 )
              {
                sub_70050((__int64)a7, v87, v91, v83, v84, v115, v102);
LABEL_123:
                v50 = v102;
              }
              if ( v50 )
              {
                *(_QWORD *)&v103 = 0;
                qfree(v50);
              }
LABEL_68:
              clear_tinfo_t(v115);
              if ( v113 )
              {
                *(_QWORD *)&v114 = 0;
                qfree(v113);
              }
              if ( s2[2] )
              {
                *(_QWORD *)&v112 = 0;
                qfree(s2[2]);
              }
              v91 += 24;
              if ( v85 == v91 )
                goto LABEL_11;
            }
            sub_75440(a7[2], v91, v115, (const char *)v102);
            goto LABEL_123;
          }
        }
LABEL_11:
        v11 += 40;
        if ( v89 == v11 )
          goto LABEL_15;
      }
      else
      {
        sub_70050((__int64)a7, v87, v11, *(_QWORD *)(v11 + 16), *(_QWORD *)(v11 + 24), a4, v100);
        v11 += 40;
        if ( v89 == v11 )
          goto LABEL_15;
      }
    }
    sub_75440(a7[2], v11, a4, v88);
    goto LABEL_11;
  }
  v88 = (char *)qalloc_or_throw(n);
  memcpy(v88, *(const void **)a5, n);
  v55 = *(_QWORD *)(a5 + 8);
  v100 = 0;
  v101 = 0;
  if ( !v55 )
    goto LABEL_6;
  v56 = (void *)qalloc_or_throw(v55);
  v57 = *(const void **)a5;
  v100 = (__int64)v56;
  *((_QWORD *)&v101 + 1) = v55;
  memcpy(v56, v57, v55);
  *(_QWORD *)&v101 = v55;
  v9 = v108.m128i_i64[0];
  if ( v55 == 1 )
    goto LABEL_7;
  if ( v108.m128i_i64[0] )
  {
    v10 = v107;
    v58 = 0;
    v59 = 0;
    while ( *(_DWORD *)(v107 + 40 * v59) != 1 )
    {
      v59 = ++v58;
      if ( (unsigned __int64)v58 >= v108.m128i_i64[0] )
        goto LABEL_8;
    }
    for ( i = 0; ; ++i )
    {
      v62 = v100;
      v63 = v100;
      if ( n == 1 )
      {
        if ( v100 )
        {
          *(_QWORD *)&v101 = 0;
          qfree(v100);
          v100 = 0;
          *((_QWORD *)&v101 + 1) = 0;
        }
      }
      else
      {
        v61 = v101;
        if ( (unsigned __int64)v101 < n )
        {
          if ( *((_QWORD *)&v101 + 1) < n )
          {
            v63 = qvector_reserve(&v100, v100, n, 1);
            v100 = v63;
            v61 = v101;
          }
          memset((void *)(v63 + v61), 0, n - v61);
          *(_QWORD *)&v101 = n;
          v62 = v100;
        }
        else if ( n != (_QWORD)v101 )
        {
          *(_QWORD *)&v101 = n;
        }
        *(_BYTE *)(v62 + n - 1) = 0;
      }
      sub_1F510(&v100, (__int64)"_%d", i);
      if ( !(unsigned __int8)is_name_defined_locally(a7[2], v100, 0, -1, -1) )
        break;
    }
    goto LABEL_6;
  }
LABEL_15:
  if ( a3 )
  {
    v13 = _mm_load_si128(&v108);
    v14 = *a3;
    v15 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = v107;
    *(__m128i *)(a3 + 1) = v13;
    v107 = v14;
    v108 = v15;
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  if ( v88 )
    qfree(v88);
  v16 = v107;
  v105 = 0;
  v104 = off_C8C38;
  v106 = nullptr;
  if ( v107 )
  {
    if ( v108.m128i_i64[0] )
    {
      v17 = 0;
      v18 = v108.m128i_i64[0];
      do
      {
        v19 = 5 * v17++;
        cleanup_argloc(v16 + 8 * v19);
        v16 = v107;
      }
      while ( v18 != v17 );
    }
    v108.m128i_i64[0] = 0;
    qfree(v16);
  }
  return v121 - __readfsqword(0x28u);
}

