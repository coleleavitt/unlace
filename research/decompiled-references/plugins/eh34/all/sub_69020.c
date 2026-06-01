unsigned __int64 __fastcall sub_69020(__int64 *a1, const __m128i *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __m128i *v7; // rax
  __m128i *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rsi
  const __m128i *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r14
  __m128i v27; // xmm0
  __m128i *v28; // rcx
  __int8 v29; // al
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r13
  __int64 v39; // rdi
  __int64 v40; // r13
  const __m128i *v41; // r15
  __m128i *v42; // rbx
  __m128i v43; // xmm0
  __int8 v44; // al
  __int64 v45; // rax
  unsigned __int64 v46; // rsi
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rax
  _QWORD *v50; // r14
  void *v51; // rdi
  __m128i *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r13
  __int64 v55; // rax
  const __m128i *v56; // rdi
  __int64 v57; // r13
  const __m128i *v58; // r15
  __m128i *v59; // rbp
  __m128i v60; // xmm0
  __int8 v61; // al
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  _QWORD *v67; // rbx
  void *v68; // rdi
  __m128i *v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // [rsp+0h] [rbp-C8h]
  __int64 v72; // [rsp+0h] [rbp-C8h]
  __int64 v73; // [rsp+8h] [rbp-C0h]
  __m128i v74; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+20h] [rbp-A8h]
  __int8 v76; // [rsp+28h] [rbp-A0h]
  __int64 v77; // [rsp+30h] [rbp-98h]
  __int64 v78; // [rsp+38h] [rbp-90h]
  __int64 *v79; // [rsp+40h] [rbp-88h]
  unsigned __int64 v80; // [rsp+48h] [rbp-80h]
  __int64 v81; // [rsp+50h] [rbp-78h] BYREF
  __int64 v82; // [rsp+58h] [rbp-70h]
  __m128i v83; // [rsp+60h] [rbp-68h] BYREF
  __int64 v84; // [rsp+70h] [rbp-58h] BYREF
  __int64 v85; // [rsp+78h] [rbp-50h]
  unsigned __int64 v86; // [rsp+88h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v86 = __readfsqword(0x28u);
  v71 = v3;
  if ( (unsigned __int64)a2 >= v3 && (unsigned __int64)a2 < v3 + 112 * v4 )
  {
    v15 = a2[1].m128i_i64[0];
    v16 = _mm_loadu_si128(a2);
    v84 = 0;
    v17 = a2[4].m128i_i64[1];
    v18 = (const __m128i *)a2[3].m128i_i64[0];
    v75 = v15;
    LOBYTE(v15) = a2[1].m128i_i8[8];
    v19 = a2[3].m128i_u64[1];
    v74 = v16;
    v76 = v15;
    v20 = a2[2].m128i_i64[0];
    v82 = v17;
    v77 = v20;
    v21 = a2[2].m128i_i64[1];
    v79 = (__int64 *)v18;
    v78 = v21;
    v22 = a2[4].m128i_i64[0];
    v80 = v19;
    v81 = v22;
    v83 = _mm_loadu_si128(a2 + 5);
    if ( v18 == &a2[6] )
    {
      v79 = &v84;
      v84 = a2[6].m128i_i64[0];
    }
    if ( v22 )
      v79[*(_QWORD *)(v22 + 8) % v19] = (__int64)&v81;
    v23 = a2[6].m128i_i64[1];
    a2[5].m128i_i64[1] = 0;
    a2[3].m128i_i64[1] = 1;
    a2[6].m128i_i64[0] = 0;
    a2[3].m128i_i64[0] = (__int64)a2[6].m128i_i64;
    a2[4].m128i_i64[0] = 0;
    a2[4].m128i_i64[1] = 0;
    v24 = a1[2];
    v85 = v23;
    v25 = a1[1];
    if ( v24 < v25 + 1 )
    {
      v26 = qvector_reserve(a1, 0, v25 + 1, 112);
      v54 = a1[1];
      v55 = a1[2];
      a1[2] = v24;
      v56 = (const __m128i *)*a1;
      v72 = v55;
      v57 = v54 - 1;
      if ( v57 >= 0 )
      {
        v58 = v56 + 6;
        v59 = (__m128i *)v26;
        do
        {
          v60 = _mm_loadu_si128(v58 - 6);
          v59[1].m128i_i64[0] = v58[-5].m128i_i64[0];
          v61 = v58[-5].m128i_i8[8];
          *v59 = v60;
          v59[1].m128i_i8[8] = v61;
          v59[2].m128i_i64[0] = v58[-4].m128i_i64[0];
          v62 = v58[-4].m128i_i64[1];
          v59[6].m128i_i64[0] = 0;
          v59[2].m128i_i64[1] = v62;
          v63 = v58[-3].m128i_u64[1];
          v59[3].m128i_i64[0] = v58[-3].m128i_i64[0];
          v64 = v58[-2].m128i_i64[0];
          v59[3].m128i_i64[1] = v63;
          v59[4].m128i_i64[0] = v64;
          v65 = _mm_loadu_si128(v58 - 1);
          v59[4].m128i_i64[1] = v58[-2].m128i_i64[1];
          v59[5] = v65;
          if ( (const __m128i *)v58[-3].m128i_i64[0] == v58 )
          {
            v59[3].m128i_i64[0] = (__int64)v59[6].m128i_i64;
            v59[6].m128i_i64[0] = v58->m128i_i64[0];
          }
          if ( v64 )
            *(_QWORD *)(v59[3].m128i_i64[0] + 8 * (*(_QWORD *)(v64 + 8) % v63)) = v59 + 4;
          v66 = v58->m128i_i64[1];
          v58[-2].m128i_i64[0] = 0;
          v58[-1].m128i_i64[1] = 0;
          v58[-3].m128i_i64[1] = 1;
          v58->m128i_i64[0] = 0;
          v58[-3].m128i_i64[0] = (__int64)v58;
          v58[-2].m128i_i64[1] = 0;
          v59[6].m128i_i64[1] = v66;
          v67 = (_QWORD *)v58[-2].m128i_i64[0];
          while ( v67 )
          {
            v68 = v67;
            v67 = (_QWORD *)*v67;
            operator delete(v68, 0x18u);
          }
          memset((void *)v58[-3].m128i_i64[0], 0, 8 * v58[-3].m128i_i64[1]);
          v69 = (__m128i *)v58[-3].m128i_i64[0];
          v70 = v58[-3].m128i_i64[1];
          v58[-2].m128i_i64[1] = 0;
          v58[-2].m128i_i64[0] = 0;
          if ( v69 != v58 )
            operator delete(v69, 8 * v70);
          --v57;
          v59 += 7;
          v58 += 7;
        }
        while ( v57 != -1 );
        v56 = (const __m128i *)*a1;
      }
      qfree(v56);
      *a1 = v26;
      a1[2] = v72;
      v25 = a1[1];
    }
    else
    {
      v26 = *a1;
    }
    v27 = _mm_load_si128(&v74);
    v28 = (__m128i *)(v26 + 112 * v25);
    v28[1].m128i_i64[0] = v75;
    v29 = v76;
    *v28 = v27;
    v28[1].m128i_i8[8] = v29;
    v30 = v77;
    v28[6].m128i_i64[0] = 0;
    v28[2].m128i_i64[0] = v30;
    v28[2].m128i_i64[1] = v78;
    v31 = v81;
    v32 = v79;
    v33 = v80;
    v28[4].m128i_i64[0] = v81;
    v34 = v82;
    v35 = _mm_load_si128(&v83);
    v28[3].m128i_i64[0] = (__int64)v32;
    v28[4].m128i_i64[1] = v34;
    v28[3].m128i_i64[1] = v33;
    v28[5] = v35;
    if ( v32 == &v84 )
    {
      v28[3].m128i_i64[0] = (__int64)v28[6].m128i_i64;
      v28[6].m128i_i64[0] = v84;
    }
    if ( v31 )
      *(_QWORD *)(v28[3].m128i_i64[0] + 8 * (*(_QWORD *)(v31 + 8) % v33)) = v28 + 4;
    v28[6].m128i_i64[1] = v85;
  }
  else
  {
    v6 = a1[1];
    if ( v4 < v6 + 1 )
    {
      v36 = qvector_reserve(a1, 0, v6 + 1, 112);
      v37 = a1[2];
      v38 = a1[1];
      a1[2] = v4;
      v71 = v36;
      v39 = *a1;
      v73 = v37;
      v40 = v38 - 1;
      if ( v40 >= 0 )
      {
        v41 = (const __m128i *)(v39 + 96);
        v42 = (__m128i *)v36;
        do
        {
          v43 = _mm_loadu_si128(v41 - 6);
          v42[1].m128i_i64[0] = v41[-5].m128i_i64[0];
          v44 = v41[-5].m128i_i8[8];
          *v42 = v43;
          v42[1].m128i_i8[8] = v44;
          v42[2].m128i_i64[0] = v41[-4].m128i_i64[0];
          v45 = v41[-4].m128i_i64[1];
          v42[6].m128i_i64[0] = 0;
          v42[2].m128i_i64[1] = v45;
          v46 = v41[-3].m128i_u64[1];
          v42[3].m128i_i64[0] = v41[-3].m128i_i64[0];
          v47 = v41[-2].m128i_i64[0];
          v42[3].m128i_i64[1] = v46;
          v42[4].m128i_i64[0] = v47;
          v48 = _mm_loadu_si128(v41 - 1);
          v42[4].m128i_i64[1] = v41[-2].m128i_i64[1];
          v42[5] = v48;
          if ( (const __m128i *)v41[-3].m128i_i64[0] == v41 )
          {
            v42[3].m128i_i64[0] = (__int64)v42[6].m128i_i64;
            v42[6].m128i_i64[0] = v41->m128i_i64[0];
          }
          if ( v47 )
            *(_QWORD *)(v42[3].m128i_i64[0] + 8 * (*(_QWORD *)(v47 + 8) % v46)) = v42 + 4;
          v49 = v41->m128i_i64[1];
          v41[-2].m128i_i64[0] = 0;
          v41[-1].m128i_i64[1] = 0;
          v41[-3].m128i_i64[1] = 1;
          v41->m128i_i64[0] = 0;
          v41[-3].m128i_i64[0] = (__int64)v41;
          v41[-2].m128i_i64[1] = 0;
          v42[6].m128i_i64[1] = v49;
          v50 = (_QWORD *)v41[-2].m128i_i64[0];
          while ( v50 )
          {
            v51 = v50;
            v50 = (_QWORD *)*v50;
            operator delete(v51, 0x18u);
          }
          memset((void *)v41[-3].m128i_i64[0], 0, 8 * v41[-3].m128i_i64[1]);
          v52 = (__m128i *)v41[-3].m128i_i64[0];
          v53 = v41[-3].m128i_i64[1];
          v41[-2].m128i_i64[1] = 0;
          v41[-2].m128i_i64[0] = 0;
          if ( v52 != v41 )
            operator delete(v52, 8 * v53);
          --v40;
          v42 += 7;
          v41 += 7;
        }
        while ( v40 != -1 );
        v39 = *a1;
      }
      qfree(v39);
      *a1 = v71;
      a1[2] = v73;
      v6 = a1[1];
    }
    v7 = (__m128i *)(112 * v6 + v71);
    *v7 = _mm_loadu_si128(a2);
    v8 = v7;
    v7[1].m128i_i64[0] = a2[1].m128i_i64[0];
    v7[1].m128i_i8[8] = a2[1].m128i_i8[8];
    v7[2].m128i_i64[0] = a2[2].m128i_i64[0];
    v9 = a2[2].m128i_i64[1];
    v8[6].m128i_i64[0] = 0;
    v8[2].m128i_i64[1] = v9;
    v10 = a2[3].m128i_u64[1];
    v8[3].m128i_i64[0] = a2[3].m128i_i64[0];
    v11 = a2[4].m128i_i64[0];
    v8[3].m128i_i64[1] = v10;
    v8[4].m128i_i64[0] = v11;
    v12 = _mm_loadu_si128(a2 + 5);
    v8[4].m128i_i64[1] = a2[4].m128i_i64[1];
    v8[5] = v12;
    if ( (const __m128i *)a2[3].m128i_i64[0] == &a2[6] )
    {
      v8[3].m128i_i64[0] = (__int64)v8[6].m128i_i64;
      v8[6].m128i_i64[0] = a2[6].m128i_i64[0];
    }
    if ( v11 )
      *(_QWORD *)(v8[3].m128i_i64[0] + 8 * (*(_QWORD *)(v11 + 8) % v10)) = v8 + 4;
    v13 = a2[6].m128i_i64[1];
    a2[5].m128i_i64[1] = 0;
    a2[3].m128i_i64[1] = 1;
    a2[6].m128i_i64[0] = 0;
    a2[3].m128i_i64[0] = (__int64)a2[6].m128i_i64;
    a2[4].m128i_i64[0] = 0;
    a2[4].m128i_i64[1] = 0;
    v8[6].m128i_i64[1] = v13;
  }
  ++a1[1];
  return v86 - __readfsqword(0x28u);
}
