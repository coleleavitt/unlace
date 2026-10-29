__int64 __fastcall sub_61C40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v8; // rsi
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  const char *v23; // rsi
  const char *v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  const void *v30; // r13
  unsigned __int64 v31; // r11
  _QWORD *v32; // r12
  const char *v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  unsigned __int64 v36; // r13
  _QWORD *v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rax
  const char *v41; // rsi
  const char *v42; // rdi
  const char *v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // r14
  __int64 v47; // rax
  int *v48; // r12
  char *v49; // rsi
  int v50; // eax
  __int64 v51; // r12
  __int64 v52; // r8
  __int64 v53; // rdx
  char *v54; // r12
  __int64 v55; // r12
  __int64 v56; // rdx
  const char *v57; // rsi
  int v58; // r12d
  int v59; // eax
  int v60; // r9d
  char *v61; // r12
  char *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r12
  char *v67; // rcx
  char *v68; // rdx
  __int64 *v69; // rdi
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // eax
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  char *v78; // rax
  const char *v79; // rax
  __int64 v80; // r12
  _QWORD *v81; // rdx
  _QWORD *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rax
  const __m128i *v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  const __m128i *v95; // r8
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 v99; // [rsp+0h] [rbp-170h]
  unsigned __int64 v100; // [rsp+8h] [rbp-168h]
  __int64 v101; // [rsp+10h] [rbp-160h]
  __int64 v102; // [rsp+20h] [rbp-150h]
  __int64 v103; // [rsp+28h] [rbp-148h]
  _QWORD *v104; // [rsp+30h] [rbp-140h]
  char *v105; // [rsp+30h] [rbp-140h]
  __int64 v106; // [rsp+30h] [rbp-140h]
  __int64 v107; // [rsp+30h] [rbp-140h]
  __int64 v108; // [rsp+38h] [rbp-138h]
  __int64 v109; // [rsp+38h] [rbp-138h]
  __int64 v110; // [rsp+38h] [rbp-138h]
  char *s2; // [rsp+40h] [rbp-130h]
  char *s2a; // [rsp+40h] [rbp-130h]
  char *s2b; // [rsp+40h] [rbp-130h]
  char *s2c; // [rsp+40h] [rbp-130h]
  char *s2d; // [rsp+40h] [rbp-130h]
  const char *v116; // [rsp+48h] [rbp-128h]
  __int64 v117; // [rsp+48h] [rbp-128h]
  __int64 v118; // [rsp+48h] [rbp-128h]
  unsigned int n; // [rsp+50h] [rbp-120h]
  __int64 *na; // [rsp+50h] [rbp-120h]
  _QWORD *v121; // [rsp+58h] [rbp-118h]
  _QWORD *v122; // [rsp+58h] [rbp-118h]
  int *v123; // [rsp+60h] [rbp-110h] BYREF
  __int64 v124; // [rsp+68h] [rbp-108h] BYREF
  __int64 v125; // [rsp+70h] [rbp-100h] BYREF
  __int64 v126; // [rsp+78h] [rbp-F8h] BYREF
  __int64 v127; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v128; // [rsp+88h] [rbp-E8h]
  __int64 v129; // [rsp+A0h] [rbp-D0h] BYREF
  __int128 v130; // [rsp+A8h] [rbp-C8h]
  const char *v131; // [rsp+C0h] [rbp-B0h] BYREF
  __m128i v132; // [rsp+C8h] [rbp-A8h] BYREF
  unsigned int v133; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-88h]
  __int64 v135; // [rsp+F0h] [rbp-80h]
  char *v136; // [rsp+100h] [rbp-70h] BYREF
  __int128 v137; // [rsp+108h] [rbp-68h]
  char *v138; // [rsp+120h] [rbp-50h] BYREF
  __int128 v139; // [rsp+128h] [rbp-48h]
  unsigned __int64 v140; // [rsp+138h] [rbp-38h]

  v121 = a2;
  v8 = (__int64 *)*a5;
  v140 = __readfsqword(0x28u);
  v10 = a5[1];
  v11 = &v8[v10];
  if ( v8 == v11 )
  {
LABEL_37:
    v26 = v10 + 1;
    if ( a5[2] < (unsigned __int64)(v10 + 1) )
      goto LABEL_42;
    goto LABEL_38;
  }
  v12 = v8;
  while ( a4 != *v12 )
  {
    if ( v11 == ++v12 )
      goto LABEL_7;
  }
  if ( v11 != v12 )
    return 0;
LABEL_7:
  v14 = v8;
  while ( a4 != *v14 )
  {
    if ( v11 == ++v14 )
    {
      v121 = a2;
      goto LABEL_37;
    }
  }
  v121 = a2;
  if ( v11 == v14 )
    goto LABEL_37;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a4 + 272);
    if ( v15 == 2 )
    {
      v136 = nullptr;
      v137 = 0;
      if ( a4 && (*(_BYTE *)(a4 + 412) & 1) != 0 )
      {
        v29 = *(_QWORD *)(a4 + 320);
        if ( v29 >= 2 )
        {
          v30 = *(const void **)(a4 + 312);
          v136 = (char *)qvector_reserve(&v136, 0, v29, 1);
          *(_QWORD *)&v137 = v29;
          memmove(v136, v30, v29 - 1);
          v136[v29 - 1] = 0;
        }
        goto LABEL_49;
      }
LABEL_47:
      v139 = 0;
      v138 = nullptr;
      sub_56CA0(a1, (__int64)&v136, a4, (__int64)v121, 2, (__int64)&v138);
      if ( v138 )
      {
        *(_QWORD *)&v139 = 0;
        qfree(v138);
      }
LABEL_49:
      validate_name(&v136, 8, 1);
      sub_5F4E0((char *)a1, v121, a4, (__int64)v136);
      if ( v136 )
      {
        *(_QWORD *)&v137 = 0;
        qfree(v136);
      }
      return 0;
    }
    if ( v15 <= 2 )
      break;
    if ( v15 == 3 )
      return 0;
    if ( under_debugger )
LABEL_133:
      BUG();
    v26 = interr(30229);
LABEL_42:
    na = a5;
    v27 = qvector_reserve(a5, v8, v26, 8);
    a5 = na;
    v28 = na[1];
    *na = v27;
    v11 = (__int64 *)(v27 + 8 * v28);
LABEL_38:
    *v11 = a4;
    ++a5[1];
  }
  if ( !v15 )
  {
    v136 = nullptr;
    v137 = 0;
    goto LABEL_47;
  }
  v16 = *(_QWORD **)a1;
  v17 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != v17 )
  {
    do
    {
      if ( a3 == *v18 )
        break;
      ++v18;
    }
    while ( (_QWORD *)v17 != v18 );
  }
  if ( *(_DWORD *)(a4 + 384) != 5 )
    return 0;
  v19 = *(_QWORD *)(a4 + 8);
  v127 = 0;
  v20 = *(_QWORD *)(v19 + 16);
  v129 = 0;
  v99 = v20;
  v103 = *(_QWORD *)(v20 + 144);
  v21 = *(_QWORD *)(v103 + 8);
  v128 = 0;
  v102 = v21;
  v130 = 0;
  sub_56CA0(a1, (__int64)&v127, a4, (__int64)v121, 1, (__int64)&v129);
  v22 = *(_DWORD *)(a4 + 336) == 1;
  v131 = nullptr;
  v132 = 0;
  if ( !v22 )
    goto LABEL_32;
  n = -1;
  v100 = v18 - v16;
  while ( 2 )
  {
    sub_9EF10(&v131, v127, n);
    v23 = src;
    if ( v132.m128i_i64[0] )
      v23 = v131;
    v133 = 0;
    get_named_type(*(_QWORD *)(v103 + 8), v23, 1, 0, 0, 0, 0, 0, &v133);
    if ( !v133 )
    {
      v31 = *(_QWORD *)(a1 + 8);
      v24 = v131;
      if ( v100 >= v31 )
        goto LABEL_66;
      v32 = *(_QWORD **)a1;
      v33 = src;
      v116 = v131;
      v108 = a1;
      v34 = v100;
      v35 = a4;
      v36 = v31;
      if ( v132.m128i_i64[0] )
        v33 = v131;
      s2 = (char *)v33;
      v37 = v121;
      v122 = v32;
      v38 = v132.m128i_i64[0];
      v104 = v37;
      while ( 1 )
      {
        v39 = v122[v34];
        if ( v35 != v39 )
          break;
LABEL_64:
        if ( ++v34 >= v36 )
        {
          v24 = v116;
          a4 = v35;
LABEL_66:
          if ( *(_DWORD *)(a4 + 336) == 1 )
          {
            v43 = *(const char **)(a4 + 312);
            v44 = *(_QWORD *)(a4 + 328);
            *(_QWORD *)(a4 + 312) = v24;
            v45 = _mm_loadu_si128(&v132);
            v131 = v43;
            v24 = v43;
            v132.m128i_i64[1] = v44;
            *(__m128i *)(a4 + 320) = v45;
          }
          goto LABEL_30;
        }
      }
      v40 = *(_QWORD *)(v39 + 320);
      if ( v38 )
      {
        v41 = v116;
        v42 = src;
        if ( !v40 )
          goto LABEL_63;
      }
      else if ( !v40 )
      {
LABEL_69:
        v46 = v39;
        a4 = v35;
        a1 = v108;
        v121 = v104;
        if ( (*(_DWORD *)(v46 + 336) & 0xFFFFFFFD) != 1 )
          goto LABEL_44;
        if ( *(_DWORD *)(v46 + 272) != 1 )
          goto LABEL_44;
        v47 = *(unsigned int *)(v104[10] + 192LL);
        LODWORD(v136) = 0;
        v133 = 0;
        v134 = -1;
        v135 = v47;
        *(_QWORD *)&v137 = -1;
        *((_QWORD *)&v137 + 1) = v47;
        if ( !(unsigned __int8)sub_554E0(&v123, (__int64)&v133, (_DWORD *)(a4 + 392), 0) )
          goto LABEL_44;
        if ( !(unsigned __int8)sub_554E0(&v124, (__int64)&v136, (_DWORD *)(v46 + 392), 0) )
          goto LABEL_44;
        v48 = v123;
        if ( *(_OWORD *)v124 - *(_OWORD *)v123 != 0
          || *((_QWORD *)v123 + 2) != *(_QWORD *)(v124 + 16)
          || *(_DWORD *)(v46 + 392) == 1 && a4 == *(_QWORD *)(v46 + 400) )
        {
          goto LABEL_44;
        }
        if ( (debug & 0x400000) != 0 )
        {
          v125 = 0;
          v126 = 0;
          sub_817A0(&v126, &v125);
          v138 = nullptr;
          v139 = 0;
          v138 = (char *)qvector_reserve(&v138, 0, 14, 1);
          *(_QWORD *)&v139 = 14;
          strcpy(v138, "<typeref trt=");
          v49 = v138;
          v50 = *v48;
          if ( *v48 == 2 )
          {
            sub_1F510((__int64 *)&v138, (__int64)"ordinal r_ordref={ord=%u}", v48[4]);
          }
          else if ( v50 == 3 )
          {
            v79 = (const char *)sub_81860(v48 + 2, 0, 0);
            sub_1F510((__int64 *)&v138, (__int64)"natural_type r_ntref=%s", v79);
          }
          else if ( v50 == 1 )
          {
            v78 = sub_575D0(*((_DWORD **)v48 + 1));
            sub_1F510((__int64 *)&v138, (__int64)"node r_node=%s", v78);
          }
          else
          {
            v51 = ((_QWORD)v139 == 0) + (_QWORD)v139 - 1LL;
            v52 = v51 + 3;
            v53 = v51 + 4;
            if ( *((_QWORD *)&v139 + 1) < (unsigned __int64)(v51 + 4) )
            {
              v138 = (char *)qvector_reserve(&v138, v138, v53, 1);
              v52 = v51 + 3;
              v49 = v138;
              v53 = v51 + 4;
            }
            *(_QWORD *)&v139 = v53;
            v49[v52] = 0;
            v54 = &v138[v51];
            *(_WORD *)v54 = 16191;
            v54[2] = 63;
          }
          v55 = ((_QWORD)v139 == 0) + (_QWORD)v139 - 1LL;
          v56 = v55 + 2;
          if ( *((_QWORD *)&v139 + 1) < (unsigned __int64)(v55 + 2) )
          {
            v138 = (char *)qvector_reserve(&v138, v138, v56, 1);
            v56 = v55 + 2;
          }
          *(_QWORD *)&v139 = v56;
          v57 = src;
          v138[v55] = 62;
          v138[v55 + 1] = 0;
          if ( (_QWORD)v139 )
            v57 = v138;
          qstrncpy(v126, v57, v125);
          v58 = v126;
          if ( v138 )
          {
            *(_QWORD *)&v139 = 0;
            qfree(v138);
          }
          v36 = sub_81C40(v46 + 8);
          v59 = sub_81C40(a4 + 8);
          sub_88B80(
            (unsigned int)"Found typedef %s @ %s, that has exact same name as other typedef @ %s, and eventually points a"
                          "t the same type (%s). Using alternate reference.\n",
            (_DWORD)v131,
            v59,
            v36,
            v58,
            v60);
        }
        if ( (*(_QWORD *)(a4 + 232) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)(a4 + 232) != -1 )
        {
          v61 = *(char **)(v46 + 288);
          v36 = v46 + 288;
          v62 = &v61[16 * *(_QWORD *)(v46 + 296)];
          if ( v61 != v62 )
          {
            do
            {
              s2a = v62;
              if ( !(unsigned int)sub_849A0(a4 + 232, v61) )
                break;
              v62 = s2a;
              v61 += 16;
            }
            while ( s2a != v61 );
          }
          v63 = *(_QWORD *)(v46 + 296);
          v64 = *(_QWORD *)(v46 + 288);
          if ( v61 != (char *)(v64 + 16 * v63) )
            goto LABEL_97;
          goto LABEL_121;
        }
        if ( under_debugger )
          goto LABEL_133;
        v63 = interr(30478);
LABEL_121:
        v80 = *(_QWORD *)(a4 + 232);
        v117 = *(_QWORD *)(a4 + 240);
        if ( *(_QWORD *)(v46 + 304) < (unsigned __int64)(v63 + 1) )
        {
          s2d = *(char **)(v46 + 304);
          v83 = qvector_reserve(v36, 0, v63 + 1, 16);
          v84 = *(_QWORD *)(v46 + 304);
          v85 = v83;
          v86 = 0;
          v87 = *(_QWORD *)(v46 + 288);
          v88 = *(_QWORD *)(v46 + 296);
          *(_QWORD *)(v46 + 304) = s2d;
          while ( --v88 >= 0 )
          {
            *(__m128i *)(v85 + v86) = _mm_loadu_si128((const __m128i *)(v87 + v86));
            v86 += 16;
          }
          v110 = v85;
          qfree(*(_QWORD *)(v46 + 288));
          v64 = v110;
          v63 = *(_QWORD *)(v46 + 296);
          *(_QWORD *)(v46 + 288) = v110;
          *(_QWORD *)(v46 + 304) = v84;
        }
        v81 = (_QWORD *)(16 * v63 + v64);
        *v81 = v80;
        v81[1] = v117;
        ++*(_QWORD *)(v46 + 296);
LABEL_97:
        v65 = *(_QWORD *)(a4 + 296);
        if ( (int)v65 > 0 )
        {
          v66 = 0;
          v109 = 16 * ((unsigned int)(v65 - 1) + 1LL);
          do
          {
            v67 = *(char **)(v46 + 288);
            v68 = &v67[16 * *(_QWORD *)(v46 + 296)];
            v69 = (__int64 *)(v66 + *(_QWORD *)(a4 + 288));
            if ( v67 != v68 )
            {
              do
              {
                v105 = v68;
                s2b = v67;
                v70 = sub_849A0(v69, v67);
                v67 = s2b;
                if ( !v70 )
                  break;
                v68 = v105;
                v67 = s2b + 16;
              }
              while ( v105 != s2b + 16 );
            }
            v71 = *(_QWORD *)(v46 + 296);
            v72 = *(_QWORD *)(v46 + 288);
            if ( v67 == (char *)(v72 + 16 * v71) )
            {
              v118 = *v69;
              s2c = (char *)v69[1];
              if ( *(_QWORD *)(v46 + 304) < (unsigned __int64)(v71 + 1) )
              {
                v106 = *(_QWORD *)(v46 + 304);
                v89 = qvector_reserve(v36, 0, v71 + 1, 16);
                v90 = *(const __m128i **)(v46 + 288);
                v91 = v89;
                v92 = v89;
                v93 = *(_QWORD *)(v46 + 296);
                v94 = *(_QWORD *)(v46 + 304);
                *(_QWORD *)(v46 + 304) = v106;
                v95 = v90;
                v96 = v93 - 1;
                if ( v96 >= 0 )
                {
                  do
                  {
                    v97 = _mm_loadu_si128(v95);
                    v92 += 16;
                    ++v95;
                    *(__m128i *)(v92 - 16) = v97;
                  }
                  while ( v96-- != 0 );
                  v90 = *(const __m128i **)(v46 + 288);
                }
                v101 = v94;
                v107 = v91;
                qfree(v90);
                v72 = v107;
                v71 = *(_QWORD *)(v46 + 296);
                *(_QWORD *)(v46 + 288) = v107;
                *(_QWORD *)(v46 + 304) = v101;
              }
              v82 = (_QWORD *)(16 * v71 + v72);
              *v82 = v118;
              v82[1] = s2c;
              ++*(_QWORD *)(v46 + 296);
            }
            v66 += 16;
          }
          while ( v109 != v66 );
        }
        if ( (debug & 0x400000) != 0 )
        {
          v73 = (unsigned int)sub_575D0((_DWORD *)a4);
          sub_88B80((unsigned int)"\t...and marking %s for mirror\n", v73, v74, v75, v76, v77);
        }
        sub_59E30(a4, 2, *(_DWORD *)(v46 + 276));
LABEL_44:
        ++n;
        if ( *(_DWORD *)(a4 + 336) != 1 )
        {
          v24 = v131;
          goto LABEL_30;
        }
        continue;
      }
      v42 = *(const char **)(v39 + 312);
      v41 = s2;
LABEL_63:
      if ( !strcmp(v42, v41) )
        goto LABEL_69;
      goto LABEL_64;
    }
    break;
  }
  if ( (unsigned __int8)get_numbered_type(v102, v133, &v136, 0, 0, 0, 0) )
  {
    if ( (*v136 & 0x3F) != 0x3D && (*v136 & 0xF) == 0xD )
      goto LABEL_44;
    v138 = nullptr;
    if ( !(unsigned __int8)deserialize_tinfo(&v138, v102, &v136, 0, 0, 0)
      || !sub_5E430(a1, v99, v121, (const __m128i *)(a4 + 392), &v138, 1, 0, v133 < *(_DWORD *)(v103 + 196)) )
    {
      clear_tinfo_t(&v138);
      goto LABEL_44;
    }
    sub_59E30(a4, 2, v133);
    clear_tinfo_t(&v138);
    v24 = v131;
LABEL_30:
    if ( v24 )
    {
      v132.m128i_i64[0] = 0;
      qfree(v24);
    }
LABEL_32:
    if ( v129 )
    {
      *(_QWORD *)&v130 = 0;
      qfree(v129);
    }
    v25 = v127;
    if ( v127 )
    {
LABEL_35:
      *(_QWORD *)&v128 = 0;
      qfree(v25);
    }
  }
  else
  {
    if ( v131 )
    {
      v132.m128i_i64[0] = 0;
      qfree(v131);
    }
    if ( v129 )
    {
      *(_QWORD *)&v130 = 0;
      qfree(v129);
    }
    v25 = v127;
    if ( v127 )
      goto LABEL_35;
  }
  return 0;
}
