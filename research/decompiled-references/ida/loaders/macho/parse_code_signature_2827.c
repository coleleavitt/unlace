__int64 __fastcall sub_33F10(_QWORD *a1, const char *a2, const char *a3, unsigned __int8 a4)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  __int64 v8; // rdx
  size_t v9; // rbx
  void *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  size_t v16; // r14
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // r12
  const char *v24; // rsi
  const char *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  const char *v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rdi
  void *v36; // rax
  __int64 v37; // rdx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rcx
  const char *v41; // rax
  const char **v42; // r12
  const char *v43; // rsi
  __int64 v44; // rbp
  const char *v45; // r14
  unsigned __int64 v46; // r15
  __int64 v47; // r13
  const char *v48; // rsi
  const char *v49; // rdi
  size_t v50; // rbp
  void *v51; // r14
  unsigned __int64 v52; // rax
  __int64 v53; // r15
  __int64 *v54; // r14
  __int64 v55; // rdi
  __int64 v56; // r15
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // rbx
  __int64 *v61; // rdx
  __int64 v62; // rdi
  void *src; // [rsp+0h] [rbp-2F8h]
  __int64 v64; // [rsp+10h] [rbp-2E8h]
  __int64 v65; // [rsp+10h] [rbp-2E8h]
  void *v66; // [rsp+18h] [rbp-2E0h]
  __int64 v68; // [rsp+28h] [rbp-2D0h]
  _QWORD *v69; // [rsp+30h] [rbp-2C8h]
  const char **v70; // [rsp+38h] [rbp-2C0h]
  int v72; // [rsp+48h] [rbp-2B0h]
  __int64 *v73; // [rsp+50h] [rbp-2A8h]
  __int64 v74; // [rsp+60h] [rbp-298h]
  __int64 v75; // [rsp+70h] [rbp-288h] BYREF
  __int128 v76; // [rsp+78h] [rbp-280h]
  const char **v77; // [rsp+90h] [rbp-268h] BYREF
  __int64 v78; // [rsp+98h] [rbp-260h]
  void *v79; // [rsp+B0h] [rbp-248h] BYREF
  _BYTE n[24]; // [rsp+B8h] [rbp-240h]
  __int64 v81; // [rsp+D0h] [rbp-228h]
  int v82; // [rsp+D8h] [rbp-220h]
  char v83; // [rsp+DCh] [rbp-21Ch]
  __int64 v84; // [rsp+E0h] [rbp-218h]
  char v85; // [rsp+E8h] [rbp-210h]
  __int64 v86; // [rsp+F8h] [rbp-200h]
  __int128 v87; // [rsp+100h] [rbp-1F8h]
  __m128i si128; // [rsp+110h] [rbp-1E8h]
  char v89; // [rsp+120h] [rbp-1D8h]
  __m128i v90; // [rsp+128h] [rbp-1D0h]
  __int64 v91; // [rsp+138h] [rbp-1C0h]
  __int128 v92; // [rsp+140h] [rbp-1B8h]
  __int16 v93; // [rsp+150h] [rbp-1A8h]
  char v94; // [rsp+16Eh] [rbp-18Ah]
  __int64 v95; // [rsp+178h] [rbp-180h]
  __int128 v96; // [rsp+180h] [rbp-178h]
  __int64 v97; // [rsp+190h] [rbp-168h]
  __int128 v98; // [rsp+198h] [rbp-160h]
  __int64 v99; // [rsp+1A8h] [rbp-150h]
  __int128 v100; // [rsp+1B0h] [rbp-148h]
  __int64 v101; // [rsp+1C0h] [rbp-138h]
  __int128 v102; // [rsp+1C8h] [rbp-130h]
  __int64 v103; // [rsp+1D8h] [rbp-120h]
  __int128 v104; // [rsp+1E0h] [rbp-118h]
  __int64 v105; // [rsp+1F0h] [rbp-108h]
  __int128 v106; // [rsp+1F8h] [rbp-100h]
  __int64 v107; // [rsp+208h] [rbp-F0h]
  __int128 v108; // [rsp+210h] [rbp-E8h]
  __int64 v109; // [rsp+220h] [rbp-D8h]
  __int128 v110; // [rsp+228h] [rbp-D0h]
  __int64 v111; // [rsp+238h] [rbp-C0h]
  __int128 v112; // [rsp+240h] [rbp-B8h]
  __int64 v113; // [rsp+250h] [rbp-A8h]
  __int128 v114; // [rsp+258h] [rbp-A0h]
  __int16 v115; // [rsp+268h] [rbp-90h]
  char v116; // [rsp+26Ah] [rbp-8Eh]
  int v117; // [rsp+26Ch] [rbp-8Ch]
  __int128 v118; // [rsp+270h] [rbp-88h]
  __int64 v119; // [rsp+280h] [rbp-78h]
  __int64 v120; // [rsp+288h] [rbp-70h]
  int v121; // [rsp+290h] [rbp-68h]
  __int64 v122; // [rsp+298h] [rbp-60h]
  __int128 v123; // [rsp+2A0h] [rbp-58h]
  __int64 v124; // [rsp+2B0h] [rbp-48h]
  unsigned __int64 v125; // [rsp+2B8h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  if ( !a2 || !*a2 || !a3 || !*a3 )
    return -1;
  v75 = 0;
  v79 = 0;
  v76 = 0;
  *(_OWORD *)n = 0;
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  v79 = (void *)qvector_reserve(&v79, 0, v5 + 1, 1);
  *(_QWORD *)n = v6;
  memmove(v79, a2, v7);
  *((_BYTE *)v79 + v7) = 0;
  v9 = *(_QWORD *)n;
  v10 = 0;
  if ( *(_QWORD *)n )
  {
    v10 = (void *)qalloc_or_throw(*(_QWORD *)n, a2, v8);
    memcpy(v10, v79, v9);
  }
  v11 = v76;
  v12 = v75;
  if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
  {
    v75 = qvector_reserve(&v75, v75, v76 + 1, 24);
    v12 = v75;
    v11 = v76;
  }
  v13 = v12 + 24 * v11;
  *(_QWORD *)v13 = v10;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  v14 = v76 + 1;
  *(_QWORD *)&v76 = v76 + 1;
  if ( v79 )
  {
    *(_QWORD *)n = 0;
    qfree(v79, (const char *)v12);
    v14 = v76;
  }
  if ( !v14 )
  {
    v34 = v75;
    v33 = -1;
    if ( v75 )
      goto LABEL_97;
    return -1;
  }
  while ( 2 )
  {
    src = 0;
    v15 = v75 + 24 * v14 - 24;
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
    {
      src = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 8), v12, 3 * v14);
      memcpy(src, *(const void **)v15, v16);
    }
    v17 = v76;
    if ( (_QWORD)v76 )
    {
      v18 = (const char *)v75;
      *(_QWORD *)&v76 = v76 - 1;
      v19 = (__int64 *)(v75 + 24 * (v17 - 1));
      v20 = *v19;
      if ( *v19 )
      {
        v19[1] = 0;
        qfree(v20, v18);
      }
    }
    v21 = a1[75];
    v22 = v21 + 24LL * a1[76];
    if ( v21 == v22 )
      goto LABEL_52;
    v64 = a1[75];
    v23 = v64;
    while ( 1 )
    {
      if ( *(_QWORD *)(v23 + 8) )
      {
        v24 = *(const char **)v23;
        v25 = s1;
        if ( !v16 )
          goto LABEL_20;
        goto LABEL_25;
      }
      if ( !v16 )
        break;
      v24 = s1;
LABEL_25:
      v25 = (const char *)src;
LABEL_20:
      if ( !strcmp(v25, v24) )
        break;
      v23 += 24;
      if ( v22 == v23 )
        goto LABEL_52;
    }
    if ( v23 != v22 )
    {
      v12 = 0xAAAAAAAAAAAAAAABLL * ((v23 - v64) >> 3);
      goto LABEL_28;
    }
LABEL_52:
    v12 = -1;
LABEL_28:
    v65 = sub_1C580(a1, v12);
    if ( !v65 )
    {
      if ( !under_debugger )
      {
        interr(1331);
        goto LABEL_103;
      }
LABEL_105:
      BUG();
    }
    v66 = 0;
    if ( v16 )
    {
      v36 = (void *)qalloc_or_throw(v16, v12, v26);
      v12 = (unsigned __int64)src;
      v66 = v36;
      memcpy(v36, src, v16);
    }
    v27 = *a1;
    v79 = &off_62AA0;
    *(_QWORD *)n = v27;
    v84 = v65;
    v28 = a1[87];
    v81 = -1;
    v82 = 8;
    v83 = 1;
    v85 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v101 = 0;
    v103 = 0;
    *(__m128i *)&n[8] = _mm_load_si128((const __m128i *)&xmmword_574B0);
    v87 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
    v90 = _mm_load_si128((const __m128i *)&xmmword_574C0);
    v92 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v102 = 0;
    v104 = 0;
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v116 = 0;
    v117 = 0;
    v119 = 0;
    v120 = v28;
    v121 = 2;
    v122 = 0;
    v124 = 0;
    v106 = 0;
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v118 = -1;
    v123 = 0;
    if ( !(unsigned __int8)sub_25BB0(&v79) || (v12 = 0, !(unsigned __int8)sub_25EF0(&v79, 0, 0, 0)) )
    {
      sub_162E0(&v79);
      close_linput(v65);
      if ( v66 )
        qfree(v66, (const char *)v12);
      if ( src )
        goto LABEL_43;
      goto LABEL_44;
    }
    if ( a4 )
    {
      LODWORD(v32) = (_DWORD)src;
      if ( !v16 )
        v32 = s1;
      sub_112F0((unsigned int)"2 searching for symbol %s in %s\n", (_DWORD)a3, (_DWORD)v32, v29, v30, v31, src);
    }
    v12 = (unsigned __int64)a3;
    v33 = sub_33950(&v79, a3, a4, a1);
    if ( v33 == -1 )
    {
      if ( v90.m128i_i64[0] != -1 )
      {
        if ( (v94 & 0x10) != 0 )
          goto LABEL_40;
        v12 = (unsigned __int64)&v79;
        sub_2B040(&v77, &v79, 2147483679LL);
        LODWORD(v40) = (_DWORD)v77;
        v74 = v78;
        v73 = (__int64 *)v77;
        v70 = &v77[3 * v78];
        if ( v70 != v77 )
        {
          LODWORD(v41) = (_DWORD)src;
          v42 = v77;
          if ( !v16 )
            v41 = s1;
          v72 = (int)v41;
          while ( 1 )
          {
            if ( a4 )
            {
              v43 = s1;
              if ( v42[1] )
                v43 = *v42;
              sub_112F0((unsigned int)"2 checking reexported dylib %s for %s\n", (_DWORD)v43, v72, v40, v38, v39, src);
            }
            v40 = v76;
            v12 = v75;
            v44 = v75 + 24 * v76;
            if ( v75 != v44 )
              break;
LABEL_71:
            v50 = (size_t)v42[1];
            v51 = 0;
            if ( v50 )
            {
              v51 = (void *)qalloc_or_throw(v42[1], v12, v37);
              memcpy(v51, *v42, v50);
              v40 = v76;
              v12 = v75;
            }
LABEL_73:
            v37 = v40 + 1;
            if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v40 + 1) )
            {
              v75 = qvector_reserve(&v75, v12, v37, 24);
              v40 = v76;
              v12 = v75;
            }
            v52 = v12 + 24 * v40;
            *(_QWORD *)v52 = v51;
            *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
            *(_QWORD *)&v76 = v76 + 1;
LABEL_76:
            v42 += 3;
            if ( v70 == v42 )
              goto LABEL_77;
          }
          v69 = a1;
          v45 = v42[1];
          v46 = v75;
          v47 = v75;
          v68 = v76;
          while ( 2 )
          {
            if ( *(_QWORD *)(v47 + 8) )
            {
              v48 = *(const char **)v47;
              v49 = s1;
              if ( v45 )
                goto LABEL_69;
            }
            else
            {
              if ( !v45 )
              {
                v12 = v46;
                v56 = v47;
                v40 = v68;
                a1 = v69;
                if ( v44 != v56 )
                  goto LABEL_76;
                v50 = (size_t)v42[1];
                v51 = 0;
                goto LABEL_73;
              }
              v48 = s1;
LABEL_69:
              v49 = *v42;
            }
            if ( !strcmp(v49, v48) )
            {
              v12 = v46;
              v57 = v47;
              v40 = v68;
              a1 = v69;
              if ( v44 != v57 )
                goto LABEL_76;
              goto LABEL_71;
            }
            v47 += 24;
            if ( v44 == v47 )
            {
              v40 = v68;
              a1 = v69;
              v12 = v46;
              goto LABEL_71;
            }
            continue;
          }
        }
LABEL_77:
        if ( v73 )
        {
          v53 = 0;
          v54 = v73;
          if ( v74 )
          {
            do
            {
              v55 = *v54;
              if ( *v54 )
              {
                v54[1] = 0;
                qfree(v55, (const char *)v12);
              }
              ++v53;
              v54 += 3;
            }
            while ( v74 != v53 );
          }
          qfree(v73, (const char *)v12);
        }
LABEL_40:
        sub_162E0(&v79);
        close_linput(v65);
        if ( v66 )
          qfree(v66, (const char *)v12);
        if ( src )
LABEL_43:
          qfree(src, (const char *)v12);
LABEL_44:
        v14 = v76;
        if ( !(_QWORD)v76 )
        {
          v34 = v75;
          if ( !v75 )
            return -1;
          v33 = -1;
LABEL_97:
          *(_QWORD *)&v76 = 0;
          qfree(v34, (const char *)v12);
          return v33;
        }
        continue;
      }
LABEL_103:
      if ( !under_debugger )
        interr(20005);
      goto LABEL_105;
    }
    break;
  }
  sub_162E0(&v79);
  close_linput(v65);
  if ( v66 )
    qfree(v66, a3);
  if ( src )
    qfree(src, a3);
  v58 = v75;
  v34 = v75;
  if ( v75 )
  {
    v59 = v76;
    if ( (_QWORD)v76 )
    {
      v60 = 0;
      do
      {
        v61 = (__int64 *)(v58 + 24 * v60);
        v62 = *v61;
        if ( *v61 )
        {
          v61[1] = 0;
          qfree(v62, a3);
          v58 = v75;
        }
        ++v60;
        v34 = v58;
      }
      while ( v59 != v60 );
    }
    goto LABEL_97;
  }
  return v33;
}
