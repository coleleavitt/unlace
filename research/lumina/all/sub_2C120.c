unsigned __int64 __fastcall sub_2C120(__int64 a1, const char *a2, const char *a3, const char *a4, const char *a5)
{
  size_t v9; // r15
  size_t v10; // rax
  __int64 v11; // r15
  size_t v12; // r14
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r13
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // r12
  char *v19; // rsi
  char *v21; // rdi
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  char *v24; // rsi
  __m128 v25; // xmm1
  void *v26; // rcx
  __m128i v27; // xmm4
  void *v28; // rdx
  void *v29; // rax
  __m128i v30; // xmm0
  char *s1; // [rsp+8h] [rbp-108h] BYREF
  __m128 v32; // [rsp+10h] [rbp-100h] BYREF
  void *v33; // [rsp+20h] [rbp-F0h] BYREF
  __m128i v34; // [rsp+28h] [rbp-E8h] BYREF
  void *v35; // [rsp+38h] [rbp-D8h]
  __m128i v36; // [rsp+40h] [rbp-D0h] BYREF
  void *v37; // [rsp+50h] [rbp-C0h]
  __m128i v38; // [rsp+58h] [rbp-B8h] BYREF
  char *s2; // [rsp+68h] [rbp-A8h] BYREF
  __m128 v40; // [rsp+70h] [rbp-A0h] BYREF
  void *v41; // [rsp+80h] [rbp-90h] BYREF
  __m128i v42; // [rsp+88h] [rbp-88h] BYREF
  void *v43; // [rsp+98h] [rbp-78h]
  __m128i v44; // [rsp+A0h] [rbp-70h]
  void *v45; // [rsp+B0h] [rbp-60h]
  __m128i v46; // [rsp+B8h] [rbp-58h]
  char v47; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v48; // [rsp+D0h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v32 = 0;
  s1 = nullptr;
  if ( a2 )
  {
    v9 = strlen(a2);
    s1 = (char *)sub_1987B0(&s1, 0, v9 + 1, 1);
    v32.m128_u64[0] = v9 + 1;
    memmove(s1, a2, v9);
    s1[v9] = 0;
  }
  v33 = nullptr;
  v34 = 0;
  if ( a3 )
  {
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
    v33 = (void *)sub_1987B0(&v33, 0, v10 + 1, 1);
    v34.m128i_i64[0] = v11;
    memmove(v33, a3, v12);
    *((_BYTE *)v33 + v12) = 0;
  }
  v35 = nullptr;
  v37 = nullptr;
  s2 = nullptr;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  if ( a4 )
  {
    v13 = strlen(a4);
    v14 = v13 + 1;
    v15 = v13;
    s2 = (char *)sub_1987B0(&s2, 0, v13 + 1, 1);
    v40.m128_u64[0] = v14;
    memmove(s2, a4, v15);
    s2[v15] = 0;
  }
  v41 = nullptr;
  v42 = 0;
  if ( a5 )
  {
    v16 = strlen(a5);
    v17 = v16 + 1;
    v18 = v16;
    v41 = (void *)sub_1987B0(&v41, 0, v16 + 1, 1);
    v42.m128i_i64[0] = v17;
    memmove(v41, a5, v18);
    *((_BYTE *)v41 + v18) = 0;
  }
  v43 = nullptr;
  v47 = 0;
  v45 = nullptr;
  v44 = 0;
  v46 = 0;
  if ( v40.m128_u64[0] )
  {
    v19 = s2;
    v21 = (char *)::s1;
    if ( !v32.m128_u64[0] )
      goto LABEL_30;
  }
  else
  {
    v19 = (char *)::s1;
    if ( !v32.m128_u64[0] )
      goto LABEL_11;
  }
  v21 = s1;
LABEL_30:
  if ( strcmp(v21, v19) > 0 )
  {
    v22 = _mm_loadu_si128(&v36);
    v23 = _mm_load_si128(&v38);
    v36 = 0;
    v24 = s1;
    v25 = _mm_loadh_ps((const double *)&v32.m128_u64[1]);
    v38 = 0;
    v26 = v33;
    v27 = _mm_load_si128(&v34);
    v28 = v35;
    v29 = v37;
    s1 = s2;
    v32 = _mm_loadh_ps((const double *)&v40.m128_u64[1]);
    v30 = _mm_load_si128(&v42);
    v35 = nullptr;
    v37 = nullptr;
    v33 = v41;
    s2 = v24;
    v41 = v26;
    v43 = v28;
    v45 = v29;
    v34 = v30;
    v40 = v25;
    v42 = v27;
    v44 = v22;
    v46 = v23;
  }
LABEL_11:
  sub_2B660((__int64 *)(a1 + 96), (__int64)&s1);
  if ( v45 )
  {
    v46.m128i_i64[0] = 0;
    j__free(v45);
  }
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    j__free(v43);
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    j__free(v41);
  }
  if ( s2 )
  {
    v40.m128_u64[0] = 0;
    j__free(s2);
  }
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    j__free(v37);
  }
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    j__free(v35);
  }
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    j__free(v33);
  }
  if ( s1 )
  {
    v32.m128_u64[0] = 0;
    j__free(s1);
  }
  return v48 - __readfsqword(0x28u);
}
