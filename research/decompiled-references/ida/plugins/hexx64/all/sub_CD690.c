unsigned __int64 __fastcall sub_CD690(__int64 a1)
{
  __m128i v1; // xmm0
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r12
  const void **v8; // r15
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 (__fastcall ***v21)(); // rbx
  char v22; // bl
  __int64 v23; // r15
  int v24; // ebp
  _QWORD *v25; // r12
  __int64 v26; // r8
  int v27; // r9d
  __int64 *v28; // r12
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // r15
  int v34; // r14d
  __int64 i; // r12
  __int64 v36; // rbx
  __int64 *v37; // rbx
  __int64 v38; // rdx
  _DWORD *v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
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
  __int64 *v78; // rbp
  __int64 v79; // rdi
  __int64 *v81; // r15
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 *v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i v93; // [rsp+0h] [rbp-198h] BYREF
  __int64 v94; // [rsp+10h] [rbp-188h]
  __int64 *v95; // [rsp+18h] [rbp-180h]
  __int64 v96; // [rsp+20h] [rbp-178h]
  unsigned __int64 **v97; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall ***v98)(); // [rsp+30h] [rbp-168h]
  int v99; // [rsp+38h] [rbp-160h]
  int v100; // [rsp+3Ch] [rbp-15Ch]
  __int64 v101; // [rsp+40h] [rbp-158h]
  __int64 v102; // [rsp+48h] [rbp-150h]
  __int64 v103; // [rsp+50h] [rbp-148h]
  __int64 v104; // [rsp+58h] [rbp-140h]
  __int64 v105; // [rsp+60h] [rbp-138h]
  __int64 *v106; // [rsp+68h] [rbp-130h]
  __int64 v107; // [rsp+70h] [rbp-128h]
  __int64 v108; // [rsp+78h] [rbp-120h]
  __int64 v109; // [rsp+80h] [rbp-118h] BYREF
  __int128 v110; // [rsp+88h] [rbp-110h]
  __int64 v111; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v112[4]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v113[2]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v114; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v115; // [rsp+E8h] [rbp-B0h]
  char v116; // [rsp+F8h] [rbp-A0h]
  __int64 v117; // [rsp+100h] [rbp-98h]
  char v118; // [rsp+108h] [rbp-90h]
  __int64 (__fastcall **v119)(); // [rsp+110h] [rbp-88h] BYREF
  __int128 v120; // [rsp+118h] [rbp-80h] BYREF
  __m128i v121; // [rsp+128h] [rbp-70h] BYREF
  char v122; // [rsp+138h] [rbp-60h]
  __int64 v123; // [rsp+140h] [rbp-58h]
  char v124; // [rsp+148h] [rbp-50h]
  unsigned __int64 v125; // [rsp+158h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return v125 - __readfsqword(0x28u);
  v1.m128i_i64[0] = 0;
  v109 = 0;
  v110 = 0;
  v105 = sub_330DE0(a1);
  v99 = v105;
  v108 = a1 + 528;
  sub_673C0(a1 + 528, v105 + 1, 0.0);
  v107 = (int)v105;
  v106 = &v109;
  sub_C3840(&v109, (int)v105);
  v5 = *(_QWORD *)(a1 + 48);
  if ( (int)v105 > 0 )
  {
    v6 = 0;
    v104 = (unsigned int)(v105 - 1);
    v98 = &v119;
    v7 = 8 * (5 * v104 + 5);
    do
    {
      v8 = (const void **)v98;
      sub_127A20((__int64)v98, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v5, 1, v3, v4);
      v9 = v6 + v109;
      sub_648D0((__int64 *)(v6 + v109), v8, *(double *)v1.m128i_i64);
      v10 = *((_QWORD *)&v120 + 1);
      v1 = _mm_loadu_si128(&v121);
      *((_QWORD *)&v120 + 1) = 0;
      v121 = 0;
      v11 = *(_QWORD *)(v9 + 16);
      if ( v11 )
      {
        *(_QWORD *)(v9 + 24) = 0;
        v93 = v1;
        qfree(v11);
        v1 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v9 + 16) = v10;
      *(__m128i *)(v9 + 24) = v1;
      if ( *((_QWORD *)&v120 + 1) )
      {
        v121.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v120 + 1));
      }
      qfree((__int64)v119);
      v12 = *(_QWORD *)(a1 + 64);
      v113[0] = (__int64)&off_4DBFF0;
      v113[1] = v12;
      v114 = nullptr;
      v115 = 0u;
      v116 = 0;
      v117 = v6 + v109;
      v118 = 1;
      v95 = v113;
      sub_11E900((_BYTE *)v5, (__int64)v113);
      v6 += 40;
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v7 != v6 );
    v102 = 40;
    v13 = *(_QWORD *)(a1 + 48);
    v96 = 0;
    v101 = v13;
    v93.m128i_i64[0] = (__int64)&v111;
    v94 = 0;
    v97 = (unsigned __int64 **)v112;
    while ( 1 )
    {
      v14 = (_BYTE *)v101;
      v15 = v93.m128i_i64[0];
      LODWORD(v103) = v94;
      v100 = v94;
      sub_124680(v93.m128i_i64[0], *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v101, 1u);
      v16 = *(_QWORD *)(a1 + 64);
      v119 = &off_4DBFF0;
      v121 = 0u;
      v122 = 0;
      v123 = v15;
      v124 = 0;
      v120 = v16;
      sub_11E900(v14, (__int64)v98);
      v17 = v109 + v102 - 40;
      sub_64000(v95, v17, *(double *)v1.m128i_i64);
      v114 = nullptr;
      v115 = 0;
      v20 = *(_QWORD *)(v17 + 24);
      if ( v20 )
      {
        v114 = (void *)qalloc_or_throw(16 * v20, v17, v18, v19);
        *((_QWORD *)&v115 + 1) = v20;
        memcpy(v114, *(const void **)(v17 + 16), 16 * v20);
        *(_QWORD *)&v115 = v20;
      }
      v21 = v98;
      v120 = 0;
      v119 = nullptr;
      v119 = (__int64 (__fastcall **)())qvector_reserve((__int64)v98, 0, 1, 16);
      *(__m128i *)&v119[2 * v120] = _mm_load_si128((const __m128i *)&xmmword_424800);
      *(_QWORD *)&v120 = v120 + 1;
      v22 = sub_317F40((__int64 *)&v114, (__int64)v21);
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        qfree((__int64)v119);
      }
      if ( v22 )
      {
        v119 = nullptr;
        v121 = 0;
        v120 = 0u;
        *((_QWORD *)&v120 + 1) = qvector_reserve((__int64)&v120 + 8, 0, 1, 16);
        v53 = (__int64 *)v98;
        v54 = v95;
        v55 = 16 * v121.m128i_i64[0];
        *(__m128i *)(*((_QWORD *)&v120 + 1) + v55) = _mm_load_si128((const __m128i *)&xmmword_424800);
        ++v121.m128i_i64[0];
        sub_64640(v54, v53, v55, v56, v57, v58);
        sub_317C60((__int64 *)&v114, (__int64)&v120 + 8);
        if ( *((_QWORD *)&v120 + 1) )
        {
          v121.m128i_i64[0] = 0;
          qfree(*((__int64 *)&v120 + 1));
        }
        qfree((__int64)v119);
      }
      v23 = 0;
      v24 = v94;
      if ( v94 )
      {
        do
        {
          v25 = (_QWORD *)(40 * v23 + v109);
          if ( (unsigned __int8)sub_64780(v93.m128i_i64[0], v25) || (unsigned __int8)sub_318470(v97, (__int64)(v25 + 2)) )
          {
            v28 = (__int64 *)(*(_QWORD *)(a1 + 576) + v96);
            v29 = v28[1];
            v30 = (_DWORD *)(*v28 + 4 * v29);
            v31 = (_DWORD *)*v28;
            if ( (_DWORD *)*v28 == v30 )
              goto LABEL_41;
            while ( *v31 != (_DWORD)v23 )
            {
              if ( v30 == ++v31 )
                goto LABEL_41;
            }
            if ( v31 == v30 )
            {
LABEL_41:
              v42 = v29 + 1;
              if ( v28[2] < v42 )
              {
                v51 = qvector_reserve(*(_QWORD *)(a1 + 576) + v96, *v28, v42, 4);
                v52 = v28[1];
                *v28 = v51;
                v30 = (_DWORD *)(v51 + 4 * v52);
              }
              *v30 = v23;
              ++v28[1];
              v43 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24 * v23);
              v44 = v43[1];
              v45 = *v43;
              v29 = v44 + 1;
              if ( v43[2] < (unsigned __int64)(v44 + 1) )
              {
                v50 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24 * v23, v45, v29, 4);
                *v43 = v50;
                v45 = v50;
                v44 = v43[1];
              }
              *(_DWORD *)(v45 + 4 * v44) = v100;
              ++v43[1];
            }
          }
          v32 = (__int64 *)(v109 + 40 * v23);
          sub_64640(v32, v95, v29, (__int64)v30, v26, v27);
          sub_317C60(v32 + 2, (__int64)&v114);
          ++v23;
        }
        while ( v94 != v23 );
      }
      v33 = v102;
      v34 = v103 + 1;
      v103 = v96 + 24;
      for ( i = v96 + 24; v99 > v34; i += 24 )
      {
        v36 = v33 + v109;
        if ( (unsigned __int8)sub_64780(v93.m128i_i64[0], (_QWORD *)(v33 + v109))
          || (unsigned __int8)sub_318470(v97, v36 + 16) )
        {
          v37 = (__int64 *)(i + *(_QWORD *)(a1 + 576));
          v38 = v37[1];
          v39 = (_DWORD *)(*v37 + 4 * v38);
          v40 = (_DWORD *)*v37;
          if ( (_DWORD *)*v37 == v39 )
            goto LABEL_46;
          while ( v24 != *v40 )
          {
            if ( v39 == ++v40 )
              goto LABEL_46;
          }
          if ( v39 == v40 )
          {
LABEL_46:
            v46 = v38 + 1;
            if ( v37[2] < v46 )
            {
              v60 = qvector_reserve(i + *(_QWORD *)(a1 + 576), *v37, v46, 4);
              v61 = v37[1];
              *v37 = v60;
              v39 = (_DWORD *)(v60 + 4 * v61);
            }
            *v39 = v100;
            ++v37[1];
            v47 = (__int64 *)(*(_QWORD *)(a1 + 600) + v96);
            v48 = v47[1];
            v49 = *v47;
            if ( v47[2] < (unsigned __int64)(v48 + 1) )
            {
              v59 = qvector_reserve(*(_QWORD *)(a1 + 600) + v96, v49, v48 + 1, 4);
              *v47 = v59;
              v49 = v59;
              v48 = v47[1];
            }
            *(_DWORD *)(v49 + 4 * v48) = v34;
            ++v47[1];
          }
        }
        ++v34;
        v33 += 40;
      }
      if ( v114 )
      {
        *(_QWORD *)&v115 = 0;
        qfree((__int64)v114);
      }
      qfree(v113[0]);
      if ( v112[0] )
      {
        v112[1] = 0;
        qfree(v112[0]);
      }
      qfree(v111);
      v102 += 40;
      v41 = *(_QWORD *)(v101 + 8);
      v96 = v103;
      v101 = v41;
      if ( v104 == v94 )
        break;
      ++v94;
    }
  }
  if ( *(_DWORD *)(a1 + 76) == 4 || **(_DWORD **)(a1 + 56) == 55 )
  {
    v63 = v105 - 1;
    if ( (int)v105 - 1 <= 0 )
    {
LABEL_70:
      v71 = (__int64 *)(*(_QWORD *)(a1 + 576) + 24 * v107);
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
          v90 = qvector_reserve((__int64)v71, *v71, v72 + 1, 4);
          v91 = v71[1];
          *v71 = v90;
          v73 = (_DWORD *)(v90 + 4 * v91);
        }
        *v73 = v63;
        ++v71[1];
        v87 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24LL * v63);
        v88 = v87[1];
        v89 = *v87;
        if ( v87[2] < (unsigned __int64)(v88 + 1) )
        {
          v92 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24LL * v63, v89, v88 + 1, 4);
          *v87 = v92;
          v89 = v92;
          v88 = v87[1];
        }
        *(_DWORD *)(v89 + 4 * v88) = v105;
        ++v87[1];
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
            v84 = qvector_reserve(v66 + *(_QWORD *)(a1 + 576), *v67, v68 + 1, 4);
            v85 = v67[1];
            *v67 = v84;
            v69 = (_DWORD *)(v84 + 4 * v85);
          }
          *v69 = v65;
          ++v67[1];
          v81 = (__int64 *)(v64 + *(_QWORD *)(a1 + 600));
          v82 = v81[1];
          v83 = *v81;
          if ( v81[2] < (unsigned __int64)(v82 + 1) )
          {
            v86 = qvector_reserve(v64 + *(_QWORD *)(a1 + 600), v83, v82 + 1, 4);
            *v81 = v86;
            v83 = v86;
            v82 = v81[1];
          }
          *(_DWORD *)(v83 + 4 * v82) = v63;
          ++v81[1];
        }
      }
      ++v65;
      v64 += 24;
    }
    while ( v65 < v63 );
    if ( (_DWORD)v105 == v63 )
      goto LABEL_75;
    goto LABEL_70;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 )
    sub_310F00(v108);
  if ( (int)v105 > 0 )
  {
    v62 = v107;
    v63 = v105;
    goto LABEL_60;
  }
LABEL_75:
  v75 = v109;
  if ( v109 )
  {
    v76 = v110;
    if ( (_QWORD)v110 )
    {
      v77 = 0;
      do
      {
        v78 = (__int64 *)(v75 + 40 * v77);
        v79 = v78[2];
        if ( v79 )
        {
          v78[3] = 0;
          qfree(v79);
        }
        ++v77;
        qfree(*v78);
        v75 = v109;
      }
      while ( v76 != v77 );
    }
    *(_QWORD *)&v110 = 0;
    qfree(v75);
  }
  return v125 - __readfsqword(0x28u);
}

