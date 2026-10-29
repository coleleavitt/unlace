__int64 __fastcall sub_3937C0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int32 v14; // eax
  __m128i v15; // xmm0
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int16 v22; // ax
  __int16 v23; // dx
  __m128i *v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdi
  __int32 v27; // eax
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 n; // rbp
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 ii; // rbp
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 v41; // rax
  _QWORD *v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 i; // rax
  __int64 *v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 j; // rdx
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 *v55; // rax
  __int32 v56; // ecx
  char v57; // al
  char v58; // r8
  char v59; // al
  char v60; // r14
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 k; // r15
  __int64 *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 m; // r15
  __int64 *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 v75; // r15
  __int64 *v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r15
  __int64 *v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // r9
  __int64 v85; // r15
  __int64 *v86; // rdx
  __int64 v87; // rdi
  __int64 v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // r15
  __int64 *v91; // rax
  __int64 v92; // rdi
  __int64 *v93; // rax
  unsigned int v94; // [rsp+0h] [rbp-118h]
  __int64 v95; // [rsp+0h] [rbp-118h]
  __int64 v96; // [rsp+0h] [rbp-118h]
  __int64 v97; // [rsp+0h] [rbp-118h]
  __int64 v98; // [rsp+0h] [rbp-118h]
  __int64 v99; // [rsp+0h] [rbp-118h]
  __int64 v100; // [rsp+0h] [rbp-118h]
  __int64 v102; // [rsp+8h] [rbp-110h]
  __int64 v103; // [rsp+8h] [rbp-110h]
  __int64 v104; // [rsp+8h] [rbp-110h]
  __int64 v105; // [rsp+8h] [rbp-110h]
  __int64 v106; // [rsp+8h] [rbp-110h]
  __int64 v107; // [rsp+8h] [rbp-110h]
  __int64 v108; // [rsp+8h] [rbp-110h]
  __int64 v109; // [rsp+8h] [rbp-110h]
  __int64 v110; // [rsp+8h] [rbp-110h]
  __int64 v111; // [rsp+8h] [rbp-110h]
  __int64 v112; // [rsp+8h] [rbp-110h]
  __int64 v113; // [rsp+8h] [rbp-110h]
  __int64 v114; // [rsp+8h] [rbp-110h]
  __int64 v115; // [rsp+8h] [rbp-110h]
  __int64 v116; // [rsp+8h] [rbp-110h]
  __int64 v117; // [rsp+8h] [rbp-110h]
  __int16 v119; // [rsp+14h] [rbp-104h]
  __int64 v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+18h] [rbp-100h]
  __int64 v122; // [rsp+18h] [rbp-100h]
  __int64 v123; // [rsp+18h] [rbp-100h]
  __int64 v124; // [rsp+18h] [rbp-100h]
  __int64 v125; // [rsp+18h] [rbp-100h]
  __int64 v126; // [rsp+18h] [rbp-100h]
  __int32 v127; // [rsp+20h] [rbp-F8h] BYREF
  int v128; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v129; // [rsp+28h] [rbp-F0h] BYREF
  __int64 *v130; // [rsp+30h] [rbp-E8h] BYREF
  __int64 *v131; // [rsp+38h] [rbp-E0h]
  __int64 v132; // [rsp+40h] [rbp-D8h]
  __m128i v133; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v134; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v135[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+80h] [rbp-98h]
  __int128 v137; // [rsp+88h] [rbp-90h]
  __m128i v138; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v139; // [rsp+B0h] [rbp-68h] BYREF
  int v140; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v141; // [rsp+D8h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  sub_3909B0((__int64)&v130, a4);
  v14 = *(_DWORD *)a4;
  v15.m128i_i64[0] = 0;
  v135[0] = 0;
  v127 = v14;
  v16 = *(_DWORD *)(a4 + 4);
  v135[1] = -1;
  v128 = v16;
  v17 = *(_DWORD *)(a4 + 8);
  v136 = 0;
  v119 = v17;
  v18 = *(_QWORD *)(a4 + 24);
  v137 = 0;
  v129 = v18;
  if ( v130 )
  {
    if ( !(unsigned __int8)sub_384450((__int64 *)&v129, 0) )
    {
      v94 = 0;
      goto LABEL_33;
    }
  }
  else if ( !v132 )
  {
    v94 = 0;
    goto LABEL_35;
  }
  if ( !a3 || a6 == 1 )
  {
    v41 = *(_QWORD *)(a3 + 32);
    if ( !v41
      || (v42 = *(_QWORD **)(v41 + 8), v43 = sub_330F80(v42, v129),
                                       !(unsigned __int8)sub_332920((__int64)(v42 + 1), v43)) )
    {
      sub_14CDC0(v138.m128i_i64, *(_QWORD *)(a2 + 112), &v130, v135, 0, 0.0, a8, a9, a10);
      v19 = v138.m128i_i64[0];
      if ( v138.m128i_i64[0] )
      {
        if ( !*(_DWORD *)(v138.m128i_i64[0] + 104) )
        {
          sub_258970((__int64 *)v138.m128i_i64[0]);
          v44 = *(_QWORD *)(v19 + 184);
          if ( v44 )
          {
            v45 = *(_QWORD *)(v19 + 192);
            if ( v45 )
            {
              for ( i = 0; i != v45; ++i )
              {
                v47 = (__int64 *)(v44 + 24 * i);
                v48 = *v47;
                if ( *v47 )
                {
                  v47[1] = 0;
                  v120 = i;
                  qfree(v48);
                  v44 = *(_QWORD *)(v19 + 184);
                  i = v120;
                }
              }
            }
            *(_QWORD *)(v19 + 192) = 0;
            qfree(v44);
          }
          v49 = *(_QWORD *)(v19 + 160);
          if ( v49 )
          {
            *(_QWORD *)(v19 + 168) = 0;
            qfree(v49);
          }
          v50 = *(_QWORD *)(v19 + 128);
          if ( v50 )
          {
            v51 = *(_QWORD *)(v19 + 136);
            if ( v51 )
            {
              for ( j = 0; j != v51; ++j )
              {
                v53 = (__int64 *)(v50 + 32 * j);
                v54 = *v53;
                if ( *v53 )
                {
                  v53[1] = 0;
                  v121 = j;
                  qfree(v54);
                  v50 = *(_QWORD *)(v19 + 128);
                  j = v121;
                }
              }
            }
            *(_QWORD *)(v19 + 136) = 0;
            qfree(v50);
          }
          sub_255050(v19 + 16, 0.0);
          j__qfree(v19);
        }
        v55 = v130;
        v20 = v129;
        if ( !v130 )
          v55 = v131;
        if ( v129 == *v55 )
        {
          v127 = 0;
          v128 = 0;
          v119 = 0;
        }
        goto LABEL_7;
      }
      if ( v130 )
      {
        if ( *v130 != v129 )
          goto LABEL_94;
      }
      else if ( v129 != *v131 )
      {
        goto LABEL_94;
      }
      v127 = 0;
      v128 = 0;
      goto LABEL_94;
    }
  }
  v19 = *(_QWORD *)(a3 + 32);
  if ( v19 )
  {
    ++*(_DWORD *)(v19 + 104);
    v20 = v129;
LABEL_7:
    v21 = *(_QWORD *)v19;
    if ( a5 != 1 && v127 >= 0 )
    {
      v133.m128i_i32[3] = v127;
      v22 = v119;
      v133.m128i_i32[2] = 0;
      v133.m128i_i64[0] = (__int64)off_4E6538;
      v134.m128i_i64[0] = v21;
      v134.m128i_i64[1] = v20;
      goto LABEL_10;
    }
    if ( v20 == v21 )
    {
      v127 = 0;
      v22 = v119;
      v56 = 0;
      goto LABEL_65;
    }
    v122 = v20;
    v57 = sub_3327E0((_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL), &v130);
    v20 = v122;
    if ( v57 )
    {
LABEL_71:
      v58 = *(_BYTE *)(a2 + 718);
      ++*(_DWORD *)(v19 + 104);
      v102 = v20;
      v138.m128i_i64[0] = v19;
      v59 = sub_38BEC0(&v138, v20, &v128, &v127, v58, (__m128i)0LL);
      v28 = (*(_DWORD *)(v19 + 104))-- == 1;
      v20 = v102;
      v60 = v59;
      if ( v28 )
      {
        sub_258970((__int64 *)v19);
        v61 = *(_QWORD *)(v19 + 184);
        v62 = v102;
        if ( v61 )
        {
          v63 = *(_QWORD *)(v19 + 192);
          if ( v63 )
          {
            for ( k = 0; k != v63; ++k )
            {
              v65 = (__int64 *)(v61 + 24 * k);
              v66 = *v65;
              if ( *v65 )
              {
                v65[1] = 0;
                v103 = v63;
                v95 = v62;
                qfree(v66);
                v61 = *(_QWORD *)(v19 + 184);
                v63 = v103;
                v62 = v95;
              }
            }
          }
          *(_QWORD *)(v19 + 192) = 0;
          v96 = v62;
          qfree(v61);
          v62 = v96;
        }
        v67 = *(_QWORD *)(v19 + 160);
        if ( v67 )
        {
          *(_QWORD *)(v19 + 168) = 0;
          v97 = v62;
          qfree(v67);
          v62 = v97;
        }
        v68 = *(_QWORD *)(v19 + 128);
        if ( v68 )
        {
          v69 = *(_QWORD *)(v19 + 136);
          if ( v69 )
          {
            for ( m = 0; m != v69; ++m )
            {
              v71 = (__int64 *)(v68 + 32 * m);
              v72 = *v71;
              if ( *v71 )
              {
                v71[1] = 0;
                v104 = v69;
                v98 = v62;
                qfree(v72);
                v68 = *(_QWORD *)(v19 + 128);
                v69 = v104;
                v62 = v98;
              }
            }
          }
          *(_QWORD *)(v19 + 136) = 0;
          v99 = v62;
          qfree(v68);
          v62 = v99;
        }
        v100 = v62;
        sub_255050(v19 + 16, 0.0);
        j__qfree(v19);
        v20 = v100;
      }
      v21 = *(_QWORD *)v19;
      if ( v60 )
      {
        v56 = v127;
        v22 = 15;
      }
      else if ( a3 )
      {
        v56 = *(_DWORD *)(a3 + 44);
        v128 = *(_DWORD *)(a3 + 48);
        v22 = *(_WORD *)(a3 + 52);
        v127 = v56;
      }
      else
      {
        v22 = v119;
        v56 = v127;
      }
LABEL_65:
      v133.m128i_i32[3] = v56;
      v133.m128i_i32[2] = 0;
      v133.m128i_i64[0] = (__int64)off_4E6538;
      v134.m128i_i64[0] = v21;
      v134.m128i_i64[1] = v20;
      if ( a5 == 1 && !*(_BYTE *)(*(_QWORD *)(a3 + 128) + 714LL) )
      {
        v23 = *(_WORD *)(a4 + 4);
        goto LABEL_11;
      }
LABEL_10:
      v23 = v128;
LABEL_11:
      v139.m128i_i16[7] = v22;
      v139.m128i_i64[0] = 0;
      v139.m128i_i32[2] = -1;
      v139.m128i_i16[6] = v23;
      v140 = 1;
      v138 = 0;
      v24 = (__m128i *)qalloc();
      v25 = (__int64)v24;
      if ( !v24 )
        sub_3880B0((__int64)"hexrays_place_t");
      *v24 = _mm_load_si128(&v133);
      v24[1] = _mm_load_si128(&v134);
      v26 = a1[2].m128i_i64[1];
      if ( v26 )
      {
        qfree(v26);
        a1[2].m128i_i64[1] = 0;
      }
      v27 = v140;
      *a1 = _mm_load_si128(&v138);
      v15 = _mm_load_si128(&v139);
      a1[2].m128i_i32[0] = v27;
      a1[1] = v15;
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      qfree(v25);
      v94 = 1;
      goto LABEL_15;
    }
    v94 = 0;
    if ( !a6 )
    {
LABEL_15:
      v28 = (*(_DWORD *)(v19 + 104))-- == 1;
      if ( v28 )
      {
        sub_258970((__int64 *)v19);
        v29 = *(_QWORD *)(v19 + 184);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v19 + 192);
          if ( v30 )
          {
            for ( n = 0; n != v30; ++n )
            {
              v32 = (__int64 *)(v29 + 24 * n);
              v33 = *v32;
              if ( *v32 )
              {
                v32[1] = 0;
                qfree(v33);
                v29 = *(_QWORD *)(v19 + 184);
              }
            }
          }
          *(_QWORD *)(v19 + 192) = 0;
          qfree(v29);
        }
        v34 = *(_QWORD *)(v19 + 160);
        if ( v34 )
        {
          *(_QWORD *)(v19 + 168) = 0;
          qfree(v34);
        }
        v35 = *(_QWORD *)(v19 + 128);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v19 + 136);
          if ( v36 )
          {
            for ( ii = 0; ii != v36; ++ii )
            {
              v38 = (__int64 *)(v35 + 32 * ii);
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                qfree(v39);
                v35 = *(_QWORD *)(v19 + 128);
              }
            }
          }
          *(_QWORD *)(v19 + 136) = 0;
          qfree(v35);
        }
        sub_255050(v19 + 16, *(double *)v15.m128i_i64);
        j__qfree(v19);
      }
      goto LABEL_33;
    }
    sub_14CDC0(v138.m128i_i64, *(_QWORD *)(a2 + 112), &v130, v135, 0, 0.0, a8, a9, a10);
    v28 = (*(_DWORD *)(v19 + 104))-- == 1;
    v20 = v122;
    if ( v28 )
    {
      sub_258970((__int64 *)v19);
      v73 = *(_QWORD *)(v19 + 184);
      v74 = v122;
      if ( v73 )
      {
        v75 = 0;
        v105 = *(_QWORD *)(v19 + 192);
        if ( v105 )
        {
          do
          {
            v76 = (__int64 *)(v73 + 24 * v75);
            v77 = *v76;
            if ( *v76 )
            {
              v76[1] = 0;
              v123 = v74;
              qfree(v77);
              v73 = *(_QWORD *)(v19 + 184);
              v74 = v123;
            }
            ++v75;
          }
          while ( v105 != v75 );
        }
        *(_QWORD *)(v19 + 192) = 0;
        v106 = v74;
        qfree(v73);
        v74 = v106;
      }
      v78 = *(_QWORD *)(v19 + 160);
      if ( v78 )
      {
        *(_QWORD *)(v19 + 168) = 0;
        v107 = v74;
        qfree(v78);
        v74 = v107;
      }
      v79 = *(_QWORD *)(v19 + 128);
      if ( v79 )
      {
        v80 = 0;
        v108 = *(_QWORD *)(v19 + 136);
        if ( v108 )
        {
          do
          {
            v81 = (__int64 *)(v79 + 32 * v80);
            v82 = *v81;
            if ( *v81 )
            {
              v81[1] = 0;
              v124 = v74;
              qfree(v82);
              v79 = *(_QWORD *)(v19 + 128);
              v74 = v124;
            }
            ++v80;
          }
          while ( v108 != v80 );
        }
        *(_QWORD *)(v19 + 136) = 0;
        v109 = v74;
        qfree(v79);
        v74 = v109;
      }
      v110 = v74;
      sub_255050(v19 + 16, 0.0);
      j__qfree(v19);
      v20 = v110;
    }
    v19 = v138.m128i_i64[0];
    if ( v138.m128i_i64[0] )
    {
      if ( !*(_DWORD *)(v138.m128i_i64[0] + 104) )
      {
        v111 = v20;
        sub_258970((__int64 *)v138.m128i_i64[0]);
        v83 = *(_QWORD *)(v19 + 184);
        v84 = v111;
        if ( v83 )
        {
          v85 = 0;
          v112 = *(_QWORD *)(v19 + 192);
          if ( v112 )
          {
            do
            {
              v86 = (__int64 *)(v83 + 24 * v85);
              v87 = *v86;
              if ( *v86 )
              {
                v86[1] = 0;
                v125 = v84;
                qfree(v87);
                v83 = *(_QWORD *)(v19 + 184);
                v84 = v125;
              }
              ++v85;
            }
            while ( v112 != v85 );
          }
          *(_QWORD *)(v19 + 192) = 0;
          v113 = v84;
          qfree(v83);
          v84 = v113;
        }
        v88 = *(_QWORD *)(v19 + 160);
        if ( v88 )
        {
          *(_QWORD *)(v19 + 168) = 0;
          v114 = v84;
          qfree(v88);
          v84 = v114;
        }
        v89 = *(_QWORD *)(v19 + 128);
        if ( v89 )
        {
          v90 = 0;
          v115 = *(_QWORD *)(v19 + 136);
          if ( v115 )
          {
            do
            {
              v91 = (__int64 *)(v89 + 32 * v90);
              v92 = *v91;
              if ( *v91 )
              {
                v91[1] = 0;
                v126 = v84;
                qfree(v92);
                v89 = *(_QWORD *)(v19 + 128);
                v84 = v126;
              }
              ++v90;
            }
            while ( v115 != v90 );
          }
          *(_QWORD *)(v19 + 136) = 0;
          v116 = v84;
          qfree(v89);
          v84 = v116;
        }
        v117 = v84;
        sub_255050(v19 + 16, 0.0);
        j__qfree(v19);
        v20 = v117;
      }
      v93 = v130;
      if ( !v130 )
        v93 = v131;
      if ( *v93 == v20 )
      {
        v127 = 0;
        v21 = *(_QWORD *)v19;
        v56 = 0;
        v22 = 0;
        v128 = 0;
        goto LABEL_65;
      }
      goto LABEL_71;
    }
  }
LABEL_94:
  v94 = -(LODWORD(v135[0]) == -18);
LABEL_33:
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
LABEL_35:
  if ( v131 )
  {
    v132 = 0;
    qfree((__int64)v131);
  }
  return v94;
}

