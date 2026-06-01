__int64 __fastcall sub_3C4F90(__int64 a1, __int64 a2, const void *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  _QWORD *v11; // r15
  unsigned __int64 v12; // rdx
  __m128i si128; // xmm0
  size_t v14; // rbx
  void *v15; // r12
  __m128i v16; // xmm0
  size_t v17; // rbx
  void *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v22[4]; // [rsp+10h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (int)result <= 1 )
  {
    v9 = *(_QWORD **)(a1 + 336);
    v10 = 0;
    if ( !v9 )
      return result;
    goto LABEL_3;
  }
  v10 = j__qalloc_or_throw();
  sub_6CD60(v10, a2);
  *(_BYTE *)(v10 + 32) = 1;
  result = (__int64)off_4CC858;
  *(_QWORD *)v10 = off_4CC858;
  *(_QWORD *)(v10 + 176) = 0;
  *(_QWORD *)(v10 + 200) = 0;
  *(_QWORD *)(v10 + 224) = 0;
  *(_OWORD *)(v10 + 184) = 0;
  *(_OWORD *)(v10 + 208) = 0;
  v9 = *(_QWORD **)(a1 + 336);
  if ( v9 )
  {
    do
    {
LABEL_3:
      v11 = v9;
      v9 = (_QWORD *)v9[28];
    }
    while ( v9 );
    v11[28] = v10;
    if ( a5 )
    {
      v12 = *(_QWORD *)(a5 + 8);
      si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      if ( v12 )
      {
        v22[0] = si128;
        n[0] = 4 * v12;
        v9 = (_QWORD *)qalloc_or_throw();
        result = (__int64)memcpy(v9, *(const void **)a5, n[0]);
        si128 = _mm_load_si128(v22);
      }
      if ( v11[22] )
      {
        v11[23] = 0;
        *(__m128i *)n = si128;
        result = qfree();
        si128 = _mm_load_si128((const __m128i *)n);
      }
      v11[22] = v9;
      *(__m128i *)(v11 + 23) = si128;
    }
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 336) = v10;
LABEL_10:
  if ( v10 )
  {
    if ( a3 && (result = strlen((const char *)a3), (v14 = result) != 0) )
    {
      v18 = *(void **)(v10 + 8);
      v19 = result + 1;
      if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)(result + 1) )
      {
        v20 = qvector_reserve();
        *(_QWORD *)(v10 + 8) = v20;
        v18 = (void *)v20;
      }
      *(_QWORD *)(v10 + 16) = v19;
      memmove(v18, a3, v14);
      result = *(_QWORD *)(v10 + 8);
      *(_BYTE *)(result + v14) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = 0;
    }
    if ( a4 )
    {
      result = *(_QWORD *)(a4 + 8);
      v15 = nullptr;
      v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
      if ( result )
      {
        v17 = 4 * result;
        *(__m128i *)n = v16;
        v15 = (void *)qalloc_or_throw();
        result = (__int64)memcpy(v15, *(const void **)a4, v17);
        v16 = _mm_load_si128((const __m128i *)n);
      }
      if ( *(_QWORD *)(v10 + 200) )
      {
        *(_QWORD *)(v10 + 208) = 0;
        *(__m128i *)n = v16;
        result = qfree();
        v16 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v10 + 200) = v15;
      *(__m128i *)(v10 + 208) = v16;
    }
  }
  return result;
}

