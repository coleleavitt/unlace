__int64 __fastcall sub_9AD90(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        unsigned int a4,
        const char *a5,
        int a6,
        char *a7,
        __int64 a8)
{
  unsigned __int64 v8; // xmm1_8
  const char *v9; // r15
  char *v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  char *v18; // rax
  __m128i v19; // xmm1
  char *v20; // r15
  __m128i v21; // xmm1
  int v22; // eax
  unsigned int v23; // r15d
  const char *v24; // rdx
  unsigned int v25; // ecx
  const char *v26; // rbx
  const char *v27; // rsi
  const char *v28; // rdx
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  const char *v35; // r13
  const char *v36; // r15
  __int64 v37; // rax
  int v38; // eax
  const char *v39; // rdi
  const char *v40; // rax
  const char *v41; // rdi
  const char *v42; // rax
  int v43; // eax
  const char *v44; // r9
  const char *v45; // r8
  unsigned int v46; // r12d
  const char *v47; // rdx
  const char *v48; // rsi
  __int32 v49; // eax
  const char *v50; // rdx
  const char *v51; // rsi
  const char *v52; // rdi
  const char *v53; // rsi
  const char *v54; // rdi
  __m128i v55; // [rsp-250h] [rbp-258h] BYREF
  const char *v56; // [rsp-240h] [rbp-248h]
  unsigned __int64 v57; // [rsp-238h] [rbp-240h]
  const char *v58; // [rsp-230h] [rbp-238h]
  const char *v59; // [rsp-228h] [rbp-230h]
  __m128i v60; // [rsp-220h] [rbp-228h] BYREF
  char *v61; // [rsp-210h] [rbp-218h] BYREF
  __int128 v62; // [rsp-208h] [rbp-210h]
  char *v63; // [rsp-1F0h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp-1E8h] [rbp-1F0h]
  char *v65; // [rsp-1D0h] [rbp-1D8h] BYREF
  __m128i v66; // [rsp-1C8h] [rbp-1D0h] BYREF
  __m128i v67; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128i v68; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp-190h] [rbp-198h] BYREF
  __int64 v70; // [rsp-188h] [rbp-190h]
  const char *v71; // [rsp-180h] [rbp-188h]
  char *v72; // [rsp-178h] [rbp-180h]
  __m128i v73; // [rsp-170h] [rbp-178h]
  char *v74; // [rsp-160h] [rbp-168h]
  __int128 v75; // [rsp-158h] [rbp-160h]
  void *v76; // [rsp-148h] [rbp-150h] BYREF
  __int128 v77; // [rsp-140h] [rbp-148h]
  __m128i v78; // [rsp-130h] [rbp-138h] BYREF
  __int64 v79; // [rsp-120h] [rbp-128h]
  __int64 v80; // [rsp-118h] [rbp-120h]
  __int128 v81; // [rsp-110h] [rbp-118h]
  char v82; // [rsp-100h] [rbp-108h]
  unsigned __int64 v83; // [rsp-F8h] [rbp-100h]
  __int16 v84; // [rsp-F0h] [rbp-F8h]
  __int64 v85; // [rsp-E0h] [rbp-E8h] BYREF
  __int64 v86; // [rsp-D8h] [rbp-E0h]
  const char *v87; // [rsp-D0h] [rbp-D8h]
  char *v88; // [rsp-C8h] [rbp-D0h]
  __m128i v89; // [rsp-C0h] [rbp-C8h]
  char *v90; // [rsp-B0h] [rbp-B8h]
  __int128 v91; // [rsp-A8h] [rbp-B0h]
  void *v92; // [rsp-98h] [rbp-A0h] BYREF
  __int128 v93; // [rsp-90h] [rbp-98h]
  __m128i v94; // [rsp-80h] [rbp-88h] BYREF
  __int64 v95; // [rsp-70h] [rbp-78h]
  __int64 v96; // [rsp-68h] [rbp-70h]
  __int128 v97; // [rsp-60h] [rbp-68h]
  char v98; // [rsp-50h] [rbp-58h]
  __int64 v99; // [rsp-48h] [rbp-50h]
  __int16 v100; // [rsp-40h] [rbp-48h]
  unsigned __int64 v101; // [rsp-38h] [rbp-40h]
  __int64 v102; // [rsp+0h] [rbp-8h] BYREF

  v8 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 224).m128i_u64[0];
  v9 = a5;
  v60.m128i_i64[0] = (__int64)a1;
  LODWORD(v58) = a4;
  v11 = a7;
  LODWORD(v59) = a6;
  v101 = __readfsqword(0x28u);
  v62 = 0;
  v61 = nullptr;
  if ( !a7 )
  {
    v37 = *a1;
    v56 = a3;
    v57 = v8;
    (*(void (__fastcall **)(__int64 *, char **))(v37 + 440))(a1, &v61);
    a3 = v56;
    v11 = (char *)s1;
    if ( (_QWORD)v62 )
      v11 = v61;
  }
  v73 = 0;
  if ( !v9 )
    v9 = a3;
  v75 = 0;
  v77 = 0;
  v69 = v60.m128i_i64[0];
  v78 = 0;
  v70 = a2;
  v71 = a3;
  v72 = nullptr;
  v74 = nullptr;
  v76 = nullptr;
  v79 = 0;
  v80 = 0;
  v82 = 0;
  v84 = 0;
  v81 = 0;
  v83 = v8;
  sub_B6AF0((unsigned int)&v65, a2 + 32, (_DWORD)a3, a4, (_DWORD)a5, a6);
  v15 = v65;
  v16 = _mm_loadu_si128(&v66);
  v65 = nullptr;
  v66 = 0;
  v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v59), 224).m128i_u64[0];
  if ( v72 )
  {
    v56 = v15;
    v55 = v16;
    v73.m128i_i64[0] = 0;
    j__free(v72);
    v17 = _mm_load_si128(&v55);
    v72 = (char *)v56;
    v73 = v17;
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      j__free(v65);
    }
  }
  else
  {
    v72 = (char *)v15;
    v73 = v16;
  }
  v98 = 0;
  v85 = v60.m128i_i64[0];
  v89 = 0;
  v91 = 0;
  v93 = 0;
  v99 = v57;
  v94 = 0;
  v86 = a2;
  v87 = v9;
  v88 = nullptr;
  v90 = nullptr;
  v92 = nullptr;
  v95 = 0;
  v96 = 0;
  v100 = 0;
  v97 = 0;
  sub_B6AF0((unsigned int)&v102 - 464, a2 + 32, (_DWORD)v9, v12, v13, v14);
  v18 = v65;
  v65 = nullptr;
  v19 = _mm_loadu_si128(&v66);
  v66 = 0;
  v20 = v18;
  if ( v88 )
  {
    v60 = v19;
    v89.m128i_i64[0] = 0;
    j__free(v88);
    v21 = _mm_load_si128(&v60);
    v88 = v20;
    v89 = v21;
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      j__free(v65);
    }
  }
  else
  {
    v88 = v18;
    v89 = v19;
  }
  v22 = HIDWORD(v83);
  v23 = v83;
  if ( (_DWORD)v83 != -4 )
  {
    v24 = v71;
    if ( HIDWORD(v99) == HIDWORD(v83) )
    {
      v30 = (int)v87;
      v60.m128i_i64[0] = (__int64)v71;
      v31 = strcmp(v71, v87);
      v24 = (const char *)v60.m128i_i64[0];
      if ( !v31 )
        goto LABEL_54;
    }
    v60.m128i_i32[0] = sub_99050((__int64)&v76, v69, v24, v23, 2 * (unsigned int)(v23 == -1));
    if ( v60.m128i_i32[0] )
      goto LABEL_38;
    v22 = v83;
    LOBYTE(v84) = 1;
    if ( (_DWORD)v83 == -3 )
    {
      v22 = DWORD1(v81);
    }
    else if ( (_DWORD)v83 == -1 )
    {
      v22 = DWORD2(v81);
    }
    HIDWORD(v83) = v22;
  }
  if ( HIDWORD(v99) == v22 )
  {
    v35 = v71;
    v30 = (int)v87;
    v60.m128i_i64[0] = (__int64)v87;
    v36 = v87;
    if ( !strcmp(v71, v87) )
      goto LABEL_54;
    if ( (_DWORD)v99 == -4 )
    {
LABEL_72:
      v30 = (int)v35;
      if ( strcmp(v36, v35) )
        goto LABEL_19;
LABEL_54:
      sub_16B870((unsigned int)"cowardly refusing to compare a file against itself\n", v30, (_DWORD)v24, v32, v33, v34);
LABEL_55:
      v60.m128i_i32[0] = 0;
      goto LABEL_38;
    }
    v30 = (int)v35;
    LODWORD(v57) = v99;
    if ( !strcmp((const char *)v60.m128i_i64[0], v35) )
      goto LABEL_54;
    v25 = v57;
  }
  else
  {
    v25 = v99;
    if ( (_DWORD)v99 == -4 )
      goto LABEL_19;
    v60.m128i_i64[0] = (__int64)v87;
  }
  v60.m128i_i32[0] = sub_99050((__int64)&v92, v85, (const char *)v60.m128i_i64[0], v25, 2 * (unsigned int)(v25 == -1));
  if ( v60.m128i_i32[0] )
    goto LABEL_38;
  v38 = v99;
  LOBYTE(v100) = 1;
  if ( (_DWORD)v99 == -3 )
  {
    v38 = DWORD1(v97);
  }
  else if ( (_DWORD)v99 == -1 )
  {
    v38 = DWORD2(v97);
  }
  HIDWORD(v99) = v38;
  if ( v38 == HIDWORD(v83) )
  {
    v35 = v71;
    v36 = v87;
    goto LABEL_72;
  }
LABEL_19:
  v67 = 0;
  v68 = 0;
  if ( (_DWORD)v83 == -4 )
  {
    v28 = s1;
    if ( v73.m128i_i64[0] )
      v28 = v72;
    if ( (unsigned int)sub_B6D10(*(_QWORD *)(v70 + 56), &v67, v28, 0, 0) )
      goto LABEL_37;
  }
  else
  {
    if ( !(_BYTE)v84 )
      goto LABEL_37;
    v67 = _mm_load_si128(&v78);
  }
  if ( (_DWORD)v99 == -4 )
  {
    v50 = s1;
    if ( v89.m128i_i64[0] )
      v50 = v88;
    if ( (unsigned int)sub_B6D10(*(_QWORD *)(v86 + 56), &v68, v50, 0, 0) )
      goto LABEL_37;
  }
  else
  {
    if ( !(_BYTE)v100 )
      goto LABEL_37;
    v68 = _mm_load_si128(&v94);
  }
  if ( *(_OWORD *)&v68 - *(_OWORD *)&v67 == 0 )
  {
    sub_98DB0((__int64)&v65, (__int64)&v85);
    v26 = s1;
    if ( v66.m128i_i64[0] )
      v26 = v65;
    sub_98DB0((__int64)&v63, (__int64)&v69);
    v27 = s1;
    if ( v64 )
      v27 = v63;
    sub_4BC40((__int64 (__fastcall ***)(_QWORD))"files %s and %s are identical\n", v27, v26);
    if ( v63 )
    {
      v64 = 0;
      j__free(v63);
    }
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      j__free(v65);
    }
    goto LABEL_55;
  }
LABEL_37:
  v60.m128i_i32[0] = sub_9A7B0(&v69, (int)v59, 1);
  if ( v60.m128i_i32[0] )
    goto LABEL_38;
  v60.m128i_i32[0] = sub_9A7B0(&v85, (int)v58, 0);
  if ( v60.m128i_i32[0] )
    goto LABEL_38;
  if ( !a8 )
    goto LABEL_80;
  (**(void (__fastcall ***)(void **))a8)((void **)&v65);
  if ( (_DWORD)v83 != -4 )
    goto LABEL_77;
  if ( (_QWORD)v75 )
  {
    v51 = v74;
    v52 = s1;
    if ( !v66.m128i_i64[0] )
      goto LABEL_113;
  }
  else
  {
    v51 = s1;
    if ( !v66.m128i_i64[0] )
      goto LABEL_114;
  }
  v52 = v65;
LABEL_113:
  if ( !strcmp(v52, v51) )
    goto LABEL_114;
LABEL_77:
  if ( (_DWORD)v99 != -4 )
    goto LABEL_78;
  if ( (_QWORD)v91 )
  {
    v53 = v90;
    v54 = s1;
    if ( !v66.m128i_i64[0] )
      goto LABEL_121;
  }
  else
  {
    v53 = s1;
    if ( !v66.m128i_i64[0] )
      goto LABEL_114;
  }
  v54 = v65;
LABEL_121:
  if ( strcmp(v54, v53) )
  {
LABEL_78:
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      j__free(v65);
    }
LABEL_80:
    v39 = s1;
    v60.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v73.m128i_i64[0] )
      v39 = v72;
    v40 = (const char *)sub_195A60(v39);
    if ( !v40 )
      goto LABEL_109;
    v59 = v40;
    if ( strcasecmp(v40, "idb") )
    {
      if ( strcasecmp(v59, "i64") )
        goto LABEL_109;
    }
    v41 = s1;
    if ( v89.m128i_i64[0] )
      v41 = v88;
    v42 = (const char *)sub_195A60(v41);
    if ( v42 )
    {
      v59 = v42;
      v43 = strcasecmp(v42, "idb");
      LODWORD(v56) = 1;
      if ( v43 )
        LODWORD(v56) = strcasecmp(v59, "i64") == 0;
    }
    else
    {
LABEL_109:
      LODWORD(v56) = 0;
    }
    LODWORD(v59) = HIBYTE(v100);
    sub_98DB0((__int64)&v65, (__int64)&v85);
    v44 = s1;
    if ( v66.m128i_i64[0] )
      v44 = v65;
    v45 = s1;
    if ( (_QWORD)v91 )
      v45 = v90;
    v57 = (unsigned __int64)v44;
    v46 = HIBYTE(v84);
    v58 = v45;
    sub_98DB0((__int64)&v63, (__int64)&v69);
    v47 = s1;
    if ( v64 )
      v47 = v63;
    v48 = s1;
    if ( (_QWORD)v75 )
      v48 = v74;
    if ( (__int64 (__fastcall *)(__int64, __int64, __int64, char, __int64, __int64, char, char, char *, __int64))v60.m128i_i64[0] == sub_96AC0 )
      v49 = sub_96AA0(a2, (__int64)v48, (__int64)v47, v46, (__int64)v58, v57, (char)v59, (char)v56, v11, a8);
    else
      v49 = ((__int64 (__fastcall *)(__int64, const char *, const char *, _QWORD, const char *, unsigned __int64, _QWORD, _QWORD, char *, __int64))v60.m128i_i64[0])(
              a2,
              v48,
              v47,
              v46,
              v58,
              v57,
              (unsigned int)v59,
              (unsigned int)v56,
              v11,
              a8);
    v60.m128i_i32[0] = v49;
    if ( v63 )
    {
      v64 = 0;
      j__free(v63);
    }
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      j__free(v65);
    }
    goto LABEL_38;
  }
LABEL_114:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL))(a8) )
    goto LABEL_78;
  if ( v65 )
  {
    v66.m128i_i64[0] = 0;
    j__free(v65);
  }
  v60.m128i_i32[0] = 1;
LABEL_38:
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    j__free(v92);
  }
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    j__free(v90);
  }
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    j__free(v88);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    j__free(v76);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    j__free(v74);
  }
  if ( v72 )
  {
    v73.m128i_i64[0] = 0;
    j__free(v72);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    j__free(v61);
  }
  return v60.m128i_u32[0];
}
