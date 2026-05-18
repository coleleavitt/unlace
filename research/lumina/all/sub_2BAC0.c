unsigned __int64 __fastcall sub_2BAC0(
        __int64 a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char *s,
        char *a8,
        const char *a9)
{
  size_t v12; // r13
  size_t v13; // rax
  __int64 v14; // r13
  size_t v15; // r12
  size_t v16; // rax
  size_t v17; // r12
  size_t v18; // rbp
  size_t v19; // rax
  __int64 v20; // r12
  size_t v21; // rbp
  size_t v22; // rax
  __int64 v23; // r12
  size_t v24; // rbp
  size_t v25; // rax
  __int64 v26; // rbp
  size_t v27; // rbx
  char *v28; // rsi
  char *v30; // rdi
  char *v31; // rsi
  __m128 v32; // xmm1
  void *v33; // rcx
  void *v34; // rdx
  __m128i v35; // xmm4
  void *v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm3
  __m128i v39; // xmm2
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  size_t n; // [rsp+8h] [rbp-128h]
  size_t na; // [rsp+8h] [rbp-128h]
  char *s1; // [rsp+28h] [rbp-108h] BYREF
  __m128 v47; // [rsp+30h] [rbp-100h] BYREF
  void *v48; // [rsp+40h] [rbp-F0h] BYREF
  __m128i v49; // [rsp+48h] [rbp-E8h] BYREF
  void *v50; // [rsp+58h] [rbp-D8h] BYREF
  __m128i v51; // [rsp+60h] [rbp-D0h] BYREF
  void *v52; // [rsp+70h] [rbp-C0h] BYREF
  __m128i v53; // [rsp+78h] [rbp-B8h] BYREF
  char *s2; // [rsp+88h] [rbp-A8h] BYREF
  __m128 v55; // [rsp+90h] [rbp-A0h] BYREF
  void *v56; // [rsp+A0h] [rbp-90h] BYREF
  __m128i v57; // [rsp+A8h] [rbp-88h] BYREF
  void *v58; // [rsp+B8h] [rbp-78h] BYREF
  __m128i v59; // [rsp+C0h] [rbp-70h] BYREF
  void *v60; // [rsp+D0h] [rbp-60h] BYREF
  __m128i v61; // [rsp+D8h] [rbp-58h] BYREF
  char v62; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+F0h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v47 = 0;
  s1 = nullptr;
  if ( a3 )
  {
    n = strlen(a3);
    s1 = (char *)sub_1987B0(&s1, 0, n + 1, 1);
    v47.m128_u64[0] = n + 1;
    memmove(s1, a3, n);
    s1[n] = 0;
  }
  v48 = nullptr;
  v49 = 0;
  if ( a4 )
  {
    na = strlen(a4);
    v48 = (void *)sub_1987B0(&v48, 0, na + 1, 1);
    v49.m128i_i64[0] = na + 1;
    memmove(v48, a4, na);
    *((_BYTE *)v48 + na) = 0;
  }
  v50 = nullptr;
  v51 = 0;
  if ( a2 )
  {
    v12 = strlen(a2);
    v50 = (void *)sub_1987B0(&v50, 0, v12 + 1, 1);
    v51.m128i_i64[0] = v12 + 1;
    memmove(v50, a2, v12);
    *((_BYTE *)v50 + v12) = 0;
  }
  v52 = nullptr;
  v53 = 0;
  if ( a5 )
  {
    v13 = strlen(a5);
    v14 = v13 + 1;
    v15 = v13;
    v52 = (void *)sub_1987B0(&v52, 0, v13 + 1, 1);
    v53.m128i_i64[0] = v14;
    memmove(v52, a5, v15);
    *((_BYTE *)v52 + v15) = 0;
  }
  s2 = nullptr;
  v55 = 0;
  if ( s )
  {
    v16 = strlen(s);
    v17 = v16 + 1;
    v18 = v16;
    s2 = (char *)sub_1987B0(&s2, 0, v16 + 1, 1);
    v55.m128_u64[0] = v17;
    memmove(s2, s, v18);
    s2[v18] = 0;
  }
  v56 = nullptr;
  v57 = 0;
  if ( a8 )
  {
    v19 = strlen(a8);
    v20 = v19 + 1;
    v21 = v19;
    v56 = (void *)sub_1987B0(&v56, 0, v19 + 1, 1);
    v57.m128i_i64[0] = v20;
    memmove(v56, a8, v21);
    *((_BYTE *)v56 + v21) = 0;
  }
  v58 = nullptr;
  v59 = 0;
  if ( a6 )
  {
    v22 = strlen(a6);
    v23 = v22 + 1;
    v24 = v22;
    v58 = (void *)sub_1987B0(&v58, 0, v22 + 1, 1);
    v59.m128i_i64[0] = v23;
    memmove(v58, a6, v24);
    *((_BYTE *)v58 + v24) = 0;
  }
  v60 = nullptr;
  v61 = 0;
  if ( a9 )
  {
    v25 = strlen(a9);
    v26 = v25 + 1;
    v27 = v25;
    v60 = (void *)sub_1987B0(&v60, 0, v25 + 1, 1);
    v61.m128i_i64[0] = v26;
    memmove(v60, a9, v27);
    *((_BYTE *)v60 + v27) = 0;
  }
  v62 = 0;
  if ( v55.m128_u64[0] )
  {
    v28 = s2;
    v30 = (char *)::s1;
    if ( !v47.m128_u64[0] )
      goto LABEL_38;
  }
  else
  {
    v28 = (char *)::s1;
    if ( !v47.m128_u64[0] )
      goto LABEL_19;
  }
  v30 = s1;
LABEL_38:
  if ( strcmp(v30, v28) > 0 )
  {
    v31 = s1;
    v32 = _mm_loadh_ps((const double *)&v47.m128_u64[1]);
    v33 = v48;
    v34 = v50;
    v47 = _mm_loadh_ps((const double *)&v55.m128_u64[1]);
    v35 = _mm_load_si128(&v49);
    v36 = v52;
    v37 = _mm_load_si128(&v57);
    s1 = s2;
    v38 = _mm_loadu_si128(&v51);
    s2 = v31;
    v39 = _mm_load_si128(&v53);
    v49 = v37;
    v40 = _mm_loadu_si128(&v59);
    v48 = v56;
    v51 = v40;
    v41 = _mm_load_si128(&v61);
    v50 = v58;
    v56 = v33;
    v52 = v60;
    v58 = v34;
    v60 = v36;
    v53 = v41;
    v55 = v32;
    v57 = v35;
    v59 = v38;
    v61 = v39;
  }
LABEL_19:
  sub_2B660((__int64 *)(a1 + 96), (__int64)&s1);
  if ( v60 )
  {
    v61.m128i_i64[0] = 0;
    j__free(v60);
  }
  if ( v58 )
  {
    v59.m128i_i64[0] = 0;
    j__free(v58);
  }
  if ( v56 )
  {
    v57.m128i_i64[0] = 0;
    j__free(v56);
  }
  if ( s2 )
  {
    v55.m128_u64[0] = 0;
    j__free(s2);
  }
  if ( v52 )
  {
    v53.m128i_i64[0] = 0;
    j__free(v52);
  }
  if ( v50 )
  {
    v51.m128i_i64[0] = 0;
    j__free(v50);
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    j__free(v48);
  }
  if ( s1 )
  {
    v47.m128_u64[0] = 0;
    j__free(s1);
  }
  return v63 - __readfsqword(0x28u);
}
