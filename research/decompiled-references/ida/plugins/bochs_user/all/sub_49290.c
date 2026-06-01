unsigned __int64 __fastcall sub_49290(__int64 a1)
{
  unsigned __int64 v1; // rax
  __m128i *v2; // rbp
  __int64 v3; // rbx
  __int64 *v5; // r12
  unsigned __int64 v6; // rdx
  __m128i *v7; // r15
  _DWORD *v8; // r13
  __int64 *i; // rbx
  _DWORD *v10; // rbp
  __int64 v11; // rcx
  __m128i *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __m128i *v16; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  void *v21; // r15
  size_t v22; // rbp
  __int64 v23; // rdi
  __m128i v24; // xmm1
  __m128 v25; // xmm0
  __m128i *v26; // rdi
  _QWORD *v27; // rbp
  size_t v29; // r15
  void *v30; // r8
  unsigned __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  void *srca; // [rsp+8h] [rbp-70h]
  void *src; // [rsp+8h] [rbp-70h]
  __int64 v39; // [rsp+10h] [rbp-68h]
  __m128i *v40; // [rsp+10h] [rbp-68h]
  __m128i v41; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 <= 1 )
    return v43 - __readfsqword(0x28u);
  v2 = *(__m128i **)a1;
  v3 = 8 * v1;
  v5 = (__int64 *)(*(_QWORD *)a1 + 8 * v1);
  if ( *(__int64 **)a1 == v5 )
  {
    v42 = nullptr;
    v41 = 0;
    goto LABEL_41;
  }
  if ( !(v3 >> 3) )
  {
    sub_49070(*(__m128i **)a1, v5, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_487D0);
    goto LABEL_39;
  }
  _BitScanReverse64(&v6, v3 >> 3);
  sub_49070(*(__m128i **)a1, v5, 2LL * (int)v6, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_487D0);
  if ( v3 <= 128 )
  {
LABEL_39:
    sub_48E00(v2->m128i_i8, (char *)v5, (__int64 (__fastcall *)(__int64, __int64))sub_487D0);
    goto LABEL_10;
  }
  v7 = v2 + 8;
  sub_48E00(v2->m128i_i8, v2[8].m128i_i8, (__int64 (__fastcall *)(__int64, __int64))sub_487D0);
  do
  {
    v8 = (_DWORD *)v7->m128i_i64[0];
    for ( i = (__int64 *)v7; ; --i )
    {
      v10 = (_DWORD *)*(i - 1);
      if ( !sub_487D0(v8, v10) )
        break;
      *i = (__int64)v10;
    }
    v7 = (__m128i *)((char *)v7 + 8);
    *i = (__int64)v8;
  }
  while ( v5 != (__int64 *)v7 );
LABEL_10:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(__m128i **)a1;
  v39 = 0;
  v42 = nullptr;
  v5 = (__int64 *)v12;
  v41 = 0;
  if ( 8 * v11 )
  {
    v13 = nullptr;
    do
    {
      v17 = *v5;
      if ( v13 && (v18 = v13[2], v18 + *(unsigned int *)v13 == *(_DWORD *)v17) )
      {
        v29 = *(_QWORD *)(v17 + 16);
        if ( v29 )
        {
          v30 = *(void **)(v17 + 8);
          v31 = v29 + v18;
          if ( !__CFADD__(v29, v18) || (v31 = 0x7FFFFFFFFFFFFFFFLL, v18 <= 0x7FFFFFFFFFFFFFFELL) )
          {
            v32 = v13[1];
            v33 = v13[2];
            if ( v13[3] < v31 )
            {
              src = v30;
              v36 = qvector_reserve();
              v13[1] = v36;
              v32 = v36;
              v30 = src;
              v33 = v13[2];
            }
            srca = v30;
            memset((void *)(v32 + v33), 0, v31 - v33);
            v30 = srca;
          }
          v34 = v13[1];
          v13[2] = v31;
          memcpy((void *)(v18 + v34), v30, v29);
          v13 = v42;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = *(__m128i **)a1;
        }
      }
      else
      {
        v19 = operator new(0x20u);
        *(_QWORD *)(v19 + 8) = 0;
        v20 = v19;
        v21 = nullptr;
        *(_OWORD *)(v19 + 16) = 0;
        *(_DWORD *)v19 = *(_DWORD *)v17;
        v22 = *(_QWORD *)(v17 + 16);
        if ( v22 )
        {
          v21 = (void *)qalloc_or_throw();
          memcpy(v21, *(const void **)(v17 + 8), v22);
          if ( *(_QWORD *)(v20 + 8) )
          {
            *(_QWORD *)(v20 + 16) = 0;
            qfree();
          }
        }
        v14 = v41.m128i_i64[0];
        *(_QWORD *)(v20 + 8) = v21;
        v42 = (_QWORD *)v20;
        v15 = v39;
        *(__m128i *)(v20 + 16) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
        if ( v41.m128i_i64[1] < (unsigned __int64)(v14 + 1) )
        {
          v39 = qvector_reserve();
          v15 = v39;
          v14 = v41.m128i_i64[0];
        }
        *(_QWORD *)(v15 + 8 * v14) = v20;
        v13 = v42;
        ++v41.m128i_i64[0];
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(__m128i **)a1;
      }
      ++v5;
      v16 = v12;
    }
    while ( v5 != (__int64 *)((char *)v12 + 8 * v11) );
    v23 = v39;
    v24 = _mm_loadu_si128(&v41);
    v40 = v12;
    v25 = _mm_loadh_ps((const double *)(a1 + 16));
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)a1 = v23;
    v26 = v12;
    *(__m128i *)(a1 + 8) = v24;
    v41 = (__m128i)v25;
    if ( 8 * v11 )
    {
      do
      {
        v27 = (_QWORD *)v16->m128i_i64[0];
        if ( v16->m128i_i64[0] )
        {
          if ( v27[1] )
          {
            v27[2] = 0;
            qfree();
          }
          operator delete(v27, 0x20u);
          v26 = v40;
        }
        v16 = (__m128i *)((char *)v16 + 8);
        v5 = (__int64 *)v26;
      }
      while ( v16 != (__m128i *)((char *)v26 + 8 * v41.m128i_i64[0]) );
    }
    else
    {
      v5 = (__int64 *)v12;
    }
    goto LABEL_27;
  }
LABEL_41:
  v35 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = 0;
  v40 = (__m128i *)v5;
  v41.m128i_i64[1] = v35;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_27:
  if ( v5 || (v42 = nullptr, v40) )
  {
    v41.m128i_i64[0] = 0;
    qfree();
  }
  return v43 - __readfsqword(0x28u);
}

