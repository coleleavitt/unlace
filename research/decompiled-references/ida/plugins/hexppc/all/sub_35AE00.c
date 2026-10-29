unsigned __int64 __fastcall sub_35AE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  const __m128i *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 *v11; // rsi
  bool v12; // zf
  __int64 *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 j; // rsi
  _QWORD *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r13
  __m128i v24; // xmm0
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rax
  __int32 v28; // edx
  __m128i v29; // xmm3
  __m128i v30; // xmm0
  __m128i v31; // xmm4
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // r13
  __m128i v35; // xmm0
  const __m128i *v36; // r14
  __int64 *v37; // rdi
  __int64 *v38; // rbp
  __int64 v39; // r10
  __int64 v40; // r11
  __int64 v41; // r15
  __int64 k; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r15
  __int64 m; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbp
  __m128i v52; // xmm0
  __int64 *v53; // rcx
  __int64 v54; // rdi
  __m128i v55; // xmm5
  __m128i v56; // xmm0
  __m128i v57; // xmm6
  int v58; // eax
  __int32 v59; // edx
  __m128i v60; // xmm0
  __int64 v61; // rax
  __m128i v62; // xmm0
  __int64 v63; // rdx
  __int64 v64; // rbp
  __int64 jj; // rbx
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rbp
  __int64 kk; // rbx
  _QWORD *v70; // rax
  __int64 *v72; // rbp
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 n; // rbx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 ii; // rbx
  _QWORD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rbp
  __int64 v83; // rcx
  __m128i v84; // [rsp+0h] [rbp-118h] BYREF
  __m128i v85; // [rsp+10h] [rbp-108h] BYREF
  __m128i v86; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v87; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v88; // [rsp+40h] [rbp-D8h]
  __int64 v89; // [rsp+48h] [rbp-D0h]
  int v90; // [rsp+50h] [rbp-C8h]
  int v91; // [rsp+54h] [rbp-C4h]
  __int64 v92; // [rsp+58h] [rbp-C0h]
  __int64 v93; // [rsp+60h] [rbp-B8h]
  __int64 v94; // [rsp+68h] [rbp-B0h]
  __m128i v95; // [rsp+70h] [rbp-A8h]
  __m128i v96; // [rsp+80h] [rbp-98h]
  __m128i v97; // [rsp+90h] [rbp-88h] BYREF
  __m128i v98; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v99; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v100; // [rsp+C0h] [rbp-58h]
  int v101; // [rsp+C4h] [rbp-54h]
  __int64 v102; // [rsp+C8h] [rbp-50h]
  int v103; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v104; // [rsp+D8h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  v88 = a2;
  v104 = __readfsqword(0x28u);
  v6 = (const __m128i *)a4;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v25 = v88;
    v9 = a1 + 120 * v88;
  }
  else
  {
    v86.m128i_i64[0] = a3;
    v7 = (a3 - 1) / 2;
    v87.m128i_i64[0] = a4;
    while ( 1 )
    {
      v8 = 2 * (a2 + 1);
      v9 = a1 + 240 * (a2 + 1);
      if ( *(_QWORD *)(v9 - 16) < *(_QWORD *)(v9 + 104) )
      {
        --v8;
        v9 = a1 + 120 * v8;
      }
      v10 = a1 + 120 * a2;
      v11 = *(__int64 **)v10;
      if ( *(_QWORD *)v10 )
      {
        v12 = (*((_DWORD *)v11 + 26))-- == 1;
        if ( v12 )
        {
          v13 = *(__int64 **)v10;
          if ( *(_QWORD *)v10 )
          {
            sub_254CF0(*(__int64 **)v10);
            v14 = v13[23];
            if ( v14 )
            {
              v15 = v13[24];
              if ( v15 )
              {
                for ( i = 0; i != v15; ++i )
                {
                  v17 = (_QWORD *)(v14 + 24 * i);
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    v85.m128i_i64[0] = i;
                    v84.m128i_i64[0] = v15;
                    qfree();
                    v14 = v13[23];
                    i = v85.m128i_i64[0];
                    v15 = v84.m128i_i64[0];
                  }
                }
              }
              v13[24] = 0;
              qfree();
            }
            if ( v13[20] )
            {
              v13[21] = 0;
              qfree();
            }
            v18 = v13[16];
            if ( v18 )
            {
              v19 = v13[17];
              if ( v19 )
              {
                for ( j = 0; j != v19; ++j )
                {
                  v21 = (_QWORD *)(v18 + 32 * j);
                  if ( *v21 )
                  {
                    v21[1] = 0;
                    v85.m128i_i64[0] = j;
                    v84.m128i_i64[0] = v19;
                    qfree();
                    v18 = v13[16];
                    j = v85.m128i_i64[0];
                    v19 = v84.m128i_i64[0];
                  }
                }
              }
              v13[17] = 0;
              qfree();
            }
            sub_2513D0((__int64)(v13 + 2));
            j__qfree();
          }
        }
      }
      v22 = *(__int64 **)v9;
      *(_QWORD *)v10 = *(_QWORD *)v9;
      if ( v22 )
        ++*((_DWORD *)v22 + 26);
      v23 = *(_QWORD *)(v9 + 8);
      v24 = _mm_loadu_si128((const __m128i *)(v9 + 16));
      *(_QWORD *)(v9 + 8) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      if ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 16) = 0;
        v84 = v24;
        qfree();
        v24 = _mm_load_si128(&v84);
      }
      *(_QWORD *)(v10 + 8) = v23;
      *(__m128i *)(v10 + 16) = v24;
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(v9 + 40);
      *(__m128i *)(v10 + 48) = _mm_loadu_si128((const __m128i *)(v9 + 48));
      *(__m128i *)(v10 + 64) = _mm_loadu_si128((const __m128i *)(v9 + 64));
      *(__m128i *)(v10 + 80) = _mm_loadu_si128((const __m128i *)(v9 + 80));
      *(_DWORD *)(v10 + 96) = *(_DWORD *)(v9 + 96);
      *(_DWORD *)(v10 + 100) = *(_DWORD *)(v9 + 100);
      *(_QWORD *)(v10 + 104) = *(_QWORD *)(v9 + 104);
      *(_DWORD *)(v10 + 112) = *(_DWORD *)(v9 + 112);
      if ( v8 >= v7 )
        break;
      a2 = v8;
    }
    v25 = v8;
    v6 = (const __m128i *)v87.m128i_i64[0];
    v4 = v86.m128i_i64[0];
  }
  if ( (v4 & 1) == 0 && (v4 - 2) / 2 == v25 )
  {
    v81 = v25 + 1;
    v82 = 2 * (v25 + 1);
    v83 = 32 * v81 - v82;
    v25 = v82 - 1;
    sub_35A3C0(v9, (const __m128i *)(a1 + 8 * v83 - 120));
    v9 = a1 + 120 * v25;
  }
  v26 = v6->m128i_i64[0];
  v93 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 104);
  v27 = v6->m128i_i64[1];
  v28 = v6[6].m128i_i32[0];
  v6->m128i_i64[1] = 0;
  v29 = _mm_loadu_si128(v6 + 1);
  v6[1] = 0;
  v30 = _mm_loadu_si128(v6 + 3);
  v89 = v27;
  v31 = _mm_loadu_si128(v6 + 2);
  v94 = v27;
  LODWORD(v27) = v6[6].m128i_i32[1];
  v100 = v28;
  v90 = v27;
  v101 = v27;
  v32 = v6[6].m128i_i64[1];
  v97 = v30;
  v33 = _mm_loadu_si128(v6 + 4);
  v84.m128i_i64[0] = v32;
  v102 = v32;
  LODWORD(v32) = v6[7].m128i_i32[0];
  v34 = (v25 - 1) / 2;
  v98 = v33;
  v35 = _mm_loadu_si128(v6 + 5);
  v91 = v32;
  v103 = v32;
  v87 = v29;
  v86 = v31;
  v95 = v29;
  v96 = v31;
  v99 = v35;
  if ( v25 > v88 )
  {
    while ( 1 )
    {
      v36 = (const __m128i *)(v5 + 120 * v34);
      v9 = v5 + 120 * v25;
      v37 = *(__int64 **)v9;
      if ( v84.m128i_i64[0] >= (unsigned __int64)v36[6].m128i_i64[1] )
        break;
      if ( v37 )
      {
        v12 = (*((_DWORD *)v37 + 26))-- == 1;
        if ( v12 )
        {
          v38 = *(__int64 **)v9;
          if ( *(_QWORD *)v9 )
          {
            sub_254CF0(*(__int64 **)v9);
            v39 = v38[23];
            if ( v39 )
            {
              v40 = v38[24];
              if ( v40 )
              {
                v85.m128i_i64[0] = v9;
                v41 = v40;
                v92 = v5;
                for ( k = 0; k != v41; ++k )
                {
                  v43 = (_QWORD *)(v39 + 24 * k);
                  if ( *v43 )
                  {
                    v43[1] = 0;
                    qfree();
                    v39 = v38[23];
                  }
                }
                v9 = v85.m128i_i64[0];
                v5 = v92;
              }
              v38[24] = 0;
              qfree();
            }
            if ( v38[20] )
            {
              v38[21] = 0;
              qfree();
            }
            v44 = v38[16];
            if ( v44 )
            {
              v45 = v38[17];
              if ( v45 )
              {
                v85.m128i_i64[0] = v9;
                v46 = v44;
                v47 = v45;
                v92 = v5;
                for ( m = 0; m != v47; ++m )
                {
                  v49 = (_QWORD *)(v46 + 32 * m);
                  if ( *v49 )
                  {
                    v49[1] = 0;
                    qfree();
                    v46 = v38[16];
                  }
                }
                v9 = v85.m128i_i64[0];
                v5 = v92;
              }
              v38[17] = 0;
              qfree();
            }
            sub_2513D0((__int64)(v38 + 2));
            j__qfree();
          }
        }
      }
      v50 = v36->m128i_i64[0];
      *(_QWORD *)v9 = v36->m128i_i64[0];
      if ( v50 )
        ++*(_DWORD *)(v50 + 104);
      v51 = v36->m128i_i64[1];
      v52 = _mm_loadu_si128(v36 + 1);
      v36->m128i_i64[1] = 0;
      v36[1] = 0;
      if ( *(_QWORD *)(v9 + 8) )
      {
        *(_QWORD *)(v9 + 16) = 0;
        v85 = v52;
        qfree();
        v52 = _mm_load_si128(&v85);
      }
      *(_QWORD *)(v9 + 8) = v51;
      v25 = v34;
      *(__m128i *)(v9 + 16) = v52;
      *(_QWORD *)(v9 + 32) = v36[2].m128i_i64[0];
      *(_QWORD *)(v9 + 40) = v36[2].m128i_i64[1];
      *(__m128i *)(v9 + 48) = _mm_loadu_si128(v36 + 3);
      *(__m128i *)(v9 + 64) = _mm_loadu_si128(v36 + 4);
      *(__m128i *)(v9 + 80) = _mm_loadu_si128(v36 + 5);
      *(_DWORD *)(v9 + 96) = v36[6].m128i_i32[0];
      *(_DWORD *)(v9 + 100) = v36[6].m128i_i32[1];
      *(_QWORD *)(v9 + 104) = v36[6].m128i_i64[1];
      *(_DWORD *)(v9 + 112) = v36[7].m128i_i32[0];
      if ( v88 >= v34 )
      {
        v9 = (__int64)v36;
        break;
      }
      v34 = (v34 - 1) / 2;
    }
  }
  v53 = *(__int64 **)v9;
  if ( *(_QWORD *)v9 )
  {
    v12 = (*((_DWORD *)v53 + 26))-- == 1;
    if ( v12 )
    {
      v72 = *(__int64 **)v9;
      if ( *(_QWORD *)v9 )
      {
        sub_254CF0(*(__int64 **)v9);
        v73 = v72[23];
        if ( v73 )
        {
          v74 = v72[24];
          if ( v74 )
          {
            for ( n = 0; n != v74; ++n )
            {
              v76 = (_QWORD *)(v73 + 24 * n);
              if ( *v76 )
              {
                v76[1] = 0;
                qfree();
                v73 = v72[23];
              }
            }
          }
          v72[24] = 0;
          qfree();
        }
        if ( v72[20] )
        {
          v72[21] = 0;
          qfree();
        }
        v77 = v72[16];
        if ( v77 )
        {
          v78 = v72[17];
          if ( v78 )
          {
            for ( ii = 0; ii != v78; ++ii )
            {
              v80 = (_QWORD *)(v77 + 32 * ii);
              if ( *v80 )
              {
                v80[1] = 0;
                qfree();
                v77 = v72[16];
              }
            }
          }
          v72[17] = 0;
          qfree();
        }
        sub_2513D0((__int64)(v72 + 2));
        j__qfree();
      }
    }
  }
  *(_QWORD *)v9 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 104);
  v54 = *(_QWORD *)(v9 + 8);
  v94 = 0;
  v95 = 0;
  if ( v54 )
  {
    *(_QWORD *)(v9 + 16) = 0;
    qfree();
  }
  v55 = _mm_load_si128(&v87);
  v56 = _mm_load_si128(&v97);
  v57 = _mm_load_si128(&v86);
  *(_QWORD *)(v9 + 8) = v89;
  v58 = v90;
  *(__m128i *)(v9 + 48) = v56;
  v59 = v100;
  v60 = _mm_load_si128(&v98);
  *(_DWORD *)(v9 + 100) = v58;
  v61 = v84.m128i_i64[0];
  *(__m128i *)(v9 + 64) = v60;
  v62 = _mm_load_si128(&v99);
  *(_QWORD *)(v9 + 104) = v61;
  LODWORD(v61) = v91;
  *(_DWORD *)(v9 + 96) = v59;
  *(_DWORD *)(v9 + 112) = v61;
  *(__m128i *)(v9 + 16) = v55;
  *(__m128i *)(v9 + 32) = v57;
  *(__m128i *)(v9 + 80) = v62;
  if ( v26 )
  {
    v12 = (*(_DWORD *)(v26 + 104))-- == 1;
    if ( v12 )
    {
      sub_254CF0((__int64 *)v26);
      v63 = *(_QWORD *)(v26 + 184);
      if ( v63 )
      {
        v64 = *(_QWORD *)(v26 + 192);
        if ( v64 )
        {
          for ( jj = 0; jj != v64; ++jj )
          {
            v66 = (_QWORD *)(v63 + 24 * jj);
            if ( *v66 )
            {
              v66[1] = 0;
              qfree();
              v63 = *(_QWORD *)(v26 + 184);
            }
          }
        }
        *(_QWORD *)(v26 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v26 + 160) )
      {
        *(_QWORD *)(v26 + 168) = 0;
        qfree();
      }
      v67 = *(_QWORD *)(v26 + 128);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v26 + 136);
        if ( v68 )
        {
          for ( kk = 0; kk != v68; ++kk )
          {
            v70 = (_QWORD *)(v67 + 32 * kk);
            if ( *v70 )
            {
              v70[1] = 0;
              qfree();
              v67 = *(_QWORD *)(v26 + 128);
            }
          }
        }
        *(_QWORD *)(v26 + 136) = 0;
        qfree();
      }
      sub_2513D0(v26 + 16);
      j__qfree();
    }
  }
  return v104 - __readfsqword(0x28u);
}

