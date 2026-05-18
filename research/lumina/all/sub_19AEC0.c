void *__fastcall sub_19AEC0(__int64 a1, __int64 a2)
{
  __pid_t v4; // eax
  void *v5; // rbx
  int v6; // eax
  const char *v8; // rsi
  char *v9; // rdi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  char *v16; // rbx
  const char *v17; // rbx
  char *v18; // rax
  int v19; // ebx
  const char *v20; // r13
  unsigned __int64 v21; // r15
  char *const *v22; // r13
  __int32 v23; // edx
  __int64 v24; // rax
  __int128 i; // xmm0
  char **v26; // r8
  char *v27; // rbx
  unsigned __int64 v28; // rsi
  char *v29; // rdi
  char *v30; // rax
  int *v31; // rax
  const char *v32; // rsi
  char *v33; // rdi
  __int64 v34; // rdx
  __m128i v35; // xmm0
  _DWORD *v36; // rsi
  size_t v37; // rax
  __int64 v38; // r13
  size_t v39; // rbx
  void *v40; // rax
  void *v41; // rbx
  __m128i v42; // kr00_16
  __int64 v43; // rax
  _QWORD *v44; // r15
  __int64 v45; // rax
  char *v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rbx
  char *v49; // rax
  void *v50; // rdi
  int v51; // ebx
  __int64 v52; // rax
  const char *v53; // rdi
  char v54; // al
  int v55; // edi
  char *v56; // r10
  int v57; // edx
  __int64 v58; // rax
  int *v59; // r15
  int v60; // esi
  int v61; // eax
  int *v62; // rax
  int *v63; // rbx
  const char *v64; // rsi
  char *v65; // rbx
  int v66; // r8d
  int j; // ecx
  int v68; // edx
  __int64 v69; // rax
  __gid_t v70; // eax
  int v71; // eax
  int *v72; // rax
  const char *v73; // rax
  int *v74; // rax
  const char *v75; // rax
  size_t v76; // rbx
  char *v77; // rsi
  void *v78; // r14
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  char *v81; // rax
  __int64 v82; // rax
  char *v83; // rsi
  unsigned __int64 v84; // rdi
  void *v85; // r14
  __m128i v86; // xmm0
  __int64 v87; // r15
  char *v88; // rax
  size_t v89; // rax
  __int64 v90; // r15
  size_t v91; // r14
  __int64 v92; // rax
  char *v93; // rsi
  unsigned __int64 v94; // rdi
  void *v95; // r13
  __m128i v96; // xmm0
  __int64 v97; // rbx
  char *v98; // rax
  __m128i v99; // xmm0
  char *v100; // rax
  __m128i v101; // xmm0
  char *v102; // rax
  int *v103; // rbx
  const char *v104; // rax
  int *v105; // rax
  const char *v106; // rax
  int *v107; // rbp
  const char *v108; // rax
  char *s; // [rsp+8h] [rbp-D0h]
  __m128i v110; // [rsp+10h] [rbp-C8h] BYREF
  void *v111; // [rsp+20h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-B0h]
  void *v113; // [rsp+40h] [rbp-98h] BYREF
  __int128 v114; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v116; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v118; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v119; // [rsp+98h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  if ( (unk_2439A7 & 4) != 0 )
  {
    sub_4BAA0(
      (__int64 (__fastcall ***)(_QWORD))"Launching process %s, with args %s\n",
      *(const char **)(a1 + 16),
      *(const char **)(a1 + 24));
    if ( qword_2439D0 )
      goto LABEL_3;
  }
  else if ( qword_2439D0 )
  {
    goto LABEL_3;
  }
  qword_2439D0 = j__pthread_self();
  qword_2439D8 = (__int64)sub_19A2A0();
LABEL_3:
  v111 = nullptr;
  *(_OWORD *)n = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    if ( !(unsigned __int8)sub_19AD90("SHELL", (__int64)&v111) )
    {
      v36 = v111;
      if ( n[1] <= 7 )
      {
        v111 = sub_1987B0((__int64)&v111, v111, 8u, 1u);
        v36 = v111;
      }
      n[0] = 8;
      *v36 = 1852400175;
      *(_DWORD *)((char *)v36 + 3) = 1752379246;
      *((_BYTE *)v111 + 7) = 0;
    }
  }
  else if ( (unsigned __int8)sub_197730(*(_BYTE **)(a1 + 16)) && !sub_197CA0(*(char **)(a1 + 16)) )
  {
    ptr = nullptr;
    v118 = 0;
    sub_299F0((char **)&ptr);
    if ( (*(_DWORD *)&word_2439A4 & 0x4000000) != 0 )
    {
      v8 = s1;
      if ( v118.m128i_i64[0] )
        v8 = (const char *)ptr;
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"%s\n", v8);
    }
    v9 = (char *)ptr;
    if ( a2 )
    {
      v9 = *(char **)a2;
      v10 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = ptr;
      v11 = _mm_loadu_si128(&v118);
      ptr = v9;
      v118.m128i_i64[1] = v10;
      *(__m128i *)(a2 + 8) = v11;
    }
    if ( v9 )
    {
      v118.m128i_i64[0] = 0;
      j__free(v9);
    }
    goto LABEL_24;
  }
  v4 = fork();
  v5 = (void *)v4;
  if ( v4 == -1 )
  {
    ptr = nullptr;
    v118 = 0;
    v31 = __errno_location();
    sub_1996B0(*v31);
    sub_299F0((char **)&ptr);
    if ( (*(_DWORD *)&word_2439A4 & 0x4000000) != 0 )
    {
      v32 = s1;
      if ( v118.m128i_i64[0] )
        v32 = (const char *)ptr;
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"%s\n", v32);
    }
    v33 = (char *)ptr;
    if ( a2 )
    {
      v33 = *(char **)a2;
      v34 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = ptr;
      v35 = _mm_loadu_si128(&v118);
      ptr = v33;
      v118.m128i_i64[1] = v34;
      *(__m128i *)(a2 + 8) = v35;
    }
    if ( v33 )
    {
      v118.m128i_i64[0] = 0;
      v5 = nullptr;
      j__free(v33);
      goto LABEL_11;
    }
LABEL_24:
    v5 = nullptr;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( !(_DWORD)v5 )
  {
    if ( (v6 & 0x40) != 0 )
    {
      personality((unsigned __int64)&loc_40000);
      if ( (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
        goto LABEL_27;
    }
    else if ( (v6 & 0x80u) == 0 )
    {
LABEL_27:
      v12 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v12 + 1) > 1 && dup2(v12, 0) )
      {
        if ( !unk_2439A0 )
          sub_198E10(11);
        goto LABEL_169;
      }
      v13 = *(_QWORD *)(a1 + 40);
      if ( ((v13 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 && dup2(v13, 1) != 1 )
      {
        if ( !unk_2439A0 )
          sub_198E10(12);
        goto LABEL_169;
      }
      v14 = *(_QWORD *)(a1 + 48);
      if ( v14 != -1 && v14 != 2 && dup2(v14, 2) != 2 )
      {
        if ( !unk_2439A0 )
          sub_198E10(13);
        goto LABEL_169;
      }
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 > 0x38u )
      {
        v16 = *(char **)(a1 + 56);
        if ( v16 && *v16 )
        {
          do
          {
            putenv(v16);
            v16 += strlen(v16) + 1;
          }
          while ( *v16 );
          v15 = *(_QWORD *)a1;
        }
        if ( v15 > 0x40 )
        {
          v17 = *(const char **)(a1 + 64);
          if ( v17 )
          {
            if ( j__chdir(*(const char **)(a1 + 64)) == -1 )
            {
              v107 = __errno_location();
              v108 = (const char *)sub_1996B0(*v107);
              sub_18F960((__int64)"chdir %s: %s\n", v17, v108);
              _exit(-*v107);
            }
          }
        }
      }
      v18 = *(char **)(a1 + 16);
      v19 = *(_DWORD *)(a1 + 8);
      v113 = nullptr;
      src = nullptr;
      v20 = *(const char **)(a1 + 24);
      s = v18;
      v114 = 0;
      v116 = 0;
      if ( (v19 & 8) == 0 )
      {
        if ( v20 )
          sub_18D8A0((__int64 *)&src, (__int64)&v113, (__int64)v20, v19);
        if ( (v19 & 4) != 0 )
          goto LABEL_43;
        ptr = nullptr;
        v118 = 0;
        if ( s )
        {
          v37 = strlen(s);
          v38 = v37 + 1;
          v39 = v37;
          v40 = sub_1987B0((__int64)&ptr, nullptr, v37 + 1, 1u);
          v118.m128i_i64[0] = v38;
          ptr = v40;
          memmove(v40, s, v39);
          *((_BYTE *)ptr + v39) = 0;
          v41 = ptr;
          v42 = v118;
        }
        else
        {
          v41 = nullptr;
          v42 = 0u;
        }
        v43 = v116;
        v44 = src;
        ptr = nullptr;
        v118 = 0;
        if ( *((_QWORD *)&v116 + 1) < (unsigned __int64)(v116 + 1) )
        {
          src = sub_1987B0((__int64)&src, src, v116 + 1, 0x18u);
          v44 = src;
          v43 = v116;
        }
        memmove(v44 + 3, v44, 24 * v43);
        *v44 = v41;
        v44[1] = v42.m128i_i64[0];
        v45 = v116;
        v44[2] = v42.m128i_i64[1];
        v21 = v45 + 1;
        *(_QWORD *)&v116 = v45 + 1;
        if ( ptr )
        {
          v118.m128i_i64[0] = 0;
          j__free(ptr);
LABEL_43:
          v21 = v116;
        }
LABEL_44:
        v22 = (char *const *)sub_198620(8 * v21 + 8);
        if ( !v22 )
          sub_186030((const __m128i *)"prepare_arguments");
        v23 = 0;
        v24 = 0;
        for ( i = 0; v23 < v21; *v26 = v29 )
        {
          v26 = (char **)&v22[v24];
          v27 = (char *)src + 24 * v24;
          v28 = *((_QWORD *)v27 + 1);
          v29 = *(char **)v27;
          if ( v28 < *((_QWORD *)v27 + 2) )
          {
            if ( v28 )
            {
              if ( v29 )
              {
                v110.m128i_i32[3] = v23;
                v110.m128i_i64[0] = (__int64)&v22[v24];
                v30 = (char *)sub_198690(v29, v28);
                v26 = (char **)v110.m128i_i64[0];
                v23 = v110.m128i_i32[3];
                v29 = v30;
                i = 0;
                if ( !v30 )
                  v29 = *(char **)v27;
              }
            }
          }
          ++v23;
          *(_QWORD *)v27 = 0;
          v24 = v23;
          *(_OWORD *)(v27 + 8) = i;
        }
        v22[v21] = nullptr;
        v46 = (char *)src;
        if ( src )
        {
          v47 = v116;
          if ( (_QWORD)v116 )
          {
            v48 = 0;
            do
            {
              v49 = &v46[24 * v48];
              v50 = *(void **)v49;
              if ( *(_QWORD *)v49 )
              {
                *((_QWORD *)v49 + 1) = 0;
                j__free(v50);
                v46 = (char *)src;
              }
              ++v48;
            }
            while ( v47 != v48 );
          }
          *(_QWORD *)&v116 = 0;
          j__free(v46);
        }
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          s = *v22;
        v51 = 0;
        v52 = 0;
        if ( !(_QWORD)v114 )
        {
LABEL_109:
          if ( !getrlimit(RLIMIT_NOFILE, (struct rlimit *)&ptr) && (unsigned __int64)ptr > 1 )
          {
            v65 = (char *)ptr - 1;
            if ( (char *)ptr - 1 > (_BYTE *)&dword_0 + 2 )
            {
              do
              {
                v66 = (int)v65;
                for ( j = (int)v65; (int)v65 > 9; j = (int)v65 )
                {
                  close((int)v65--);
                  v66 = (int)v65;
                }
                if ( (_QWORD)v114 )
                {
                  v68 = 0;
                  v69 = 0;
                  while ( j != *((_DWORD *)v113 + 12 * v69) )
                  {
                    v69 = ++v68;
                    if ( v68 >= (unsigned __int64)v114 )
                      goto LABEL_168;
                  }
                }
                else
                {
LABEL_168:
                  close(v66);
                }
                --v65;
              }
              while ( v65 != (_BYTE *)&dword_0 + 2 );
            }
          }
          setpgid(0, 0);
          v70 = getgid();
          if ( !setgid(v70) )
          {
            v71 = *(_DWORD *)(a1 + 8);
            if ( (v71 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0, *(double *)&i) == -1 )
              {
                v105 = __errno_location();
                v106 = (const char *)sub_1996B0(*v105);
                sub_18F960((__int64)"TRACEME: %s", v106);
                _exit(-1);
              }
              v71 = *(_DWORD *)(a1 + 8);
            }
            if ( (v71 & 0x202) != 0 )
            {
              execv(s, v22);
              v72 = __errno_location();
              v73 = (const char *)sub_1996B0(*v72);
              sub_18F960((__int64)"execv%s(%s): %s\n", "", s, v73);
            }
            execvp(s, v22);
            v74 = __errno_location();
            v75 = (const char *)sub_1996B0(*v74);
            sub_18F960((__int64)"execv%s(%s): %s\n", "p", s, v75);
            _exit(1);
          }
          v103 = __errno_location();
          v104 = (const char *)sub_1996B0(*v103);
          sub_18F960((__int64)"setgid: %s\n", v104);
          _exit(-*v103);
        }
        while ( 1 )
        {
          v56 = (char *)v113 + 48 * v52;
          v57 = *((_DWORD *)v56 + 8);
          v58 = *((_QWORD *)v56 + 2);
          v59 = (int *)v56;
          v60 = v57 & 8;
          if ( (v57 & 8) != 0 )
          {
            v60 = 0;
            if ( (v57 & 1) == 0 )
              v60 = (v57 & 4) == 0 ? 577 : 1089;
            v53 = s1;
            if ( v58 )
              v53 = *((const char **)v56 + 1);
            goto LABEL_101;
          }
          if ( !v58 )
            break;
          v53 = *((const char **)v56 + 1);
          if ( *v53 != 38 || (v54 = v53[1], (unsigned __int8)(v54 - 48) > 9u) )
          {
            if ( (v57 & 1) == 0 )
            {
              v61 = open(v53, (v57 & 4) == 0 ? 577 : 1089, 420, *(double *)&i);
LABEL_102:
              v55 = v61;
              if ( v61 == -1 )
              {
                v62 = __errno_location();
                v63 = v62;
                if ( a2 )
                {
                  sub_1996B0(*v62);
                  sub_299F0((char **)a2);
                  v64 = s1;
                  if ( *(_QWORD *)(a2 + 8) )
                    v64 = *(const char **)a2;
                  sub_18F960((__int64)"%s\n", v64);
                }
                _exit(-*v63);
              }
              goto LABEL_93;
            }
            goto LABEL_101;
          }
          v55 = v54 - 48;
LABEL_93:
          if ( v55 == *v59 )
          {
            fcntl(v55, 2, 0, *(double *)&i);
            v52 = ++v51;
            if ( v51 >= (unsigned __int64)v114 )
              goto LABEL_109;
          }
          else
          {
            if ( dup2(v55, *v59) != *v59 )
            {
              if ( !unk_2439A0 )
                sub_198E10(575);
LABEL_169:
              BUG();
            }
            v52 = ++v51;
            if ( v51 >= (unsigned __int64)v114 )
              goto LABEL_109;
          }
        }
        v53 = s1;
        if ( (v57 & 1) == 0 )
        {
          v60 = 1089;
          if ( (v57 & 4) == 0 )
          {
            v61 = open(s1, 577, 420, *(double *)&i);
            goto LABEL_102;
          }
        }
LABEL_101:
        v61 = open(v53, v60, 420, *(double *)&i);
        goto LABEL_102;
      }
      v76 = n[0];
      if ( n[0] )
      {
        v78 = sub_198760(n[0]);
        memcpy(v78, v111, v76);
        v80 = v116;
        v77 = (char *)src;
        v79 = v116 + 1;
        if ( *((_QWORD *)&v116 + 1) >= (unsigned __int64)(v116 + 1) )
          goto LABEL_134;
      }
      else
      {
        v77 = nullptr;
        v78 = nullptr;
        v79 = 1;
      }
      src = sub_1987B0((__int64)&src, v77, v79, 0x18u);
      v77 = (char *)src;
      v80 = v116;
LABEL_134:
      v81 = &v77[24 * v80];
      *(_QWORD *)v81 = v78;
      *(__m128i *)(v81 + 8) = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
      v21 = v116 + 1;
      *(_QWORD *)&v116 = v116 + 1;
      if ( v20 && *v20 )
      {
        v118 = 0;
        ptr = nullptr;
        ptr = sub_1987B0((__int64)&ptr, nullptr, 3u, 1u);
        v118.m128i_i64[0] = 3;
        strcpy((char *)ptr, "-c");
        v82 = v116;
        v83 = (char *)src;
        v84 = v116 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v116 + 1)) )
        {
          if ( *((_QWORD *)&v116 + 1) < v84 )
          {
            src = sub_1987B0((__int64)&src, src, v116 + 1, 0x18u);
            v83 = (char *)src;
            v82 = v116;
          }
          v99 = _mm_loadu_si128(&v118);
          v100 = &v83[24 * v82];
          *(_QWORD *)v100 = ptr;
          *(__m128i *)(v100 + 8) = v99;
          *(_QWORD *)&v116 = v116 + 1;
        }
        else
        {
          v85 = ptr;
          v86 = _mm_loadl_epi64(&v118);
          ptr = nullptr;
          v87 = v118.m128i_i64[1];
          v118 = 0;
          if ( *((_QWORD *)&v116 + 1) < v84 )
          {
            v110.m128i_i64[0] = v86.m128i_i64[0];
            src = sub_1987B0((__int64)&src, src, v116 + 1, 0x18u);
            v83 = (char *)src;
            v86 = _mm_loadl_epi64(&v110);
            v82 = v116;
          }
          v88 = &v83[24 * v82];
          *(_QWORD *)v88 = v85;
          *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64(v86, (__m128i)(unsigned __int64)v87);
          *(_QWORD *)&v116 = v116 + 1;
          if ( ptr )
          {
            v118.m128i_i64[0] = 0;
            j__free(ptr);
          }
        }
        ptr = nullptr;
        v118 = 0;
        v89 = strlen(v20);
        v90 = v89 + 1;
        v91 = v89;
        ptr = sub_1987B0((__int64)&ptr, nullptr, v89 + 1, 1u);
        v118.m128i_i64[0] = v90;
        memmove(ptr, v20, v91);
        *((_BYTE *)ptr + v91) = 0;
        v92 = v116;
        v93 = (char *)src;
        v94 = v116 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v116 + 1)) )
        {
          if ( *((_QWORD *)&v116 + 1) < v94 )
          {
            src = sub_1987B0((__int64)&src, src, v116 + 1, 0x18u);
            v93 = (char *)src;
            v92 = v116;
          }
          v101 = _mm_loadu_si128(&v118);
          v102 = &v93[24 * v92];
          *(_QWORD *)v102 = ptr;
          *(__m128i *)(v102 + 8) = v101;
          v21 = v116 + 1;
          *(_QWORD *)&v116 = v116 + 1;
        }
        else
        {
          v95 = ptr;
          v96 = _mm_loadl_epi64(&v118);
          ptr = nullptr;
          v97 = v118.m128i_i64[1];
          v118 = 0;
          if ( *((_QWORD *)&v116 + 1) < v94 )
          {
            v110.m128i_i64[0] = v96.m128i_i64[0];
            src = sub_1987B0((__int64)&src, src, v116 + 1, 0x18u);
            v93 = (char *)src;
            v96 = _mm_loadl_epi64(&v110);
            v92 = v116;
          }
          v98 = &v93[24 * v92];
          *(_QWORD *)v98 = v95;
          *(__m128i *)(v98 + 8) = _mm_unpacklo_epi64(v96, (__m128i)(unsigned __int64)v97);
          v21 = v116 + 1;
          *(_QWORD *)&v116 = v116 + 1;
          if ( ptr )
          {
            v118.m128i_i64[0] = 0;
            j__free(ptr);
            v21 = v116;
          }
        }
      }
      goto LABEL_44;
    }
    sub_199AD0();
    goto LABEL_27;
  }
  if ( (v6 & 0x80u) != 0 )
  {
    sub_199B40();
    v6 = *(_DWORD *)(a1 + 8);
  }
  if ( (v6 & 0x400) != 0 )
    sub_19A480(sub_19AD70, v5);
LABEL_11:
  if ( v111 )
  {
    n[0] = 0;
    j__free(v111);
  }
  return v5;
}
