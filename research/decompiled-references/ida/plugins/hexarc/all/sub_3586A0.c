unsigned __int64 __fastcall sub_3586A0(__m128i *a1, __m128i *a2)
{
  const __m128i *v2; // rbp
  unsigned __int64 v4; // rax
  const __m128i *v5; // rdi
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
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  bool v19; // zf
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 i; // rbx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 j; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r14
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // r15
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rbx
  _QWORD *v50; // r15
  _QWORD *v51; // rax
  __int64 v52; // rdi
  __m128i v53; // xmm6
  __m128i v54; // xmm0
  __m128i v55; // xmm7
  __int32 v56; // eax
  __m128i v57; // xmm0
  __int32 v58; // eax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 k; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 m; // rbx
  _QWORD *v68; // rax
  __m128i v70; // [rsp+0h] [rbp-118h] BYREF
  __int64 v71; // [rsp+18h] [rbp-100h]
  const __m128i *v72; // [rsp+20h] [rbp-F8h]
  __int64 v73; // [rsp+28h] [rbp-F0h]
  __m128i v74; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v75; // [rsp+40h] [rbp-D8h] BYREF
  __int32 v76; // [rsp+50h] [rbp-C8h]
  int v77; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v78; // [rsp+58h] [rbp-C0h]
  __int64 v79; // [rsp+60h] [rbp-B8h]
  __int64 v80; // [rsp+68h] [rbp-B0h]
  __m128i v81; // [rsp+70h] [rbp-A8h]
  __m128i v82; // [rsp+80h] [rbp-98h]
  __m128i v83; // [rsp+90h] [rbp-88h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v85; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v86; // [rsp+C0h] [rbp-58h]
  __int32 v87; // [rsp+C4h] [rbp-54h]
  __int64 v88; // [rsp+C8h] [rbp-50h]
  int v89; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v90; // [rsp+D8h] [rbp-40h]

  v72 = a2;
  v90 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = (__m128i *)((char *)a1 + 120);
    if ( a2 != (__m128i *)&a1[7].m128i_u64[1] )
    {
      do
      {
        v4 = v2[6].m128i_u64[1];
        v5 = v2;
        v2 = (const __m128i *)((char *)v2 + 120);
        v71 = v4;
        if ( a1[6].m128i_i64[1] >= v4 )
        {
          sub_358070(v5);
        }
        else
        {
          v6 = v2[-8].m128i_i64[1];
          v79 = v6;
          if ( v6 )
          {
            ++*(_DWORD *)(v6 + 104);
            v71 = v2[-1].m128i_i64[0];
          }
          v7 = _mm_loadu_si128((const __m128i *)((char *)v2 - 72));
          v8 = (char *)v5 - (char *)a1;
          v9 = _mm_loadu_si128((const __m128i *)((char *)v2 - 104));
          v10 = _mm_loadu_si128((const __m128i *)((char *)v2 - 88));
          v11 = (__int64)v2;
          v73 = v2[-7].m128i_i64[0];
          v80 = v73;
          v12 = v2[-2].m128i_i32[2];
          v83 = v7;
          v13 = _mm_loadu_si128((const __m128i *)((char *)v2 - 56));
          v86 = v12;
          v14 = v2[-2].m128i_i32[3];
          v84 = v13;
          v15 = _mm_loadu_si128((const __m128i *)((char *)v2 - 40));
          v76 = v14;
          v87 = v14;
          v16 = v71;
          v2[-7].m128i_i64[0] = 0;
          v88 = v16;
          LODWORD(v16) = v2[-1].m128i_i32[2];
          v75 = v9;
          v77 = v16;
          v89 = v16;
          v17 = 0xEEEEEEEEEEEEEEEFLL * (v8 >> 3);
          v74 = v10;
          *(const __m128i *)((char *)&v2[-7] + 8) = 0;
          v81 = v9;
          v82 = v10;
          v85 = v15;
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
                    sub_2515F0(*(__int64 **)v11);
                    v21 = v20[23];
                    if ( v21 )
                    {
                      v22 = v20[24];
                      if ( v22 )
                      {
                        v70.m128i_i64[0] = v11;
                        v23 = v22;
                        v78 = v17;
                        for ( i = 0; i != v23; ++i )
                        {
                          v25 = (_QWORD *)(v21 + 24 * i);
                          if ( *v25 )
                          {
                            v25[1] = 0;
                            qfree();
                            v21 = v20[23];
                          }
                        }
                        v11 = v70.m128i_i64[0];
                        v17 = v78;
                      }
                      v20[24] = 0;
                      qfree();
                    }
                    if ( v20[20] )
                    {
                      v20[21] = 0;
                      qfree();
                    }
                    v26 = v20[16];
                    if ( v26 )
                    {
                      v27 = v20[17];
                      if ( v27 )
                      {
                        v70.m128i_i64[0] = v11;
                        v28 = v27;
                        v78 = v17;
                        for ( j = 0; j != v28; ++j )
                        {
                          v30 = (_QWORD *)(v26 + 32 * j);
                          if ( *v30 )
                          {
                            v30[1] = 0;
                            qfree();
                            v26 = v20[16];
                          }
                        }
                        v11 = v70.m128i_i64[0];
                        v17 = v78;
                      }
                      v20[17] = 0;
                      qfree();
                    }
                    sub_24DCD0((__int64)(v20 + 2));
                    j__qfree();
                  }
                }
              }
              v31 = *(_QWORD *)(v11 - 120);
              *(_QWORD *)v11 = v31;
              if ( v31 )
                ++*(_DWORD *)(v31 + 104);
              v32 = *(_QWORD *)(v11 + 8);
              v33 = *(_QWORD *)(v11 - 112);
              *(_QWORD *)(v11 - 112) = 0;
              v34 = _mm_loadu_si128((const __m128i *)(v11 - 104));
              *(_OWORD *)(v11 - 104) = 0;
              if ( v32 )
              {
                *(_QWORD *)(v11 + 16) = 0;
                v70 = v34;
                qfree();
                v34 = _mm_load_si128(&v70);
              }
              v35 = *(_QWORD *)(v11 - 88);
              *(__m128i *)(v11 + 16) = v34;
              v36 = _mm_loadu_si128((const __m128i *)(v11 - 72));
              *(_QWORD *)(v11 + 8) = v33;
              *(_QWORD *)(v11 + 32) = v35;
              v37 = *(_QWORD *)(v11 - 80);
              *(__m128i *)(v11 + 48) = v36;
              v38 = _mm_loadu_si128((const __m128i *)(v11 - 56));
              *(_QWORD *)(v11 + 40) = v37;
              LODWORD(v37) = *(_DWORD *)(v11 - 24);
              *(__m128i *)(v11 + 64) = v38;
              v39 = _mm_loadu_si128((const __m128i *)(v11 - 40));
              *(_DWORD *)(v11 + 96) = v37;
              LODWORD(v37) = *(_DWORD *)(v11 - 20);
              *(__m128i *)(v11 + 80) = v39;
              *(_DWORD *)(v11 + 100) = v37;
              *(_QWORD *)(v11 + 104) = *(_QWORD *)(v11 - 16);
              *(_DWORD *)(v11 + 112) = *(_DWORD *)(v11 - 8);
              --v17;
            }
            while ( v17 );
          }
          v40 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] )
          {
            v19 = (*(_DWORD *)(v40 + 104))-- == 1;
            if ( v19 )
            {
              if ( a1->m128i_i64[0] )
              {
                v70.m128i_i64[0] = a1->m128i_i64[0];
                sub_2515F0((__int64 *)v70.m128i_i64[0]);
                v41 = (_QWORD *)v70.m128i_i64[0];
                v42 = *(_QWORD *)(v70.m128i_i64[0] + 184);
                if ( v42 )
                {
                  v43 = *(_QWORD *)(v70.m128i_i64[0] + 192);
                  if ( v43 )
                  {
                    v44 = 0;
                    v45 = v70.m128i_i64[0];
                    do
                    {
                      v46 = (_QWORD *)(v42 + 24 * v44);
                      if ( *v46 )
                      {
                        v46[1] = 0;
                        qfree();
                        v42 = *(_QWORD *)(v45 + 184);
                      }
                      ++v44;
                    }
                    while ( v43 != v44 );
                    v41 = (_QWORD *)v45;
                  }
                  v41[24] = 0;
                  v70.m128i_i64[0] = (__int64)v41;
                  qfree();
                  v41 = (_QWORD *)v70.m128i_i64[0];
                }
                if ( v41[20] )
                {
                  v41[21] = 0;
                  v70.m128i_i64[0] = (__int64)v41;
                  qfree();
                  v41 = (_QWORD *)v70.m128i_i64[0];
                }
                v47 = v41[16];
                if ( v47 )
                {
                  v48 = v41[17];
                  if ( v48 )
                  {
                    v49 = 0;
                    v50 = v41;
                    do
                    {
                      v51 = (_QWORD *)(v47 + 32 * v49);
                      if ( *v51 )
                      {
                        v51[1] = 0;
                        qfree();
                        v47 = v50[16];
                      }
                      ++v49;
                    }
                    while ( v48 != v49 );
                    v41 = v50;
                  }
                  v41[17] = 0;
                  v70.m128i_i64[0] = (__int64)v41;
                  qfree();
                  v41 = (_QWORD *)v70.m128i_i64[0];
                }
                v70.m128i_i64[0] = (__int64)v41;
                sub_24DCD0((__int64)(v41 + 2));
                j__qfree();
              }
            }
          }
          a1->m128i_i64[0] = v6;
          if ( v6 )
            ++*(_DWORD *)(v6 + 104);
          v52 = a1->m128i_i64[1];
          v80 = 0;
          v81 = 0;
          if ( v52 )
          {
            a1[1].m128i_i64[0] = 0;
            qfree();
          }
          v53 = _mm_load_si128(&v75);
          v54 = _mm_load_si128(&v83);
          v55 = _mm_load_si128(&v74);
          a1->m128i_i64[1] = v73;
          v56 = v86;
          a1[3] = v54;
          v57 = _mm_load_si128(&v84);
          a1[6].m128i_i32[0] = v56;
          v58 = v76;
          a1[4] = v57;
          v59 = _mm_load_si128(&v85);
          a1[6].m128i_i32[1] = v58;
          v60 = v71;
          a1[1] = v53;
          a1[6].m128i_i64[1] = v60;
          LODWORD(v60) = v77;
          a1[2] = v55;
          a1[7].m128i_i32[0] = v60;
          a1[5] = v59;
          if ( v6 )
          {
            v19 = (*(_DWORD *)(v6 + 104))-- == 1;
            if ( v19 )
            {
              sub_2515F0((__int64 *)v6);
              v61 = *(_QWORD *)(v6 + 184);
              if ( v61 )
              {
                v62 = *(_QWORD *)(v6 + 192);
                if ( v62 )
                {
                  for ( k = 0; k != v62; ++k )
                  {
                    v64 = (_QWORD *)(v61 + 24 * k);
                    if ( *v64 )
                    {
                      v64[1] = 0;
                      qfree();
                      v61 = *(_QWORD *)(v6 + 184);
                    }
                  }
                }
                *(_QWORD *)(v6 + 192) = 0;
                qfree();
              }
              if ( *(_QWORD *)(v6 + 160) )
              {
                *(_QWORD *)(v6 + 168) = 0;
                qfree();
              }
              v65 = *(_QWORD *)(v6 + 128);
              if ( v65 )
              {
                v66 = *(_QWORD *)(v6 + 136);
                if ( v66 )
                {
                  for ( m = 0; m != v66; ++m )
                  {
                    v68 = (_QWORD *)(v65 + 32 * m);
                    if ( *v68 )
                    {
                      v68[1] = 0;
                      qfree();
                      v65 = *(_QWORD *)(v6 + 128);
                    }
                  }
                }
                *(_QWORD *)(v6 + 136) = 0;
                qfree();
              }
              sub_24DCD0(v6 + 16);
              j__qfree();
            }
          }
        }
      }
      while ( v72 != v2 );
    }
  }
  return v90 - __readfsqword(0x28u);
}

