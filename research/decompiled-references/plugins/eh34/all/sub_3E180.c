__int64 __fastcall sub_3E180(__int64 a1, __int64 *a2, double a3, __m128i a4, __m128i a5, __m128i a6)
{
  __m128i v6; // xmm0
  __int64 v9; // rax
  const __m128i *v10; // rsi
  __m128i v11; // xmm0
  int v13; // r14d
  int v14; // ebx
  __m128i *v15; // rax
  __m128i v16; // xmm4
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i *v20; // rax
  __m128 v21; // xmm0
  const __m128i *v22; // rax
  __int64 v23; // rax
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r9
  const __m128i *v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm0
  bool v30; // cf
  __int64 v31; // rax
  const __m128i *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r9
  const __m128i *v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // [rsp+0h] [rbp-188h]
  __int64 v41; // [rsp+0h] [rbp-188h]
  __int64 v42; // [rsp+8h] [rbp-180h]
  __int64 v43; // [rsp+8h] [rbp-180h]
  __int64 v44; // [rsp+10h] [rbp-178h]
  const __m128i *v45; // [rsp+18h] [rbp-170h] BYREF
  __int128 v46; // [rsp+20h] [rbp-168h] BYREF
  __int64 v47; // [rsp+30h] [rbp-158h] BYREF
  __m128i v48; // [rsp+38h] [rbp-150h] BYREF
  char v49; // [rsp+48h] [rbp-140h]
  __m128i v50; // [rsp+50h] [rbp-138h] BYREF
  __m128i v51; // [rsp+60h] [rbp-128h] BYREF
  __m128i v52; // [rsp+70h] [rbp-118h] BYREF
  __m128i v53; // [rsp+80h] [rbp-108h] BYREF
  __m128i v54; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v58; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v59; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v60; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v61; // [rsp+100h] [rbp-88h] BYREF
  __m128i v62; // [rsp+110h] [rbp-78h] BYREF
  __m128i v63; // [rsp+120h] [rbp-68h] BYREF
  __m128i v64; // [rsp+130h] [rbp-58h] BYREF
  char v65; // [rsp+140h] [rbp-48h]
  unsigned __int64 v66; // [rsp+148h] [rbp-40h]

  v6.m128i_i64[0] = 0;
  v66 = __readfsqword(0x28u);
  v46 = 0;
  v45 = nullptr;
  v44 = a2[2];
  sub_744C0(&v47, *a2, a2[1]);
  if ( v49 )
  {
    v9 = v47;
    v10 = v45;
    *(_BYTE *)(a1 + 32) = 1;
    v11 = _mm_loadu_si128(&v48);
    *(_QWORD *)a1 = v9;
    *(__m128i *)(a1 + 8) = v11;
  }
  else
  {
    v13 = v47;
    a2[1] += v48.m128i_i64[0];
    if ( !v13 )
    {
LABEL_15:
      *(_BYTE *)(a1 + 32) = 0;
      v21 = _mm_loadh_ps((const double *)&v46 + 1);
      *(_QWORD *)a1 = v44;
      v22 = v45;
      *(__m128 *)(a1 + 16) = v21;
      *(_QWORD *)(a1 + 8) = v22;
      return a1;
    }
    v14 = 0;
    while ( 1 )
    {
      sub_3DD40(
        (__int64)&v60,
        a2,
        *(double *)v6.m128i_i64,
        *(double *)a4.m128i_i64,
        *(double *)a5.m128i_i64,
        *(double *)a6.m128i_i64);
      v10 = v45;
      if ( v65 )
        break;
      v16 = _mm_load_si128(&v60);
      v17 = v46;
      a6 = _mm_load_si128(&v61);
      a5 = _mm_load_si128(&v62);
      v50 = v16;
      v18 = v46 + 1;
      a4 = _mm_load_si128(&v63);
      v19 = _mm_load_si128(&v64);
      v51 = a6;
      v52 = a5;
      v53 = a4;
      v54 = v19;
      if ( &v50 < v45 || &v50 >= &v45[5 * *((_QWORD *)&v46 + 1)] )
      {
        if ( *((_QWORD *)&v46 + 1) < v18 )
        {
          v40 = *((_QWORD *)&v46 + 1);
          v23 = qvector_reserve(&v45, 0, v18, 80);
          v24 = v45;
          v10 = (const __m128i *)v23;
          v25 = v23;
          v26 = *((_QWORD *)&v46 + 1);
          v27 = v45;
          *((_QWORD *)&v46 + 1) = v40;
          v28 = v46 - 1;
          if ( (__int64)v46 - 1 >= 0 )
          {
            do
            {
              v29 = _mm_loadu_si128(v27);
              v25 += 80;
              v27 += 5;
              *(__m128i *)(v25 - 80) = v29;
              *(__m128i *)(v25 - 64) = _mm_loadu_si128(v27 - 4);
              *(__m128i *)(v25 - 48) = _mm_loadu_si128(v27 - 3);
              *(__m128i *)(v25 - 32) = _mm_loadu_si128(v27 - 2);
              *(__m128i *)(v25 - 16) = _mm_loadu_si128(v27 - 1);
              v30 = v28-- == 0;
            }
            while ( !v30 );
          }
          v42 = v26;
          qfree(v24);
          v17 = v46;
          v45 = v10;
          *((_QWORD *)&v46 + 1) = v42;
          v18 = v46 + 1;
        }
        ++v14;
        v20 = (__m128i *)&v10[5 * v17];
        *v20 = _mm_load_si128(&v50);
        v20[1] = _mm_load_si128(&v51);
        v20[2] = _mm_load_si128(&v52);
        v20[3] = _mm_load_si128(&v53);
        v6 = _mm_load_si128(&v54);
        v20[4] = v6;
        *(_QWORD *)&v46 = v18;
        if ( v14 == v13 )
          goto LABEL_15;
      }
      else
      {
        v55 = v16;
        v56 = a6;
        v57 = a5;
        v58 = a4;
        v59 = v19;
        if ( *((_QWORD *)&v46 + 1) < v18 )
        {
          v41 = *((_QWORD *)&v46 + 1);
          v31 = qvector_reserve(&v45, 0, v18, 80);
          v32 = v45;
          v10 = (const __m128i *)v31;
          v33 = v31;
          v34 = *((_QWORD *)&v46 + 1);
          v35 = v45;
          *((_QWORD *)&v46 + 1) = v41;
          v36 = v46 - 1;
          if ( (__int64)v46 - 1 >= 0 )
          {
            do
            {
              v37 = _mm_loadu_si128(v35);
              v33 += 80;
              v35 += 5;
              *(__m128i *)(v33 - 80) = v37;
              *(__m128i *)(v33 - 64) = _mm_loadu_si128(v35 - 4);
              *(__m128i *)(v33 - 48) = _mm_loadu_si128(v35 - 3);
              *(__m128i *)(v33 - 32) = _mm_loadu_si128(v35 - 2);
              *(__m128i *)(v33 - 16) = _mm_loadu_si128(v35 - 1);
              v30 = v36-- == 0;
            }
            while ( !v30 );
          }
          v43 = v34;
          qfree(v32);
          v17 = v46;
          v45 = v10;
          *((_QWORD *)&v46 + 1) = v43;
          v18 = v46 + 1;
        }
        ++v14;
        v15 = (__m128i *)&v10[5 * v17];
        *v15 = _mm_load_si128(&v55);
        v15[1] = _mm_load_si128(&v56);
        v15[2] = _mm_load_si128(&v57);
        v15[3] = _mm_load_si128(&v58);
        v6 = _mm_load_si128(&v59);
        v15[4] = v6;
        *(_QWORD *)&v46 = v18;
        if ( v14 == v13 )
          goto LABEL_15;
      }
    }
    v38 = v60.m128i_i64[0];
    *(_BYTE *)(a1 + 32) = 1;
    v39 = _mm_loadu_si128((const __m128i *)&v60.m128i_u64[1]);
    *(_QWORD *)a1 = v38;
    *(__m128i *)(a1 + 8) = v39;
  }
  if ( v10 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v10);
  }
  return a1;
}
