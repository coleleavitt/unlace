void __fastcall sub_19E60(__int64 a1, __int64 a2, char a3, const __m128i **a4)
{
  void *v5; // r14
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rbp
  __m128i si128; // xmm0
  void *v10; // r14
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm0
  size_t v13; // r13
  size_t v14; // r13
  __m128i v15[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a3 )
    goto LABEL_14;
  if ( *(_QWORD *)(a1 + 1152) )
    sub_196C0((_QWORD *)a1, nullptr);
  v5 = nullptr;
  v6 = (_QWORD *)sub_32AD0(a1);
  v7 = *(_QWORD *)(a1 + 1024);
  v8 = v6;
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( !v7 )
  {
    if ( !*v6 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v13 = 8 * v7;
  v15[0] = si128;
  v5 = (void *)qalloc_or_throw();
  memcpy(v5, *(const void **)(a1 + 1016), v13);
  si128 = _mm_load_si128(v15);
  if ( *v8 )
  {
LABEL_6:
    v8[1] = 0;
    v15[0] = si128;
    qfree();
    si128 = _mm_load_si128(v15);
  }
LABEL_7:
  *v8 = v5;
  v10 = nullptr;
  *(__m128i *)(v8 + 1) = si128;
  v11 = *(_QWORD *)(a1 + 1048);
  v12 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    v14 = 8 * v11;
    v15[0] = v12;
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, *(const void **)(a1 + 1040), v14);
    v12 = _mm_load_si128(v15);
    if ( !v8[3] )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v8[3] )
  {
LABEL_9:
    v8[4] = 0;
    v15[0] = v12;
    qfree();
    v12 = _mm_load_si128(v15);
  }
LABEL_10:
  v8[3] = v10;
  *((__m128i *)v8 + 2) = v12;
  if ( *(_QWORD *)(a1 + 1016) )
  {
    *(_QWORD *)(a1 + 1024) = 0;
    qfree();
    *(_QWORD *)(a1 + 1016) = 0;
    *(_QWORD *)(a1 + 1032) = 0;
  }
  if ( *(_QWORD *)(a1 + 1040) )
  {
    *(_QWORD *)(a1 + 1048) = 0;
    qfree();
    *(_QWORD *)(a1 + 1040) = 0;
    *(_QWORD *)(a1 + 1056) = 0;
  }
LABEL_14:
  if ( a4 )
    sub_19B80(a1, a4);
}

