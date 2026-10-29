bool *__fastcall sub_271A0(
        bool *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8)
{
  __int64 v13; // r15
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  int v19; // ecx
  _BYTE *v20; // rdx
  bool *v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rax
  int v24; // edx
  bool v25; // cl
  bool *v26; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rdi
  unsigned int *v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  signed int v36; // ebx
  __int64 v37; // rax
  _BOOL4 v38; // r13d
  __int64 v39; // rbx
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rsi
  __int64 *v42; // rdi
  __int64 v43; // rax
  unsigned int v44; // r12d
  int v45; // ebx
  unsigned __int64 v46; // r14
  void (__fastcall *hexdsp)(__int64, unsigned __int64, _QWORD); // rax
  __int64 v48; // r14
  __int64 v49; // r13
  void (__fastcall *v50)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v51)(__int64, unsigned __int64, _QWORD); // rax
  __int64 v52; // rdi
  __int64 v53; // r15
  __m128i v54; // xmm0
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r15
  __m128i v60; // xmm0
  __int64 v61; // r14
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r15
  __m128i v66; // xmm0
  __int64 v67; // r14
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdi
  unsigned __int64 v71; // rbx
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  unsigned __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // r14
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // r14
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // r14
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rbx
  int v88; // r14d
  int v89; // r15d
  bool *v90; // rdx
  __m128i v91; // xmm0
  __int64 v92; // rax
  __int64 v93; // rax
  __m128i v94; // [rsp+0h] [rbp-108h] BYREF
  bool *v95; // [rsp+10h] [rbp-F8h]
  __int64 *v96; // [rsp+18h] [rbp-F0h]
  __int64 v97; // [rsp+20h] [rbp-E8h]
  __int64 *v98; // [rsp+28h] [rbp-E0h]
  __int64 *v99; // [rsp+30h] [rbp-D8h]
  __int64 *v100; // [rsp+38h] [rbp-D0h]
  __int64 v101; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v102; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v103; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v104; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v105; // [rsp+78h] [rbp-90h] BYREF
  __m128i v106; // [rsp+80h] [rbp-88h] BYREF
  __int64 v107; // [rsp+90h] [rbp-78h] BYREF
  __m128i v108; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v109; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v110; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v111; // [rsp+C8h] [rbp-40h]

  v95 = a1;
  v111 = __readfsqword(0x28u);
  v13 = (__int64)a7;
  sub_25FC0(a2);
  *(_QWORD *)(a2 + 16) = a3;
  rangeset_t_swap(a2 + 24, a5);
  *(_QWORD *)(a2 + 8) = a7 + 8;
  v16 = *(unsigned __int8 *)(a6 + 2);
  *(_QWORD *)(a2 + 120) = v16;
  if ( v16 )
  {
    v23 = a3 + v16;
    v25 = 0;
    v24 = a4 - 1;
  }
  else
  {
    v17 = *(_QWORD *)(a6 + 16);
    if ( v17 )
    {
      v18 = *(_BYTE **)(a6 + 8);
      v19 = 0;
      v20 = &v18[12 * v17];
      if ( v18 == v20 )
        goto LABEL_14;
      while ( !*v18 )
      {
        v18 += 12;
        ++v19;
        if ( v20 == v18 )
          goto LABEL_14;
      }
      sub_64B50(
        (unsigned int)&v103,
        *(_QWORD *)a2,
        (unsigned int)"eh34_func_range_state_info_t::initialize: expected code %d to have zero offset in prolog",
        v19,
        v14,
        v15);
      goto LABEL_8;
    }
    v23 = a3;
    if ( a4 )
    {
      v25 = 0;
      v24 = 0;
    }
    else
    {
      v24 = -1;
      v25 = *(_BYTE *)a7 == 4;
    }
  }
  *(_QWORD *)(a2 + 232) = v23;
  *(_BYTE *)(a2 + 432) = v25;
  *(_QWORD *)(a2 + 224) = a3;
  *(_DWORD *)(a2 + 112) = v24;
  *(_DWORD *)(a2 + 116) = a8;
  if ( !a7[3] || !a7[9] )
    goto LABEL_14;
  v28 = *(_QWORD *)(a2 + 16);
  v96 = &v103;
  sub_26720((__int64)&v103, a2, v28, a4);
  if ( (_BYTE)v105 )
  {
LABEL_8:
    v21 = v95;
    *(_QWORD *)v95 = v103;
    v22 = _mm_loadu_si128(&v104);
    v21[24] = 1;
    *(__m128i *)(v21 + 8) = v22;
    return v95;
  }
  if ( !*(_QWORD *)(a2 + 104) )
  {
LABEL_14:
    v26 = v95;
    *v95 = 0;
    v26[24] = 0;
    return v95;
  }
  v31 = a7[5];
  v32 = (unsigned int *)(v31 + 40 * a7[6]);
  if ( v32 != (unsigned int *)v31 )
  {
    v98 = a7;
    v33 = (unsigned int *)v31;
    do
    {
      v36 = *v33;
      v37 = sub_25960(a2 + 384, *v33, v29, v30, v31);
      if ( v29 )
      {
        v38 = 1;
        if ( !v37 && v29 != a2 + 392 )
          v38 = v36 < *(_DWORD *)(v29 + 32);
        v97 = a2 + 392;
        v94.m128i_i64[0] = v29;
        v34 = operator new(0x28u);
        v35 = v94.m128i_i64[0];
        *(_DWORD *)(v34 + 32) = v36;
        std::_Rb_tree_insert_and_rebalance(v38, v34, v35, a2 + 392);
        ++*(_QWORD *)(a2 + 424);
      }
      v33 += 10;
    }
    while ( v32 != v33 );
    v13 = (__int64)v98;
  }
  sub_25E60((_QWORD *)(a2 + 384), a8);
  v39 = *(_QWORD *)(v13 + 24);
  v103 = 0;
  LODWORD(v97) = v39;
  v40 = (int)v39 + 1;
  v105 = 0;
  v99 = &v101;
  v107 = 0;
  v109 = 0;
  v104 = 0;
  v106 = 0;
  v108 = 0;
  v110 = 0;
  sub_17F20(&v101);
  sub_26F80(v96, (_QWORD *)v40, (unsigned __int64)&v101);
  v100 = &v105;
  sub_26F80(&v105, (_QWORD *)v40, (unsigned __int64)&v101);
  v41 = v40;
  v42 = &v107;
  v98 = &v107;
  sub_26F80(&v107, (_QWORD *)v40, (unsigned __int64)&v101);
  v43 = v110.m128i_i64[0];
  if ( v40 < v110.m128i_i64[0] )
    goto LABEL_29;
  if ( v110.m128i_i64[0] < v40 )
  {
    v41 = v109;
    if ( (unsigned __int64)&unk_78A78 < v109
      || (v42 = (__int64 *)(v109 + 4 * v110.m128i_i64[1]), &unk_78A78 >= (_UNKNOWN *)v42) )
    {
      if ( v110.m128i_i64[1] >= v40
        || (v42 = (__int64 *)&v109,
            v92 = qvector_reserve(&v109, v109, (int)v39 + 1, 4),
            v109 = v92,
            v41 = v92,
            v43 = v110.m128i_i64[0],
            v110.m128i_i64[0] < v40) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v41 + 4 * v43++) = -2;
          if ( v40 == v43 )
            break;
          v41 = v109;
        }
      }
    }
    else if ( v110.m128i_i64[1] >= v40
           || (v42 = (__int64 *)&v109,
               v93 = qvector_reserve(&v109, v109, (int)v39 + 1, 4),
               v109 = v93,
               v41 = v93,
               v43 = v110.m128i_i64[0],
               v110.m128i_i64[0] < v40) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v41 + 4 * v43++) = -2;
        if ( v40 == v43 )
          break;
        v41 = v109;
      }
    }
LABEL_29:
    v110.m128i_i64[0] = (int)v39 + 1;
  }
  v94.m128i_i64[0] = 4;
  v44 = 0;
  if ( (int)v39 > 0 )
  {
    do
    {
      ++v44;
      v45 = *(_DWORD *)(*(_QWORD *)(v13 + 16) + 8 * v94.m128i_i64[0] - 24) + 1;
      v46 = v103 + 16LL * v45;
      hexdsp = (void (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(v42, v41);
      v41 = v46;
      v42 = &qword_C8 + 5;
      hexdsp(205, v46, v44);
      v48 = 4 * v94.m128i_i64[0];
      for ( *(_DWORD *)(v109 + v94.m128i_i64[0]) = v45; v45 != -2; v45 = *(_DWORD *)(v109 + 4LL * v45) )
      {
        v49 = v48 + v107;
        v50 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(205, v41);
        v50(205, v49, (unsigned int)v45);
        v41 = v105 + 16LL * v45;
        v51 = (void (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(205, v41);
        v42 = &qword_C8 + 5;
        v51(205, v41, v44);
      }
      v94.m128i_i64[0] += 4;
    }
    while ( (_DWORD)v97 != v44 );
  }
  qfree(v101);
  v52 = *(_QWORD *)(a2 + 128);
  v53 = v103;
  v103 = 0;
  v54 = _mm_loadu_si128(&v104);
  v104 = 0;
  if ( v52 )
  {
    v55 = *(_QWORD *)(a2 + 136);
    if ( v55 )
    {
      v56 = 0;
      v94 = v54;
      do
      {
        v57 = v56++;
        qfree(*(_QWORD *)(v52 + 16 * v57));
        v52 = *(_QWORD *)(a2 + 128);
      }
      while ( v55 != v56 );
      v54 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(a2 + 136) = 0;
    v94 = v54;
    qfree(v52);
    v54 = _mm_load_si128(&v94);
  }
  v58 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 128) = v53;
  *(__m128i *)(a2 + 136) = v54;
  v59 = v105;
  v60 = _mm_load_si128(&v106);
  v105 = 0;
  v106 = 0;
  if ( v58 )
  {
    v61 = *(_QWORD *)(a2 + 160);
    if ( v61 )
    {
      v62 = 0;
      v94 = v60;
      do
      {
        v63 = v62++;
        qfree(*(_QWORD *)(v58 + 16 * v63));
        v58 = *(_QWORD *)(a2 + 152);
      }
      while ( v61 != v62 );
      v60 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(a2 + 160) = 0;
    v94 = v60;
    qfree(v58);
    v60 = _mm_load_si128(&v94);
  }
  v64 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 152) = v59;
  *(__m128i *)(a2 + 160) = v60;
  v65 = v107;
  v66 = _mm_loadu_si128(&v108);
  v107 = 0;
  v108 = 0;
  if ( v64 )
  {
    v67 = *(_QWORD *)(a2 + 184);
    if ( v67 )
    {
      v68 = 0;
      v94 = v66;
      do
      {
        v69 = v68++;
        qfree(*(_QWORD *)(v64 + 16 * v69));
        v64 = *(_QWORD *)(a2 + 176);
      }
      while ( v67 != v68 );
      v66 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(a2 + 184) = 0;
    v94 = v66;
    qfree(v64);
    v66 = _mm_load_si128(&v94);
  }
  v70 = *(_QWORD *)(a2 + 200);
  v71 = v109;
  *(__m128i *)(a2 + 184) = v66;
  v72 = _mm_load_si128(&v110);
  *(_QWORD *)(a2 + 176) = v65;
  v109 = 0;
  v110 = 0;
  if ( v70 )
  {
    *(_QWORD *)(a2 + 208) = 0;
    v94 = v72;
    qfree(v70);
    v73 = _mm_load_si128(&v94);
    v74 = v109;
    *(_QWORD *)(a2 + 200) = v71;
    *(__m128i *)(a2 + 208) = v73;
    if ( v74 )
    {
      v110.m128i_i64[0] = 0;
      qfree(v74);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 200) = v71;
    *(__m128i *)(a2 + 208) = v72;
  }
  v75 = v107;
  if ( v107 )
  {
    v76 = v108.m128i_i64[0];
    if ( v108.m128i_i64[0] )
    {
      v77 = 0;
      do
      {
        v78 = v77++;
        qfree(*(_QWORD *)(v75 + 16 * v78));
        v75 = v107;
      }
      while ( v76 != v77 );
    }
    v108.m128i_i64[0] = 0;
    qfree(v75);
  }
  v79 = v105;
  if ( v105 )
  {
    v80 = v106.m128i_i64[0];
    if ( v106.m128i_i64[0] )
    {
      v81 = 0;
      do
      {
        v82 = v81++;
        qfree(*(_QWORD *)(v79 + 16 * v82));
        v79 = v105;
      }
      while ( v80 != v81 );
    }
    v106.m128i_i64[0] = 0;
    qfree(v79);
  }
  v83 = v103;
  if ( v103 )
  {
    v84 = v104.m128i_i64[0];
    if ( v104.m128i_i64[0] )
    {
      v85 = 0;
      do
      {
        v86 = v85++;
        qfree(*(_QWORD *)(v83 + 16 * v86));
        v83 = v103;
      }
      while ( v84 != v85 );
    }
    v104.m128i_i64[0] = 0;
    qfree(v83);
  }
  v87 = *(_QWORD *)(a2 + 88);
  v88 = *(_DWORD *)(a2 + 116);
  if ( a2 + 72 == v87 )
  {
LABEL_75:
    sub_269C0(v95, (_QWORD *)a2, (_QWORD *)(a2 + 64), v88);
  }
  else
  {
    while ( 1 )
    {
      v89 = *(_DWORD *)(v87 + 32);
      if ( v89 > v88 )
      {
        sub_24460((__int64)v96, a2 + 128, v89, v88);
        if ( (_BYTE)v105 )
          goto LABEL_8;
        v88 = *(_DWORD *)(a2 + 116);
        if ( !(_BYTE)v103 )
          break;
      }
      v87 = std::_Rb_tree_increment(v87);
      if ( a2 + 72 == v87 )
        goto LABEL_75;
    }
    sub_64B50(
      (_DWORD)v99,
      *(_QWORD *)a2,
      (unsigned int)"preprocess_eh34_state: state %d is not a descendant of the root state %d min %d",
      v89,
      v88,
      *(_DWORD *)(a2 + 112));
    v90 = v95;
    v91 = _mm_loadu_si128(&v102);
    *(_QWORD *)v95 = v101;
    v90[24] = 1;
    *(__m128i *)(v90 + 8) = v91;
  }
  return v95;
}
