_QWORD *__fastcall sub_18DE0(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        const __m128i *a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __m128i v16; // xmm0
  __int64 v17; // rbx
  __m128 si128; // xmm2
  __int64 v19; // r12
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbp
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _BOOL8 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 *v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __m128 v41; // [rsp+0h] [rbp-68h] BYREF
  __m128i v42; // [rsp+10h] [rbp-58h] BYREF
  __m128i v43[4]; // [rsp+20h] [rbp-48h] BYREF

  v11 = operator new(0xA0u);
  v15 = *a3;
  v16 = _mm_loadu_si128(a4 + 1);
  v17 = v11;
  si128 = (__m128)_mm_loadu_si128(a4 + 2);
  v19 = a4[4].m128i_i64[1];
  a4[1] = 0;
  *(_QWORD *)(v11 + 32) = v15;
  LODWORD(v11) = a4->m128i_i32[0];
  *(__m128i *)(v17 + 56) = v16;
  v20 = _mm_loadu_si128(a4 + 3);
  *(_DWORD *)(v17 + 40) = v11;
  v21 = a4->m128i_i64[1];
  *(__m128i *)(v17 + 88) = v20;
  v22 = _mm_loadu_si128(a4 + 5);
  *(_QWORD *)(v17 + 48) = v21;
  v23 = a4[4].m128i_i64[0];
  a4->m128i_i64[1] = 0;
  *(_QWORD *)(v17 + 104) = v23;
  v24 = a4[6].m128i_i64[0];
  a4[2].m128i_i64[1] = 0;
  *(_QWORD *)(v17 + 136) = v24;
  v25 = a4[6].m128i_i64[1];
  a4[4].m128i_i64[1] = 0;
  *(_QWORD *)(v17 + 144) = v25;
  LODWORD(v25) = a4[7].m128i_i32[0];
  a4[3] = 0;
  *(_DWORD *)(v17 + 152) = v25;
  LOBYTE(v25) = a4[7].m128i_i8[4];
  a4[5] = 0;
  v26 = a2;
  *(_QWORD *)(v17 + 112) = v19;
  *(_BYTE *)(v17 + 156) = v25;
  *(__m128 *)(v17 + 72) = si128;
  *(__m128i *)(v17 + 120) = v22;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v12 = a1[4];
      v26 = nullptr;
      if ( *(_QWORD *)(v12 + 32) < v15 )
        goto LABEL_6;
    }
LABEL_5:
    v42 = v22;
    v41 = si128;
    v29 = sub_78C0((__int64)a1, v15, v12, v13, v14);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v41);
    v22.m128i_i64[0] = _mm_load_si128(&v42).m128i_u64[0];
    v26 = v29;
    goto LABEL_6;
  }
  v27 = a2[4];
  if ( v15 < v27 )
  {
    v12 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v42 = v22;
    v41 = si128;
    v28 = std::_Rb_tree_decrement(a2, a2, a2, v27, v14);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v41);
    v22 = _mm_load_si128(&v42);
    v12 = v28;
    if ( *(_QWORD *)(v28 + 32) >= v15 )
      goto LABEL_5;
    if ( *(_QWORD *)(v28 + 24) )
      v12 = (unsigned __int64)a2;
    else
      v26 = nullptr;
LABEL_6:
    if ( v12 )
    {
      if ( a1 + 1 == (_QWORD *)v12 || v26 )
      {
        v30 = 1;
LABEL_10:
        v26 = (_QWORD *)v17;
        std::_Rb_tree_insert_and_rebalance(v30, v17, v12, a1 + 1);
        ++a1[5];
        return v26;
      }
      goto LABEL_39;
    }
    goto LABEL_12;
  }
  v41.m128_u64[0] = a2[4];
  if ( v27 >= v15 )
    goto LABEL_12;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v43[0] = v22;
    v42 = (__m128i)si128;
    v39 = std::_Rb_tree_increment(a2);
    si128 = (__m128)_mm_load_si128(&v42);
    v22 = _mm_load_si128(v43);
    v12 = v39;
    if ( v15 < *(_QWORD *)(v39 + 32) )
    {
      v40 = v41.m128_u64[0];
      if ( !a2[3] )
      {
        v12 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_40;
        goto LABEL_12;
      }
      v26 = (_QWORD *)v39;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v12 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_39:
    v40 = *(_QWORD *)(v12 + 32);
LABEL_40:
    v30 = v15 < v40;
    goto LABEL_10;
  }
LABEL_12:
  if ( v17 )
  {
    if ( v19 )
    {
      if ( v22.m128i_i64[0] )
      {
        v31 = 0;
        v32 = 0;
        do
        {
          v33 = (__int64 *)(v31 + v19);
          v34 = v33[3];
          if ( v34 )
          {
            v33[4] = 0;
            qfree(v34);
          }
          v35 = *v33;
          if ( *v33 )
          {
            v33[1] = 0;
            qfree(v35);
          }
          ++v32;
          v19 = *(_QWORD *)(v17 + 112);
          v31 += 56;
        }
        while ( v32 != v22.m128i_i64[0] );
      }
      *(_QWORD *)(v17 + 120) = 0;
      qfree(v19);
      v36 = *(_QWORD *)(v17 + 80);
    }
    else
    {
      v36 = _mm_movehl_ps(a8, si128).m128_u64[0];
    }
    if ( v36 )
    {
      *(_QWORD *)(v17 + 88) = 0;
      qfree(v36);
    }
    v37 = *(_QWORD *)(v17 + 48);
    if ( v37 )
    {
      *(_QWORD *)(v17 + 56) = 0;
      qfree(v37);
    }
    operator delete((void *)v17, 0xA0u);
  }
  return v26;
}
