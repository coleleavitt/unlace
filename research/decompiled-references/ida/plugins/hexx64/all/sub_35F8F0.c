unsigned __int64 __fastcall sub_35F8F0(__m128i *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __m128i *v5; // r13
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm0
  __int64 v9; // rcx
  bool v10; // zf
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 i; // r14
  __int64 *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 j; // r14
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm4
  __m128i v34; // xmm0
  __m128i v35; // xmm5
  __int32 v36; // edx
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 n; // rbx
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 ii; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  _QWORD *v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 k; // rdx
  __int64 *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // r8
  __int64 m; // rcx
  __int64 *v61; // rdx
  __int64 v62; // rdi
  __m128i v63; // [rsp+0h] [rbp-108h] BYREF
  __int64 v64; // [rsp+18h] [rbp-F0h]
  __m128i v65; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v66; // [rsp+30h] [rbp-D8h] BYREF
  int v67; // [rsp+40h] [rbp-C8h]
  int v68; // [rsp+44h] [rbp-C4h]
  __int64 v69; // [rsp+48h] [rbp-C0h]
  __int64 v70; // [rsp+50h] [rbp-B8h]
  __int64 v71; // [rsp+58h] [rbp-B0h]
  __m128i v72; // [rsp+60h] [rbp-A8h]
  __m128i v73; // [rsp+70h] [rbp-98h]
  __m128i v74; // [rsp+80h] [rbp-88h] BYREF
  __m128i v75; // [rsp+90h] [rbp-78h] BYREF
  __m128i v76; // [rsp+A0h] [rbp-68h] BYREF
  __int32 v77; // [rsp+B0h] [rbp-58h]
  int v78; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v81; // [rsp+C8h] [rbp-40h]

  v1 = 0;
  v81 = __readfsqword(0x28u);
  v2 = a1->m128i_i64[0];
  v70 = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 104);
    v1 = a1->m128i_i64[0];
  }
  v3 = a1->m128i_i64[1];
  v4 = a1[6].m128i_u64[1];
  v5 = (__m128i *)((char *)a1 - 120);
  v6 = _mm_loadu_si128(a1 + 1);
  a1[1] = 0;
  v64 = v3;
  v7 = _mm_loadu_si128(a1 + 2);
  v71 = v3;
  LODWORD(v3) = a1[6].m128i_i32[0];
  v74 = _mm_loadu_si128(a1 + 3);
  v77 = v3;
  LODWORD(v3) = a1[6].m128i_i32[1];
  v75 = _mm_loadu_si128(a1 + 4);
  v8 = _mm_loadu_si128(a1 + 5);
  v67 = v3;
  v78 = v3;
  LODWORD(v3) = a1[7].m128i_i32[0];
  a1->m128i_i64[1] = 0;
  v79 = v4;
  v68 = v3;
  v80 = v3;
  v65 = v6;
  v66 = v7;
  v72 = v6;
  v73 = v7;
  v76 = v8;
  if ( a1[-1].m128i_i64[0] >= v4 )
  {
    v5 = a1;
  }
  else
  {
    while ( 1 )
    {
      v9 = v5[7].m128i_i64[1];
      if ( v9 )
      {
        v10 = (*(_DWORD *)(v9 + 104))-- == 1;
        if ( v10 )
        {
          v11 = (_QWORD *)v5[7].m128i_i64[1];
          if ( v11 )
          {
            sub_258970((__int64 *)v5[7].m128i_i64[1]);
            v12 = v11[23];
            if ( v12 )
            {
              v13 = v11[24];
              if ( v13 )
              {
                for ( i = 0; i != v13; ++i )
                {
                  v15 = (__int64 *)(v12 + 24 * i);
                  v16 = *v15;
                  if ( *v15 )
                  {
                    v15[1] = 0;
                    qfree(v16);
                    v12 = v11[23];
                  }
                }
              }
              v11[24] = 0;
              qfree(v12);
            }
            v17 = v11[20];
            if ( v17 )
            {
              v11[21] = 0;
              qfree(v17);
            }
            v18 = v11[16];
            if ( v18 )
            {
              v19 = v11[17];
              if ( v19 )
              {
                for ( j = 0; j != v19; ++j )
                {
                  v21 = (__int64 *)(v18 + 32 * j);
                  v22 = *v21;
                  if ( *v21 )
                  {
                    v21[1] = 0;
                    qfree(v22);
                    v18 = v11[16];
                  }
                }
              }
              v11[17] = 0;
              qfree(v18);
            }
            sub_255050((__int64)(v11 + 2), *(double *)v8.m128i_i64);
            j__qfree((__int64)v11);
          }
        }
      }
      v23 = (__int64 *)v5->m128i_i64[0];
      v5[7].m128i_i64[1] = v5->m128i_i64[0];
      if ( v23 )
        ++*((_DWORD *)v23 + 26);
      v24 = v5[8].m128i_i64[0];
      v25 = v5->m128i_i64[1];
      v5->m128i_i64[1] = 0;
      v26 = _mm_loadu_si128(v5 + 1);
      v5[1] = 0;
      if ( v24 )
      {
        v5[8].m128i_i64[1] = 0;
        v63 = v26;
        qfree(v24);
        v26 = _mm_load_si128(&v63);
      }
      v27 = v5[2].m128i_i64[0];
      *(__m128i *)((char *)v5 + 136) = v26;
      v28 = _mm_loadu_si128(v5 + 3);
      v5[8].m128i_i64[0] = v25;
      v5[9].m128i_i64[1] = v27;
      v29 = v5[2].m128i_i64[1];
      *(__m128i *)((char *)v5 + 168) = v28;
      v30 = _mm_loadu_si128(v5 + 4);
      v5[10].m128i_i64[0] = v29;
      LODWORD(v29) = v5[6].m128i_i32[0];
      *(__m128i *)((char *)v5 + 184) = v30;
      v8 = _mm_loadu_si128(v5 + 5);
      v5[13].m128i_i32[2] = v29;
      LODWORD(v29) = v5[6].m128i_i32[1];
      *(__m128i *)((char *)v5 + 200) = v8;
      v5[13].m128i_i32[3] = v29;
      v5[14].m128i_i64[0] = v5[6].m128i_i64[1];
      v5[14].m128i_i32[2] = v5[7].m128i_i32[0];
      if ( v5[-1].m128i_i64[0] >= v4 )
        break;
      v5 = (__m128i *)((char *)v5 - 120);
    }
    v1 = v5->m128i_i64[0];
  }
  if ( v1 )
  {
    v10 = (*(_DWORD *)(v1 + 104))-- == 1;
    if ( v10 )
    {
      v51 = (_QWORD *)v5->m128i_i64[0];
      if ( v5->m128i_i64[0] )
      {
        sub_258970((__int64 *)v5->m128i_i64[0]);
        v52 = v51[23];
        if ( v52 )
        {
          v53 = v51[24];
          if ( v53 )
          {
            for ( k = 0; k != v53; ++k )
            {
              v55 = (__int64 *)(v52 + 24 * k);
              v56 = *v55;
              if ( *v55 )
              {
                v55[1] = 0;
                v69 = v53;
                v63.m128i_i64[0] = k;
                qfree(v56);
                v52 = v51[23];
                v53 = v69;
                k = v63.m128i_i64[0];
              }
            }
          }
          v51[24] = 0;
          qfree(v52);
        }
        v57 = v51[20];
        if ( v57 )
        {
          v51[21] = 0;
          qfree(v57);
        }
        v58 = v51[16];
        if ( v58 )
        {
          v59 = v51[17];
          if ( v59 )
          {
            for ( m = 0; m != v59; ++m )
            {
              v61 = (__int64 *)(v58 + 32 * m);
              v62 = *v61;
              if ( *v61 )
              {
                v61[1] = 0;
                v69 = v59;
                v63.m128i_i64[0] = m;
                qfree(v62);
                v58 = v51[16];
                v59 = v69;
                m = v63.m128i_i64[0];
              }
            }
          }
          v51[17] = 0;
          qfree(v58);
        }
        sub_255050((__int64)(v51 + 2), *(double *)v8.m128i_i64);
        j__qfree((__int64)v51);
      }
    }
  }
  v5->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v31 = v5->m128i_i64[1];
  v71 = 0;
  v72 = 0;
  if ( v31 )
  {
    v5[1].m128i_i64[0] = 0;
    qfree(v31);
  }
  v32 = v64;
  v33 = _mm_load_si128(&v65);
  v5[6].m128i_i64[1] = v4;
  v34 = _mm_load_si128(&v74);
  v35 = _mm_load_si128(&v66);
  v5->m128i_i64[1] = v32;
  LODWORD(v32) = v67;
  v5[3] = v34;
  v36 = v77;
  v37 = _mm_load_si128(&v75);
  v5[6].m128i_i32[1] = v32;
  LODWORD(v32) = v68;
  v5[4] = v37;
  v38 = _mm_load_si128(&v76);
  v5[6].m128i_i32[0] = v36;
  v5[7].m128i_i32[0] = v32;
  v5[1] = v33;
  v5[2] = v35;
  v5[5] = v38;
  if ( v2 )
  {
    v10 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v10 )
    {
      sub_258970((__int64 *)v2);
      v39 = *(_QWORD *)(v2 + 184);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v2 + 192);
        if ( v40 )
        {
          for ( n = 0; n != v40; ++n )
          {
            v42 = (__int64 *)(v39 + 24 * n);
            v43 = *v42;
            if ( *v42 )
            {
              v42[1] = 0;
              qfree(v43);
              v39 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v39);
      }
      v44 = *(_QWORD *)(v2 + 160);
      if ( v44 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v44);
      }
      v45 = *(_QWORD *)(v2 + 128);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v2 + 136);
        if ( v46 )
        {
          for ( ii = 0; ii != v46; ++ii )
          {
            v48 = (__int64 *)(v45 + 32 * ii);
            v49 = *v48;
            if ( *v48 )
            {
              v48[1] = 0;
              qfree(v49);
              v45 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v45);
      }
      sub_255050(v2 + 16, *(double *)v38.m128i_i64);
      j__qfree(v2);
    }
  }
  return v81 - __readfsqword(0x28u);
}

