unsigned __int64 __fastcall sub_7A50(__int64 a1, __int64 *a2, unsigned __int64 that, unsigned __int64 a4)
{
  unsigned __int64 max_strlit_length; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __m128i v30[2]; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x1000) == 0 )
    that = next_that();
  v29 = 0;
  v28 = _mm_unpacklo_epi64((__m128i)that, (__m128i)that);
  memset(v30, 0, 24);
  if ( that >= a4 )
  {
    v27 = *(_QWORD *)(a1 + 464);
    if ( v27 >= *a2 && v27 < a2[1] )
      a2[1] = v27;
    return that;
  }
  while ( 1 )
  {
    max_strlit_length = get_max_strlit_length();
    v9 = v28.m128i_i64[1];
    v8 = v28.m128i_i64[0];
    v10 = max_strlit_length;
    if ( max_strlit_length <= 8 )
      break;
    if ( v28.m128i_i64[0] == v28.m128i_i64[1] )
      goto LABEL_8;
    if ( that != v28.m128i_i64[1] )
    {
      if ( v28.m128i_i64[0] < (unsigned __int64)v28.m128i_i64[1] )
        goto LABEL_15;
LABEL_8:
      that += max_strlit_length;
      goto LABEL_9;
    }
    if ( (unsigned __int8)get_byte() )
    {
      v8 = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] < (unsigned __int64)v28.m128i_i64[1] )
      {
        that = v28.m128i_u64[1];
        v9 = v28.m128i_i64[1];
        goto LABEL_15;
      }
      that += v10;
      v9 = v28.m128i_i64[1];
LABEL_9:
      v28.m128i_i64[1] = v9 + v10;
      if ( that >= a4 )
        goto LABEL_32;
    }
    else
    {
      v25 = v30[0].m128i_i64[0];
      v26 = v29;
      if ( v30[0].m128i_i64[1] < (unsigned __int64)(v30[0].m128i_i64[0] + 1) )
      {
        v29 = qvector_reserve();
        v26 = v29;
        v25 = v30[0].m128i_i64[0];
      }
      *(_QWORD *)(v26 + 8 * v25) = that;
      that += v10;
      ++v30[0].m128i_i64[0];
      v28.m128i_i64[1] += v10;
      ++v30[1].m128i_i64[0];
      if ( that >= a4 )
      {
LABEL_32:
        v9 = v28.m128i_i64[1];
        v8 = v28.m128i_i64[0];
        goto LABEL_15;
      }
    }
  }
  v11 = max_strlit_length == 0;
  v12 = 1;
  if ( !v11 )
    v12 = v10;
  v13 = that + v12;
  if ( v28.m128i_i64[0] >= (unsigned __int64)v28.m128i_i64[1] )
    that = v13;
LABEL_15:
  v14 = *(_QWORD *)(a1 + 464);
  v15 = *a2;
  v16 = v29;
  v17 = v9 - v8;
  if ( v14 >= *a2 && v14 < a2[1] )
    a2[1] = v14;
  if ( v17 > 0x1FF )
  {
    v18 = a2[1] - v15;
    if ( v18 <= 0x1FF )
      goto LABEL_22;
    v19 = 100 * a2[5];
    if ( v18 < v19 == v17 < 100 * v30[1].m128i_i64[0] )
    {
      if ( v18 < v17 )
      {
LABEL_22:
        v20 = v30[1].m128i_i64[0];
        *a2 = v8;
        v21 = _mm_loadu_si128(v30);
        a2[1] = v9;
        v22 = _mm_loadu_si128((const __m128i *)a2 + 2);
        a2[5] = v20;
        v23 = a2[2];
        *(__m128i *)(a2 + 3) = v21;
        a2[2] = v29;
        v16 = v23;
        *(__m128i *)((char *)v30 + 8) = v22;
      }
    }
    else if ( v18 < v19 )
    {
      goto LABEL_22;
    }
  }
  if ( v16 )
  {
    v30[0].m128i_i64[0] = 0;
    qfree();
  }
  return that;
}
