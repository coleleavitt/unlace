__int64 __fastcall sub_44F40(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v6; // r13
  void *v8; // r14
  const char *v9; // r8
  const char *v10; // rcx
  void *v12; // rdi
  size_t v13; // r15
  __int64 v14; // r15
  _QWORD *v15; // r8
  __int64 v16; // r9
  void **v17; // r15
  bool v18; // zf
  char *v19; // rax
  const void *v20; // r10
  char *v21; // rax
  size_t v22; // r8
  size_t v23; // r9
  char *v24; // rax
  size_t v25; // rdx
  unsigned __int64 v26; // r9
  size_t v27; // r14
  _BYTE *v28; // rsi
  char *v29; // rax
  void *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // r14
  void **v33; // rax
  void *v34; // rdi
  _BYTE *v35; // r14
  __int16 v36; // r9
  _BYTE *v37; // rax
  char *v38; // rdi
  char **v39; // r14
  char **v40; // r8
  size_t v41; // r15
  char *v42; // rdi
  void *v43; // rax
  __m128i v44; // xmm0
  size_t v45; // rdx
  _OWORD *v46; // rdi
  __int64 v47; // rbx
  size_t v48; // r15
  char *v49; // rdx
  void *v50; // rdi
  const char *v51; // r14
  char **v52; // rax
  void *v53; // rax
  __m128i v54; // xmm0
  void *v55; // r14
  size_t v56; // rax
  __int64 v57; // r14
  char *v58; // rdx
  char *v59; // rax
  void *v60; // rdi
  __int64 v61; // rax
  void *v63; // [rsp+10h] [rbp-198h]
  __int16 endptr; // [rsp+18h] [rbp-190h]
  char **endptra; // [rsp+18h] [rbp-190h]
  char *s; // [rsp+20h] [rbp-188h]
  char *sa; // [rsp+20h] [rbp-188h]
  char *sb; // [rsp+20h] [rbp-188h]
  char *sc; // [rsp+20h] [rbp-188h]
  __int16 sf; // [rsp+20h] [rbp-188h]
  char *sd; // [rsp+20h] [rbp-188h]
  __int16 se; // [rsp+20h] [rbp-188h]
  _QWORD *v73; // [rsp+30h] [rbp-178h]
  void *v74; // [rsp+30h] [rbp-178h]
  void *v75; // [rsp+30h] [rbp-178h]
  size_t v76; // [rsp+38h] [rbp-170h]
  size_t v77; // [rsp+38h] [rbp-170h]
  _QWORD *v78; // [rsp+40h] [rbp-168h] BYREF
  __int128 v79; // [rsp+48h] [rbp-160h]
  void *v80; // [rsp+60h] [rbp-148h] BYREF
  __int128 v81; // [rsp+68h] [rbp-140h]
  void *src; // [rsp+80h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-120h]
  __int64 (__fastcall **v84)(); // [rsp+A0h] [rbp-108h] BYREF
  void *v85; // [rsp+A8h] [rbp-100h]
  __m128i v86; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v87; // [rsp+C0h] [rbp-E8h]
  void *v88; // [rsp+C8h] [rbp-E0h]
  __m128i v89; // [rsp+D0h] [rbp-D8h] BYREF
  void *v90; // [rsp+E0h] [rbp-C8h]
  __m128i v91; // [rsp+E8h] [rbp-C0h] BYREF
  void *v92; // [rsp+F8h] [rbp-B0h]
  __int128 v93; // [rsp+100h] [rbp-A8h]
  __int16 v94; // [rsp+110h] [rbp-98h]
  void *v95; // [rsp+118h] [rbp-90h]
  __int128 v96; // [rsp+120h] [rbp-88h]
  void *v97; // [rsp+130h] [rbp-78h]
  __int128 v98; // [rsp+138h] [rbp-70h]
  int v99; // [rsp+148h] [rbp-60h]
  void *v100; // [rsp+150h] [rbp-58h]
  __int128 v101; // [rsp+158h] [rbp-50h]
  unsigned __int64 v102; // [rsp+168h] [rbp-40h]

  v6 = qword_241AF8;
  v102 = __readfsqword(0x28u);
  sub_19A520(qword_241AF8);
  v8 = qword_241B00;
  if ( qword_241B00 )
    goto LABEL_2;
  v63 = (void *)sub_92500();
  src = nullptr;
  *(_OWORD *)n = 0;
  src = (void *)sub_1987B0(&src, 0, 9, 1);
  n[0] = 9;
  strcpy((char *)src, "hexvault");
  v12 = src;
  v13 = n[0];
  v85 = nullptr;
  v86 = 0;
  if ( n[0] )
  {
    v85 = (void *)sub_198760(n[0]);
    v86.m128i_i64[1] = v13;
    memcpy(v85, src, v13);
    v86.m128i_i64[0] = v13;
    v12 = src;
  }
  v87 = -103;
  v88 = nullptr;
  v90 = nullptr;
  v84 = (__int64 (__fastcall **)())&off_2365A8;
  v92 = nullptr;
  v94 = 0;
  v95 = nullptr;
  v97 = nullptr;
  v99 = 0;
  v89 = 0;
  v91 = 0;
  v93 = 0;
  v96 = 0;
  v98 = 0;
  if ( v12 )
  {
    n[0] = 0;
    j__free(v12);
  }
  v100 = nullptr;
  v84 = &off_2365F0;
  v101 = 0;
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    j__free(v85);
    v85 = nullptr;
    v86.m128i_i64[1] = 0;
  }
  v87 = 0;
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    j__free(v88);
    v88 = nullptr;
    v89.m128i_i64[1] = 0;
  }
  if ( v90 )
  {
    v91.m128i_i64[0] = 0;
    j__free(v90);
    v90 = nullptr;
    v91.m128i_i64[1] = 0;
  }
  if ( (unsigned __int64)xmmword_241AE0 <= 1 )
    goto LABEL_51;
  v78 = nullptr;
  v79 = 0;
  sub_449A0(&qword_241AD8, (__int64 *)&v78, "@", 0);
  v14 = v79;
  v15 = v78;
  if ( (unsigned __int64)v79 > 2 )
  {
    if ( !v78 )
      goto LABEL_51;
    goto LABEL_46;
  }
  v16 = 0;
  if ( (_QWORD)v79 == 2 )
  {
    if ( v78[1] <= 1u )
      goto LABEL_44;
    *(_OWORD *)n = 0;
    src = nullptr;
    sub_449A0(v78, (__int64 *)&src, ":", 0);
    v41 = n[0];
    v42 = (char *)src;
    if ( n[0] > 2 )
    {
      if ( src )
      {
        v57 = 0;
        v58 = (char *)src;
        do
        {
          v59 = &v58[24 * v57];
          v60 = *(void **)v59;
          if ( *(_QWORD *)v59 )
          {
            *((_QWORD *)v59 + 1) = 0;
            j__free(v60);
            v58 = (char *)src;
          }
          ++v57;
        }
        while ( v41 != v57 );
        n[0] = 0;
        j__free(v58);
      }
      goto LABEL_43;
    }
    v43 = v88;
    v44 = _mm_load_si128(&v89);
    v88 = *(void **)src;
    v89 = *(__m128i *)((char *)src + 8);
    *(_QWORD *)src = v43;
    *(__m128i *)(v42 + 8) = v44;
    v45 = n[0];
    v46 = src;
    if ( n[0] == 2 )
    {
      v53 = v90;
      v54 = _mm_loadu_si128(&v91);
      v90 = *((void **)src + 3);
      v91 = *((__m128i *)src + 2);
      *((_QWORD *)src + 3) = v53;
      v46[2] = v54;
      if ( !v46 )
        goto LABEL_93;
    }
    else
    {
      if ( !src )
      {
LABEL_93:
        v15 = v78;
        v16 = 3;
        goto LABEL_22;
      }
      if ( !n[0] )
      {
LABEL_92:
        n[0] = 0;
        j__free(v46);
        goto LABEL_93;
      }
    }
    sa = a3;
    v47 = 0;
    v48 = v45;
    do
    {
      v49 = (char *)v46 + 24 * v47;
      v50 = *(void **)v49;
      if ( *(_QWORD *)v49 )
      {
        *((_QWORD *)v49 + 1) = 0;
        j__free(v50);
      }
      ++v47;
      v46 = src;
    }
    while ( v48 != v47 );
    a3 = sa;
    goto LABEL_92;
  }
LABEL_22:
  v17 = (void **)&v15[v16];
  v73 = v15;
  v81 = 0;
  v18 = v15[v16 + 1] == 0;
  v80 = nullptr;
  if ( v18 )
  {
    s = (char *)s1;
    goto LABEL_71;
  }
  s = (char *)*v17;
  if ( *(_BYTE *)*v17 != 91 )
  {
    v51 = (const char *)*v17;
    if ( !strncasecmp(s, "::ffff:", 7u) && strchr(s, 46) )
    {
      s += 7;
      v29 = strchr(v51 + 7, 58);
LABEL_72:
      if ( !v29 )
      {
LABEL_40:
        v30 = v85;
        v31 = _mm_load_si128(&v86);
        v85 = *v17;
        v86 = *(__m128i *)(v17 + 1);
        *v17 = v30;
        *(__m128i *)(v17 + 1) = v31;
        goto LABEL_41;
      }
      goto LABEL_73;
    }
LABEL_71:
    v29 = strchr(s, 58);
    goto LABEL_72;
  }
  v19 = strchr((const char *)*v17, 93);
  v15 = v73;
  if ( v19 )
  {
    v20 = s + 1;
    if ( v19 != s + 1 )
    {
      v21 = (char *)(v19 - s);
      src = nullptr;
      v22 = (size_t)v21;
      *(_OWORD *)n = 0;
      v23 = (size_t)(v21 - 1);
      if ( v21 == (_BYTE *)&dword_0 + 1 )
      {
        v81 = 0u;
      }
      else
      {
        if ( v21 )
        {
          v77 = (size_t)(v21 - 1);
          v75 = s + 1;
          sd = v21;
          src = (void *)sub_1987B0(&src, 0, v21, 1);
          v23 = v77;
          v8 = src;
          v20 = v75;
          v22 = (size_t)sd;
        }
        sb = (char *)v22;
        n[0] = v22;
        memmove(v8, v20, v23);
        v22 = (size_t)sb;
        sb[(_QWORD)src - 1] = 0;
        v55 = src;
        src = nullptr;
        v76 = n[0];
        v56 = n[1];
        *(_OWORD *)n = 0;
        v74 = (void *)v56;
        if ( v80 )
        {
          *(_QWORD *)&v81 = 0;
          j__free(v80);
          v80 = v55;
          v22 = (size_t)sb;
          *(_QWORD *)&v81 = v76;
          *((_QWORD *)&v81 + 1) = v74;
          if ( src )
          {
            n[0] = 0;
            j__free(src);
            v22 = (size_t)sb;
          }
        }
        else
        {
          v80 = v55;
          *(_QWORD *)&v81 = v76;
          *((_QWORD *)&v81 + 1) = v56;
        }
      }
      v24 = (char *)v17[1];
      if ( !v24 )
        goto LABEL_38;
      v25 = (size_t)(v24 - 1);
      if ( v24 != (_BYTE *)&dword_0 + 1 && v22 )
      {
        v26 = 1;
        v27 = 0;
        if ( v22 < v25 )
        {
          v27 = v25 - v22;
          memmove(*v17, (char *)*v17 + v22, v25 - v22);
          v26 = v27 + 1;
        }
        v28 = *v17;
        if ( (unsigned __int64)v17[2] < v26 )
        {
          sc = (char *)v26;
          v61 = sub_1987B0(v17, v28, v26, 1);
          *v17 = (void *)v61;
          v26 = (unsigned __int64)sc;
          v28 = (_BYTE *)v61;
        }
        v17[1] = (void *)v26;
        v28[v27] = 0;
        if ( !v17[1] )
          goto LABEL_38;
      }
      v29 = (char *)*v17;
      if ( *(_BYTE *)*v17 != 58 || !v29 )
      {
LABEL_38:
        if ( (unsigned __int64)v81 > 1 )
          v17 = &v80;
        goto LABEL_40;
      }
      s = (char *)*v17;
LABEL_73:
      v35 = v29 + 1;
      v36 = strtoul(v29 + 1, (char **)&src, 10);
      v37 = src;
      if ( v35 == src )
        goto LABEL_41;
      while ( *v37 == 32 )
        src = ++v37;
      if ( *v37 )
      {
LABEL_41:
        if ( v80 )
          j__free(v80);
LABEL_43:
        v15 = v78;
        goto LABEL_44;
      }
      v38 = (char *)*v17;
      v39 = (char **)(v35 - s);
      v40 = v39;
      if ( v39 == (char **)((char *)&dword_0 + 1) )
      {
        if ( v38 )
        {
          v17[1] = nullptr;
          endptr = v36;
          j__free(v38);
          *v17 = nullptr;
          v36 = endptr;
          v17[2] = nullptr;
        }
      }
      else
      {
        v52 = (char **)v17[1];
        if ( v52 < v39 )
        {
          if ( v17[2] < v39 )
          {
            se = v36;
            v38 = (char *)sub_1987B0(v17, *v17, v39, 1);
            v36 = se;
            v40 = v39;
            *v17 = v38;
            v52 = (char **)v17[1];
          }
          sf = v36;
          endptra = v40;
          memset(&v38[(_QWORD)v52], 0, (char *)v40 - (char *)v52);
          v40 = endptra;
          v38 = (char *)*v17;
          v36 = sf;
          v17[1] = endptra;
        }
        else if ( v52 != v39 )
        {
          v17[1] = v39;
        }
        *((_BYTE *)v40 + (_QWORD)v38 - 1) = 0;
      }
      v87 = v36;
      goto LABEL_38;
    }
  }
LABEL_44:
  if ( v15 )
  {
    v14 = v79;
    if ( !(_QWORD)v79 )
    {
LABEL_50:
      *(_QWORD *)&v79 = 0;
      j__free(v15);
      goto LABEL_51;
    }
LABEL_46:
    v32 = 0;
    do
    {
      v33 = (void **)&v15[3 * v32];
      v34 = *v33;
      if ( *v33 )
      {
        v33[1] = nullptr;
        j__free(v34);
        v15 = v78;
      }
      ++v32;
    }
    while ( v32 != v14 );
    goto LABEL_50;
  }
LABEL_51:
  v99 &= ~1u;
  if ( (*(unsigned __int8 (__fastcall **)(void *, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v63 + 24LL))(
         v63,
         a1,
         &v84) )
  {
    qword_241B00 = v63;
  }
  v84 = &off_2365F0;
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    j__free(v100);
  }
  v84 = (__int64 (__fastcall **)())&off_2365A8;
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    j__free(v97);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    j__free(v95);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    j__free(v92);
  }
  if ( v90 )
  {
    v91.m128i_i64[0] = 0;
    j__free(v90);
  }
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    j__free(v88);
  }
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    j__free(v85);
  }
LABEL_2:
  sub_19A570(v6);
  if ( qword_241B00 )
  {
    v9 = s1;
    if ( *(_QWORD *)(a4 + 8) )
    {
      v9 = *(const char **)a4;
      v10 = s1;
      if ( !*((_QWORD *)a3 + 1) )
        return (*(__int64 (__fastcall **)(void *, __int64, __int64, const char *, const char *))(*(_QWORD *)qword_241B00
                                                                                               + 56LL))(
                 qword_241B00,
                 a1,
                 a2,
                 v10,
                 v9);
    }
    else
    {
      v10 = s1;
      if ( !*((_QWORD *)a3 + 1) )
        return (*(__int64 (__fastcall **)(void *, __int64, __int64, const char *, const char *))(*(_QWORD *)qword_241B00
                                                                                               + 56LL))(
                 qword_241B00,
                 a1,
                 a2,
                 v10,
                 v9);
    }
    v10 = *(const char **)a3;
    return (*(__int64 (__fastcall **)(void *, __int64, __int64, const char *, const char *))(*(_QWORD *)qword_241B00
                                                                                           + 56LL))(
             qword_241B00,
             a1,
             a2,
             v10,
             v9);
  }
  return 33;
}
