void __fastcall sub_2CA60(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int128 v5; // xmm0
  unsigned __int64 v6; // r13
  size_t v7; // r8
  __m128i v8; // xmm1
  int v9; // edx
  char v10; // al
  __m128i v11; // xmm1
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  void *v14; // rax
  const void *v15; // r9
  void *v16; // rax
  void *src; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve();
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      v12 = *a1 + 96 * v4;
      *(_QWORD *)v12 = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 48) = 0;
      *(_OWORD *)(v12 + 8) = v5;
      *(_OWORD *)(v12 + 32) = v5;
      *(_OWORD *)(v12 + 56) = v5;
      if ( a3 != v12 )
      {
        v13 = *(_QWORD *)(a3 + 8);
        if ( v13 >= 2 )
        {
          src = *(void **)a3;
          v14 = (void *)qvector_reserve();
          *(_QWORD *)v12 = v14;
          *(_QWORD *)(v12 + 8) = v13;
          memmove(v14, src, v13 - 1);
          v5 = 0;
          *(_BYTE *)(*(_QWORD *)v12 + v13 - 1) = 0;
        }
      }
      if ( v12 + 24 != a3 + 24 )
      {
        v6 = *(_QWORD *)(a3 + 32);
        if ( v6 && (v7 = v6 - 1, v6 != 1) )
        {
          v15 = *(const void **)(a3 + 24);
          v16 = *(void **)(v12 + 24);
          if ( *(_QWORD *)(v12 + 40) < v6 )
          {
            n = *(_QWORD *)(a3 + 24);
            v16 = (void *)qvector_reserve();
            v15 = (const void *)n;
            v7 = v6 - 1;
            *(_QWORD *)(v12 + 24) = v16;
          }
          *(_QWORD *)(v12 + 32) = v6;
          memmove(v16, v15, v7);
          v5 = 0;
          *(_BYTE *)(*(_QWORD *)(v12 + 24) + v6 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v12 + 32) = 0;
        }
      }
      v8 = _mm_loadu_si128((const __m128i *)(a3 + 48));
      ++v4;
      v9 = *(_DWORD *)(a3 + 88);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(a3 + 64);
      v10 = *(_BYTE *)(a3 + 94);
      *(_DWORD *)(v12 + 88) = v9;
      LOWORD(v9) = *(_WORD *)(a3 + 92);
      *(__m128i *)(v12 + 48) = v8;
      v11 = _mm_loadu_si128((const __m128i *)(a3 + 72));
      *(_WORD *)(v12 + 92) = v9;
      *(_BYTE *)(v12 + 94) = v10;
      *(__m128i *)(v12 + 72) = v11;
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}

