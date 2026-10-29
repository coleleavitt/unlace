unsigned __int64 __fastcall sub_11A90(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 *v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // r12
  size_t v14; // r14
  __m128i v15; // xmm1
  __int64 v16; // rdi
  size_t v17; // rdi
  __m128i v18; // xmm1
  __int64 *v19; // r12
  void **v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // rbx
  size_t v23; // rbp
  __m128i v24; // xmm1
  __int64 v25; // rdi
  size_t v26; // rdi
  __m128i v27; // xmm1
  void *v29; // r8
  void *v30; // rax
  __int64 v31; // rsi
  struct _Unwind_Exception *v32; // rbx
  __m128i v33; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v35; // [rsp+18h] [rbp-70h]
  size_t v36; // [rsp+30h] [rbp-58h] BYREF
  __m128i v37; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v5 = a5;
  v8 = *a2;
  v38 = __readfsqword(0x28u);
  sub_8BF0(v8, (__int64)"%zu", a5);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = *(_QWORD *)(a1 + 192);
  src = nullptr;
  v35 = 0;
  v11 = (unsigned int)sub_C5C0(v9 + 120, v10) - 1;
  if ( v11 >= *(_QWORD *)(v9 + 176) )
  {
    v32 = (struct _Unwind_Exception *)sub_100C0(v9 + 120, v10, v12);
    _Unwind_Resume(v32);
  }
  sub_C8C0((__int64)&src, *(_QWORD *)(*(_QWORD *)(v9 + 168) + 8 * v11), v5, 0x55u);
  sub_C1C0(&v36, (__int64)&src);
  v13 = *a2;
  v14 = v36;
  v36 = 0;
  v15 = _mm_loadu_si128(&v37);
  v37 = 0;
  v16 = v13[3];
  if ( v16 )
  {
    v13[4] = 0;
    v33 = v15;
    qfree(v16, (const char *)&src);
    v17 = v36;
    v18 = _mm_load_si128(&v33);
    v13[3] = v14;
    *((__m128i *)v13 + 2) = v18;
    if ( v17 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v17, (const char *)&src);
    }
  }
  else
  {
    v13[3] = v14;
    *((__m128i *)v13 + 2) = v15;
  }
  v19 = *a2;
  v20 = (void **)(*a2 + 6);
  if ( v20 != &src )
  {
    v21 = v35;
    if ( (unsigned __int64)v35 > 1 )
    {
      v29 = src;
      v30 = (void *)v19[6];
      if ( v19[8] < (unsigned __int64)v35 )
      {
        v31 = v19[6];
        v33.m128i_i64[0] = (__int64)src;
        v30 = (void *)qvector_reserve(v20, v31, v35, 1);
        v19[6] = (__int64)v30;
        v29 = (void *)v33.m128i_i64[0];
      }
      v19[7] = v21;
      memmove(v30, v29, v21 - 1);
      *(_BYTE *)(v19[6] + v21 - 1) = 0;
    }
    else
    {
      v19[7] = 0;
    }
  }
  sub_BED0(&v36, (__int64)&src);
  v22 = *a2;
  v23 = v36;
  v36 = 0;
  v24 = _mm_loadu_si128(&v37);
  v37 = 0;
  v25 = v22[9];
  if ( v25 )
  {
    v22[10] = 0;
    v33 = v24;
    qfree(v25, (const char *)&src);
    v26 = v36;
    v27 = _mm_load_si128(&v33);
    v22[9] = v23;
    *((__m128i *)v22 + 5) = v27;
    if ( v26 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v26, (const char *)&src);
    }
  }
  else
  {
    v22[9] = v23;
    *((__m128i *)v22 + 5) = v24;
  }
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree(src, (const char *)&src);
  }
  return v38 - __readfsqword(0x28u);
}
