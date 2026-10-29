unsigned __int64 __fastcall sub_3ADF0(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rax
  int v5; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i si128; // xmm0
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rbp
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rdi
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-88h] BYREF
  const char *v49; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-70h]
  const char *v51; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+50h] [rbp-38h] BYREF
  __m128i v54; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-20h]

  v3 = *(_DWORD **)(a1 + 32);
  v55 = __readfsqword(0x28u);
  v5 = v3[9];
  if ( !*v3 && !v3[1] && !v3[2] && !v3[3] && !v3[4] && !v3[5] && !v3[6] && !v3[7] && !v3[8] )
  {
    if ( !v5 )
      return v55 - __readfsqword(0x28u);
    goto LABEL_26;
  }
  if ( v5 )
  {
LABEL_26:
    v54 = 0;
    v53 = 0;
    v16 = qvector_reserve(&v53, 0, 66, 1);
    v53 = v16;
    v54.m128i_i64[0] = 66;
    *(__m128i *)v16 = _mm_load_si128((const __m128i *)&xmmword_78700);
    si128 = _mm_load_si128((const __m128i *)&xmmword_78710);
    *(_BYTE *)(v16 + 64) = 101;
    *(__m128i *)(v16 + 16) = si128;
    *(__m128i *)(v16 + 32) = _mm_load_si128((const __m128i *)&xmmword_78720);
    *(__m128i *)(v16 + 48) = _mm_load_si128((const __m128i *)&xmmword_78730);
    v18 = v53;
    *(_BYTE *)(v53 + 65) = 0;
    v19 = a2[1];
    v20 = *a2;
    v21 = a2[2];
    v22 = v19 + 1;
    if ( (unsigned __int64)&v53 < *a2 || (unsigned __int64)&v53 >= v20 + 24 * v21 )
    {
      if ( v21 < v22 )
      {
        v43 = qvector_reserve(a2, v20, v19 + 1, 24);
        *a2 = v43;
        v20 = v43;
        v18 = v53;
        v19 = a2[1];
      }
      v40 = _mm_loadu_si128(&v54);
      v41 = v20 + 24 * v19;
      *(_QWORD *)v41 = v18;
      *(__m128i *)(v41 + 8) = v40;
      ++a2[1];
    }
    else
    {
      v23 = _mm_loadl_epi64(&v54);
      v24 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
      v53 = 0;
      v54 = 0;
      if ( v21 < v22 )
      {
        v48.m128i_i64[1] = v24.m128i_i64[0];
        v48.m128i_i64[0] = v23.m128i_i64[0];
        v46 = qvector_reserve(a2, v20, v19 + 1, 24);
        *a2 = v46;
        v20 = v46;
        v19 = a2[1];
        v24 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
        v23 = _mm_loadl_epi64(&v48);
      }
      v25 = v20 + 24 * v19;
      *(_QWORD *)v25 = v18;
      *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v23, v24);
      v26 = v53;
      ++a2[1];
      if ( v26 )
      {
        v54.m128i_i64[0] = 0;
        qfree(v26);
      }
    }
    return v55 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 10LL) & 0x40) != 0 )
  {
    sub_3AB80((__int64)&v49, a1);
    if ( v50 > 1 )
    {
      v54 = 0;
      v53 = 0;
      sub_FB10(&v53, (__int64)"Absent C++ exception handlers: %s", v49);
      v7 = a2[1];
      v8 = *a2;
      v9 = a2[2];
      v10 = v7 + 1;
      if ( (unsigned __int64)&v53 < *a2 || (unsigned __int64)&v53 >= v8 + 24 * v9 )
      {
        if ( v9 < v10 )
        {
          v42 = qvector_reserve(a2, v8, v7 + 1, 24);
          *a2 = v42;
          v8 = v42;
          v7 = a2[1];
        }
        v36 = _mm_loadu_si128(&v54);
        v37 = v8 + 24 * v7;
        *(_QWORD *)v37 = v53;
        *(__m128i *)(v37 + 8) = v36;
        ++a2[1];
      }
      else
      {
        v11 = v53;
        v12 = _mm_loadl_epi64(&v54);
        v53 = 0;
        v13 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
        v54 = 0;
        if ( v9 < v10 )
        {
          v48.m128i_i64[1] = v13.m128i_i64[0];
          v48.m128i_i64[0] = v12.m128i_i64[0];
          v45 = qvector_reserve(a2, v8, v7 + 1, 24);
          *a2 = v45;
          v8 = v45;
          v7 = a2[1];
          v13 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
          v12 = _mm_loadl_epi64(&v48);
        }
        v14 = v8 + 24 * v7;
        *(_QWORD *)v14 = v11;
        *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
        v15 = v53;
        ++a2[1];
        if ( v15 )
        {
          v54.m128i_i64[0] = 0;
          qfree(v15);
        }
      }
    }
    sub_3AC80((__int64)&v51, a1);
    if ( v52 > 1 )
    {
      v54 = 0;
      v53 = 0;
      sub_FB10(&v53, (__int64)"Hidden C++ exception states: %s", v51);
      v27 = a2[1];
      v28 = *a2;
      v29 = a2[2];
      v30 = v27 + 1;
      if ( (unsigned __int64)&v53 < *a2 || (unsigned __int64)&v53 >= v28 + 24 * v29 )
      {
        if ( v29 < v30 )
        {
          v44 = qvector_reserve(a2, v28, v27 + 1, 24);
          *a2 = v44;
          v28 = v44;
          v27 = a2[1];
        }
        v38 = _mm_loadu_si128(&v54);
        v39 = v28 + 24 * v27;
        *(_QWORD *)v39 = v53;
        *(__m128i *)(v39 + 8) = v38;
        ++a2[1];
      }
      else
      {
        v31 = v53;
        v32 = _mm_loadl_epi64(&v54);
        v53 = 0;
        v33 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
        v54 = 0;
        if ( v29 < v30 )
        {
          v48.m128i_i64[1] = v33.m128i_i64[0];
          v48.m128i_i64[0] = v32.m128i_i64[0];
          v47 = qvector_reserve(a2, v28, v27 + 1, 24);
          *a2 = v47;
          v28 = v47;
          v27 = a2[1];
          v33 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
          v32 = _mm_loadl_epi64(&v48);
        }
        v34 = v28 + 24 * v27;
        *(_QWORD *)v34 = v31;
        *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
        v35 = v53;
        ++a2[1];
        if ( v35 )
        {
          v54.m128i_i64[0] = 0;
          qfree(v35);
        }
      }
    }
    if ( v51 )
    {
      v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      v50 = 0;
      qfree(v49);
    }
  }
  return v55 - __readfsqword(0x28u);
}
