__int64 __fastcall sub_142F80(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 **v9; // rcx
  __int64 *v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 v18; // r13
  void *v19; // r15
  __m128i si128; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 i; // r13
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // r14
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rax
  int v48; // edx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  __int64 *v54; // r14
  unsigned __int64 v55; // r13
  void *v56; // r14
  __m128i v57; // xmm0
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 *v60; // r14
  __int64 v61; // r13
  void *v62; // r14
  __m128i v63; // xmm0
  __int64 v64; // rax
  __int64 *v65; // rax
  unsigned __int64 v66; // r14
  void *v67; // rcx
  __m128i v68; // xmm0
  __int64 *v69; // rax
  __int64 v70; // rax
  void *v71; // rdi
  void *v73; // rax
  __int64 *v74; // r14
  int v75; // eax
  __int64 v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rdx
  void *v80; // rax
  __int64 v81; // rdx
  size_t v82[2]; // [rsp+0h] [rbp-1E8h] BYREF
  void **p_src; // [rsp+10h] [rbp-1D8h]
  __int64 *v84; // [rsp+18h] [rbp-1D0h]
  __int64 *v85; // [rsp+20h] [rbp-1C8h]
  __int64 *v86; // [rsp+28h] [rbp-1C0h]
  size_t v87[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 *v88; // [rsp+40h] [rbp-1A8h]
  __int64 v89; // [rsp+48h] [rbp-1A0h]
  __int64 *v90; // [rsp+50h] [rbp-198h]
  void **v91; // [rsp+58h] [rbp-190h]
  __int64 *v92; // [rsp+60h] [rbp-188h]
  __int64 v93; // [rsp+68h] [rbp-180h]
  size_t n[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v95; // [rsp+88h] [rbp-160h] BYREF
  __int64 v96; // [rsp+90h] [rbp-158h] BYREF
  __int64 v97; // [rsp+98h] [rbp-150h]
  void *v98; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v99; // [rsp+A8h] [rbp-140h] BYREF
  _QWORD v100[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v102; // [rsp+D8h] [rbp-110h]
  __int64 v103[2]; // [rsp+F0h] [rbp-F8h] BYREF
  void *v104; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v105; // [rsp+108h] [rbp-E0h]
  __int64 v106[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *src; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v108; // [rsp+138h] [rbp-B0h]
  __int64 v109[2]; // [rsp+150h] [rbp-98h] BYREF
  void *v110; // [rsp+160h] [rbp-88h] BYREF
  __int128 v111; // [rsp+168h] [rbp-80h]
  __int64 v112; // [rsp+180h] [rbp-68h] BYREF
  __int64 v113; // [rsp+188h] [rbp-60h]
  __int64 v114; // [rsp+190h] [rbp-58h] BYREF
  __int128 v115; // [rsp+198h] [rbp-50h]
  unsigned __int64 v116; // [rsp+1A8h] [rbp-40h]

  v6 = *((_BYTE *)a1 + 320) == 0;
  v116 = __readfsqword(0x28u);
  v7 = (__int64)a1;
  v95 = 0;
  if ( !v6 )
  {
    a2 = a1 + 41;
    a1 = &v95;
    v92 = &v95;
    copy_tinfo_t();
  }
  v8 = *(unsigned int *)(v7 + 64);
  v93 = *(_QWORD *)(v7 + 1504);
  if ( !(_DWORD)v8 )
  {
    v92 = &v95;
    sub_1340F0(a1, a2, v8, a4, a5, a6);
  }
  v9 = *(__int64 ***)(v7 + 528);
  v86 = *v9;
  v10 = v9[(unsigned int)(v8 - 1)];
  v11 = 0;
  v92 = &v95;
  v88 = v100;
  v85 = &v96;
  v96 = 0;
  v97 = 0;
  v98 = nullptr;
  p_src = &src;
  v99 = 0;
  while ( 1 )
  {
    v100[0] = 0;
    v100[1] = 0;
    v101 = 0;
    v102 = 0;
    sub_138B00(v7, (__int64)v85, v88, (__int64)v92, -1, 0);
    v16 = *(_DWORD *)v7;
    v103[0] = 0;
    v103[1] = 0;
    v104 = nullptr;
    v105 = 0;
    if ( (v16 & 0x4000) != 0 )
    {
      v84 = v103;
    }
    else
    {
      if ( (v16 & 0x8000) != 0 )
      {
        if ( !under_debugger )
        {
          v84 = v103;
          sub_3835A0(50429);
        }
        BUG();
      }
      v17 = *(_QWORD *)(v7 + 1504);
      v84 = v103;
      sub_642D0(v103, (__int64 *)(v17 + 224));
      v18 = *(_QWORD *)(v17 + 248);
      v19 = nullptr;
      if ( v18 )
      {
        v82[0] = 16 * v18;
        v19 = (void *)qalloc_or_throw();
        memcpy(v19, *(const void **)(v17 + 240), v82[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
      if ( v104 )
      {
        *(__m128i *)v82 = si128;
        v105.m128i_i64[0] = 0;
        qfree();
        si128 = _mm_load_si128((const __m128i *)v82);
      }
      v21 = *(_QWORD *)(v7 + 920);
      v22 = *(_QWORD *)(v7 + 1504);
      v104 = v19;
      v105 = si128;
      sub_136E20(v22, v84, v21);
    }
    v23 = v93;
    v87[0] = v93 + 104;
    sub_64040(v85, (__int64 *)(v93 + 104), v12, v13, v14, v15);
    v89 = v23 + 120;
    sub_318020(&v98, v23 + 120);
    v6 = *(_BYTE *)(v7 + 320) == 0;
    v106[0] = 0;
    v106[1] = 0;
    src = nullptr;
    v108 = 0;
    if ( !v6 )
      sub_1347E0(v106, v7, v24, v25, v26, v27);
    for ( i = *(_QWORD *)(v7 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      if ( (*(_DWORD *)(i + 24) & 0x600) != 0x200 )
        v11 += sub_A6FD0(i, 0, v24, v25, v26, v27);
      if ( v10 != (__int64 *)i )
      {
        sub_63C80(v106, (__int64 *)(i + 120));
        sub_317070(p_src, i + 136);
      }
    }
    sub_63C80(v85, v84);
    v91 = &v104;
    sub_317070(&v98, &v104);
    v90 = v86 + 30;
    if ( sub_122670((__int64)(v86 + 30), (__int64)v106) )
      break;
    v29 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 0x4000) != 0 )
      goto LABEL_64;
LABEL_22:
    if ( (v29 & 0x1000) == 0 )
      goto LABEL_64;
    BYTE1(v29) |= 0x40u;
    *(_DWORD *)v7 = v29;
    v82[0] = (size_t)v109;
    sub_63A00(v109, (__int64)v106);
    v34 = v108;
    v110 = nullptr;
    v111 = 0;
    if ( (_QWORD)v108 )
    {
      n[0] = 16 * v108;
      v110 = (void *)qalloc_or_throw();
      *((_QWORD *)&v111 + 1) = v34;
      memcpy(v110, src, n[0]);
      *(_QWORD *)&v111 = v34;
    }
    sub_64040((__int64 *)v82[0], v88, v30, v31, v32, v33);
    sub_318020(&v110, &v101);
    v35 = (__int64 *)v82[0];
    sub_64040((__int64 *)v82[0], (__int64 *)v87[0], v36, v37, v38, v39);
    sub_318020(&v110, v89);
    sub_136E20(*(_QWORD *)(v7 + 1504), v35, *(_QWORD *)(v7 + 920));
    v40 = *(_QWORD *)(v7 + 1504);
    v41 = *(_DWORD *)(v40 + 80);
    v42 = *(_DWORD *)(v40 + 64);
    v112 = 0;
    v113 = 0;
    sub_63880(&v112, v42, v41);
    v114 = 0;
    v115 = 0;
    sub_64040((__int64 *)v82[0], &v112, v43, v44, v45, v46);
    v87[0] = (size_t)&v114;
    sub_318020(&v110, &v114);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree();
    }
    qfree();
    v47 = *(_QWORD *)(v7 + 1504);
    v48 = *(_DWORD *)(v47 + 80);
    v49 = *(_DWORD *)(v47 + 60);
    v112 = 0;
    v113 = 0;
    sub_63880(&v112, v49, v48);
    v114 = 0;
    v115 = 0;
    sub_64040((__int64 *)v82[0], &v112, v50, v51, v52, v53);
    sub_318020(&v110, v87[0]);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree();
    }
    qfree();
    if ( !(unsigned __int8)sub_64280((_QWORD *)v82[0]) )
    {
      sub_63C80(v106, v84);
      sub_317070(p_src, v91);
      v54 = v90;
      if ( sub_122670((__int64)v90, (__int64)v106) )
      {
        sub_642D0(v54, v106);
        v55 = v108;
        v56 = nullptr;
        if ( (_QWORD)v108 )
        {
          v87[0] = 16 * v108;
          v56 = (void *)qalloc_or_throw();
          memcpy(v56, src, v87[0]);
        }
        v57 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
        if ( v86[32] )
        {
          v86[33] = 0;
          *(__m128i *)v87 = v57;
          qfree();
          v57 = _mm_load_si128((const __m128i *)v87);
        }
        v58 = v86;
        v86[32] = (__int64)v56;
        *(__m128i *)(v58 + 33) = v57;
        v59 = *(_QWORD *)(v7 + 784);
        if ( v59 )
          *(_DWORD *)(v59 + 48) = 63;
        ++v11;
      }
      v60 = v85;
      if ( sub_122670((__int64)(v10 + 20), (__int64)v85) )
      {
        sub_642D0(v10 + 20, v60);
        v61 = v99.m128i_i64[0];
        v62 = nullptr;
        if ( v99.m128i_i64[0] )
        {
          v87[0] = 16 * v99.m128i_i64[0];
          v62 = (void *)qalloc_or_throw();
          memcpy(v62, v98, v87[0]);
        }
        v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v61);
        if ( v10[22] )
        {
          v10[23] = 0;
          *(__m128i *)v87 = v63;
          qfree();
          v63 = _mm_load_si128((const __m128i *)v87);
        }
        v10[22] = (__int64)v62;
        *(__m128i *)(v10 + 23) = v63;
        v64 = *(_QWORD *)(v7 + 784);
        if ( v64 )
          *(_DWORD *)(v64 + 48) = 63;
        ++v11;
      }
      sub_669A0(v7, 1u, (__int64)"before save-restore analysis");
      v65 = (__int64 *)sub_66AE0((_QWORD *)v7);
      if ( (unsigned int)sub_1418C0(v65, (__int64)v84, nullptr) )
      {
        ++v11;
        sub_669A0(v7, 1u, (__int64)"after save-restore analysis");
      }
    }
    if ( v110 )
    {
      *(_QWORD *)&v111 = 0;
      qfree();
    }
    qfree();
    if ( src )
    {
      *(_QWORD *)&v108 = 0;
      qfree();
    }
    qfree();
    if ( v104 )
    {
      v105.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( v101 )
    {
      *(_QWORD *)&v102 = 0;
      qfree();
    }
    qfree();
  }
  sub_642D0(v90, v106);
  v66 = v108;
  v67 = nullptr;
  if ( (_QWORD)v108 )
  {
    v82[0] = 16 * v108;
    v73 = (void *)qalloc_or_throw();
    v67 = memcpy(v73, src, v82[0]);
  }
  v68 = _mm_unpacklo_epi64((__m128i)v66, (__m128i)v66);
  if ( v86[32] )
  {
    v86[33] = 0;
    v82[0] = (size_t)v67;
    *(__m128i *)n = v68;
    qfree();
    v68 = _mm_load_si128((const __m128i *)n);
    v67 = (void *)v82[0];
  }
  v69 = v86;
  v86[32] = (__int64)v67;
  *(__m128i *)(v69 + 33) = v68;
  v70 = *(_QWORD *)(v7 + 784);
  if ( v70 )
    *(_DWORD *)(v70 + 48) = 63;
  v29 = *(_DWORD *)v7;
  ++v11;
  if ( (*(_DWORD *)v7 & 0x4000) == 0 )
    goto LABEL_22;
LABEL_64:
  if ( src )
  {
    *(_QWORD *)&v108 = 0;
    qfree();
  }
  qfree();
  if ( v104 )
  {
    v105.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  qfree();
  if ( *(char *)(v7 + 1) >= 0 )
  {
    v74 = v85;
    sub_136E20(*(_QWORD *)(v7 + 1504), v85, *(_QWORD *)(v7 + 920));
    v75 = sub_122670((__int64)(v10 + 20), (__int64)v74);
    v71 = v98;
    if ( v75 )
    {
      v76 = v10[20];
      v77 = _mm_loadu_si128(&v99);
      v10[20] = v96;
      v96 = v76;
      v78 = v10[21];
      v10[21] = v97;
      v79 = v10[24];
      v97 = v78;
      v80 = (void *)v10[22];
      v99.m128i_i64[1] = v79;
      v10[22] = (__int64)v71;
      *(__m128i *)(v10 + 23) = v77;
      v81 = *(_QWORD *)(v7 + 784);
      v98 = v80;
      if ( v81 )
        *(_DWORD *)(v81 + 48) = 63;
      ++v11;
      v71 = v80;
    }
  }
  else
  {
    v71 = v98;
  }
  if ( v71 )
  {
    v99.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  clear_tinfo_t();
  return v11;
}

