__int64 __fastcall sub_3F5C0(__int64 a1, __int64 *a2, double a3, double a4, double a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int32 v9; // r15d
  __int32 v10; // ebx
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rax
  const __m128i *v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i *v20; // rax
  const __m128i *v21; // rax
  _QWORD **v22; // rbx
  __m128 v23; // xmm0
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // rax
  const __m128i *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r9
  const __m128i *v31; // rax
  __int64 v32; // rcx
  __m128i v33; // xmm0
  bool v34; // cf
  __int64 v35; // rax
  const __m128i *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r9
  const __m128i *v39; // rax
  __int64 v40; // rcx
  __m128i v41; // xmm0
  unsigned __int64 v42; // [rsp+0h] [rbp-148h]
  __int64 v43; // [rsp+10h] [rbp-138h]
  __int64 v44; // [rsp+10h] [rbp-138h]
  __int64 v45; // [rsp+18h] [rbp-130h]
  __int64 v46; // [rsp+18h] [rbp-130h]
  const __m128i *v47; // [rsp+20h] [rbp-128h] BYREF
  __int128 v48; // [rsp+28h] [rbp-120h] BYREF
  __m128i v49; // [rsp+40h] [rbp-108h] BYREF
  __m128i v50; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-E8h]
  __m128i v52; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v53; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+90h] [rbp-B8h]
  __int64 v55; // [rsp+A0h] [rbp-A8h] BYREF
  int v56; // [rsp+A8h] [rbp-A0h] BYREF
  void *v57; // [rsp+B0h] [rbp-98h]
  int *v58; // [rsp+B8h] [rbp-90h]
  int *v59; // [rsp+C0h] [rbp-88h]
  __int64 v60; // [rsp+C8h] [rbp-80h]
  __m128i v61; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v62; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-58h]
  char v64; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+108h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v47 = nullptr;
  v58 = &v56;
  v56 = 0;
  v57 = nullptr;
  v59 = &v56;
  v60 = 0;
  v7 = a2[1];
  v8 = *a2;
  v48 = 0;
  v42 = v7;
  sub_744C0(&v61, v8, v7);
  if ( v62.m128i_i8[8] )
    goto LABEL_16;
  v9 = v61.m128i_i32[0];
  a2[1] += v61.m128i_i64[1];
  if ( v9 )
  {
    v10 = 0;
    sub_3F0E0((__int64)&v61, a2, 0, v42, &v55, 0.0, a4, a5);
    while ( !v64 )
    {
      v14 = _mm_load_si128(&v61);
      v15 = _mm_load_si128(&v62);
      v16 = v48;
      v17 = v47;
      v51 = v63;
      v49 = v14;
      v18 = v48 + 1;
      v50 = v15;
      if ( &v49 < v47 || &v49 >= (const __m128i *)((char *)v47 + 40 * *((_QWORD *)&v48 + 1)) )
      {
        if ( *((_QWORD *)&v48 + 1) < v18 )
        {
          v43 = *((_QWORD *)&v48 + 1);
          v27 = qvector_reserve(&v47, 0, v18, 40);
          v28 = v47;
          v17 = (const __m128i *)v27;
          v29 = v27;
          v30 = *((_QWORD *)&v48 + 1);
          v31 = v47;
          *((_QWORD *)&v48 + 1) = v43;
          v32 = v48 - 1;
          if ( (__int64)v48 - 1 >= 0 )
          {
            do
            {
              v33 = _mm_loadu_si128(v31);
              v29 += 40;
              v31 = (const __m128i *)((char *)v31 + 40);
              *(__m128i *)(v29 - 40) = v33;
              *(__m128i *)(v29 - 24) = _mm_loadu_si128((const __m128i *)((char *)v31 - 24));
              *(_QWORD *)(v29 - 8) = v31[-1].m128i_i64[1];
              v34 = v32-- == 0;
            }
            while ( !v34 );
          }
          v45 = v30;
          qfree(v28);
          v16 = v48;
          v47 = v17;
          *((_QWORD *)&v48 + 1) = v45;
          v18 = v48 + 1;
        }
        v19 = v51;
        ++v10;
        v20 = (__m128i *)((char *)v17 + 40 * v16);
        *v20 = _mm_load_si128(&v49);
        v13 = _mm_load_si128(&v50);
        v20[2].m128i_i64[0] = v19;
        v20[1] = v13;
        *(_QWORD *)&v48 = v18;
        if ( v10 == v9 )
          goto LABEL_12;
      }
      else
      {
        v54 = v63;
        v52 = v14;
        v53 = v15;
        if ( *((_QWORD *)&v48 + 1) < v18 )
        {
          v44 = *((_QWORD *)&v48 + 1);
          v35 = qvector_reserve(&v47, 0, v18, 40);
          v36 = v47;
          v17 = (const __m128i *)v35;
          v37 = v35;
          v38 = *((_QWORD *)&v48 + 1);
          v39 = v47;
          *((_QWORD *)&v48 + 1) = v44;
          v40 = v48 - 1;
          if ( (__int64)v48 - 1 >= 0 )
          {
            do
            {
              v41 = _mm_loadu_si128(v39);
              v37 += 40;
              v39 = (const __m128i *)((char *)v39 + 40);
              *(__m128i *)(v37 - 40) = v41;
              *(__m128i *)(v37 - 24) = _mm_loadu_si128((const __m128i *)((char *)v39 - 24));
              *(_QWORD *)(v37 - 8) = v39[-1].m128i_i64[1];
              v34 = v40-- == 0;
            }
            while ( !v34 );
          }
          v46 = v38;
          qfree(v36);
          v16 = v48;
          v47 = v17;
          *((_QWORD *)&v48 + 1) = v46;
          v18 = v48 + 1;
        }
        v11 = v54;
        ++v10;
        v12 = (__m128i *)((char *)v17 + 40 * v16);
        *v12 = _mm_load_si128(&v52);
        v13 = _mm_load_si128(&v53);
        v12[2].m128i_i64[0] = v11;
        v12[1] = v13;
        *(_QWORD *)&v48 = v18;
        if ( v10 == v9 )
          goto LABEL_12;
      }
      sub_3F0E0((__int64)&v61, a2, v10, v42, &v55, *(double *)v13.m128i_i64, *(double *)v14.m128i_i64, a5);
    }
LABEL_16:
    *(_QWORD *)a1 = v61.m128i_i64[0];
    v25 = _mm_loadu_si128((const __m128i *)&v61.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v25;
    v22 = (_QWORD **)v57;
    if ( !v57 )
      goto LABEL_13;
    goto LABEL_17;
  }
LABEL_12:
  v21 = v47;
  v22 = (_QWORD **)v57;
  v47 = nullptr;
  v23 = _mm_loadh_ps((const double *)&v48 + 1);
  *(_BYTE *)(a1 + 24) = 0;
  *(__m128 *)(a1 + 8) = v23;
  *(_QWORD *)a1 = v21;
  v48 = 0;
  if ( !v22 )
    goto LABEL_13;
  do
  {
LABEL_17:
    sub_3CF80(v22[3]);
    v26 = v22;
    v22 = (_QWORD **)v22[2];
    operator delete(v26, 0x30u);
  }
  while ( v22 );
LABEL_13:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  return a1;
}

