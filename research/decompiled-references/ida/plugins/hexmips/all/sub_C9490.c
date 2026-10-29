unsigned __int64 __fastcall sub_C9490(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 *v5; // r15
  __int64 v6; // r14
  __int64 v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 (__fastcall ***v23)(); // rsi
  char v24; // bl
  __int64 v25; // r15
  int v26; // ebp
  _QWORD *v27; // r12
  __int64 v28; // r8
  int v29; // r9d
  __int64 *v30; // r12
  __int64 v31; // rdx
  _DWORD *v32; // rcx
  _DWORD *v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // r15
  int v36; // r14d
  __int64 i; // r12
  __int64 v38; // rbx
  __int64 *v39; // rbx
  __int64 v40; // rdx
  _DWORD *v41; // rcx
  _DWORD *v42; // rax
  __int64 v43; // rax
  __int64 *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rsi
  __int64 *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // r12d
  __int64 v64; // rbp
  int v65; // ebx
  __int64 v66; // r14
  __int64 *v67; // r15
  __int64 v68; // rcx
  _DWORD *v69; // rdx
  _DWORD *v70; // rax
  __int64 *v71; // rbx
  __int64 v72; // rcx
  _DWORD *v73; // rdx
  _DWORD *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rbx
  __int64 v78; // rbp
  __int64 *v80; // r15
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 *v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __m128i v92; // [rsp+0h] [rbp-198h] BYREF
  __int64 v93; // [rsp+10h] [rbp-188h]
  __int64 *v94; // [rsp+18h] [rbp-180h]
  __int64 v95; // [rsp+20h] [rbp-178h]
  _QWORD *v96; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall ***v97)(); // [rsp+30h] [rbp-168h]
  int v98; // [rsp+38h] [rbp-160h]
  int v99; // [rsp+3Ch] [rbp-15Ch]
  __int64 v100; // [rsp+40h] [rbp-158h]
  __int64 v101; // [rsp+48h] [rbp-150h]
  __int64 v102; // [rsp+50h] [rbp-148h]
  __int64 v103; // [rsp+58h] [rbp-140h]
  __int64 v104; // [rsp+60h] [rbp-138h]
  __int64 *v105; // [rsp+68h] [rbp-130h]
  __int64 v106; // [rsp+70h] [rbp-128h]
  __int64 v107; // [rsp+78h] [rbp-120h]
  __int64 v108; // [rsp+80h] [rbp-118h] BYREF
  __int128 v109; // [rsp+88h] [rbp-110h]
  __int64 v110; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v111[4]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v112[2]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v113; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v114; // [rsp+E8h] [rbp-B0h]
  char v115; // [rsp+F8h] [rbp-A0h]
  __int64 v116; // [rsp+100h] [rbp-98h]
  char v117; // [rsp+108h] [rbp-90h]
  __int64 (__fastcall **v118)(); // [rsp+110h] [rbp-88h] BYREF
  __int128 v119; // [rsp+118h] [rbp-80h] BYREF
  __m128i v120; // [rsp+128h] [rbp-70h] BYREF
  char v121; // [rsp+138h] [rbp-60h]
  __int64 v122; // [rsp+140h] [rbp-58h]
  char v123; // [rsp+148h] [rbp-50h]
  unsigned __int64 v124; // [rsp+158h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return v124 - __readfsqword(0x28u);
  v108 = 0;
  v109 = 0;
  v104 = sub_32BD80(a1);
  v98 = v104;
  v107 = a1 + 528;
  sub_631C0(a1 + 528, v104 + 1);
  v106 = (int)v104;
  v105 = &v108;
  sub_BF640(&v108, (int)v104);
  v2 = *(_QWORD *)(a1 + 48);
  if ( (int)v104 > 0 )
  {
    v3 = 0;
    v103 = (unsigned int)(v104 - 1);
    v97 = &v118;
    v4 = 8 * (5 * v103 + 5);
    do
    {
      v5 = (__int64 *)v97;
      sub_123820(v97, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v2, 1);
      v6 = v3 + v108;
      sub_606D0((__int64 *)(v3 + v108), v5);
      v7 = *((_QWORD *)&v119 + 1);
      v8 = _mm_loadu_si128(&v120);
      *((_QWORD *)&v119 + 1) = 0;
      v120 = 0;
      if ( *(_QWORD *)(v6 + 16) )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v92 = v8;
        qfree();
        v8 = _mm_load_si128(&v92);
      }
      *(_QWORD *)(v6 + 16) = v7;
      *(__m128i *)(v6 + 24) = v8;
      if ( *((_QWORD *)&v119 + 1) )
      {
        v120.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      v9 = *(_QWORD *)(a1 + 64);
      v112[0] = off_4BC770;
      v112[1] = v9;
      v113 = nullptr;
      v114 = 0u;
      v115 = 0;
      v116 = v3 + v108;
      v117 = 1;
      v94 = v112;
      sub_11A700(v2, v112, v3 + v108, v10, v11, v12);
      v3 += 40;
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v4 != v3 );
    v101 = 40;
    v13 = *(_QWORD *)(a1 + 48);
    v95 = 0;
    v100 = v13;
    v92.m128i_i64[0] = (__int64)&v110;
    v93 = 0;
    v96 = v111;
    while ( 1 )
    {
      v14 = v100;
      v15 = v92.m128i_i64[0];
      LODWORD(v102) = v93;
      v99 = v93;
      sub_120480(v92.m128i_i64[0], *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v100, 1);
      v16 = *(_QWORD *)(a1 + 64);
      v118 = off_4BC770;
      v120 = 0u;
      v121 = 0;
      v122 = v15;
      v123 = 0;
      v119 = v16;
      sub_11A700(v14, v97, v17, v18, v19, v20);
      v21 = v108 + v101 - 40;
      sub_5FE00(v94, v21);
      v113 = nullptr;
      v114 = 0;
      v22 = *(_QWORD *)(v21 + 24);
      if ( v22 )
      {
        v113 = (void *)qalloc_or_throw();
        *((_QWORD *)&v114 + 1) = v22;
        memcpy(v113, *(const void **)(v21 + 16), 16 * v22);
        *(_QWORD *)&v114 = v22;
      }
      v119 = 0;
      v118 = nullptr;
      v23 = v97;
      v118 = (__int64 (__fastcall **)())qvector_reserve();
      *(__m128i *)&v118[2 * v119] = _mm_load_si128((const __m128i *)&xmmword_407240);
      *(_QWORD *)&v119 = v119 + 1;
      v24 = sub_3131C0(&v113, v23);
      if ( v118 )
      {
        *(_QWORD *)&v119 = 0;
        qfree();
      }
      if ( v24 )
      {
        v118 = nullptr;
        v120 = 0;
        v119 = 0u;
        *((_QWORD *)&v119 + 1) = qvector_reserve();
        v53 = (__int64 *)v97;
        v54 = v94;
        v55 = 16 * v120.m128i_i64[0];
        *(__m128i *)(*((_QWORD *)&v119 + 1) + v55) = _mm_load_si128((const __m128i *)&xmmword_407240);
        ++v120.m128i_i64[0];
        sub_60440(v54, v53, v55, v56, v57, v58);
        sub_312EE0(&v113, (char *)&v119 + 8);
        if ( *((_QWORD *)&v119 + 1) )
        {
          v120.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
      }
      v25 = 0;
      v26 = v93;
      if ( v93 )
      {
        do
        {
          v27 = (_QWORD *)(40 * v25 + v108);
          if ( (unsigned __int8)sub_60580(v92.m128i_i64[0], v27) || (unsigned __int8)sub_3136F0(v96, v27 + 2) )
          {
            v30 = (__int64 *)(*(_QWORD *)(a1 + 576) + v95);
            v31 = v30[1];
            v32 = (_DWORD *)(*v30 + 4 * v31);
            v33 = (_DWORD *)*v30;
            if ( (_DWORD *)*v30 == v32 )
              goto LABEL_41;
            while ( *v33 != (_DWORD)v25 )
            {
              if ( v32 == ++v33 )
                goto LABEL_41;
            }
            if ( v33 == v32 )
            {
LABEL_41:
              if ( v30[2] < (unsigned __int64)(v31 + 1) )
              {
                v51 = qvector_reserve();
                v52 = v30[1];
                *v30 = v51;
                v32 = (_DWORD *)(v51 + 4 * v52);
              }
              *v32 = v25;
              ++v30[1];
              v44 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24 * v25);
              v45 = v44[1];
              v46 = *v44;
              v31 = v45 + 1;
              if ( v44[2] < (unsigned __int64)(v45 + 1) )
              {
                v50 = qvector_reserve();
                *v44 = v50;
                v46 = v50;
                v45 = v44[1];
              }
              *(_DWORD *)(v46 + 4 * v45) = v99;
              ++v44[1];
            }
          }
          v34 = (__int64 *)(v108 + 40 * v25);
          sub_60440(v34, v94, v31, (__int64)v32, v28, v29);
          sub_312EE0(v34 + 2, &v113);
          ++v25;
        }
        while ( v93 != v25 );
      }
      v35 = v101;
      v36 = v102 + 1;
      v102 = v95 + 24;
      for ( i = v95 + 24; v98 > v36; i += 24 )
      {
        v38 = v35 + v108;
        if ( (unsigned __int8)sub_60580(v92.m128i_i64[0], (_QWORD *)(v35 + v108))
          || (unsigned __int8)sub_3136F0(v96, v38 + 16) )
        {
          v39 = (__int64 *)(i + *(_QWORD *)(a1 + 576));
          v40 = v39[1];
          v41 = (_DWORD *)(*v39 + 4 * v40);
          v42 = (_DWORD *)*v39;
          if ( (_DWORD *)*v39 == v41 )
            goto LABEL_46;
          while ( v26 != *v42 )
          {
            if ( v41 == ++v42 )
              goto LABEL_46;
          }
          if ( v41 == v42 )
          {
LABEL_46:
            if ( v39[2] < (unsigned __int64)(v40 + 1) )
            {
              v60 = qvector_reserve();
              v61 = v39[1];
              *v39 = v60;
              v41 = (_DWORD *)(v60 + 4 * v61);
            }
            *v41 = v99;
            ++v39[1];
            v47 = (__int64 *)(*(_QWORD *)(a1 + 600) + v95);
            v48 = v47[1];
            v49 = *v47;
            if ( v47[2] < (unsigned __int64)(v48 + 1) )
            {
              v59 = qvector_reserve();
              *v47 = v59;
              v49 = v59;
              v48 = v47[1];
            }
            *(_DWORD *)(v49 + 4 * v48) = v36;
            ++v47[1];
          }
        }
        ++v36;
        v35 += 40;
      }
      if ( v113 )
      {
        *(_QWORD *)&v114 = 0;
        qfree();
      }
      qfree();
      if ( v111[0] )
      {
        v111[1] = 0;
        qfree();
      }
      qfree();
      v101 += 40;
      v43 = *(_QWORD *)(v100 + 8);
      v95 = v102;
      v100 = v43;
      if ( v103 == v93 )
        break;
      ++v93;
    }
  }
  if ( *(_DWORD *)(a1 + 76) == 4 || **(_DWORD **)(a1 + 56) == 55 )
  {
    v63 = v104 - 1;
    if ( (int)v104 - 1 <= 0 )
    {
LABEL_70:
      v71 = (__int64 *)(*(_QWORD *)(a1 + 576) + 24 * v106);
      v72 = v71[1];
      v73 = (_DWORD *)(*v71 + 4 * v72);
      if ( (_DWORD *)*v71 == v73 )
        goto LABEL_90;
      v74 = (_DWORD *)*v71;
      while ( v63 != *v74 )
      {
        if ( v73 == ++v74 )
          goto LABEL_90;
      }
      if ( v73 == v74 )
      {
LABEL_90:
        if ( v71[2] < (unsigned __int64)(v72 + 1) )
        {
          v89 = qvector_reserve();
          v90 = v71[1];
          *v71 = v89;
          v73 = (_DWORD *)(v89 + 4 * v90);
        }
        *v73 = v63;
        ++v71[1];
        v86 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24LL * v63);
        v87 = v86[1];
        v88 = *v86;
        if ( v86[2] < (unsigned __int64)(v87 + 1) )
        {
          v91 = qvector_reserve();
          *v86 = v91;
          v88 = v91;
          v87 = v86[1];
        }
        *(_DWORD *)(v88 + 4 * v87) = v104;
        ++v86[1];
      }
      goto LABEL_75;
    }
    v62 = v63;
LABEL_60:
    v64 = 0;
    v65 = 0;
    v66 = 24 * v62;
    do
    {
      if ( !*(_QWORD *)(a1 + 608) || !*(_DWORD *)(*(_QWORD *)(a1 + 600) + v64 + 8) )
      {
        v67 = (__int64 *)(v66 + *(_QWORD *)(a1 + 576));
        v68 = v67[1];
        v69 = (_DWORD *)(*v67 + 4 * v68);
        if ( (_DWORD *)*v67 == v69 )
          goto LABEL_85;
        v70 = (_DWORD *)*v67;
        while ( v65 != *v70 )
        {
          if ( v69 == ++v70 )
            goto LABEL_85;
        }
        if ( v69 == v70 )
        {
LABEL_85:
          if ( v67[2] < (unsigned __int64)(v68 + 1) )
          {
            v83 = qvector_reserve();
            v84 = v67[1];
            *v67 = v83;
            v69 = (_DWORD *)(v83 + 4 * v84);
          }
          *v69 = v65;
          ++v67[1];
          v80 = (__int64 *)(v64 + *(_QWORD *)(a1 + 600));
          v81 = v80[1];
          v82 = *v80;
          if ( v80[2] < (unsigned __int64)(v81 + 1) )
          {
            v85 = qvector_reserve();
            *v80 = v85;
            v82 = v85;
            v81 = v80[1];
          }
          *(_DWORD *)(v82 + 4 * v81) = v63;
          ++v80[1];
        }
      }
      ++v65;
      v64 += 24;
    }
    while ( v65 < v63 );
    if ( (_DWORD)v104 == v63 )
      goto LABEL_75;
    goto LABEL_70;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 )
    sub_30C180(v107);
  if ( (int)v104 > 0 )
  {
    v62 = v106;
    v63 = v104;
    goto LABEL_60;
  }
LABEL_75:
  v75 = v108;
  if ( v108 )
  {
    v76 = v109;
    if ( (_QWORD)v109 )
    {
      v77 = 0;
      do
      {
        v78 = v75 + 40 * v77;
        if ( *(_QWORD *)(v78 + 16) )
        {
          *(_QWORD *)(v78 + 24) = 0;
          qfree();
        }
        ++v77;
        qfree();
        v75 = v108;
      }
      while ( v76 != v77 );
    }
    *(_QWORD *)&v109 = 0;
    qfree();
  }
  return v124 - __readfsqword(0x28u);
}

