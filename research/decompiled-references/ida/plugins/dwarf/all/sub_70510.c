__int64 __fastcall sub_70510(__m128i *a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // r14
  unsigned __int64 v5; // r13
  signed __int64 v6; // rdi
  __int64 v7; // rsi
  __m128i *v8; // r12
  __m128i *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm7
  __int64 v31; // rdi
  __m128i v32; // xmm1
  __m128i *v33; // rbp
  __m128i *v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r13
  __m128i v38; // xmm4
  __int64 v39; // r15
  __m128i v40; // xmm5
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __m128i v47; // xmm0
  __int64 v48; // rdi
  __int64 v49; // rcx
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __m128i v55; // xmm7
  __int64 v56; // rdi
  __m128i v57; // xmm1
  __int64 v59; // rbx
  __m128i v60; // xmm0
  __m128i *v61; // rbp
  __m128i v62; // xmm4
  __m128i v63; // xmm5
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r13
  __int64 v69; // r15
  __m128i v70; // xmm1
  __int64 v71; // rsi
  __m128i v72; // xmm1
  __int64 v73; // rdi
  __int64 v74; // rsi
  __m128i v75; // xmm1
  __int64 v76; // rdi
  __int64 v77; // rdi
  __m128i v78; // xmm6
  __int64 v79; // rdi
  __m128i v80; // xmm7
  __m128i v81; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v82; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v83; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v84; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v85; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-90h]
  __m128i v87; // [rsp+60h] [rbp-88h] BYREF
  __m128i v88; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v89; // [rsp+80h] [rbp-68h]
  signed __int64 v90; // [rsp+88h] [rbp-60h]
  __m128i *v91; // [rsp+90h] [rbp-58h]
  __m128i *v92; // [rsp+98h] [rbp-50h]
  __int64 v93; // [rsp+A0h] [rbp-48h]
  __int64 v94; // [rsp+A8h] [rbp-40h]

  if ( a1 == (__m128i *)a2 )
    return a3;
  if ( a2 == a3 )
    return (__int64)a1;
  v4 = a1;
  v5 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - (__int64)a1) >> 4);
  v6 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - (__int64)a1) >> 4);
  if ( v6 == v5 - v6 )
  {
    v83.m128i_i64[0] = a2;
    v59 = a2;
    v60 = 0;
    v61 = a1;
    do
    {
      v62 = _mm_loadu_si128((__m128i *)((char *)v61 + 40));
      v63 = _mm_loadu_si128(v61 + 4);
      *(__m128i *)((char *)v61 + 40) = v60;
      v61[4] = v60;
      v64 = v61[2].m128i_i64[0];
      v65 = v61[3].m128i_i64[1];
      v66 = v61->m128i_i64[0];
      v67 = v61->m128i_i64[1];
      v61[2].m128i_i64[0] = 0;
      v68 = v61[1].m128i_i64[0];
      v69 = v61[1].m128i_i64[1];
      v82 = v62;
      v61[3].m128i_i64[1] = 0;
      v70 = _mm_loadu_si128((const __m128i *)v59);
      v81 = v63;
      *v61 = v70;
      v61[1] = _mm_loadu_si128((const __m128i *)(v59 + 16));
      v71 = *(_QWORD *)(v59 + 32);
      v72 = _mm_loadu_si128((const __m128i *)(v59 + 40));
      *(_QWORD *)(v59 + 32) = 0;
      *(__m128i *)(v59 + 40) = v60;
      v73 = v61[2].m128i_i64[0];
      if ( v73 )
      {
        v61[2].m128i_i64[1] = 0;
        v86 = v67;
        v85.m128i_i64[0] = v66;
        v84.m128i_i64[0] = v71;
        v87 = v72;
        qfree(v73);
        v72 = _mm_load_si128(&v87);
        v67 = v86;
        v60 = 0;
        v66 = v85.m128i_i64[0];
        v71 = v84.m128i_i64[0];
      }
      v61[2].m128i_i64[0] = v71;
      *(__m128i *)((char *)v61 + 40) = v72;
      v74 = *(_QWORD *)(v59 + 56);
      v75 = _mm_loadu_si128((const __m128i *)(v59 + 64));
      *(_QWORD *)(v59 + 56) = 0;
      *(__m128i *)(v59 + 64) = v60;
      v76 = v61[3].m128i_i64[1];
      if ( v76 )
      {
        v61[4].m128i_i64[0] = 0;
        v86 = v67;
        v85.m128i_i64[0] = v66;
        v84.m128i_i64[0] = v74;
        v87 = v75;
        qfree(v76);
        v75 = _mm_load_si128(&v87);
        v67 = v86;
        v60 = 0;
        v66 = v85.m128i_i64[0];
        v74 = v84.m128i_i64[0];
      }
      v61[3].m128i_i64[1] = v74;
      v61[4] = v75;
      v77 = *(_QWORD *)(v59 + 32);
      *(_QWORD *)v59 = v66;
      *(_QWORD *)(v59 + 8) = v67;
      *(_QWORD *)(v59 + 16) = v68;
      *(_QWORD *)(v59 + 24) = v69;
      if ( v77 )
      {
        *(_QWORD *)(v59 + 40) = 0;
        qfree(v77);
        v60 = 0;
      }
      v78 = _mm_load_si128(&v82);
      v79 = *(_QWORD *)(v59 + 56);
      *(_QWORD *)(v59 + 32) = v64;
      *(__m128i *)(v59 + 40) = v78;
      if ( v79 )
      {
        *(_QWORD *)(v59 + 64) = 0;
        qfree(v79);
        v60 = 0;
      }
      v80 = _mm_load_si128(&v81);
      *(_QWORD *)(v59 + 56) = v65;
      v61 += 5;
      v59 += 80;
      *(__m128i *)(v59 - 16) = v80;
    }
    while ( (__m128i *)v83.m128i_i64[0] != v61 );
    return v83.m128i_i64[0];
  }
  else
  {
    v93 = a2;
    v7 = v5 - v6;
    v92 = a1;
    v94 = a3;
    if ( v6 >= (__int64)(v5 - v6) )
      goto LABEL_20;
    while ( 1 )
    {
      v8 = &v4[5 * v6];
      if ( v7 > 0 )
      {
        v89 = v5;
        v9 = v4;
        v10 = 0;
        v86 = v7;
        v90 = v6;
        v91 = v4;
        do
        {
          v11 = v9->m128i_i64[0];
          v12 = _mm_loadu_si128((__m128i *)((char *)v9 + 40));
          v13 = _mm_loadu_si128(v9 + 4);
          *(__m128i *)((char *)&v9[2] + 8) = 0;
          v14 = v9[2].m128i_i64[0];
          v9[4] = 0;
          v15 = v9[1].m128i_i64[0];
          v16 = v9[1].m128i_i64[1];
          v82.m128i_i64[0] = v11;
          v17 = v9->m128i_i64[1];
          v9[2].m128i_i64[0] = 0;
          v81.m128i_i64[0] = v17;
          v18 = v9[3].m128i_i64[1];
          v9[3].m128i_i64[1] = 0;
          v19 = _mm_loadu_si128(v8);
          v85.m128i_i64[0] = v18;
          *v9 = v19;
          v20 = _mm_loadu_si128(v8 + 1);
          v83 = v12;
          v9[1] = v20;
          v21 = v8[2].m128i_i64[0];
          v22 = _mm_loadu_si128((__m128i *)((char *)v8 + 40));
          v8[2].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v8[2] + 8) = 0;
          v23 = v9[2].m128i_i64[0];
          v84 = v13;
          if ( v23 )
          {
            v9[2].m128i_i64[1] = 0;
            v87.m128i_i64[0] = v21;
            v88 = v22;
            qfree(v23);
            v22 = _mm_load_si128(&v88);
            v21 = v87.m128i_i64[0];
          }
          v9[2].m128i_i64[0] = v21;
          *(__m128i *)((char *)v9 + 40) = v22;
          v24 = v8[3].m128i_i64[1];
          v25 = _mm_loadu_si128(v8 + 4);
          v8[3].m128i_i64[1] = 0;
          v8[4] = 0;
          v26 = v9[3].m128i_i64[1];
          if ( v26 )
          {
            v9[4].m128i_i64[0] = 0;
            v87.m128i_i64[0] = v24;
            v88 = v25;
            qfree(v26);
            v25 = _mm_load_si128(&v88);
            v24 = v87.m128i_i64[0];
          }
          v27 = v82.m128i_i64[0];
          v9[3].m128i_i64[1] = v24;
          v9[4] = v25;
          v28 = v8[2].m128i_i64[0];
          v8->m128i_i64[0] = v27;
          v29 = v81.m128i_i64[0];
          v8[1].m128i_i64[0] = v15;
          v8->m128i_i64[1] = v29;
          v8[1].m128i_i64[1] = v16;
          if ( v28 )
          {
            v8[2].m128i_i64[1] = 0;
            qfree(v28);
          }
          v30 = _mm_load_si128(&v83);
          v31 = v8[3].m128i_i64[1];
          v8[2].m128i_i64[0] = v14;
          *(__m128i *)((char *)v8 + 40) = v30;
          if ( v31 )
          {
            v8[4].m128i_i64[0] = 0;
            qfree(v31);
          }
          v9 += 5;
          v8 += 5;
          ++v10;
          v32 = _mm_load_si128(&v84);
          v8[-2].m128i_i64[1] = v85.m128i_i64[0];
          v8[-1] = v32;
        }
        while ( v86 != v10 );
        v5 = v89;
        v6 = v90;
        v4 = &v91[5 * v86];
      }
      if ( !(v5 % v6) )
        break;
      v7 = v6;
      v6 -= v5 % v6;
      while ( 1 )
      {
        v5 = v7;
        v7 -= v6;
        if ( v6 < v7 )
          break;
LABEL_20:
        v33 = &v4[5 * v5];
        v4 = &v33[-5 * v7];
        if ( v6 > 0 )
        {
          v89 = v5;
          v34 = &v33[-5 * v7];
          v35 = 0;
          v90 = v7;
          v86 = v6;
          v91 = v34;
          do
          {
            v36 = v34[-5].m128i_i64[0];
            v33 -= 5;
            v37 = v34[-3].m128i_i64[0];
            v38 = _mm_loadu_si128((__m128i *)((char *)v34 - 40));
            *(__m128i *)((char *)&v34[-3] + 8) = 0;
            v39 = v34[-4].m128i_i64[0];
            v34 -= 5;
            v40 = _mm_loadu_si128(v34 + 4);
            v41 = v34[1].m128i_i64[1];
            v81.m128i_i64[0] = v36;
            v42 = v34->m128i_i64[1];
            v34[2].m128i_i64[0] = 0;
            v34[4] = 0;
            v84.m128i_i64[0] = v42;
            v43 = v34[3].m128i_i64[1];
            v34[3].m128i_i64[1] = 0;
            v44 = _mm_loadu_si128(v33);
            v83.m128i_i64[0] = v43;
            *v34 = v44;
            v45 = _mm_loadu_si128(v33 + 1);
            v82 = v38;
            v34[1] = v45;
            v46 = v33[2].m128i_i64[0];
            v47 = _mm_loadu_si128((__m128i *)((char *)v33 + 40));
            v33[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v33[2] + 8) = 0;
            v48 = v34[2].m128i_i64[0];
            v85 = v40;
            if ( v48 )
            {
              v34[2].m128i_i64[1] = 0;
              v88.m128i_i64[0] = v46;
              v87 = v47;
              qfree(v48);
              v46 = v88.m128i_i64[0];
              v47 = _mm_load_si128(&v87);
            }
            v34[2].m128i_i64[0] = v46;
            *(__m128i *)((char *)v34 + 40) = v47;
            v49 = v33[3].m128i_i64[1];
            v50 = _mm_loadu_si128(v33 + 4);
            v33[3].m128i_i64[1] = 0;
            v33[4] = 0;
            v51 = v34[3].m128i_i64[1];
            if ( v51 )
            {
              v34[4].m128i_i64[0] = 0;
              v88.m128i_i64[0] = v49;
              v87 = v50;
              qfree(v51);
              v49 = v88.m128i_i64[0];
              v50 = _mm_load_si128(&v87);
            }
            v52 = v81.m128i_i64[0];
            v34[3].m128i_i64[1] = v49;
            v34[4] = v50;
            v53 = v33[2].m128i_i64[0];
            v33->m128i_i64[0] = v52;
            v54 = v84.m128i_i64[0];
            v33[1].m128i_i64[0] = v39;
            v33->m128i_i64[1] = v54;
            v33[1].m128i_i64[1] = v41;
            if ( v53 )
            {
              v33[2].m128i_i64[1] = 0;
              qfree(v53);
            }
            v55 = _mm_load_si128(&v82);
            v56 = v33[3].m128i_i64[1];
            v33[2].m128i_i64[0] = v37;
            *(__m128i *)((char *)v33 + 40) = v55;
            if ( v56 )
            {
              v33[4].m128i_i64[0] = 0;
              qfree(v56);
            }
            v57 = _mm_load_si128(&v85);
            ++v35;
            v33[3].m128i_i64[1] = v83.m128i_i64[0];
            v33[4] = v57;
          }
          while ( v86 != v35 );
          v5 = v89;
          v7 = v90;
          v4 = &v91[-5 * v86];
        }
        v6 = v5 % v7;
        if ( !(v5 % v7) )
          return (__int64)v92 + v94 - v93;
      }
    }
    return (__int64)v92 + v94 - v93;
  }
}

