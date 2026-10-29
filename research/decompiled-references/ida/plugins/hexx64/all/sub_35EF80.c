unsigned __int64 __fastcall sub_35EF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  const __m128i *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 *v12; // rsi
  bool v13; // zf
  __int64 *v14; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 i; // rcx
  __int64 *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 j; // rsi
  __int64 *v24; // rcx
  __int64 v25; // rdi
  __int64 *v26; // rcx
  __int64 v27; // r13
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rax
  __int32 v33; // edx
  __m128i v34; // xmm3
  __m128i v35; // xmm0
  __m128i v36; // xmm4
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // r13
  __m128i v40; // xmm0
  const __m128i *v41; // r14
  __int64 *v42; // rdi
  __int64 *v43; // rbp
  __int64 v44; // r10
  __int64 v45; // r11
  __int64 v46; // r15
  __int64 k; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // r10
  __int64 v53; // rdx
  __int64 v54; // r15
  __int64 m; // rbx
  __int64 *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rbp
  __m128i v60; // xmm0
  __int64 v61; // rdi
  __int64 *v62; // rcx
  __int64 v63; // rdi
  __m128i v64; // xmm5
  __m128i v65; // xmm0
  __m128i v66; // xmm6
  int v67; // eax
  __int32 v68; // edx
  __m128i v69; // xmm0
  __int64 v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rbp
  __int64 jj; // rbx
  __int64 *v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rbp
  __int64 kk; // rbx
  __int64 *v81; // rax
  __int64 v82; // rdi
  __int64 *v84; // rbp
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 n; // rbx
  __int64 *v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 ii; // rbx
  __int64 *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // rbp
  __int64 v98; // rcx
  __m128i v99; // [rsp+0h] [rbp-118h] BYREF
  __m128i v100; // [rsp+10h] [rbp-108h] BYREF
  __m128i v101; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v102; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v103; // [rsp+40h] [rbp-D8h]
  __int64 v104; // [rsp+48h] [rbp-D0h]
  int v105; // [rsp+50h] [rbp-C8h]
  int v106; // [rsp+54h] [rbp-C4h]
  __int64 v107; // [rsp+58h] [rbp-C0h]
  __int64 v108; // [rsp+60h] [rbp-B8h]
  __int64 v109; // [rsp+68h] [rbp-B0h]
  __m128i v110; // [rsp+70h] [rbp-A8h]
  __m128i v111; // [rsp+80h] [rbp-98h]
  __m128i v112; // [rsp+90h] [rbp-88h] BYREF
  __m128i v113; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v114; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v115; // [rsp+C0h] [rbp-58h]
  int v116; // [rsp+C4h] [rbp-54h]
  __int64 v117; // [rsp+C8h] [rbp-50h]
  int v118; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v119; // [rsp+D8h] [rbp-40h]

  v5 = a3;
  v6 = a1;
  v103 = a2;
  v119 = __readfsqword(0x28u);
  v7 = (const __m128i *)a4;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v30 = v103;
    v10 = a1 + 120 * v103;
  }
  else
  {
    v101.m128i_i64[0] = a3;
    v8 = (a3 - 1) / 2;
    v102.m128i_i64[0] = a4;
    while ( 1 )
    {
      v9 = 2 * (a2 + 1);
      v10 = v6 + 240 * (a2 + 1);
      if ( *(_QWORD *)(v10 - 16) < *(_QWORD *)(v10 + 104) )
      {
        --v9;
        v10 = v6 + 120 * v9;
      }
      v11 = v6 + 120 * a2;
      v12 = *(__int64 **)v11;
      if ( *(_QWORD *)v11 )
      {
        v13 = (*((_DWORD *)v12 + 26))-- == 1;
        if ( v13 )
        {
          v14 = *(__int64 **)v11;
          if ( *(_QWORD *)v11 )
          {
            sub_258970(*(__int64 **)v11);
            v15 = v14[23];
            if ( v15 )
            {
              v16 = v14[24];
              if ( v16 )
              {
                for ( i = 0; i != v16; ++i )
                {
                  v18 = (__int64 *)(v15 + 24 * i);
                  v19 = *v18;
                  if ( *v18 )
                  {
                    v18[1] = 0;
                    v100.m128i_i64[0] = i;
                    v99.m128i_i64[0] = v16;
                    qfree(v19);
                    v15 = v14[23];
                    i = v100.m128i_i64[0];
                    v16 = v99.m128i_i64[0];
                  }
                }
              }
              v14[24] = 0;
              qfree(v15);
            }
            v20 = v14[20];
            if ( v20 )
            {
              v14[21] = 0;
              qfree(v20);
            }
            v21 = v14[16];
            if ( v21 )
            {
              v22 = v14[17];
              if ( v22 )
              {
                for ( j = 0; j != v22; ++j )
                {
                  v24 = (__int64 *)(v21 + 32 * j);
                  v25 = *v24;
                  if ( *v24 )
                  {
                    v24[1] = 0;
                    v100.m128i_i64[0] = j;
                    v99.m128i_i64[0] = v22;
                    qfree(v25);
                    v21 = v14[16];
                    j = v100.m128i_i64[0];
                    v22 = v99.m128i_i64[0];
                  }
                }
              }
              v14[17] = 0;
              qfree(v21);
            }
            sub_255050((__int64)(v14 + 2), *(double *)a5.m128_u64);
            j__qfree((__int64)v14);
          }
        }
      }
      v26 = *(__int64 **)v10;
      *(_QWORD *)v11 = *(_QWORD *)v10;
      if ( v26 )
        ++*((_DWORD *)v26 + 26);
      v27 = *(_QWORD *)(v10 + 8);
      v28 = _mm_loadu_si128((const __m128i *)(v10 + 16));
      *(_QWORD *)(v10 + 8) = 0;
      *(_OWORD *)(v10 + 16) = 0;
      v29 = *(_QWORD *)(v11 + 8);
      if ( v29 )
      {
        *(_QWORD *)(v11 + 16) = 0;
        v99 = v28;
        qfree(v29);
        v28 = _mm_load_si128(&v99);
      }
      *(_QWORD *)(v11 + 8) = v27;
      *(__m128i *)(v11 + 16) = v28;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v11 + 40) = *(_QWORD *)(v10 + 40);
      *(__m128i *)(v11 + 48) = _mm_loadu_si128((const __m128i *)(v10 + 48));
      *(__m128i *)(v11 + 64) = _mm_loadu_si128((const __m128i *)(v10 + 64));
      a5 = (__m128)_mm_loadu_si128((const __m128i *)(v10 + 80));
      *(__m128 *)(v11 + 80) = a5;
      *(_DWORD *)(v11 + 96) = *(_DWORD *)(v10 + 96);
      *(_DWORD *)(v11 + 100) = *(_DWORD *)(v10 + 100);
      *(_QWORD *)(v11 + 104) = *(_QWORD *)(v10 + 104);
      *(_DWORD *)(v11 + 112) = *(_DWORD *)(v10 + 112);
      if ( v9 >= v8 )
        break;
      a2 = v9;
    }
    v30 = v9;
    v7 = (const __m128i *)v102.m128i_i64[0];
    v5 = v101.m128i_i64[0];
  }
  if ( (v5 & 1) == 0 && (v5 - 2) / 2 == v30 )
  {
    v96 = v30 + 1;
    v97 = 2 * (v30 + 1);
    v98 = 32 * v96 - v97;
    v30 = v97 - 1;
    sub_35E540(v10, (const __m128i *)(v6 + 8 * v98 - 120), *(double *)a5.m128_u64);
    v10 = v6 + 120 * v30;
  }
  v31 = v7->m128i_i64[0];
  v108 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 104);
  v32 = v7->m128i_i64[1];
  v33 = v7[6].m128i_i32[0];
  v7->m128i_i64[1] = 0;
  v34 = _mm_loadu_si128(v7 + 1);
  v7[1] = 0;
  v35 = _mm_loadu_si128(v7 + 3);
  v104 = v32;
  v36 = _mm_loadu_si128(v7 + 2);
  v109 = v32;
  LODWORD(v32) = v7[6].m128i_i32[1];
  v115 = v33;
  v105 = v32;
  v116 = v32;
  v37 = v7[6].m128i_i64[1];
  v112 = v35;
  v38 = _mm_loadu_si128(v7 + 4);
  v99.m128i_i64[0] = v37;
  v117 = v37;
  LODWORD(v37) = v7[7].m128i_i32[0];
  v39 = (v30 - 1) / 2;
  v113 = v38;
  v40 = _mm_loadu_si128(v7 + 5);
  v106 = v37;
  v118 = v37;
  v102 = v34;
  v101 = v36;
  v110 = v34;
  v111 = v36;
  v114 = v40;
  if ( v30 > v103 )
  {
    while ( 1 )
    {
      v41 = (const __m128i *)(v6 + 120 * v39);
      v10 = v6 + 120 * v30;
      v42 = *(__int64 **)v10;
      if ( v99.m128i_i64[0] >= (unsigned __int64)v41[6].m128i_i64[1] )
        break;
      if ( v42 )
      {
        v13 = (*((_DWORD *)v42 + 26))-- == 1;
        if ( v13 )
        {
          v43 = *(__int64 **)v10;
          if ( *(_QWORD *)v10 )
          {
            sub_258970(*(__int64 **)v10);
            v44 = v43[23];
            if ( v44 )
            {
              v45 = v43[24];
              if ( v45 )
              {
                v100.m128i_i64[0] = v10;
                v46 = v45;
                v107 = v6;
                for ( k = 0; k != v46; ++k )
                {
                  v48 = (__int64 *)(v44 + 24 * k);
                  v49 = *v48;
                  if ( *v48 )
                  {
                    v48[1] = 0;
                    qfree(v49);
                    v44 = v43[23];
                  }
                }
                v10 = v100.m128i_i64[0];
                v6 = v107;
              }
              v43[24] = 0;
              qfree(v44);
            }
            v50 = v43[20];
            if ( v50 )
            {
              v43[21] = 0;
              qfree(v50);
            }
            v51 = v43[16];
            if ( v51 )
            {
              v52 = v43[17];
              if ( v52 )
              {
                v100.m128i_i64[0] = v10;
                v53 = v51;
                v54 = v52;
                v107 = v6;
                for ( m = 0; m != v54; ++m )
                {
                  v56 = (__int64 *)(v53 + 32 * m);
                  v57 = *v56;
                  if ( *v56 )
                  {
                    v56[1] = 0;
                    qfree(v57);
                    v53 = v43[16];
                  }
                }
                v10 = v100.m128i_i64[0];
                v6 = v107;
                v51 = v53;
              }
              v43[17] = 0;
              qfree(v51);
            }
            sub_255050((__int64)(v43 + 2), *(double *)v40.m128i_i64);
            j__qfree((__int64)v43);
          }
        }
      }
      v58 = v41->m128i_i64[0];
      *(_QWORD *)v10 = v41->m128i_i64[0];
      if ( v58 )
        ++*(_DWORD *)(v58 + 104);
      v59 = v41->m128i_i64[1];
      v60 = _mm_loadu_si128(v41 + 1);
      v41->m128i_i64[1] = 0;
      v41[1] = 0;
      v61 = *(_QWORD *)(v10 + 8);
      if ( v61 )
      {
        *(_QWORD *)(v10 + 16) = 0;
        v100 = v60;
        qfree(v61);
        v60 = _mm_load_si128(&v100);
      }
      *(_QWORD *)(v10 + 8) = v59;
      v30 = v39;
      *(__m128i *)(v10 + 16) = v60;
      *(_QWORD *)(v10 + 32) = v41[2].m128i_i64[0];
      *(_QWORD *)(v10 + 40) = v41[2].m128i_i64[1];
      *(__m128i *)(v10 + 48) = _mm_loadu_si128(v41 + 3);
      *(__m128i *)(v10 + 64) = _mm_loadu_si128(v41 + 4);
      v40 = _mm_loadu_si128(v41 + 5);
      *(__m128i *)(v10 + 80) = v40;
      *(_DWORD *)(v10 + 96) = v41[6].m128i_i32[0];
      *(_DWORD *)(v10 + 100) = v41[6].m128i_i32[1];
      *(_QWORD *)(v10 + 104) = v41[6].m128i_i64[1];
      *(_DWORD *)(v10 + 112) = v41[7].m128i_i32[0];
      if ( v103 >= v39 )
      {
        v10 = (__int64)v41;
        break;
      }
      v39 = (v39 - 1) / 2;
    }
  }
  v62 = *(__int64 **)v10;
  if ( *(_QWORD *)v10 )
  {
    v13 = (*((_DWORD *)v62 + 26))-- == 1;
    if ( v13 )
    {
      v84 = *(__int64 **)v10;
      if ( *(_QWORD *)v10 )
      {
        sub_258970(*(__int64 **)v10);
        v85 = v84[23];
        if ( v85 )
        {
          v86 = v84[24];
          if ( v86 )
          {
            for ( n = 0; n != v86; ++n )
            {
              v88 = (__int64 *)(v85 + 24 * n);
              v89 = *v88;
              if ( *v88 )
              {
                v88[1] = 0;
                qfree(v89);
                v85 = v84[23];
              }
            }
          }
          v84[24] = 0;
          qfree(v85);
        }
        v90 = v84[20];
        if ( v90 )
        {
          v84[21] = 0;
          qfree(v90);
        }
        v91 = v84[16];
        if ( v91 )
        {
          v92 = v84[17];
          if ( v92 )
          {
            for ( ii = 0; ii != v92; ++ii )
            {
              v94 = (__int64 *)(v91 + 32 * ii);
              v95 = *v94;
              if ( *v94 )
              {
                v94[1] = 0;
                qfree(v95);
                v91 = v84[16];
              }
            }
          }
          v84[17] = 0;
          qfree(v91);
        }
        sub_255050((__int64)(v84 + 2), *(double *)v40.m128i_i64);
        j__qfree((__int64)v84);
      }
    }
  }
  *(_QWORD *)v10 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 104);
  v63 = *(_QWORD *)(v10 + 8);
  v109 = 0;
  v110 = 0;
  if ( v63 )
  {
    *(_QWORD *)(v10 + 16) = 0;
    qfree(v63);
  }
  v64 = _mm_load_si128(&v102);
  v65 = _mm_load_si128(&v112);
  v66 = _mm_load_si128(&v101);
  *(_QWORD *)(v10 + 8) = v104;
  v67 = v105;
  *(__m128i *)(v10 + 48) = v65;
  v68 = v115;
  v69 = _mm_load_si128(&v113);
  *(_DWORD *)(v10 + 100) = v67;
  v70 = v99.m128i_i64[0];
  *(__m128i *)(v10 + 64) = v69;
  v71 = _mm_load_si128(&v114);
  *(_QWORD *)(v10 + 104) = v70;
  LODWORD(v70) = v106;
  *(_DWORD *)(v10 + 96) = v68;
  *(_DWORD *)(v10 + 112) = v70;
  *(__m128i *)(v10 + 16) = v64;
  *(__m128i *)(v10 + 32) = v66;
  *(__m128i *)(v10 + 80) = v71;
  if ( v31 )
  {
    v13 = (*(_DWORD *)(v31 + 104))-- == 1;
    if ( v13 )
    {
      sub_258970((__int64 *)v31);
      v72 = *(_QWORD *)(v31 + 184);
      if ( v72 )
      {
        v73 = *(_QWORD *)(v31 + 192);
        if ( v73 )
        {
          for ( jj = 0; jj != v73; ++jj )
          {
            v75 = (__int64 *)(v72 + 24 * jj);
            v76 = *v75;
            if ( *v75 )
            {
              v75[1] = 0;
              qfree(v76);
              v72 = *(_QWORD *)(v31 + 184);
            }
          }
        }
        *(_QWORD *)(v31 + 192) = 0;
        qfree(v72);
      }
      v77 = *(_QWORD *)(v31 + 160);
      if ( v77 )
      {
        *(_QWORD *)(v31 + 168) = 0;
        qfree(v77);
      }
      v78 = *(_QWORD *)(v31 + 128);
      if ( v78 )
      {
        v79 = *(_QWORD *)(v31 + 136);
        if ( v79 )
        {
          for ( kk = 0; kk != v79; ++kk )
          {
            v81 = (__int64 *)(v78 + 32 * kk);
            v82 = *v81;
            if ( *v81 )
            {
              v81[1] = 0;
              qfree(v82);
              v78 = *(_QWORD *)(v31 + 128);
            }
          }
        }
        *(_QWORD *)(v31 + 136) = 0;
        qfree(v78);
      }
      sub_255050(v31 + 16, *(double *)v71.m128i_i64);
      j__qfree(v31);
    }
  }
  return v119 - __readfsqword(0x28u);
}

