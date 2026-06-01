__int64 __fastcall sub_4B740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 (__fastcall *a6)(__m128i *, __m128i *))
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v11; // r12
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm0
  size_t v15; // r12
  int v16; // eax
  __m128i v17; // xmm0
  size_t v18; // r12
  char v19; // r12
  __int64 v20; // r12
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r13
  unsigned __int64 v24; // r13
  _QWORD *v25; // r12
  __int128 v26; // xmm1
  __int64 v27; // r15
  __m128i v28; // xmm0
  __int64 v29; // rdi
  unsigned __int64 v30; // r15
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r12
  _QWORD *v34; // rbx
  __int128 v35; // xmm1
  __int64 v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // r15
  void *v41; // rax
  const void *v42; // rsi
  void *v43; // rax
  const void *v44; // rsi
  __m128i v45; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v46; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-B0h]
  __m128i v48; // [rsp+30h] [rbp-A8h] BYREF
  void *v49; // [rsp+40h] [rbp-98h]
  __int128 v50; // [rsp+48h] [rbp-90h]
  int v51; // [rsp+58h] [rbp-80h]
  __m128i v52; // [rsp+60h] [rbp-78h] BYREF
  void *v53; // [rsp+70h] [rbp-68h]
  __int128 v54; // [rsp+78h] [rbp-60h]
  int v55; // [rsp+88h] [rbp-50h]
  unsigned __int64 v56; // [rsp+98h] [rbp-40h]

  v7 = a3;
  v8 = a1;
  v45.m128i_i64[0] = a4;
  v56 = __readfsqword(0x28u);
  if ( a3 != a4 && a1 != a2 )
  {
    do
    {
      v14 = _mm_loadu_si128((const __m128i *)v8);
      v15 = *(_QWORD *)(v8 + 24);
      v49 = nullptr;
      v50 = 0;
      v48 = v14;
      if ( v15 )
      {
        v43 = (void *)qalloc_or_throw(v15);
        v44 = *(const void **)(v8 + 16);
        *((_QWORD *)&v50 + 1) = v15;
        v49 = v43;
        memcpy(v43, v44, v15);
        *(_QWORD *)&v50 = v15;
      }
      v16 = *(_DWORD *)(v8 + 40);
      v17 = _mm_loadu_si128((const __m128i *)v7);
      v53 = nullptr;
      v18 = *(_QWORD *)(v7 + 24);
      v54 = 0;
      v51 = v16;
      v52 = v17;
      if ( v18 )
      {
        v41 = (void *)qalloc_or_throw(v18);
        v42 = *(const void **)(v7 + 16);
        v53 = v41;
        *((_QWORD *)&v54 + 1) = v18;
        memcpy(v41, v42, v18);
        *(_QWORD *)&v54 = v18;
      }
      v55 = *(_DWORD *)(v7 + 40);
      v19 = a6(&v52, &v48);
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53);
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v49);
      }
      if ( v19 )
      {
        *a5 = *(_QWORD *)v7;
        a5[1] = *(_QWORD *)(v7 + 8);
        v11 = *(_QWORD *)(v7 + 16);
        v12 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v13 = a5[2];
        if ( v13 )
        {
          a5[3] = 0;
          v46 = v12;
          qfree(v13);
          v12 = _mm_load_si128(&v46);
        }
        a5[2] = v11;
        v7 += 48;
        a5 += 6;
        *(__m128i *)(a5 - 3) = v12;
        *((_DWORD *)a5 - 2) = *(_DWORD *)(v7 - 8);
        if ( v8 == a2 )
          break;
      }
      else
      {
        *a5 = *(_QWORD *)v8;
        a5[1] = *(_QWORD *)(v8 + 8);
        v20 = *(_QWORD *)(v8 + 16);
        v21 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v22 = a5[2];
        if ( v22 )
        {
          a5[3] = 0;
          v46 = v21;
          qfree(v22);
          v21 = _mm_load_si128(&v46);
        }
        a5[2] = v20;
        v8 += 48;
        a5 += 6;
        *(__m128i *)(a5 - 3) = v21;
        *((_DWORD *)a5 - 2) = *(_DWORD *)(v8 - 8);
        if ( v8 == a2 )
          break;
      }
    }
    while ( v7 != v45.m128i_i64[0] );
  }
  v23 = a2 - v8;
  v47 = 0xAAAAAAAAAAAAAAABLL * (v23 >> 4);
  if ( v23 <= 0 )
  {
    v31 = (__int64)a5;
  }
  else
  {
    v24 = 0xAAAAAAAAAAAAAAABLL * (v23 >> 4);
    v25 = a5;
    v26 = 0;
    do
    {
      *v25 = *(_QWORD *)v8;
      v25[1] = *(_QWORD *)(v8 + 8);
      v27 = *(_QWORD *)(v8 + 16);
      v28 = _mm_loadu_si128((const __m128i *)(v8 + 24));
      *(_QWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 24) = v26;
      v29 = v25[2];
      if ( v29 )
      {
        v25[3] = 0;
        v46 = v28;
        qfree(v29);
        v28 = _mm_load_si128(&v46);
        v26 = 0;
      }
      v25[2] = v27;
      v8 += 48;
      v25 += 6;
      *(__m128i *)(v25 - 3) = v28;
      *((_DWORD *)v25 - 2) = *(_DWORD *)(v8 - 8);
      --v24;
    }
    while ( v24 );
    v30 = v47 - 1;
    if ( (__int64)(v47 - 1) < 0 )
      v30 = 0;
    v31 = (__int64)&a5[6 * v30 + 6];
  }
  v32 = 0xAAAAAAAAAAAAAAABLL * ((v45.m128i_i64[0] - v7) >> 4);
  if ( v45.m128i_i64[0] - v7 > 0 )
  {
    v33 = 0xAAAAAAAAAAAAAAABLL * ((v45.m128i_i64[0] - v7) >> 4);
    v34 = (_QWORD *)v31;
    v35 = 0;
    do
    {
      *v34 = *(_QWORD *)v7;
      v34[1] = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)(v7 + 16);
      v37 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      *(_QWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 24) = v35;
      v38 = v34[2];
      if ( v38 )
      {
        v34[3] = 0;
        v45 = v37;
        qfree(v38);
        v37 = _mm_load_si128(&v45);
        v35 = 0;
      }
      v34[2] = v36;
      v7 += 48;
      v34 += 6;
      *(__m128i *)(v34 - 3) = v37;
      *((_DWORD *)v34 - 2) = *(_DWORD *)(v7 - 8);
      --v33;
    }
    while ( v33 );
    v39 = v32 - 1;
    if ( v39 < 0 )
      v39 = 0;
    v31 += 16 * (3 * v39 + 3);
  }
  return v31;
}

