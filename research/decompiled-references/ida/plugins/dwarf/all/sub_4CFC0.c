__int64 __fastcall sub_4CFC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i *a5,
        __int64 (__fastcall *a6)(__m128i *, __m128i *))
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v11; // r12
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm0
  size_t v15; // r12
  __int64 v16; // rax
  __m128i v17; // xmm0
  size_t v18; // r12
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  char v26; // r12
  __int64 v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r13
  __m128i *v32; // r12
  __int128 v33; // xmm1
  __int64 v34; // r15
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // r15
  __int64 v40; // r12
  __m128i *v41; // rbx
  __int128 v42; // xmm1
  __int64 v43; // r14
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // r15
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  const void *v51; // rsi
  __m128i v52; // [rsp+0h] [rbp-148h] BYREF
  __m128i v53; // [rsp+10h] [rbp-138h] BYREF
  __int64 v54; // [rsp+28h] [rbp-120h]
  __m128i v55; // [rsp+30h] [rbp-118h] BYREF
  void *v56; // [rsp+40h] [rbp-108h]
  __int128 v57; // [rsp+48h] [rbp-100h]
  __int64 v58; // [rsp+58h] [rbp-F0h]
  __m128i v59; // [rsp+60h] [rbp-E8h]
  __int64 v60; // [rsp+70h] [rbp-D8h]
  char v61; // [rsp+78h] [rbp-D0h]
  __int64 v62; // [rsp+80h] [rbp-C8h]
  __m128i v63; // [rsp+88h] [rbp-C0h]
  __m128i v64; // [rsp+A0h] [rbp-A8h] BYREF
  void *v65; // [rsp+B0h] [rbp-98h]
  __int128 v66; // [rsp+B8h] [rbp-90h]
  __int64 v67; // [rsp+C8h] [rbp-80h]
  __m128i v68; // [rsp+D0h] [rbp-78h]
  __int64 v69; // [rsp+E0h] [rbp-68h]
  char v70; // [rsp+E8h] [rbp-60h]
  __int64 v71; // [rsp+F0h] [rbp-58h]
  __m128i v72; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+108h] [rbp-40h]

  v7 = a3;
  v8 = a1;
  v52.m128i_i64[0] = a4;
  v73 = __readfsqword(0x28u);
  if ( a3 != a4 && a1 != a2 )
  {
    do
    {
      v14 = _mm_loadu_si128((const __m128i *)v8);
      v15 = *(_QWORD *)(v8 + 24);
      v56 = nullptr;
      v57 = 0;
      v55 = v14;
      if ( v15 )
      {
        v50 = (void *)qalloc_or_throw(v15);
        v51 = *(const void **)(v8 + 16);
        *((_QWORD *)&v57 + 1) = v15;
        v56 = v50;
        memcpy(v50, v51, v15);
        *(_QWORD *)&v57 = v15;
      }
      v16 = *(_QWORD *)(v8 + 40);
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 48));
      v65 = nullptr;
      v18 = *(_QWORD *)(v7 + 24);
      v66 = 0;
      v58 = v16;
      v19 = *(_QWORD *)(v8 + 64);
      v59 = v17;
      v20 = _mm_loadu_si128((const __m128i *)(v8 + 88));
      v60 = v19;
      LOBYTE(v19) = *(_BYTE *)(v8 + 72);
      v63 = v20;
      v21 = _mm_loadu_si128((const __m128i *)v7);
      v61 = v19;
      v22 = *(_QWORD *)(v8 + 80);
      v64 = v21;
      v62 = v22;
      if ( v18 )
      {
        v48 = (void *)qalloc_or_throw(v18);
        v49 = *(const void **)(v7 + 16);
        v65 = v48;
        *((_QWORD *)&v66 + 1) = v18;
        memcpy(v48, v49, v18);
        *(_QWORD *)&v66 = v18;
      }
      v23 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      v67 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v68 = v23;
      v25 = _mm_loadu_si128((const __m128i *)(v7 + 88));
      v69 = v24;
      LOBYTE(v24) = *(_BYTE *)(v7 + 72);
      v72 = v25;
      v70 = v24;
      v71 = *(_QWORD *)(v7 + 80);
      v26 = a6(&v64, &v55);
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65);
      }
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree(v56);
      }
      if ( v26 )
      {
        a5->m128i_i64[0] = *(_QWORD *)v7;
        a5->m128i_i64[1] = *(_QWORD *)(v7 + 8);
        v11 = *(_QWORD *)(v7 + 16);
        v12 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v13 = a5[1].m128i_i64[0];
        if ( v13 )
        {
          a5[1].m128i_i64[1] = 0;
          v53 = v12;
          qfree(v13);
          v12 = _mm_load_si128(&v53);
        }
        a5[1].m128i_i64[0] = v11;
        v7 += 104;
        a5 = (__m128i *)((char *)a5 + 104);
        a5[-5] = v12;
        a5[-4].m128i_i64[0] = *(_QWORD *)(v7 - 64);
        *(__m128i *)((char *)a5 - 56) = _mm_loadu_si128((const __m128i *)(v7 - 56));
        a5[-3].m128i_i64[1] = *(_QWORD *)(v7 - 40);
        a5[-2].m128i_i8[0] = *(_BYTE *)(v7 - 32);
        a5[-2].m128i_i64[1] = *(_QWORD *)(v7 - 24);
        a5[-1] = _mm_loadu_si128((const __m128i *)(v7 - 16));
        if ( v8 == a2 )
          break;
      }
      else
      {
        a5->m128i_i64[0] = *(_QWORD *)v8;
        a5->m128i_i64[1] = *(_QWORD *)(v8 + 8);
        v27 = *(_QWORD *)(v8 + 16);
        v28 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v29 = a5[1].m128i_i64[0];
        if ( v29 )
        {
          a5[1].m128i_i64[1] = 0;
          v53 = v28;
          qfree(v29);
          v28 = _mm_load_si128(&v53);
        }
        a5[1].m128i_i64[0] = v27;
        v8 += 104;
        a5 = (__m128i *)((char *)a5 + 104);
        a5[-5] = v28;
        a5[-4].m128i_i64[0] = *(_QWORD *)(v8 - 64);
        *(__m128i *)((char *)a5 - 56) = _mm_loadu_si128((const __m128i *)(v8 - 56));
        a5[-3].m128i_i64[1] = *(_QWORD *)(v8 - 40);
        a5[-2].m128i_i8[0] = *(_BYTE *)(v8 - 32);
        a5[-2].m128i_i64[1] = *(_QWORD *)(v8 - 24);
        a5[-1] = _mm_loadu_si128((const __m128i *)(v8 - 16));
        if ( v8 == a2 )
          break;
      }
    }
    while ( v7 != v52.m128i_i64[0] );
  }
  v30 = a2 - v8;
  v54 = 0x4EC4EC4EC4EC4EC5LL * (v30 >> 3);
  if ( v30 <= 0 )
  {
    v38 = (__int64)a5;
  }
  else
  {
    v31 = 0x4EC4EC4EC4EC4EC5LL * (v30 >> 3);
    v32 = a5;
    v33 = 0;
    do
    {
      v32->m128i_i64[0] = *(_QWORD *)v8;
      v32->m128i_i64[1] = *(_QWORD *)(v8 + 8);
      v34 = *(_QWORD *)(v8 + 16);
      v35 = _mm_loadu_si128((const __m128i *)(v8 + 24));
      *(_QWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 24) = v33;
      v36 = v32[1].m128i_i64[0];
      if ( v36 )
      {
        v32[1].m128i_i64[1] = 0;
        v53 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v53);
        v33 = 0;
      }
      v32[1].m128i_i64[0] = v34;
      v8 += 104;
      v32 = (__m128i *)((char *)v32 + 104);
      v32[-5] = v35;
      v32[-4].m128i_i64[0] = *(_QWORD *)(v8 - 64);
      *(__m128i *)((char *)v32 - 56) = _mm_loadu_si128((const __m128i *)(v8 - 56));
      v32[-3].m128i_i64[1] = *(_QWORD *)(v8 - 40);
      v32[-2].m128i_i8[0] = *(_BYTE *)(v8 - 32);
      v32[-2].m128i_i64[1] = *(_QWORD *)(v8 - 24);
      v32[-1] = _mm_loadu_si128((const __m128i *)(v8 - 16));
      --v31;
    }
    while ( v31 );
    v37 = v54 - 1;
    if ( v54 - 1 < 0 )
      v37 = 0;
    v38 = (__int64)&a5[6].m128i_i64[13 * v37 + 1];
  }
  v39 = 0x4EC4EC4EC4EC4EC5LL * ((v52.m128i_i64[0] - v7) >> 3);
  if ( v52.m128i_i64[0] - v7 > 0 )
  {
    v40 = 0x4EC4EC4EC4EC4EC5LL * ((v52.m128i_i64[0] - v7) >> 3);
    v41 = (__m128i *)v38;
    v42 = 0;
    do
    {
      v41->m128i_i64[0] = *(_QWORD *)v7;
      v41->m128i_i64[1] = *(_QWORD *)(v7 + 8);
      v43 = *(_QWORD *)(v7 + 16);
      v44 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      *(_QWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 24) = v42;
      v45 = v41[1].m128i_i64[0];
      if ( v45 )
      {
        v41[1].m128i_i64[1] = 0;
        v52 = v44;
        qfree(v45);
        v44 = _mm_load_si128(&v52);
        v42 = 0;
      }
      v41[1].m128i_i64[0] = v43;
      v7 += 104;
      v41 = (__m128i *)((char *)v41 + 104);
      v41[-5] = v44;
      v41[-4].m128i_i64[0] = *(_QWORD *)(v7 - 64);
      *(__m128i *)((char *)v41 - 56) = _mm_loadu_si128((const __m128i *)(v7 - 56));
      v41[-3].m128i_i64[1] = *(_QWORD *)(v7 - 40);
      v41[-2].m128i_i8[0] = *(_BYTE *)(v7 - 32);
      v41[-2].m128i_i64[1] = *(_QWORD *)(v7 - 24);
      v41[-1] = _mm_loadu_si128((const __m128i *)(v7 - 16));
      --v40;
    }
    while ( v40 );
    v46 = v39 - 1;
    if ( v46 < 0 )
      v46 = 0;
    v38 += 104 * (v46 + 1);
  }
  return v38;
}

