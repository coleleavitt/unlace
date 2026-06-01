const __m128i **__fastcall sub_416C0(
        const __m128i **a1,
        const double *a2,
        int a3,
        double a4,
        __m128i a5,
        __m128i a6,
        double a7)
{
  __m128i si128; // xmm0
  int v10; // ebx
  __int64 v11; // rax
  const __m128i *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __m128i v28; // xmm0
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  const __m128i *v33; // rdi
  __int64 v34; // rdx
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  __int64 v38; // rsi
  __m128i v39; // xmm0
  const __m128i **v40; // rbx
  __m128i v41; // xmm0
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // rdi
  const __m128i *v47; // rcx
  const __m128i *v48; // rdx
  const __m128i **v49; // rbx
  __m128i v50; // [rsp+0h] [rbp-168h] BYREF
  __m128i v51; // [rsp+10h] [rbp-158h] BYREF
  __m128i v52; // [rsp+20h] [rbp-148h] BYREF
  __int64 v53; // [rsp+30h] [rbp-138h]
  const __m128i **v54; // [rsp+38h] [rbp-130h]
  const __m128i *v55; // [rsp+40h] [rbp-128h] BYREF
  __int128 v56; // [rsp+48h] [rbp-120h]
  __m128i v57; // [rsp+60h] [rbp-108h] BYREF
  __m128i v58; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+80h] [rbp-E8h]
  __m128i v60; // [rsp+88h] [rbp-E0h]
  __m128i v61[3]; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v62; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v63; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v64; // [rsp+100h] [rbp-68h]
  __m128i v65; // [rsp+108h] [rbp-60h] BYREF
  char v66; // [rsp+118h] [rbp-50h]
  unsigned __int64 v67; // [rsp+128h] [rbp-40h]

  si128.m128i_i64[0] = 0;
  v54 = a1;
  v67 = __readfsqword(0x28u);
  v56 = 0;
  v55 = nullptr;
  if ( a3 )
  {
    v10 = 0;
    while ( 1 )
    {
      sub_41240((__int64)&v62, a2, *(double *)si128.m128i_i64, *(double *)a5.m128i_i64, *(double *)a6.m128i_i64, a7);
      v13 = v64;
      a5 = _mm_loadu_si128(&v65);
      v14 = (__int64)v55;
      if ( v66 )
        break;
      a6 = _mm_load_si128(&v62);
      v15 = v56;
      v59 = v64;
      v16 = _mm_load_si128(&v63);
      v60 = a5;
      v57 = a6;
      v17 = v56 + 1;
      v58 = v16;
      if ( &v57 < v55 || &v57 >= (const __m128i *)((char *)v55 + 56 * *((_QWORD *)&v56 + 1)) )
      {
        if ( *((_QWORD *)&v56 + 1) < v17 )
        {
          v50 = a5;
          v53 = *((_QWORD *)&v56 + 1);
          v51 = a6;
          v19 = qvector_reserve(&v55, 0, v17, 56);
          v20 = v19;
          v21 = *((_QWORD *)&v56 + 1);
          v22 = v55;
          v23 = v56 - 1;
          *((_QWORD *)&v56 + 1) = v53;
          v24 = _mm_load_si128(&v50);
          v25 = _mm_load_si128(&v51);
          if ( (__int64)v56 - 1 >= 0 )
          {
            do
            {
              v26 = _mm_loadu_si128(v22);
              v19 += 56;
              v22 = (const __m128i *)((char *)v22 + 56);
              *(__m128i *)(v19 - 56) = v26;
              *(__m128i *)(v19 - 40) = _mm_loadu_si128((const __m128i *)((char *)v22 - 40));
              v27 = v22[-2].m128i_i64[1];
              v28 = _mm_loadu_si128(v22 - 1);
              v22[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v19 - 24) = v27;
              *(__m128i *)(v19 - 16) = v28;
              v22[-1].m128i_i64[1] = 0;
              v29 = v23-- == 0;
            }
            while ( !v29 );
            v22 = v55;
          }
          v53 = v21;
          v51.m128i_i64[0] = v20;
          v52 = v25;
          v50 = v24;
          qfree(v22);
          v14 = v51.m128i_i64[0];
          v15 = v56;
          a6 = _mm_load_si128(&v52);
          v55 = (const __m128i *)v51.m128i_i64[0];
          a5 = _mm_load_si128(&v50);
          *((_QWORD *)&v56 + 1) = v53;
        }
        si128 = _mm_load_si128(&v58);
        v18 = v14 + 56 * v15;
        *(_QWORD *)(v18 + 32) = v13;
        *(__m128i *)v18 = a6;
        *(__m128i *)(v18 + 16) = si128;
        *(__m128i *)(v18 + 40) = a5;
      }
      else
      {
        v61[0] = v16;
        v59 = 0;
        v60 = 0;
        if ( *((_QWORD *)&v56 + 1) < v17 )
        {
          v50 = a5;
          v53 = *((_QWORD *)&v56 + 1);
          v51 = a6;
          v30 = qvector_reserve(&v55, 0, v17, 56);
          v31 = v30;
          v32 = *((_QWORD *)&v56 + 1);
          v33 = v55;
          v34 = v56 - 1;
          *((_QWORD *)&v56 + 1) = v53;
          v35 = _mm_load_si128(&v50);
          v36 = _mm_load_si128(&v51);
          if ( (__int64)v56 - 1 >= 0 )
          {
            do
            {
              v37 = _mm_loadu_si128(v33);
              v30 += 56;
              v33 = (const __m128i *)((char *)v33 + 56);
              *(__m128i *)(v30 - 56) = v37;
              *(__m128i *)(v30 - 40) = _mm_loadu_si128((const __m128i *)((char *)v33 - 40));
              v38 = v33[-2].m128i_i64[1];
              v39 = _mm_loadu_si128(v33 - 1);
              v33[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v30 - 24) = v38;
              *(__m128i *)(v30 - 16) = v39;
              v33[-1].m128i_i64[1] = 0;
              v29 = v34-- == 0;
            }
            while ( !v29 );
            v33 = v55;
          }
          v53 = v31;
          v51.m128i_i64[0] = v32;
          v52 = v36;
          v50 = v35;
          qfree(v33);
          v14 = v53;
          v15 = v56;
          a6 = _mm_load_si128(&v52);
          v55 = (const __m128i *)v53;
          a5 = _mm_load_si128(&v50);
          *((_QWORD *)&v56 + 1) = v51.m128i_i64[0];
        }
        si128 = _mm_load_si128(v61);
        v11 = v14 + 56 * v15;
        *(_QWORD *)(v11 + 32) = v13;
        *(__m128i *)v11 = a6;
        *(__m128i *)(v11 + 16) = si128;
        *(__m128i *)(v11 + 40) = a5;
      }
      ++v10;
      v12 = (const __m128i *)(v56 + 1);
      *(_QWORD *)&v56 = v56 + 1;
      if ( a3 == v10 )
      {
        v47 = v55;
        v48 = *((const __m128i **)&v56 + 1);
        goto LABEL_28;
      }
    }
    v40 = v54;
    v41 = _mm_loadu_si128((const __m128i *)&v62.m128i_u64[1]);
    *v54 = (const __m128i *)v62.m128i_i64[0];
    *((_BYTE *)v40 + 24) = 1;
    *(__m128i *)(v40 + 1) = v41;
    if ( v14 )
    {
      v42 = v56;
      if ( (_QWORD)v56 )
      {
        v43 = 0;
        v44 = 0;
        do
        {
          v45 = *(_QWORD *)(v14 + v43 + 32);
          if ( v45 )
          {
            *(_QWORD *)(v14 + v43 + 40) = 0;
            qfree(v45);
            v14 = (__int64)v55;
          }
          ++v44;
          v43 += 56;
        }
        while ( v42 != v44 );
      }
      *(_QWORD *)&v56 = 0;
      qfree(v14);
    }
  }
  else
  {
    v48 = nullptr;
    v12 = nullptr;
    v47 = nullptr;
LABEL_28:
    v49 = v54;
    *v54 = v47;
    v49[1] = v12;
    v49[2] = v48;
    *((_BYTE *)v49 + 24) = 0;
  }
  return v54;
}

