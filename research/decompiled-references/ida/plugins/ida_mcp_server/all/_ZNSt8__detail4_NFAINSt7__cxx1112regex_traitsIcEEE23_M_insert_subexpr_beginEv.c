unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(void **a1)
{
  __int64 v1; // rcx
  __int64 *v2; // r8
  __int64 *v3; // rax
  __m128i v4; // xmm1
  __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  char *v17; // rax
  size_t v18; // rdx
  size_t v19; // r8
  void *v20; // r9
  char *v21; // r10
  char *v22; // rax
  __int64 v23; // rax
  void *v24; // [rsp+0h] [rbp-A8h]
  void *v25; // [rsp+0h] [rbp-A8h]
  __int64 v26; // [rsp+0h] [rbp-A8h]
  size_t v27; // [rsp+8h] [rbp-A0h]
  size_t v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+8h] [rbp-A0h]
  void *src; // [rsp+10h] [rbp-98h]
  void *srca; // [rsp+10h] [rbp-98h]
  char *srcb; // [rsp+10h] [rbp-98h]
  size_t n; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+18h] [rbp-90h]
  __m128i v35; // [rsp+20h] [rbp-88h] BYREF
  __m128i v36; // [rsp+30h] [rbp-78h] BYREF
  __m128i v37; // [rsp+40h] [rbp-68h] BYREF
  __m128i v38; // [rsp+50h] [rbp-58h]
  __m128i v39; // [rsp+60h] [rbp-48h] BYREF
  __m128i v40; // [rsp+70h] [rbp-38h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-20h]

  v1 = (__int64)a1[5];
  v2 = (__int64 *)a1[2];
  v41 = __readfsqword(0x28u);
  a1[5] = (void *)(v1 + 1);
  v3 = (__int64 *)a1[1];
  if ( v3 == v2 )
  {
    v12 = (char *)v3 - (_BYTE *)*a1;
    v13 = v12 >> 3;
    if ( v12 >> 3 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v14 = 1;
    n = v12;
    if ( v13 )
      v14 = v12 >> 3;
    src = *a1;
    v27 = (size_t)v2;
    v15 = v13 + v14;
    v24 = (void *)v1;
    if ( v15 > 0xFFFFFFFFFFFFFFFLL )
      v15 = 0xFFFFFFFFFFFFFFFLL;
    v16 = 8 * v15;
    v17 = (char *)operator new(8 * v15);
    v18 = n;
    v1 = (__int64)v24;
    v19 = v27;
    v20 = src;
    v21 = v17;
    *(_QWORD *)&v17[n] = v24;
    if ( n )
    {
      na = v27;
      srca = v24;
      v28 = v18;
      v25 = v20;
      v22 = (char *)memcpy(v17, v20, v18);
      v19 = na;
      v1 = (__int64)srca;
      v18 = v28;
      v20 = v25;
      v21 = v22;
    }
    v23 = (__int64)&v21[v18 + 8];
    if ( v20 )
    {
      srcb = v21;
      v29 = (__int64)&v21[v18 + 8];
      v26 = v1;
      operator delete(v20, v19 - (_QWORD)v20);
      v21 = srcb;
      v23 = v29;
      v1 = v26;
    }
    *a1 = v21;
    a1[1] = (void *)v23;
    a1[2] = &v21[v16];
  }
  else
  {
    *v3 = v1;
    a1[1] = v3 + 1;
  }
  v36.m128i_i64[0] = v1;
  v4 = _mm_load_si128(&v36);
  v35.m128i_i32[0] = 8;
  v5 = (__m128i *)a1[8];
  v35.m128i_i64[1] = -1;
  v6 = _mm_load_si128(&v35);
  v39 = v4;
  v7 = _mm_load_si128(&v37);
  v38 = v6;
  v40 = v7;
  if ( v5 == a1[9] )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v8 = (__int64)a1[8];
  }
  else
  {
    *v5 = v6;
    v5[1] = _mm_load_si128(&v39);
    v5[2] = _mm_load_si128(&v40);
    v8 = (__int64)a1[8] + 48;
    a1[8] = (void *)v8;
  }
  v9 = v8 - (_QWORD)a1[7];
  if ( v9 > 4800000 )
    std::__throw_regex_error();
  v10 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 4) - 1;
  if ( v38.m128i_i32[0] == 11 && v40.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
    if ( v35.m128i_i32[0] != 11 )
      return v10;
  }
  else if ( v35.m128i_i32[0] != 11 )
  {
    return v10;
  }
  if ( v37.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
  return v10;
}

