void __fastcall sub_26B30(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rbx
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve();
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 104 * v4;
    do
    {
      v7 = _mm_loadu_si128((const __m128i *)a3);
      v8 = v5 + *a1;
      *(_QWORD *)(v8 + 16) = 0;
      *(__m128i *)v8 = v7;
      *(_OWORD *)(v8 + 24) = 0;
      if ( *(_QWORD *)(a3 + 24) )
      {
        nb = *(_QWORD *)(a3 + 24);
        v9 = (void *)qalloc_or_throw();
        *(_QWORD *)(v8 + 16) = v9;
        *(_QWORD *)(v8 + 32) = nb;
        memcpy(v9, *(const void **)(a3 + 16), nb);
        *(_QWORD *)(v8 + 24) = nb;
      }
      *(_QWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 48) = 0;
      if ( *(_QWORD *)(a3 + 48) )
      {
        n = *(_QWORD *)(a3 + 48);
        v11 = (void *)qalloc_or_throw();
        *(_QWORD *)(v8 + 40) = v11;
        *(_QWORD *)(v8 + 56) = n;
        memcpy(v11, *(const void **)(a3 + 40), n);
        *(_QWORD *)(v8 + 48) = n;
      }
      v6 = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(v8 + 72) = 0;
      *(_OWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 64) = v6;
      if ( *(_QWORD *)(a3 + 80) )
      {
        na = *(_QWORD *)(a3 + 80);
        v10 = (void *)qalloc_or_throw();
        *(_QWORD *)(v8 + 72) = v10;
        *(_QWORD *)(v8 + 88) = na;
        memcpy(v10, *(const void **)(a3 + 72), na);
        *(_QWORD *)(v8 + 80) = na;
      }
      ++v4;
      v5 += 104;
      *(_DWORD *)(v8 + 96) = *(_DWORD *)(a3 + 96);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}

