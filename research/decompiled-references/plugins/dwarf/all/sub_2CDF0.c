__int64 __fastcall sub_2CDF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rax
  __int64 tinfo_size; // rax
  __int64 v9; // r14
  size_t v10; // rax
  size_t v11; // r12
  size_t v12; // rbx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rbx
  void *v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  __m128i v23; // xmm0
  size_t v25; // r13
  size_t v26; // r12
  __int64 v27; // rax
  void *v28; // rdi
  size_t v29; // rbx
  size_t v30; // rbx
  void *v31; // [rsp+10h] [rbp-5C8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-5C0h]
  __int64 v33; // [rsp+28h] [rbp-5B0h]
  __int128 v34; // [rsp+30h] [rbp-5A8h]
  __int64 v35; // [rsp+40h] [rbp-598h]
  char v36; // [rsp+48h] [rbp-590h]
  __int128 v37; // [rsp+50h] [rbp-588h]
  __int64 v38; // [rsp+60h] [rbp-578h]
  __m128i v39; // [rsp+70h] [rbp-568h]
  void *dest; // [rsp+80h] [rbp-558h] BYREF
  size_t v41[2]; // [rsp+88h] [rbp-550h]
  void *src; // [rsp+98h] [rbp-540h]
  size_t n[2]; // [rsp+A0h] [rbp-538h]
  __int128 v44; // [rsp+B0h] [rbp-528h] BYREF
  __m128i v45; // [rsp+C8h] [rbp-510h] BYREF
  __m128i v46; // [rsp+D8h] [rbp-500h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-4F0h]
  __int64 v48; // [rsp+F0h] [rbp-4E8h]
  char v49; // [rsp+F8h] [rbp-4E0h]
  __m128i v50; // [rsp+100h] [rbp-4D8h] BYREF
  void *v51; // [rsp+110h] [rbp-4C8h]
  __m128i v52; // [rsp+118h] [rbp-4C0h] BYREF
  void *v53; // [rsp+128h] [rbp-4B0h]
  __m128i v54; // [rsp+130h] [rbp-4A8h] BYREF
  __int64 v55; // [rsp+140h] [rbp-498h] BYREF
  __m128i v56; // [rsp+148h] [rbp-490h] BYREF
  __m128i v57; // [rsp+158h] [rbp-480h] BYREF
  __m128i v58; // [rsp+168h] [rbp-470h] BYREF
  __int64 v59; // [rsp+178h] [rbp-460h]
  __int64 v60; // [rsp+180h] [rbp-458h]
  char v61; // [rsp+188h] [rbp-450h]
  char s[1032]; // [rsp+190h] [rbp-448h] BYREF
  unsigned __int64 v63; // [rsp+598h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v6 = a5;
  if ( a5 - 1 >= 0xFFFFFFFFFFFFFFFELL )
    v6 = 8;
  qsnprintf(s, 1024, "%s%llu", "gap", 0);
  dest = nullptr;
  src = nullptr;
  v46.m128i_i64[1] = 1;
  LODWORD(v47) = -1;
  v48 = 0;
  v49 = 0;
  v31 = nullptr;
  v33 = -1;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  *(_OWORD *)v41 = 0;
  *(_OWORD *)n = 0;
  v44 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v7 = strlen(s);
  if ( v7 )
  {
    v25 = v7 + 1;
    v26 = v7;
    v31 = (void *)qvector_reserve(&v31, 0, v7 + 1, 1);
    *(_QWORD *)&v32 = v25;
    memmove(v31, s, v26);
    *((_BYTE *)v31 + v26) = 0;
  }
  v36 = 2;
  *(_QWORD *)&v37 = v6;
  v33 = 0;
  sub_28E60((__int64)&v44, v6 >> 3);
  tinfo_size = get_tinfo_size(0, v44, 1);
  v39.m128i_i64[1] = v6;
  v39.m128i_i64[0] = 0;
  v9 = tinfo_size & 0x1FFFFFFFFFFFFFFFLL;
  v10 = strlen(s);
  v11 = v10;
  if ( v10 )
  {
    v28 = dest;
    v29 = v10 + 1;
    if ( v41[1] < v10 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v29, 1);
      v28 = dest;
    }
    v41[0] = v29;
    memmove(v28, s, v11);
    *((_BYTE *)dest + v11) = 0;
    v30 = v41[0];
    v52 = 0;
    v50 = v39;
    v51 = nullptr;
    if ( v41[0] )
    {
      v51 = (void *)qalloc_or_throw(v41[0]);
      v52.m128i_i64[1] = v30;
      memcpy(v51, dest, v30);
      v52.m128i_i64[0] = v30;
    }
  }
  else
  {
    v41[0] = 0;
    v50.m128i_i64[0] = 0;
    v50.m128i_i64[1] = v6;
    v51 = nullptr;
    v52 = 0;
  }
  v12 = n[0];
  v53 = nullptr;
  v54 = 0;
  if ( n[0] )
  {
    v53 = (void *)qalloc_or_throw(n[0]);
    v54.m128i_i64[1] = v12;
    memcpy(v53, src, v12);
    v54.m128i_i64[0] = v12;
  }
  v55 = 0;
  copy_tinfo_t(&v55, &v44);
  v13 = _mm_loadu_si128((const __m128i *)((char *)&v44 + 8));
  v14 = a1[1];
  v15 = *a1;
  v59 = v47;
  v56 = v13;
  v16 = _mm_loadu_si128(&v45);
  v60 = v48;
  v57 = v16;
  v17 = _mm_loadu_si128(&v46);
  v61 = v49;
  v58 = v17;
  if ( a1[2] < (unsigned __int64)(v14 + 1) )
  {
    v27 = qvector_reserve(a1, v15, v14 + 1, 144);
    *a1 = v27;
    v14 = a1[1];
    v15 = v27;
  }
  v18 = v15 + 144 * v14;
  *(__m128i *)v18 = _mm_load_si128(&v50);
  v19 = v51;
  v20 = _mm_loadu_si128(&v52);
  *(_QWORD *)(v18 + 64) = 0;
  *(__m128i *)(v18 + 24) = v20;
  *(_QWORD *)(v18 + 16) = v19;
  v21 = _mm_load_si128(&v54);
  v51 = nullptr;
  *(_QWORD *)(v18 + 40) = v53;
  *(__m128i *)(v18 + 48) = v21;
  v53 = nullptr;
  v52 = 0;
  v54 = 0;
  copy_tinfo_t(v18 + 64, &v55);
  v22 = v59;
  *(__m128i *)(v18 + 72) = _mm_loadu_si128(&v56);
  v23 = _mm_loadu_si128(&v57);
  *(_QWORD *)(v18 + 120) = v22;
  *(__m128i *)(v18 + 88) = v23;
  *(__m128i *)(v18 + 104) = _mm_loadu_si128(&v58);
  *(_QWORD *)(v18 + 128) = v60;
  *(_BYTE *)(v18 + 136) = v61;
  ++a1[1];
  clear_tinfo_t(&v55);
  if ( v53 )
  {
    v54.m128i_i64[0] = 0;
    qfree(v53);
  }
  if ( v51 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v51);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  clear_tinfo_t(&v44);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( dest )
  {
    v41[0] = 0;
    qfree(dest);
  }
  return v9;
}
