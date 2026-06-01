__int64 __fastcall sub_295B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm6
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // r14
  char v17; // r13
  __m128i v18; // xmm1
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rsi
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm7
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 *v31; // rdx
  __int64 v32; // rbx
  __int64 *v33; // rbp
  __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rax
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __int64 v40; // r14
  char v41; // r13
  __int64 v42; // r12
  __int64 v43; // rsi
  __m128i v44; // xmm1
  __int64 v45; // rsi
  __int64 v46; // rsi
  __m128i v47; // xmm1
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm3
  __int64 v53; // rsi
  __m128i v54; // xmm0
  __int64 v56; // rbp
  __int128 v57; // xmm0
  __int64 v58; // rdx
  __m128i v59; // xmm3
  __int64 v60; // r13
  __m128i v61; // xmm2
  __m128i v62; // xmm1
  __m128i v63; // xmm3
  __int64 v64; // r15
  char v65; // r14
  __int64 v66; // rdx
  __int64 v67; // r12
  __int64 v68; // rdx
  __m128i v69; // xmm3
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  __m128i v73; // xmm1
  __m128i v74; // xmm1
  __m128i v75; // [rsp+0h] [rbp-138h] BYREF
  __m128i v76; // [rsp+10h] [rbp-128h] BYREF
  __m128i v77; // [rsp+20h] [rbp-118h] BYREF
  __m128i v78; // [rsp+30h] [rbp-108h] BYREF
  __m128i v79; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v80; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v81; // [rsp+60h] [rbp-D8h]
  __int64 v82; // [rsp+68h] [rbp-D0h]
  __int64 *v83; // [rsp+70h] [rbp-C8h]
  __int64 *v84; // [rsp+78h] [rbp-C0h]
  __int64 v85; // [rsp+80h] [rbp-B8h]
  __int64 v86; // [rsp+88h] [rbp-B0h]
  __m128i v87; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-68h]
  __m128i v89[5]; // [rsp+E8h] [rbp-50h] BYREF

  if ( a1 == (__int64 *)a2 )
    return a3;
  v3 = a1;
  if ( a2 == a3 )
    return (__int64)a1;
  v4 = a1;
  v5 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - (__int64)a1) >> 3);
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a2 - (__int64)a1) >> 3);
  if ( v6 == v5 - v6 )
  {
    v75.m128i_i64[0] = a2;
    v56 = a2;
    v57 = 0;
    do
    {
      v58 = v3[8];
      v59 = _mm_loadu_si128((const __m128i *)v3 + 3);
      v60 = v3[2];
      v61 = _mm_loadu_si128((const __m128i *)v3);
      v3[2] = 0;
      v87 = v59;
      v62 = _mm_loadu_si128((const __m128i *)(v3 + 3));
      v63 = _mm_loadu_si128((const __m128i *)(v3 + 11));
      *(_OWORD *)(v3 + 3) = v57;
      v64 = v3[5];
      v65 = *((_BYTE *)v3 + 72);
      v88 = v58;
      v66 = *(_QWORD *)v56;
      v67 = v3[10];
      v89[0] = v63;
      *v3 = v66;
      v3[1] = *(_QWORD *)(v56 + 8);
      v68 = *(_QWORD *)(v56 + 16);
      v69 = _mm_loadu_si128((const __m128i *)(v56 + 24));
      *(_QWORD *)(v56 + 16) = 0;
      *(_OWORD *)(v56 + 24) = v57;
      v70 = v3[2];
      if ( v70 )
      {
        v3[3] = 0;
        v76.m128i_i64[0] = v68;
        v79 = v61;
        v78 = v69;
        v77 = v62;
        qfree(v70);
        v61 = _mm_load_si128(&v79);
        v69 = _mm_load_si128(&v78);
        v57 = 0;
        v62 = _mm_load_si128(&v77);
        v68 = v76.m128i_i64[0];
      }
      v3[2] = v68;
      *(__m128i *)(v3 + 3) = v69;
      v3[5] = *(_QWORD *)(v56 + 40);
      *((__m128i *)v3 + 3) = _mm_loadu_si128((const __m128i *)(v56 + 48));
      v3[8] = *(_QWORD *)(v56 + 64);
      *((_BYTE *)v3 + 72) = *(_BYTE *)(v56 + 72);
      v3[10] = *(_QWORD *)(v56 + 80);
      *(__m128i *)(v3 + 11) = _mm_loadu_si128((const __m128i *)(v56 + 88));
      v71 = *(_QWORD *)(v56 + 16);
      *(__m128i *)v56 = v61;
      if ( v71 )
      {
        *(_QWORD *)(v56 + 24) = 0;
        v76 = v62;
        qfree(v71);
        v62 = _mm_load_si128(&v76);
        v57 = 0;
      }
      *(__m128i *)(v56 + 24) = v62;
      v72 = v88;
      v3 += 13;
      v56 += 104;
      v73 = _mm_load_si128(&v87);
      *(_QWORD *)(v56 - 88) = v60;
      *(_QWORD *)(v56 - 64) = v64;
      *(__m128i *)(v56 - 56) = v73;
      v74 = _mm_loadu_si128(v89);
      *(_QWORD *)(v56 - 40) = v72;
      *(_BYTE *)(v56 - 32) = v65;
      *(_QWORD *)(v56 - 24) = v67;
      *(__m128i *)(v56 - 16) = v74;
    }
    while ( (__int64 *)v75.m128i_i64[0] != v3 );
    return v75.m128i_i64[0];
  }
  else
  {
    v85 = a2;
    v7 = v5 - v6;
    v84 = a1;
    v86 = a3;
    if ( v6 >= (__int64)(v5 - v6) )
      goto LABEL_16;
    while ( 1 )
    {
      if ( v7 > 0 )
      {
        v81 = v5;
        v8 = 0;
        v9 = v4;
        v10 = &v4[13 * v6];
        v77.m128i_i64[0] = v7;
        v82 = v6;
        v83 = v4;
        do
        {
          v11 = v9[8];
          v12 = v9[2];
          v9[2] = 0;
          v13 = _mm_loadu_si128((const __m128i *)(v9 + 3));
          v14 = _mm_loadu_si128((const __m128i *)v9 + 3);
          *(_OWORD *)(v9 + 3) = 0;
          v15 = _mm_loadu_si128((const __m128i *)v9);
          v16 = v9[5];
          v76.m128i_i64[0] = v12;
          v17 = *((_BYTE *)v9 + 72);
          v87 = v14;
          v18 = _mm_loadu_si128((const __m128i *)(v9 + 11));
          v88 = v11;
          v19 = *v10;
          v20 = v9[10];
          v89[0] = v18;
          *v9 = v19;
          v21 = v10[1];
          v75 = v13;
          v9[1] = v21;
          v22 = v10[2];
          v23 = _mm_loadu_si128((const __m128i *)(v10 + 3));
          v10[2] = 0;
          *(_OWORD *)(v10 + 3) = 0;
          v24 = v9[2];
          if ( v24 )
          {
            v9[3] = 0;
            v78.m128i_i64[0] = v22;
            v80 = v23;
            v79 = v15;
            qfree(v24);
            v23 = _mm_load_si128(&v80);
            v15 = _mm_load_si128(&v79);
            v22 = v78.m128i_i64[0];
          }
          v9[2] = v22;
          *(__m128i *)(v9 + 3) = v23;
          v9[5] = v10[5];
          *((__m128i *)v9 + 3) = _mm_loadu_si128((const __m128i *)v10 + 3);
          v9[8] = v10[8];
          *((_BYTE *)v9 + 72) = *((_BYTE *)v10 + 72);
          v9[10] = v10[10];
          *(__m128i *)(v9 + 11) = _mm_loadu_si128((const __m128i *)(v10 + 11));
          v25 = v10[2];
          *(__m128i *)v10 = v15;
          if ( v25 )
          {
            v10[3] = 0;
            qfree(v25);
          }
          v26 = v76.m128i_i64[0];
          v10[5] = v16;
          v9 += 13;
          v10 += 13;
          v27 = _mm_load_si128(&v75);
          v28 = v88;
          *((_BYTE *)v10 - 32) = v17;
          ++v8;
          v29 = _mm_load_si128(&v87);
          *(v10 - 11) = v26;
          *((__m128i *)v10 - 5) = v27;
          *(__m128i *)(v10 - 7) = v29;
          v30 = _mm_loadu_si128(v89);
          *(v10 - 5) = v28;
          *(v10 - 3) = v20;
          *((__m128i *)v10 - 1) = v30;
        }
        while ( v77.m128i_i64[0] != v8 );
        v5 = v81;
        v6 = v82;
        v4 = &v83[13 * v77.m128i_i64[0]];
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
LABEL_16:
        v31 = &v4[13 * v5];
        v4 = &v31[-13 * v7];
        if ( v6 > 0 )
        {
          v81 = v5;
          v32 = 0;
          v33 = &v31[-13 * v7];
          v34 = v31;
          v82 = v7;
          v77.m128i_i64[0] = v6;
          v83 = v33;
          do
          {
            v35 = *(v33 - 5);
            v34 -= 13;
            v36 = *(v33 - 11);
            v37 = _mm_loadu_si128((const __m128i *)v33 - 5);
            v38 = _mm_loadu_si128((const __m128i *)(v33 - 7));
            *((_OWORD *)v33 - 5) = 0;
            v33 -= 13;
            v39 = _mm_loadu_si128((const __m128i *)v33);
            v40 = v33[5];
            v75.m128i_i64[0] = v36;
            v41 = *((_BYTE *)v33 + 72);
            v42 = v33[10];
            v76 = v37;
            v33[2] = 0;
            v88 = v35;
            v43 = *v34;
            v87 = v38;
            v44 = _mm_loadu_si128((const __m128i *)(v33 + 11));
            *v33 = v43;
            v45 = v34[1];
            v89[0] = v44;
            v33[1] = v45;
            v46 = v34[2];
            v47 = _mm_loadu_si128((const __m128i *)(v34 + 3));
            v34[2] = 0;
            *(_OWORD *)(v34 + 3) = 0;
            v48 = v33[2];
            if ( v48 )
            {
              v33[3] = 0;
              v79.m128i_i64[0] = v46;
              v80 = v39;
              v78 = v47;
              qfree(v48);
              v39 = _mm_load_si128(&v80);
              v46 = v79.m128i_i64[0];
              v47 = _mm_load_si128(&v78);
            }
            v33[2] = v46;
            *(__m128i *)(v33 + 3) = v47;
            v33[5] = v34[5];
            *((__m128i *)v33 + 3) = _mm_loadu_si128((const __m128i *)v34 + 3);
            v33[8] = v34[8];
            *((_BYTE *)v33 + 72) = *((_BYTE *)v34 + 72);
            v33[10] = v34[10];
            *(__m128i *)(v33 + 11) = _mm_loadu_si128((const __m128i *)(v34 + 11));
            v49 = v34[2];
            *(__m128i *)v34 = v39;
            if ( v49 )
            {
              v34[3] = 0;
              qfree(v49);
            }
            v50 = v75.m128i_i64[0];
            v34[5] = v40;
            ++v32;
            v51 = _mm_load_si128(&v87);
            v52 = _mm_load_si128(&v76);
            *((_BYTE *)v34 + 72) = v41;
            v53 = v88;
            v34[2] = v50;
            *((__m128i *)v34 + 3) = v51;
            v54 = _mm_loadu_si128(v89);
            v34[8] = v53;
            v34[10] = v42;
            *(__m128i *)(v34 + 3) = v52;
            *(__m128i *)(v34 + 11) = v54;
          }
          while ( v77.m128i_i64[0] != v32 );
          v5 = v81;
          v7 = v82;
          v4 = &v83[-13 * v77.m128i_i64[0]];
        }
        v6 = v5 % v7;
        if ( !(v5 % v7) )
          return (__int64)v84 + v86 - v85;
      }
    }
    return (__int64)v84 + v86 - v85;
  }
}

