__int64 __fastcall sub_250A00(_QWORD *a1, int a2, __int64 a3, double a4)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rcx
  _QWORD *v5; // r12
  __int64 (__fastcall *v6)(__int64, int, int); // rax
  unsigned int v8; // r13d
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // edx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64, int); // rax
  int v34; // eax
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rbp
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  int v46; // r13d
  __int64 *v47; // r9
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbp
  _QWORD *v52; // r15
  __int64 v53; // r12
  __int64 v54; // rbx
  _QWORD *v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r13
  __int64 v61; // rbp
  __int64 v62; // rbx
  void *v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 (__fastcall *v66)(__int64, int, int); // rax
  unsigned int v67; // r13d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  _QWORD *v72; // rsi
  __int64 v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // rbx
  bool v81; // cc
  __int64 *v82; // rax
  int v83; // r13d
  __int64 *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  _DWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r13
  unsigned __int64 v93; // r13
  __int64 v94; // rbx
  void *v95; // rax
  void *v96; // rax
  int v97; // [rsp+8h] [rbp-100h]
  __int64 *v98; // [rsp+8h] [rbp-100h]
  __int64 v100; // [rsp+10h] [rbp-F8h]
  unsigned __int64 *v101; // [rsp+18h] [rbp-F0h]
  unsigned __int64 *v102; // [rsp+18h] [rbp-F0h]
  _QWORD *v103; // [rsp+20h] [rbp-E8h]
  size_t v104; // [rsp+28h] [rbp-E0h]
  size_t v105; // [rsp+28h] [rbp-E0h]
  size_t v106; // [rsp+28h] [rbp-E0h]
  __int64 v107; // [rsp+28h] [rbp-E0h]
  __int64 n; // [rsp+30h] [rbp-D8h]
  size_t na; // [rsp+30h] [rbp-D8h]
  __int64 *v111; // [rsp+40h] [rbp-C8h]
  __int64 v112; // [rsp+48h] [rbp-C0h]
  __int64 v113; // [rsp+50h] [rbp-B8h] BYREF
  int v114; // [rsp+58h] [rbp-B0h]
  __int64 v115; // [rsp+5Ch] [rbp-ACh]
  void *src[2]; // [rsp+68h] [rbp-A0h]
  __int128 v117; // [rsp+78h] [rbp-90h]
  __int64 v118; // [rsp+90h] [rbp-78h] BYREF
  int v119; // [rsp+98h] [rbp-70h]
  __int64 v120; // [rsp+9Ch] [rbp-6Ch]
  void *v121; // [rsp+B0h] [rbp-58h]
  __int128 v122; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v123; // [rsp+C8h] [rbp-40h]

  v4 = sub_650D0;
  v5 = a1;
  v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  v123 = __readfsqword(0x28u);
  if ( v6 == sub_650D0 )
    v8 = **(_DWORD **)(a1[6] + 24LL * a2);
  else
    v8 = v6((__int64)a1, a2, 0);
  v9 = (__int64)sub_24FFD0(a1, v8, a3, (__int64)v4, a4);
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    sub_32C270(&v118, *(_QWORD *)(a1[41] + 112LL), *(unsigned __int8 *)(a1[41] + 130LL));
    v9 = sub_244E70(v9, (__int64)&v118, v88, v89);
    clear_tinfo_t();
  }
  v10 = sub_311E90(a1, v8);
  v12 = *(_QWORD *)(a1[22] + 8LL);
  if ( v10 >= *(_DWORD *)(v12 + 64) )
    sub_23E340(a4);
  v13 = *(_QWORD *)(v12 + 528);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8LL * v10) + 56LL);
  if ( !v14 || *(_DWORD *)v14 != 53 )
  {
    if ( !under_debugger )
      sub_383060(0xC4CFu, a4);
LABEL_91:
    BUG();
  }
  v15 = *(_QWORD *)(v14 + 24);
  v16 = sub_2413C0(a3, v15, v13, v11, a4);
  *((_DWORD *)v16 + 2) = 77;
  v17 = v16;
  v111 = v16;
  v20 = j__qalloc_or_throw(136, v15, v18, v19);
  v21.m128i_i64[0] = 0;
  *(_QWORD *)v20 = -1;
  v22 = v20;
  *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 64) = 0;
  *(_QWORD *)(v20 + 72) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_QWORD *)(v20 + 104) = 0;
  *(_QWORD *)(v20 + 112) = 0;
  *(_OWORD *)(v20 + 88) = 0;
  *(_OWORD *)(v20 + 120) = 0;
  v17[3] = v20;
  v23 = *(_QWORD *)v9;
  *(_QWORD *)v9 = *(_QWORD *)v22;
  v24 = *(_DWORD *)(v22 + 8);
  *(_QWORD *)v22 = v23;
  LODWORD(v23) = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = v24;
  v25 = *(_DWORD *)(v22 + 12);
  *(_DWORD *)(v22 + 8) = v23;
  LODWORD(v23) = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(v9 + 12) = v25;
  v26 = *(_QWORD *)(v22 + 24);
  *(_DWORD *)(v22 + 12) = v23;
  v27 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = v26;
  *(_QWORD *)(v22 + 24) = v27;
  v28 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v22 + 32);
  v29 = *(_QWORD *)(v22 + 40);
  *(_QWORD *)(v22 + 32) = v28;
  v30 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 40) = v29;
  v31 = *(_QWORD *)(v22 + 48);
  *(_QWORD *)(v22 + 40) = v30;
  v32 = *(_QWORD *)(v9 + 48);
  *(_QWORD *)(v9 + 48) = v31;
  LODWORD(v31) = *(_DWORD *)(v22 + 56);
  *(_QWORD *)(v22 + 48) = v32;
  LODWORD(v32) = *(_DWORD *)(v9 + 56);
  *(_DWORD *)(v9 + 56) = v31;
  *(_DWORD *)(v22 + 56) = v32;
  if ( v9 )
  {
    sub_255630(v9);
    clear_tinfo_t();
    j__qfree(v9);
  }
  if ( *(_DWORD *)v14 != 53 )
  {
    if ( !under_debugger )
      sub_383060(0xC4D0u, 0.0);
    goto LABEL_91;
  }
  v33 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  v101 = *(unsigned __int64 **)(v14 + 56);
  if ( v33 == sub_65090 )
  {
    if ( !a1[7] )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(v14 + 56) + 32LL);
      if ( v35 == -1 )
      {
        if ( *(_QWORD *)(v22 + 120) == -1 )
          return sub_2420C0(v22, v5[22], *v111, 0, *(double *)v21.m128i_i64);
        v21.m128i_i64[0] = 0;
        v58 = v22 + 112;
        v113 = -1;
        v114 = 70;
        v115 = -1;
        v97 = -1;
        *(_OWORD *)src = 0;
        v117 = 0;
        goto LABEL_35;
      }
      goto LABEL_87;
    }
    v34 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v15 = (unsigned int)a2;
    v34 = v33((__int64)a1, a2);
  }
  v97 = v34 - 1;
  v35 = v34 - 1;
  if ( v35 != v101[4] )
  {
LABEL_87:
    if ( !under_debugger )
      sub_383060(0xC4D1u, 0.0);
    goto LABEL_91;
  }
  v36 = *(_QWORD *)(v22 + 120);
  if ( v35 == v36 )
    goto LABEL_25;
  v21.m128i_i64[0] = 0;
  v113 = -1;
  v114 = 70;
  v115 = -1;
  *(_OWORD *)src = 0;
  v117 = 0;
  if ( v35 >= v36 )
  {
    v58 = v22 + 112;
LABEL_35:
    v15 = *(_QWORD *)(v22 + 112);
    v59 = *(_QWORD *)(v22 + 128);
    if ( (unsigned __int64)&v113 < v15 || (unsigned __int64)&v113 >= v15 + 56 * v59 )
    {
      if ( v59 < v35 )
        *(_QWORD *)(v22 + 112) = qvector_reserve(v58, v15, v35, 56);
      v60 = *(_QWORD *)(v22 + 120);
      if ( v60 < v35 )
      {
        v61 = 56 * v60;
        do
        {
          while ( 1 )
          {
            v15 = (unsigned __int64)&v113;
            v62 = v61 + *(_QWORD *)(v22 + 112);
            *(_QWORD *)v62 = -1;
            *(_DWORD *)(v62 + 8) = 70;
            *(_QWORD *)(v62 + 12) = -1;
            sub_25AA70(v62, (__int64)&v113);
            *(_QWORD *)(v62 + 32) = 0;
            *(_OWORD *)(v62 + 40) = 0;
            if ( (_QWORD)v117 )
              break;
            ++v60;
            v61 += 56;
            if ( v60 == v35 )
              goto LABEL_43;
          }
          v105 = v117;
          n = 8 * v117;
          v63 = (void *)qalloc_or_throw(8 * v117, (__int64)&v113, 8 * v117, v117);
          *(_QWORD *)(v62 + 32) = v63;
          ++v60;
          v15 = (unsigned __int64)src[1];
          v61 += 56;
          *(_QWORD *)(v62 + 48) = v105;
          memcpy(v63, (const void *)v15, n);
          *(_QWORD *)(v62 + 40) = v105;
        }
        while ( v60 != v35 );
      }
LABEL_43:
      *(_QWORD *)(v22 + 120) = v35;
    }
    else
    {
      v15 = (unsigned __int64)&v113;
      v118 = -1;
      v119 = 70;
      v120 = -1;
      sub_25AA70((__int64)&v118, (__int64)&v113);
      v92 = v117;
      v21.m128i_i64[0] = 0;
      v121 = nullptr;
      v122 = 0;
      if ( (_QWORD)v117 )
      {
        v107 = 8 * v117;
        v96 = (void *)qalloc_or_throw(8 * v117, (__int64)&v113, 8 * v117, v91);
        v15 = (unsigned __int64)src[1];
        v121 = v96;
        *((_QWORD *)&v122 + 1) = v92;
        memcpy(v96, src[1], v107);
        *(_QWORD *)&v122 = v92;
      }
      if ( *(_QWORD *)(v22 + 128) < v35 )
      {
        v15 = *(_QWORD *)(v22 + 112);
        *(_QWORD *)(v22 + 112) = qvector_reserve(v58, v15, v35, 56);
      }
      v93 = *(_QWORD *)(v22 + 120);
      if ( v93 < v35 )
      {
        v106 = 56 * v93;
        do
        {
          v15 = (unsigned __int64)&v118;
          v94 = *(_QWORD *)(v22 + 112) + v106;
          *(_QWORD *)v94 = -1;
          *(_DWORD *)(v94 + 8) = 70;
          *(_QWORD *)(v94 + 12) = -1;
          sub_25AA70(v94, (__int64)&v118);
          *(_QWORD *)(v94 + 32) = 0;
          *(_OWORD *)(v94 + 40) = 0;
          if ( (_QWORD)v122 )
          {
            na = v122;
            v112 = 8 * v122;
            v95 = (void *)qalloc_or_throw(8 * v122, (__int64)&v118, 8 * v122, v122);
            *(_QWORD *)(v94 + 32) = v95;
            *(_QWORD *)(v94 + 48) = na;
            v15 = (unsigned __int64)v121;
            memcpy(v95, v121, v112);
            *(_QWORD *)(v94 + 40) = na;
          }
          ++v93;
          v106 += 56LL;
        }
        while ( v93 != v35 );
      }
      *(_QWORD *)(v22 + 120) = v35;
      if ( v121 )
      {
        *(_QWORD *)&v122 = 0;
        qfree((__int64)v121);
      }
      sub_255050((__int64)&v118);
    }
    goto LABEL_22;
  }
  v37 = v35;
  v38 = v36;
  v39 = 56 * v35;
  do
  {
    v40 = v39 + *(_QWORD *)(v22 + 112);
    v41 = *(_QWORD *)(v40 + 32);
    if ( v41 )
    {
      *(_QWORD *)(v40 + 40) = 0;
      qfree(v41);
    }
    ++v37;
    v39 += 56;
    sub_255050(v40);
  }
  while ( v37 < v38 );
  *(_QWORD *)(v22 + 120) = v35;
  v5 = a1;
LABEL_22:
  if ( src[1] )
  {
    *(_QWORD *)&v117 = 0;
    qfree((__int64)src[1]);
  }
  sub_255050((__int64)&v113);
LABEL_25:
  v42 = (unsigned int)v97;
  if ( v97 > 0 )
  {
    v43 = v101;
    v44 = 0;
    v104 = v97;
    do
    {
      v45 = *v43;
      v46 = 0;
      v47 = &v118;
      v48 = *v43 + 24 * v44;
      v49 = 56 * v44;
      v50 = 0;
      if ( *(_QWORD *)(v48 + 8) )
      {
        v102 = v43;
        v51 = v22;
        v52 = (_QWORD *)v48;
        v103 = v5;
        v53 = 56 * v44;
        v100 = v44;
        do
        {
          v54 = *(_QWORD *)(*v52 + 8 * v50);
          v55 = (_QWORD *)(v53 + *(_QWORD *)(v51 + 112));
          v118 = v54;
          v56 = v55[5];
          v45 = v55[6];
          v15 = v55[4];
          if ( v45 < v56 + 1 )
          {
            v98 = v47;
            v57 = qvector_reserve((__int64)(v55 + 4), v15, v56 + 1, 8);
            v47 = v98;
            v55[4] = v57;
            v15 = v57;
            v56 = v55[5];
          }
          ++v46;
          *(_QWORD *)(v15 + 8 * v56) = v54;
          v50 = v46;
          ++v55[5];
        }
        while ( (unsigned __int64)v46 < v52[1] );
        v22 = v51;
        v49 = v53;
        v44 = v100;
        v43 = v102;
        v5 = v103;
      }
      v64 = *(_QWORD *)(v22 + 112) + v49;
      *(_DWORD *)(v64 + 8) = 71;
      v65 = qalloc_or_throw(24, v15, v45, v42);
      *(_QWORD *)(v65 + 16) = 0;
      v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v65, (__m128i)(unsigned __int64)v65);
      *(__m128i *)v65 = v21;
      *(_QWORD *)(v64 + 24) = v65;
      v66 = *(__int64 (__fastcall **)(__int64, int, int))(*v5 + 112LL);
      ++v44;
      if ( v66 == sub_650D0 )
        v67 = *(_DWORD *)(*(_QWORD *)(v5[6] + 24LL * a2) + 4 * v44);
      else
        v67 = v66((__int64)v5, a2, v44);
      v15 = v67;
      sub_250510((__int64)v5, v67, v64, 0, *(double *)v21.m128i_i64);
      if ( (unsigned __int8)sub_241B40(v64, v67, v68, v69, v70) )
      {
        v15 = v67;
        v71 = sub_311E90(v5, v67);
        if ( v71 != -1 )
        {
          v72 = (_QWORD *)v5[30];
          if ( !v72 )
            goto LABEL_52;
          v73 = 24;
          v42 = *v72 & 0xFFFFFFFFFFFFFFFCLL;
          v74 = v42;
          if ( !v42 )
            goto LABEL_66;
          if ( (*(_BYTE *)v42 & 2) != 0 )
            goto LABEL_52;
          v73 = v42 + 24;
          v81 = v71 <= *(_DWORD *)(v42 + 24);
          if ( v71 < *(_DWORD *)(v42 + 24) )
          {
LABEL_59:
            v74 = *(_QWORD *)(v74 + 8);
            goto LABEL_60;
          }
          while ( !v81 )
          {
            v74 = *(_QWORD *)(v74 + 16);
LABEL_60:
            if ( (*(_BYTE *)v74 & 2) != 0 )
              goto LABEL_52;
            v73 = v74 + 24;
            v81 = v71 <= *(_DWORD *)(v74 + 24);
            if ( v71 < *(_DWORD *)(v74 + 24) )
              goto LABEL_59;
          }
          if ( (_QWORD *)v74 == v72 )
          {
LABEL_52:
            v15 = -1;
            v75 = *(_QWORD *)(*(_QWORD *)(v5[22] + 8LL) + 528LL);
            v76 = *(_QWORD *)(v75 + 8LL * v71);
            v77 = *(_QWORD *)(v76 + 56);
            if ( v77 )
              v15 = *(_QWORD *)(v77 + 24);
            v79 = sub_2413C0(v64, v15, v75, v42, *(double *)v21.m128i_i64);
            if ( *(int *)(v76 + 376) <= 0 )
            {
              *((_DWORD *)v79 + 2) = 80;
              v90 = j__qalloc_or_throw(64, v15, v78, v42);
              v21.m128i_i64[0] = 0;
              *(_QWORD *)(v90 + 8) = 0xFFFFFFFF00000000LL;
              v42 = 0xFFFFFFFFLL;
              *(_QWORD *)v90 = -1;
              *(_QWORD *)(v90 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v90 + 40) = 0;
              *(_QWORD *)(v90 + 48) = 0;
              *(_DWORD *)(v90 + 56) = 0;
              *(_OWORD *)(v90 + 24) = 0;
              v79[3] = v90;
            }
            else
            {
              *((_DWORD *)v79 + 2) = 78;
            }
          }
          else
          {
LABEL_66:
            v15 = -1;
            v82 = sub_2413C0(v64, -1, v74, v42, *(double *)v21.m128i_i64);
            v83 = *(_DWORD *)(v73 + 4);
            *((_DWORD *)v82 + 2) = 81;
            v84 = v82;
            v87 = (_DWORD *)j__qalloc_or_throw(4, -1, v85, v86);
            v84[3] = (__int64)v87;
            *v87 = v83;
          }
        }
      }
    }
    while ( v104 != v44 );
  }
  return sub_2420C0(v22, v5[22], *v111, 0, *(double *)v21.m128i_i64);
}

