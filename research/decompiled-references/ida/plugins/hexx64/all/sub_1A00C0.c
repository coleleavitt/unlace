unsigned __int64 __fastcall sub_1A00C0(__int64 *a1, char a2)
{
  __int64 v2; // rax
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __m128i si128; // xmm0
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 *v18; // rbp
  __int64 v19; // r14
  void *v20; // rax
  size_t v21; // rdx
  _QWORD *v22; // rdi
  __int64 *v23; // rax
  int v24; // ebx
  __int64 j; // rax
  __int64 *v26; // rbp
  __m128i *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 *v32; // rbp
  __int64 v33; // rdi
  unsigned __int64 v35; // rbp
  __int64 *v36; // r12
  __int64 v37; // rdi
  void *v38; // rax
  size_t v39; // rax
  __int64 *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  size_t v44; // rbx
  __m128i *v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rbx
  __m128i *v48; // rdx
  __int64 v49; // rcx
  __int64 i; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rdx
  __m128i *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r12
  __int64 v76; // r13
  void *v77; // rax
  size_t v78; // rdx
  __int64 *v79; // r12
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 v82; // rax
  void *v83; // rax
  size_t n[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 *v85; // [rsp+10h] [rbp-1E8h]
  __int64 *v86; // [rsp+18h] [rbp-1E0h]
  unsigned int v87; // [rsp+20h] [rbp-1D8h]
  char v88; // [rsp+27h] [rbp-1D1h]
  unsigned __int64 v89; // [rsp+28h] [rbp-1D0h]
  __int64 v90; // [rsp+30h] [rbp-1C8h]
  __int64 (__fastcall ***v91)(); // [rsp+38h] [rbp-1C0h]
  __m128i v92; // [rsp+40h] [rbp-1B8h] BYREF
  __m128i v93; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v94[2]; // [rsp+60h] [rbp-198h] BYREF
  void *v95; // [rsp+70h] [rbp-188h] BYREF
  __int128 v96; // [rsp+78h] [rbp-180h]
  __int64 v97[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v98; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v99; // [rsp+A8h] [rbp-150h]
  __int64 v100[2]; // [rsp+C0h] [rbp-138h] BYREF
  unsigned __int64 *v101; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-120h]
  __int64 v103[2]; // [rsp+F0h] [rbp-108h] BYREF
  void *v104; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v105; // [rsp+108h] [rbp-F0h]
  __int64 (__fastcall **v106)(); // [rsp+120h] [rbp-D8h] BYREF
  __int64 *v107; // [rsp+128h] [rbp-D0h] BYREF
  __int128 v108; // [rsp+130h] [rbp-C8h]
  __int64 v109[2]; // [rsp+140h] [rbp-B8h] BYREF
  void *src; // [rsp+150h] [rbp-A8h]
  __int128 v111; // [rsp+158h] [rbp-A0h]
  __int64 v112[2]; // [rsp+168h] [rbp-90h] BYREF
  __int64 v113; // [rsp+178h] [rbp-80h]
  __m128i v114; // [rsp+180h] [rbp-78h]
  int v115; // [rsp+190h] [rbp-68h]
  _QWORD *v116; // [rsp+198h] [rbp-60h]
  __int64 v117; // [rsp+1A0h] [rbp-58h]
  __int64 *v118; // [rsp+1A8h] [rbp-50h]
  __int64 *v119; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v120; // [rsp+1B8h] [rbp-40h]

  v88 = a2;
  v120 = __readfsqword(0x28u);
  v2 = 0;
  if ( !a1[3] )
    return v120 - __readfsqword(0x28u);
  v4 = 0;
  v85 = v94;
  v94[0] = 0;
  v94[1] = 0;
  v95 = nullptr;
  v86 = (__int64 *)&v95;
  v96 = 0;
  do
  {
    v5 = *(_QWORD *)(a1[2] + 8 * v2);
    sub_64280(v85, (__int64 *)v5, 0.0);
    sub_316CB0(v86, (__int64 **)(v5 + 16), v6, v7);
    v2 = ++v4;
  }
  while ( v4 < (unsigned __int64)a1[3] );
  v8 = a1[5];
  v9 = (_QWORD *)*a1;
  v106 = &off_4DE388;
  v10 = v85;
  v117 = v8;
  v118 = a1 + 6;
  v107 = nullptr;
  v109[0] = 0;
  v109[1] = 0;
  src = nullptr;
  v112[0] = 0;
  v112[1] = 0;
  v113 = 0;
  v115 = 1;
  v116 = v9;
  v119 = a1 + 11;
  v108 = 0;
  v111 = 0;
  v114 = 0;
  sub_648D0(v112, (const void **)v85, 0.0);
  v13 = v96;
  v14 = 0;
  if ( (_QWORD)v96 )
  {
    v38 = (void *)qalloc_or_throw(16 * v96, (__int64)v85, v11, v12);
    v10 = (__int64 *)v95;
    v14 = (__int64)v38;
    memcpy(v38, v95, 16 * v13);
  }
  si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v113 )
  {
    *(__m128i *)n = si128;
    v114.m128i_i64[0] = 0;
    qfree(v113);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v113 = v14;
  v114 = si128;
  v16 = v108;
  v17 = *((int *)v116 + 16);
  if ( v17 < (unsigned __int64)v108 )
  {
    v35 = *((int *)v116 + 16);
    do
    {
      v36 = &v107[5 * v35];
      v37 = v36[2];
      if ( v37 )
      {
        v36[3] = 0;
        qfree(v37);
      }
      ++v35;
      qfree(*v36);
    }
    while ( v35 < v16 );
LABEL_17:
    *(_QWORD *)&v108 = v17;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v108 >= v17 )
    goto LABEL_18;
  v10 = v107;
  if ( v109 < v107 || v109 >= &v107[5 * *((_QWORD *)&v108 + 1)] )
  {
    if ( *((_QWORD *)&v108 + 1) >= v17
      || (v82 = qvector_reserve((__int64)&v107, (__int64)v107, *((int *)v116 + 16), 40),
          v16 = v108,
          v107 = (__int64 *)v82,
          v10 = (__int64 *)v82,
          (unsigned __int64)v108 < v17) )
    {
      while ( 1 )
      {
        v18 = &v10[5 * v16];
        v10 = v109;
        sub_64000(v18, (__int64)v109, *(double *)si128.m128i_i64);
        v18[2] = 0;
        *(_OWORD *)(v18 + 3) = 0;
        v19 = v111;
        if ( (_QWORD)v111 )
        {
          n[0] = 16 * v111;
          v20 = (void *)qalloc_or_throw(16 * v111, (__int64)v109, 16 * v111, v12);
          v18[2] = (__int64)v20;
          v21 = n[0];
          ++v16;
          v18[4] = v19;
          v10 = (__int64 *)src;
          memcpy(v20, src, v21);
          v18[3] = v19;
          if ( v16 >= v17 )
            goto LABEL_17;
        }
        else if ( ++v16 >= v17 )
        {
          goto LABEL_17;
        }
        v10 = v107;
      }
    }
    goto LABEL_17;
  }
  v10 = v109;
  sub_64000(v103, (__int64)v109, *(double *)si128.m128i_i64);
  v75 = v111;
  si128.m128i_i64[0] = 0;
  v104 = nullptr;
  v105 = 0;
  if ( (_QWORD)v111 )
  {
    v83 = (void *)qalloc_or_throw(16 * v111, (__int64)v109, v73, v74);
    v10 = (__int64 *)src;
    v104 = v83;
    *((_QWORD *)&v105 + 1) = v75;
    memcpy(v83, src, 16 * v75);
    *(_QWORD *)&v105 = v75;
  }
  if ( *((_QWORD *)&v108 + 1) < v17 )
  {
    v10 = v107;
    v107 = (__int64 *)qvector_reserve((__int64)&v107, (__int64)v107, v17, 40);
  }
  v76 = v108;
  if ( (unsigned __int64)v108 < v17 )
  {
    do
    {
      v10 = v103;
      v79 = &v107[5 * v76];
      sub_64000(v79, (__int64)v103, 0.0);
      v79[2] = 0;
      *(_OWORD *)(v79 + 3) = 0;
      v81 = v105;
      if ( (_QWORD)v105 )
      {
        n[0] = 16 * v105;
        v77 = (void *)qalloc_or_throw(16 * v105, (__int64)v103, 16 * v105, v80);
        v79[2] = (__int64)v77;
        v78 = n[0];
        v79[4] = v81;
        v10 = (__int64 *)v104;
        memcpy(v77, v104, v78);
        v79[3] = v81;
      }
      ++v76;
    }
    while ( v17 != v76 );
  }
  *(_QWORD *)&v108 = v17;
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree((__int64)v104);
  }
  qfree(v103[0]);
LABEL_18:
  v22 = (_QWORD *)*a1;
  v91 = &v106;
  v23 = (__int64 *)sub_670E0(v22, (__int64)v10, v11, v12);
  v91 = &v106;
  sub_3111E0(v23, (__int64)&v106);
  if ( !(_QWORD)v96 )
    sub_1953C0(*(double *)si128.m128i_i64);
  v90 = 40;
  v87 = 1;
  v89 = *((_QWORD *)v95 + 2 * v96 - 2) + *((_QWORD *)v95 + 2 * v96 - 1) - 1LL;
  if ( *(int *)(*a1 + 64) <= 1 )
    goto LABEL_22;
  while ( !(unsigned __int8)sub_64880(v85) || (_QWORD)v96 )
  {
    if ( v87 >= *(_DWORD *)(*a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, *(double *)si128.m128i_i64);
LABEL_104:
      BUG();
    }
    v39 = *(_QWORD *)(*(_QWORD *)(*a1 + 528) + 8LL * v87);
    n[0] = v39;
    if ( *((_DWORD *)a1 + 10) == v87
      || *((_DWORD *)a1 + 11) == v87
      || (unsigned __int8)sub_64780((_QWORD *)(v39 + 120), v85)
      || (unsigned __int8)sub_318470((unsigned __int64 **)(n[0] + 136), (__int64)v86) )
    {
      v40 = v85;
      sub_64000(v97, (__int64)v85, *(double *)si128.m128i_i64);
      v43 = v96;
      v98 = nullptr;
      v99 = 0;
      if ( (_QWORD)v96 )
      {
        v98 = (void *)qalloc_or_throw(16 * v96, (__int64)v40, v41, v42);
        *((_QWORD *)&v99 + 1) = v43;
        memcpy(v98, v95, 16 * v43);
        *(_QWORD *)&v99 = v43;
      }
      if ( *((_DWORD *)a1 + 10) != v87 && *((_DWORD *)a1 + 11) != v87 )
      {
        v44 = n[0];
        sub_64700(v97, (__int64 *)(n[0] + 120));
        sub_3180C0((__int64 *)&v98, v44 + 136, v45, v46);
      }
      v47 = &v107[(unsigned __int64)v90 / 8];
      sub_64700(v97, &v107[(unsigned __int64)v90 / 8]);
      sub_3180C0((__int64 *)&v98, (__int64)(v47 + 2), v48, v49);
      for ( i = *(_QWORD *)(n[0] + 48); i; i = *(_QWORD *)(i + 8) )
      {
        if ( (unsigned __int8)sub_64880(v97) && !(_QWORD)v99 )
          break;
        v52 = a1[1];
        if ( !v52 )
          goto LABEL_74;
        v53 = *(_QWORD **)v52;
        v54 = *(_QWORD *)v52 + 8LL * *(_QWORD *)(v52 + 8);
        if ( *(_QWORD *)v52 != v54 )
        {
          while ( i != *v53 )
          {
            if ( (_QWORD *)v54 == ++v53 )
              goto LABEL_69;
          }
          if ( (_QWORD *)v54 != v53 )
            continue;
        }
LABEL_69:
        v55 = *(_QWORD **)(v52 + 56);
        v56 = &v55[*(_QWORD *)(v52 + 64)];
        if ( v55 == v56 )
          goto LABEL_74;
        while ( i != *v55 )
        {
          if ( v56 == ++v55 )
            goto LABEL_74;
        }
        if ( v56 == v55 )
        {
LABEL_74:
          sub_124680((__int64)v100, n[0], i, 0, *(double *)si128.m128i_i64, (__m128)0LL);
          if ( v88 && sub_317040(&v101, v89) )
          {
            v93.m128i_i64[1] = -1;
            v93.m128i_i64[0] = v89;
            sub_317BD0((__int64 *)&v101, &v93);
            if ( !v102 )
            {
              if ( !under_debugger )
                sub_383060(0xCD4Cu, *(double *)si128.m128i_i64);
              goto LABEL_104;
            }
            v92.m128i_i64[0] = v101[2 * v102 - 2] + 1;
            v92.m128i_i64[1] = v89;
            sub_317BD0((__int64 *)&v101, &v92);
          }
          sub_64700(v100, v97);
          sub_3180C0((__int64 *)&v101, (__int64)&v98, v57, v58);
          sub_64640(v85, v100, v59, v60, v61, v62);
          sub_317C60(v86, (__int64)&v101);
          sub_64640(v97, v100, v63, v64, v65, v66);
          sub_317C60((__int64 *)&v98, (__int64)&v101);
          sub_127A20((__int64)v103, n[0], i, 0, v67, v68, *(double *)si128.m128i_i64, (__m128)0LL);
          sub_64640(v97, v103, v69, v70, v71, v72);
          sub_317C60((__int64 *)&v98, (__int64)&v104);
          if ( v104 )
          {
            *(_QWORD *)&v105 = 0;
            qfree((__int64)v104);
          }
          qfree(v103[0]);
          if ( v101 )
          {
            v102 = 0;
            qfree((__int64)v101);
          }
          qfree(v100[0]);
        }
      }
      if ( v98 )
      {
        *(_QWORD *)&v99 = 0;
        qfree((__int64)v98);
      }
      qfree(v97[0]);
    }
    v51 = *a1;
    ++v87;
    v90 += 40;
    if ( *(_DWORD *)(v51 + 64) <= (signed int)v87 )
      break;
  }
LABEL_22:
  v24 = 0;
  for ( j = 0; v24 < (unsigned __int64)a1[3]; j = v24 )
  {
    v26 = *(__int64 **)(a1[2] + 8 * j);
    sub_64700(v26, v85);
    sub_3180C0(v26 + 2, (__int64)v86, v27, v28);
    ++v24;
  }
  v106 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v113 )
  {
    v114.m128i_i64[0] = 0;
    qfree(v113);
  }
  qfree(v112[0]);
  if ( src )
  {
    *(_QWORD *)&v111 = 0;
    qfree((__int64)src);
  }
  qfree(v109[0]);
  v29 = (__int64)v107;
  if ( v107 )
  {
    v30 = v108;
    if ( (_QWORD)v108 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 40 * v31);
        v33 = v32[2];
        if ( v33 )
        {
          v32[3] = 0;
          qfree(v33);
        }
        ++v31;
        qfree(*v32);
        v29 = (__int64)v107;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v108 = 0;
    qfree(v29);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree((__int64)v95);
  }
  qfree(v94[0]);
  return v120 - __readfsqword(0x28u);
}

