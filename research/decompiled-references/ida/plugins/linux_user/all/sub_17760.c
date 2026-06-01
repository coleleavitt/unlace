__int64 __fastcall sub_17760(__int64 a1, __int64 *a2, const char **a3)
{
  char v6; // r14
  const char *v7; // r15
  __int64 v8; // r12
  size_t v9; // rax
  size_t v10; // r8
  size_t v11; // r9
  char *v12; // rsi
  size_t v13; // rdx
  char *v14; // rdi
  const char *v15; // r14
  __int64 v16; // r12
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // r8
  char *v20; // rsi
  size_t v21; // rdx
  char *v22; // rdi
  unsigned int v23; // ebx
  void *v25; // rax
  void *v26; // rdi
  void ***v27; // r12
  void **v28; // r15
  void *v29; // rdi
  _QWORD **v30; // rax
  _QWORD *v31; // rdx
  size_t v32; // rax
  size_t v33; // r12
  unsigned __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // r12
  char *v37; // rsi
  size_t v38; // rax
  size_t v39; // r12
  unsigned __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r12
  char *v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // r14
  unsigned __int64 v46; // r12
  __int64 v47; // rsi
  __m128i si128; // xmm0
  __int64 v49; // rbp
  size_t v50; // rax
  __int64 v51; // rbp
  size_t v52; // r12
  size_t v53; // r14
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // rsi
  const char *v60; // r14
  size_t v61; // rax
  __int64 v62; // r9
  size_t v63; // r8
  size_t v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rbp
  __int64 v67; // r14
  unsigned __int64 v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rbp
  size_t v71; // rax
  __int64 v72; // rbp
  size_t v73; // r12
  size_t v74; // r14
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rbp
  unsigned __int64 v78; // r12
  __int64 v79; // r14
  __int64 v80; // rsi
  const char *v81; // r12
  __int64 v82; // rbp
  size_t v83; // rax
  size_t v84; // r13
  size_t v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rbp
  unsigned __int64 v88; // r12
  __int64 v89; // r13
  __int64 v90; // rsi
  char *v91; // rdi
  size_t v92; // r14
  void *v93; // rax
  void *v94; // rdi
  void ***v95; // r15
  void ***v96; // r12
  void **v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  char *v105; // rdi
  size_t v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // [rsp+0h] [rbp-1080h]
  size_t v110; // [rsp+0h] [rbp-1080h]
  size_t v111; // [rsp+0h] [rbp-1080h]
  void **v112; // [rsp+0h] [rbp-1080h]
  unsigned __int64 v113; // [rsp+0h] [rbp-1080h]
  __int64 v114; // [rsp+0h] [rbp-1080h]
  size_t v115; // [rsp+0h] [rbp-1080h]
  size_t v116; // [rsp+8h] [rbp-1078h]
  size_t v117; // [rsp+8h] [rbp-1078h]
  void ***v118; // [rsp+8h] [rbp-1078h]
  size_t v119; // [rsp+8h] [rbp-1078h]
  size_t v120; // [rsp+10h] [rbp-1070h]
  char *file; // [rsp+18h] [rbp-1068h] BYREF
  __int128 v122; // [rsp+20h] [rbp-1060h]
  char arg[4104]; // [rsp+38h] [rbp-1048h] BYREF
  unsigned __int64 v124; // [rsp+1040h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  v122 = 0;
  file = nullptr;
  v6 = qisabspath();
  if ( !v6 || !(unsigned __int8)qdirname() )
    goto LABEL_2;
  v38 = strlen(arg);
  v39 = v38;
  if ( v38 )
  {
    v105 = file;
    v106 = v38 + 1;
    if ( *((_QWORD *)&v122 + 1) < v38 + 1 )
    {
      v115 = v38 + 1;
      file = (char *)qvector_reserve();
      v106 = v115;
      v105 = file;
    }
    *(_QWORD *)&v122 = v106;
    memmove(v105, arg, v39);
    file[v39] = 0;
    v41 = v122;
    if ( (_QWORD)v122 )
    {
      v42 = v122 - 1;
      v40 = v122 + 1;
      goto LABEL_50;
    }
  }
  else
  {
    *(_QWORD *)&v122 = 0;
  }
  v40 = 2;
  v41 = 1;
  v42 = 0;
LABEL_50:
  v43 = file;
  if ( *((_QWORD *)&v122 + 1) < v40 )
  {
    v113 = v40;
    file = (char *)qvector_reserve();
    v40 = v113;
    v43 = file;
  }
  *(_QWORD *)&v122 = v40;
  v43[v41] = 0;
  file[v42] = 47;
LABEL_2:
  v7 = *a3;
  if ( *a3 )
  {
    v8 = v122;
    v9 = strlen(*a3);
    v10 = v9;
    v11 = v9;
    if ( (_QWORD)v122 )
    {
      v8 = v122 - 1;
      v11 = v9 + v122 - 1;
    }
    v12 = file;
    v13 = v11 + 1;
    if ( *((_QWORD *)&v122 + 1) < v11 + 1 )
    {
      v120 = v9;
      v117 = v11;
      v111 = v11 + 1;
      file = (char *)qvector_reserve();
      v10 = v120;
      v12 = file;
      v11 = v117;
      v13 = v111;
    }
    *(_QWORD *)&v122 = v13;
    v12[v11] = 0;
    memmove(&file[v8], v7, v10);
  }
  v14 = (char *)s;
  if ( (_QWORD)v122 )
    v14 = file;
  if ( !*(_QWORD *)a1 )
  {
    v93 = dlopen(v14, 258);
    *(_QWORD *)a1 = v93;
    v94 = v93;
    if ( v93 )
    {
      v95 = (void ***)(a1 + 104);
      v118 = (void ***)(a1 + 184);
      v96 = (void ***)(a1 + 104);
      while ( 1 )
      {
        v112 = *v96;
        *v112 = dlsym(v94, (const char *)*(v96 - 1));
        if ( !*v96 )
          break;
        v96 += 2;
        if ( v96 == v118 )
          goto LABEL_11;
        v94 = *(void **)a1;
      }
      do
      {
        v97 = *v95;
        v95 += 2;
        *v97 = nullptr;
      }
      while ( v95 != v118 );
      if ( *(_QWORD *)a1 )
        dlclose(*(void **)a1);
      *(_QWORD *)a1 = 0;
    }
    sub_11930(a2, (__int64)&file);
    v23 = 0;
    goto LABEL_22;
  }
LABEL_11:
  if ( file )
  {
    v122 = 0u;
    qfree();
    file = nullptr;
  }
  if ( v6 )
  {
    v32 = strlen(arg);
    v33 = v32;
    if ( v32 )
    {
      v91 = file;
      v92 = v32 + 1;
      if ( *((_QWORD *)&v122 + 1) < v32 + 1 )
      {
        file = (char *)qvector_reserve();
        v91 = file;
      }
      *(_QWORD *)&v122 = v92;
      memmove(v91, arg, v33);
      file[v33] = 0;
      v35 = v122;
      if ( (_QWORD)v122 )
      {
        v36 = v122 - 1;
        v34 = v122 + 1;
LABEL_42:
        v37 = file;
        if ( *((_QWORD *)&v122 + 1) < v34 )
        {
          file = (char *)qvector_reserve();
          v37 = file;
        }
        *(_QWORD *)&v122 = v34;
        v37[v35] = 0;
        file[v36] = 47;
        v15 = a3[1];
        if ( !v15 )
          goto LABEL_18;
LABEL_15:
        v16 = v122;
        v17 = strlen(v15);
        v18 = v17;
        v19 = v17;
        if ( (_QWORD)v122 )
        {
          v16 = v122 - 1;
          v20 = file;
          v19 = v17 + v122 - 1;
          v21 = v17 + v122;
          if ( *((_QWORD *)&v122 + 1) >= v17 + (unsigned __int64)v122 )
            goto LABEL_17;
        }
        else
        {
          v20 = file;
          v21 = v17 + 1;
          if ( *((_QWORD *)&v122 + 1) >= v17 + 1 )
          {
LABEL_17:
            *(_QWORD *)&v122 = v21;
            v20[v19] = 0;
            memmove(&file[v16], v15, v18);
            goto LABEL_18;
          }
        }
        v116 = v19;
        v110 = v21;
        file = (char *)qvector_reserve();
        v19 = v116;
        v20 = file;
        v21 = v110;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v122 = 0;
    }
    v34 = 2;
    v35 = 1;
    v36 = 0;
    goto LABEL_42;
  }
  v15 = a3[1];
  if ( v15 )
    goto LABEL_15;
LABEL_18:
  v22 = (char *)s;
  if ( (_QWORD)v122 )
  {
    v22 = file;
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_20;
  }
  else if ( *(_QWORD *)(a1 + 8) )
  {
LABEL_20:
    if ( !dlinfo(*(void **)a1, 6, arg) )
    {
      v44 = a2[1];
      if ( v44 )
      {
        v45 = v44 + 29;
        v46 = v44 + 30;
        --v44;
      }
      else
      {
        v46 = 31;
        v45 = 30;
      }
      v47 = *a2;
      if ( a2[2] < v46 )
      {
        v99 = qvector_reserve();
        *a2 = v99;
        v47 = v99;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3AB40);
      a2[1] = v46;
      *(_BYTE *)(v47 + v45) = 0;
      v49 = *a2 + v44;
      *(__m128i *)v49 = si128;
      *(__m128i *)(v49 + 14) = _mm_load_si128((const __m128i *)&xmmword_3AB50);
      v50 = strlen(arg);
      v51 = a2[1];
      v52 = v50;
      v53 = v50;
      if ( v51 )
      {
        --v51;
        v53 = v50 + v51;
      }
      v54 = *a2;
      v55 = v53 + 1;
      if ( a2[2] < v53 + 1 )
      {
        v98 = qvector_reserve();
        *a2 = v98;
        v55 = v53 + 1;
        v54 = v98;
      }
      a2[1] = v55;
      *(_BYTE *)(v54 + v53) = 0;
      memmove((void *)(v51 + *a2), arg, v52);
      v56 = a2[1];
      if ( v56 )
      {
        v57 = v56 + 1;
        v58 = a2[1];
        --v56;
      }
      else
      {
        v57 = 2;
        v58 = 1;
      }
      v59 = *a2;
      if ( a2[2] < v57 )
      {
        v102 = qvector_reserve();
        *a2 = v102;
        v59 = v102;
      }
      a2[1] = v57;
      *(_BYTE *)(v59 + v58) = 0;
      *(_BYTE *)(*a2 + v56) = 47;
      v60 = *a3;
      if ( *a3 )
      {
        v109 = a2[1];
        v61 = strlen(*a3);
        v62 = v109;
        v63 = v61;
        v64 = v61;
        if ( v109 )
        {
          v62 = v109 - 1;
          v64 = v61 + v109 - 1;
        }
        v65 = *a2;
        if ( a2[2] < v64 + 1 )
        {
          v119 = v61;
          v114 = v62;
          v107 = qvector_reserve();
          v63 = v119;
          v62 = v114;
          *a2 = v107;
          v65 = v107;
        }
        a2[1] = v64 + 1;
        *(_BYTE *)(v65 + v64) = 0;
        memmove((void *)(v62 + *a2), v60, v63);
      }
      v66 = a2[1];
      if ( v66 )
      {
        v67 = v66 + 4;
        v68 = v66 + 5;
        --v66;
      }
      else
      {
        v68 = 6;
        v67 = 5;
      }
      v69 = *a2;
      if ( a2[2] < v68 )
      {
        v101 = qvector_reserve();
        *a2 = v101;
        v69 = v101;
      }
      a2[1] = v68;
      *(_BYTE *)(v69 + v67) = 0;
      v70 = *a2 + v66;
      *(_DWORD *)v70 = 1684955424;
      *(_BYTE *)(v70 + 4) = 32;
      v71 = strlen(arg);
      v72 = a2[1];
      v73 = v71;
      v74 = v71;
      if ( v72 )
      {
        --v72;
        v74 = v71 + v72;
      }
      v75 = *a2;
      v76 = v74 + 1;
      if ( a2[2] < v74 + 1 )
      {
        v100 = qvector_reserve();
        *a2 = v100;
        v76 = v74 + 1;
        v75 = v100;
      }
      a2[1] = v76;
      *(_BYTE *)(v75 + v74) = 0;
      memmove((void *)(v72 + *a2), arg, v73);
      v77 = a2[1];
      if ( v77 )
      {
        v78 = v77 + 1;
        v79 = a2[1];
        --v77;
      }
      else
      {
        v78 = 2;
        v79 = 1;
      }
      v80 = *a2;
      if ( a2[2] < v78 )
      {
        v103 = qvector_reserve();
        *a2 = v103;
        v80 = v103;
      }
      a2[1] = v78;
      *(_BYTE *)(v80 + v79) = 0;
      *(_BYTE *)(*a2 + v77) = 47;
      v81 = a3[1];
      if ( v81 )
      {
        v82 = a2[1];
        v83 = strlen(a3[1]);
        v84 = v83;
        v85 = v83;
        if ( v82 )
        {
          --v82;
          v85 = v83 + v82;
        }
        v86 = *a2;
        if ( a2[2] < v85 + 1 )
        {
          v108 = qvector_reserve();
          *a2 = v108;
          v86 = v108;
        }
        a2[1] = v85 + 1;
        *(_BYTE *)(v86 + v85) = 0;
        memmove((void *)(v82 + *a2), v81, v84);
      }
      v87 = a2[1];
      if ( v87 )
      {
        v88 = v87 + 1;
        v89 = a2[1];
        --v87;
      }
      else
      {
        v88 = 2;
        v89 = 1;
      }
      v90 = *a2;
      if ( a2[2] < v88 )
      {
        v104 = qvector_reserve();
        *a2 = v104;
        v90 = v104;
      }
      a2[1] = v88;
      *(_BYTE *)(v90 + v89) = 0;
      *(_BYTE *)(*a2 + v87) = 46;
    }
    v23 = 1;
    goto LABEL_22;
  }
  v25 = dlopen(v22, 258);
  *(_QWORD *)(a1 + 8) = v25;
  v26 = v25;
  if ( v25 )
  {
    v27 = (void ***)(a1 + 184);
    while ( 1 )
    {
      v28 = *v27;
      *v28 = dlsym(v26, (const char *)*(v27 - 1));
      if ( !*v27 )
        break;
      v27 += 2;
      if ( v27 == (void ***)(a1 + 232) )
        goto LABEL_20;
      v26 = *(void **)(a1 + 8);
    }
    **(_QWORD **)(a1 + 184) = 0;
    **(_QWORD **)(a1 + 200) = 0;
    **(_QWORD **)(a1 + 216) = 0;
    v29 = *(void **)(a1 + 8);
    if ( v29 )
      dlclose(v29);
    *(_QWORD *)(a1 + 8) = 0;
  }
  sub_11930(a2, (__int64)&file);
  v30 = (_QWORD **)(a1 + 104);
  do
  {
    v31 = *v30;
    v30 += 2;
    *v31 = 0;
  }
  while ( (_QWORD **)(a1 + 184) != v30 );
  if ( *(_QWORD *)a1 )
    dlclose(*(void **)a1);
  *(_QWORD *)a1 = 0;
  v23 = 0;
LABEL_22:
  if ( file )
  {
    *(_QWORD *)&v122 = 0;
    qfree();
  }
  return v23;
}

