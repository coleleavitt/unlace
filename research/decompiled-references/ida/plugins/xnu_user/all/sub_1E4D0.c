__int64 __fastcall sub_1E4D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  size_t v7; // r12
  void *v8; // r13
  __m128i si128; // xmm0
  unsigned __int64 v10; // r12
  const void *v12; // r14
  void *v13; // rax
  const void *v14; // r14
  void *v15; // rax
  __m128i v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(unsigned __int64 **)(a1 + 1960);
  v4 = (__int64 *)&v3[13 * *(_QWORD *)(a1 + 1968)];
  if ( v4 == (__int64 *)v3 )
    return 0;
  while ( 1 )
  {
    v5 = *v3;
    if ( a3 >= *v3 && a3 < v5 + v3[1] )
      break;
    v3 += 13;
    if ( v4 == (__int64 *)v3 )
      return 0;
  }
  *(_QWORD *)a2 = v5;
  *(_QWORD *)(a2 + 8) = v3[1];
  if ( (unsigned __int64 *)(a2 + 16) != v3 + 2 )
  {
    v6 = v3[3];
    if ( v6 > 1 )
    {
      v12 = (const void *)v3[2];
      v13 = *(void **)(a2 + 16);
      if ( *(_QWORD *)(a2 + 32) < v6 )
      {
        v13 = (void *)qvector_reserve();
        *(_QWORD *)(a2 + 16) = v13;
      }
      *(_QWORD *)(a2 + 24) = v6;
      memmove(v13, v12, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 16) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = 0;
    }
  }
  v7 = v3[6];
  v8 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v16[0] = si128;
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, (const void *)v3[5], v7);
    si128 = _mm_load_si128(v16);
  }
  if ( *(_QWORD *)(a2 + 40) )
  {
    *(_QWORD *)(a2 + 48) = 0;
    v16[0] = si128;
    qfree();
    si128 = _mm_load_si128(v16);
  }
  *(_QWORD *)(a2 + 40) = v8;
  *(__m128i *)(a2 + 48) = si128;
  *(_DWORD *)(a2 + 64) = *((_DWORD *)v3 + 16);
  *(_DWORD *)(a2 + 68) = *((_DWORD *)v3 + 17);
  if ( (unsigned __int64 *)(a2 + 72) != v3 + 9 )
  {
    v10 = v3[10];
    if ( v10 > 1 )
    {
      v14 = (const void *)v3[9];
      v15 = *(void **)(a2 + 72);
      if ( *(_QWORD *)(a2 + 88) < v10 )
      {
        v15 = (void *)qvector_reserve();
        *(_QWORD *)(a2 + 72) = v15;
      }
      *(_QWORD *)(a2 + 80) = v10;
      memmove(v15, v14, v10 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 72) + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 80) = 0;
    }
  }
  *(_DWORD *)(a2 + 96) = *((_DWORD *)v3 + 24);
  return 1;
}

