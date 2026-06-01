unsigned __int64 __fastcall sub_35FF20(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // rbp
  unsigned __int64 v4; // rax
  __m128i *v5; // rdi
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // r15
  __int32 v12; // eax
  __m128i v13; // xmm0
  __int32 v14; // eax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  bool v19; // zf
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 i; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 j; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rbx
  _QWORD *v54; // r15
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __m128i v58; // xmm6
  __m128i v59; // xmm0
  __m128i v60; // xmm7
  __int32 v61; // eax
  __m128i v62; // xmm0
  __int32 v63; // eax
  __m128i v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r14
  __int64 k; // rbx
  __int64 *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r14
  __int64 m; // rbx
  __int64 *v75; // rax
  __int64 v76; // rdi
  __m128i v78; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int64 v79; // [rsp+18h] [rbp-100h]
  __m128i *v80; // [rsp+20h] [rbp-F8h]
  __int64 v81; // [rsp+28h] [rbp-F0h]
  __m128i v82; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v83; // [rsp+40h] [rbp-D8h] BYREF
  __int32 v84; // [rsp+50h] [rbp-C8h]
  int v85; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v86; // [rsp+58h] [rbp-C0h]
  __int64 v87; // [rsp+60h] [rbp-B8h]
  __int64 v88; // [rsp+68h] [rbp-B0h]
  __m128i v89; // [rsp+70h] [rbp-A8h]
  __m128i v90; // [rsp+80h] [rbp-98h]
  __m128i v91; // [rsp+90h] [rbp-88h] BYREF
  __m128i v92; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v93; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v94; // [rsp+C0h] [rbp-58h]
  __int32 v95; // [rsp+C4h] [rbp-54h]
  unsigned __int64 v96; // [rsp+C8h] [rbp-50h]
  int v97; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-40h]

  v80 = a2;
  v98 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = (__m128i *)((char *)a1 + 120);
    if ( a2 != (__m128i *)&a1[7].m128i_u64[1] )
    {
      do
      {
        v4 = v2[6].m128i_u64[1];
        v5 = v2;
        v2 = (__m128i *)((char *)v2 + 120);
        v79 = v4;
        if ( a1[6].m128i_i64[1] >= v4 )
        {
          sub_35F8F0(v5);
        }
        else
        {
          v6 = v2[-8].m128i_i64[1];
          v87 = v6;
          if ( v6 )
          {
            ++*(_DWORD *)(v6 + 104);
            v79 = v2[-1].m128i_u64[0];
          }
          v7 = _mm_loadu_si128((__m128i *)((char *)v2 - 72));
          v8 = (char *)v5 - (char *)a1;
          v9 = _mm_loadu_si128((__m128i *)((char *)v2 - 104));
          v10 = _mm_loadu_si128((__m128i *)((char *)v2 - 88));
          v11 = (__int64)v2;
          v81 = v2[-7].m128i_i64[0];
          v88 = v81;
          v12 = v2[-2].m128i_i32[2];
          v91 = v7;
          v13 = _mm_loadu_si128((__m128i *)((char *)v2 - 56));
          v94 = v12;
          v14 = v2[-2].m128i_i32[3];
          v92 = v13;
          v15 = _mm_loadu_si128((__m128i *)((char *)v2 - 40));
          v84 = v14;
          v95 = v14;
          v16 = v79;
          v2[-7].m128i_i64[0] = 0;
          v96 = v16;
          LODWORD(v16) = v2[-1].m128i_i32[2];
          v83 = v9;
          v85 = v16;
          v97 = v16;
          v17 = 0xEEEEEEEEEEEEEEEFLL * (v8 >> 3);
          v82 = v10;
          *(__m128i *)((char *)&v2[-7] + 8) = 0;
          v89 = v9;
          v90 = v10;
          v93 = v15;
          if ( v8 > 0 )
          {
            do
            {
              v18 = *(_QWORD *)(v11 - 120);
              v11 -= 120;
              if ( v18 )
              {
                v19 = (*(_DWORD *)(v18 + 104))-- == 1;
                if ( v19 )
                {
                  v20 = *(__int64 **)v11;
                  if ( *(_QWORD *)v11 )
                  {
                    sub_258970(*(__int64 **)v11);
                    v21 = v20[23];
                    if ( v21 )
                    {
                      v22 = v20[24];
                      if ( v22 )
                      {
                        v78.m128i_i64[0] = v11;
                        v23 = v22;
                        v86 = v17;
                        for ( i = 0; i != v23; ++i )
                        {
                          v25 = (__int64 *)(v21 + 24 * i);
                          v26 = *v25;
                          if ( *v25 )
                          {
                            v25[1] = 0;
                            qfree(v26);
                            v21 = v20[23];
                          }
                        }
                        v11 = v78.m128i_i64[0];
                        v17 = v86;
                      }
                      v20[24] = 0;
                      qfree(v21);
                    }
                    v27 = v20[20];
                    if ( v27 )
                    {
                      v20[21] = 0;
                      qfree(v27);
                    }
                    v28 = v20[16];
                    if ( v28 )
                    {
                      v29 = v20[17];
                      if ( v29 )
                      {
                        v78.m128i_i64[0] = v11;
                        v30 = v29;
                        v86 = v17;
                        for ( j = 0; j != v30; ++j )
                        {
                          v32 = (__int64 *)(v28 + 32 * j);
                          v33 = *v32;
                          if ( *v32 )
                          {
                            v32[1] = 0;
                            qfree(v33);
                            v28 = v20[16];
                          }
                        }
                        v11 = v78.m128i_i64[0];
                        v17 = v86;
                      }
                      v20[17] = 0;
                      qfree(v28);
                    }
                    sub_255050((__int64)(v20 + 2), *(double *)v15.m128i_i64);
                    j__qfree((__int64)v20);
                  }
                }
              }
              v34 = *(_QWORD *)(v11 - 120);
              *(_QWORD *)v11 = v34;
              if ( v34 )
                ++*(_DWORD *)(v34 + 104);
              v35 = *(_QWORD *)(v11 + 8);
              v36 = *(_QWORD *)(v11 - 112);
              *(_QWORD *)(v11 - 112) = 0;
              v37 = _mm_loadu_si128((const __m128i *)(v11 - 104));
              *(_OWORD *)(v11 - 104) = 0;
              if ( v35 )
              {
                *(_QWORD *)(v11 + 16) = 0;
                v78 = v37;
                qfree(v35);
                v37 = _mm_load_si128(&v78);
              }
              v38 = *(_QWORD *)(v11 - 88);
              *(__m128i *)(v11 + 16) = v37;
              v39 = _mm_loadu_si128((const __m128i *)(v11 - 72));
              *(_QWORD *)(v11 + 8) = v36;
              *(_QWORD *)(v11 + 32) = v38;
              v40 = *(_QWORD *)(v11 - 80);
              *(__m128i *)(v11 + 48) = v39;
              v41 = _mm_loadu_si128((const __m128i *)(v11 - 56));
              *(_QWORD *)(v11 + 40) = v40;
              LODWORD(v40) = *(_DWORD *)(v11 - 24);
              *(__m128i *)(v11 + 64) = v41;
              v15 = _mm_loadu_si128((const __m128i *)(v11 - 40));
              *(_DWORD *)(v11 + 96) = v40;
              LODWORD(v40) = *(_DWORD *)(v11 - 20);
              *(__m128i *)(v11 + 80) = v15;
              *(_DWORD *)(v11 + 100) = v40;
              *(_QWORD *)(v11 + 104) = *(_QWORD *)(v11 - 16);
              *(_DWORD *)(v11 + 112) = *(_DWORD *)(v11 - 8);
              --v17;
            }
            while ( v17 );
          }
          v42 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] )
          {
            v19 = (*(_DWORD *)(v42 + 104))-- == 1;
            if ( v19 )
            {
              if ( a1->m128i_i64[0] )
              {
                v78.m128i_i64[0] = a1->m128i_i64[0];
                sub_258970((__int64 *)v78.m128i_i64[0]);
                v43 = (_QWORD *)v78.m128i_i64[0];
                v44 = *(_QWORD *)(v78.m128i_i64[0] + 184);
                if ( v44 )
                {
                  v45 = *(_QWORD *)(v78.m128i_i64[0] + 192);
                  if ( v45 )
                  {
                    v46 = 0;
                    v47 = v78.m128i_i64[0];
                    do
                    {
                      v48 = (__int64 *)(v44 + 24 * v46);
                      v49 = *v48;
                      if ( *v48 )
                      {
                        v48[1] = 0;
                        qfree(v49);
                        v44 = *(_QWORD *)(v47 + 184);
                      }
                      ++v46;
                    }
                    while ( v45 != v46 );
                    v43 = (_QWORD *)v47;
                  }
                  v43[24] = 0;
                  v78.m128i_i64[0] = (__int64)v43;
                  qfree(v44);
                  v43 = (_QWORD *)v78.m128i_i64[0];
                }
                v50 = v43[20];
                if ( v50 )
                {
                  v43[21] = 0;
                  v78.m128i_i64[0] = (__int64)v43;
                  qfree(v50);
                  v43 = (_QWORD *)v78.m128i_i64[0];
                }
                v51 = v43[16];
                if ( v51 )
                {
                  v52 = v43[17];
                  if ( v52 )
                  {
                    v53 = 0;
                    v54 = v43;
                    do
                    {
                      v55 = (__int64 *)(v51 + 32 * v53);
                      v56 = *v55;
                      if ( *v55 )
                      {
                        v55[1] = 0;
                        qfree(v56);
                        v51 = v54[16];
                      }
                      ++v53;
                    }
                    while ( v52 != v53 );
                    v43 = v54;
                  }
                  v43[17] = 0;
                  v78.m128i_i64[0] = (__int64)v43;
                  qfree(v51);
                  v43 = (_QWORD *)v78.m128i_i64[0];
                }
                v78.m128i_i64[0] = (__int64)v43;
                sub_255050((__int64)(v43 + 2), *(double *)v15.m128i_i64);
                j__qfree(v78.m128i_i64[0]);
              }
            }
          }
          a1->m128i_i64[0] = v6;
          if ( v6 )
            ++*(_DWORD *)(v6 + 104);
          v57 = a1->m128i_i64[1];
          v88 = 0;
          v89 = 0;
          if ( v57 )
          {
            a1[1].m128i_i64[0] = 0;
            qfree(v57);
          }
          v58 = _mm_load_si128(&v83);
          v59 = _mm_load_si128(&v91);
          v60 = _mm_load_si128(&v82);
          a1->m128i_i64[1] = v81;
          v61 = v94;
          a1[3] = v59;
          v62 = _mm_load_si128(&v92);
          a1[6].m128i_i32[0] = v61;
          v63 = v84;
          a1[4] = v62;
          v64 = _mm_load_si128(&v93);
          a1[6].m128i_i32[1] = v63;
          v65 = v79;
          a1[1] = v58;
          a1[6].m128i_i64[1] = v65;
          LODWORD(v65) = v85;
          a1[2] = v60;
          a1[7].m128i_i32[0] = v65;
          a1[5] = v64;
          if ( v6 )
          {
            v19 = (*(_DWORD *)(v6 + 104))-- == 1;
            if ( v19 )
            {
              sub_258970((__int64 *)v6);
              v66 = *(_QWORD *)(v6 + 184);
              if ( v66 )
              {
                v67 = *(_QWORD *)(v6 + 192);
                if ( v67 )
                {
                  for ( k = 0; k != v67; ++k )
                  {
                    v69 = (__int64 *)(v66 + 24 * k);
                    v70 = *v69;
                    if ( *v69 )
                    {
                      v69[1] = 0;
                      qfree(v70);
                      v66 = *(_QWORD *)(v6 + 184);
                    }
                  }
                }
                *(_QWORD *)(v6 + 192) = 0;
                qfree(v66);
              }
              v71 = *(_QWORD *)(v6 + 160);
              if ( v71 )
              {
                *(_QWORD *)(v6 + 168) = 0;
                qfree(v71);
              }
              v72 = *(_QWORD *)(v6 + 128);
              if ( v72 )
              {
                v73 = *(_QWORD *)(v6 + 136);
                if ( v73 )
                {
                  for ( m = 0; m != v73; ++m )
                  {
                    v75 = (__int64 *)(v72 + 32 * m);
                    v76 = *v75;
                    if ( *v75 )
                    {
                      v75[1] = 0;
                      qfree(v76);
                      v72 = *(_QWORD *)(v6 + 128);
                    }
                  }
                }
                *(_QWORD *)(v6 + 136) = 0;
                qfree(v72);
              }
              sub_255050(v6 + 16, *(double *)v64.m128i_i64);
              j__qfree(v6);
            }
          }
        }
      }
      while ( v80 != v2 );
    }
  }
  return v98 - __readfsqword(0x28u);
}

