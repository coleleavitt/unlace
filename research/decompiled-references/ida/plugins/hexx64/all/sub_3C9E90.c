unsigned __int64 __fastcall sub_3C9E90(__int64 a1, const void *a2, const void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  _QWORD *v13; // r15
  __m128i si128; // xmm0
  __int64 v15; // rdi
  size_t v16; // rbx
  void *v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // rdi
  size_t v20; // rbx
  void *v21; // rdi
  __int64 v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v26[4]; // [rsp+10h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (int)result <= 1 )
  {
    v11 = *(_QWORD **)(a1 + 336);
    v12 = 0;
    if ( !v11 )
      return result;
    goto LABEL_3;
  }
  v12 = j__qalloc_or_throw(232, (__int64)a2, v9, v10);
  sub_70F60(v12, (__int64)a2);
  *(_BYTE *)(v12 + 32) = 1;
  result = (unsigned __int64)off_4EC980;
  *(_QWORD *)v12 = off_4EC980;
  *(_QWORD *)(v12 + 176) = 0;
  *(_QWORD *)(v12 + 200) = 0;
  *(_QWORD *)(v12 + 224) = 0;
  *(_OWORD *)(v12 + 184) = 0;
  *(_OWORD *)(v12 + 208) = 0;
  v11 = *(_QWORD **)(a1 + 336);
  if ( v11 )
  {
    do
    {
LABEL_3:
      v13 = v11;
      v11 = (_QWORD *)v11[28];
    }
    while ( v11 );
    v13[28] = v12;
    if ( a5 )
    {
      v9 = *(_QWORD *)(a5 + 8);
      si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
      if ( v9 )
      {
        v26[0] = si128;
        n[0] = 4 * v9;
        v23 = (_QWORD *)qalloc_or_throw(n[0], (__int64)a2, n[0], v10);
        a2 = *(const void **)a5;
        v11 = v23;
        result = (unsigned __int64)memcpy(v23, *(const void **)a5, n[0]);
        si128 = _mm_load_si128(v26);
      }
      v15 = v13[22];
      if ( v15 )
      {
        v13[23] = 0;
        *(__m128i *)n = si128;
        result = qfree(v15);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      v13[22] = v11;
      *(__m128i *)(v13 + 23) = si128;
    }
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 336) = v12;
LABEL_10:
  if ( v12 )
  {
    if ( a3 && (result = strlen((const char *)a3), (v16 = result) != 0) )
    {
      v21 = *(void **)(v12 + 8);
      v22 = result + 1;
      if ( *(_QWORD *)(v12 + 24) < result + 1 )
      {
        v24 = qvector_reserve(v12 + 8, *(_QWORD *)(v12 + 8), v22, 1);
        *(_QWORD *)(v12 + 8) = v24;
        v21 = (void *)v24;
      }
      *(_QWORD *)(v12 + 16) = v22;
      a2 = a3;
      memmove(v21, a3, v16);
      result = *(_QWORD *)(v12 + 8);
      *(_BYTE *)(result + v16) = 0;
    }
    else
    {
      *(_QWORD *)(v12 + 16) = 0;
    }
    if ( a4 )
    {
      result = *(_QWORD *)(a4 + 8);
      v17 = nullptr;
      v18 = _mm_unpacklo_epi64((__m128i)result, (__m128i)result);
      if ( result )
      {
        v20 = 4 * result;
        *(__m128i *)n = v18;
        v17 = (void *)qalloc_or_throw(4 * result, (__int64)a2, v9, v10);
        result = (unsigned __int64)memcpy(v17, *(const void **)a4, v20);
        v18 = _mm_load_si128((const __m128i *)n);
      }
      v19 = *(_QWORD *)(v12 + 200);
      if ( v19 )
      {
        *(_QWORD *)(v12 + 208) = 0;
        *(__m128i *)n = v18;
        result = qfree(v19);
        v18 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v12 + 200) = v17;
      *(__m128i *)(v12 + 208) = v18;
    }
  }
  return result;
}

