__int64 __fastcall sub_95D0(__int64 *a1, const char *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  __m128i v6; // xmm0
  size_t v7; // rbx
  size_t v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rbx
  void *v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-168h] BYREF
  void *src; // [rsp+10h] [rbp-158h]
  size_t n[2]; // [rsp+18h] [rbp-150h]
  void *v24; // [rsp+28h] [rbp-140h]
  size_t v25[2]; // [rsp+30h] [rbp-138h]
  __int128 v26; // [rsp+40h] [rbp-128h] BYREF
  __m128i v27; // [rsp+58h] [rbp-110h] BYREF
  __m128i v28; // [rsp+68h] [rbp-100h] BYREF
  __int64 v29; // [rsp+78h] [rbp-F0h]
  __int64 v30; // [rsp+80h] [rbp-E8h]
  char v31; // [rsp+88h] [rbp-E0h]
  __m128i v32; // [rsp+90h] [rbp-D8h] BYREF
  void *v33; // [rsp+A0h] [rbp-C8h]
  __m128i v34; // [rsp+A8h] [rbp-C0h] BYREF
  void *v35; // [rsp+B8h] [rbp-B0h]
  __m128i v36; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v38; // [rsp+D8h] [rbp-90h] BYREF
  __m128i v39; // [rsp+E8h] [rbp-80h] BYREF
  __m128i v40; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v41; // [rsp+108h] [rbp-60h]
  __int64 v42; // [rsp+110h] [rbp-58h]
  char v43; // [rsp+118h] [rbp-50h]
  unsigned __int64 v44; // [rsp+128h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  LODWORD(v29) = -1;
  src = nullptr;
  v24 = nullptr;
  v28.m128i_i64[1] = 1;
  v30 = 0;
  v31 = 0;
  v21 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v25 = 0;
  v26 = 0;
  v4 = sub_91B0(&v21, a2, a3, a4, 1);
  if ( (_BYTE)v4 )
  {
    v6 = _mm_load_si128(&v21);
    v7 = n[0];
    v33 = nullptr;
    v32 = v6;
    v34 = 0;
    if ( n[0] )
    {
      v33 = (void *)qalloc_or_throw(n[0]);
      v34.m128i_i64[1] = v7;
      memcpy(v33, src, v7);
      v34.m128i_i64[0] = v7;
    }
    v8 = v25[0];
    v35 = nullptr;
    v36 = 0;
    if ( v25[0] )
    {
      v35 = (void *)qalloc_or_throw(v25[0]);
      v36.m128i_i64[1] = v8;
      memcpy(v35, v24, v8);
      v36.m128i_i64[0] = v8;
    }
    v37 = 0;
    copy_tinfo_t(&v37, &v26);
    v9 = _mm_loadu_si128((const __m128i *)((char *)&v26 + 8));
    v10 = a1[1];
    v11 = *a1;
    v41 = v29;
    v38 = v9;
    v12 = _mm_loadu_si128(&v27);
    v42 = v30;
    v39 = v12;
    v13 = _mm_loadu_si128(&v28);
    v43 = v31;
    v40 = v13;
    if ( a1[2] < (unsigned __int64)(v10 + 1) )
    {
      v20 = qvector_reserve(a1, v11, v10 + 1, 144);
      *a1 = v20;
      v10 = a1[1];
      v11 = v20;
    }
    v14 = v11 + 144 * v10;
    *(__m128i *)v14 = _mm_load_si128(&v32);
    v15 = v33;
    v16 = _mm_loadu_si128(&v34);
    *(_QWORD *)(v14 + 64) = 0;
    *(__m128i *)(v14 + 24) = v16;
    *(_QWORD *)(v14 + 16) = v15;
    v17 = _mm_load_si128(&v36);
    v33 = nullptr;
    *(_QWORD *)(v14 + 40) = v35;
    *(__m128i *)(v14 + 48) = v17;
    v35 = nullptr;
    v34 = 0;
    v36 = 0;
    copy_tinfo_t(v14 + 64, &v37);
    v18 = v41;
    *(__m128i *)(v14 + 72) = _mm_loadu_si128(&v38);
    v19 = _mm_loadu_si128(&v39);
    *(_QWORD *)(v14 + 120) = v18;
    *(__m128i *)(v14 + 88) = v19;
    *(__m128i *)(v14 + 104) = _mm_loadu_si128(&v40);
    *(_QWORD *)(v14 + 128) = v42;
    *(_BYTE *)(v14 + 136) = v43;
    ++a1[1];
    clear_tinfo_t(&v37);
    if ( v35 )
    {
      v36.m128i_i64[0] = 0;
      qfree(v35);
    }
    if ( v33 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v33);
    }
  }
  clear_tinfo_t(&v26);
  if ( v24 )
  {
    v25[0] = 0;
    qfree(v24);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v4;
}

