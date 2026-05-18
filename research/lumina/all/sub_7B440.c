void __fastcall sub_7B440(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int128 v5; // xmm0
  size_t v6; // r15
  __m128i v7; // xmm1
  __int64 v8; // rbx
  size_t v9; // r15
  void *v10; // rax
  void *v11; // rax

  if ( a1[2] < a2 )
    *a1 = sub_1987B0(a1, *a1, a2, 80);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      v7 = _mm_loadu_si128((const __m128i *)a3);
      v8 = *a1 + 80 * v4;
      *(_QWORD *)(v8 + 16) = 0;
      *(__m128i *)v8 = v7;
      *(_OWORD *)(v8 + 24) = v5;
      v9 = *(_QWORD *)(a3 + 24);
      if ( v9 )
      {
        v10 = (void *)sub_198760(*(_QWORD *)(a3 + 24));
        *(_QWORD *)(v8 + 32) = v9;
        *(_QWORD *)(v8 + 16) = v10;
        memcpy(v10, *(const void **)(a3 + 16), v9);
        *(_QWORD *)(v8 + 24) = v9;
        v5 = 0;
      }
      *(_QWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 48) = v5;
      v6 = *(_QWORD *)(a3 + 48);
      if ( v6 )
      {
        v11 = (void *)sub_198760(*(_QWORD *)(a3 + 48));
        *(_QWORD *)(v8 + 40) = v11;
        *(_QWORD *)(v8 + 56) = v6;
        memcpy(v11, *(const void **)(a3 + 40), v6);
        *(_QWORD *)(v8 + 48) = v6;
        v5 = 0;
      }
      ++v4;
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(v8 + 72) = *(_QWORD *)(a3 + 72);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
