__int64 __fastcall sub_344F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r12
  __m128i v4; // xmm0
  int v5; // edx
  __int64 result; // rax
  __m128i v7; // xmm0
  const void *v8; // r14
  void *v9; // rax
  const void *v10; // r13
  void *v11; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  if ( a2 != a1 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 > 1 )
    {
      v10 = *(const void **)a2;
      v11 = (void *)qvector_reserve(a1, 0, *(_QWORD *)(a2 + 8), 1);
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = v2;
      memmove(v11, v10, v2 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v2 - 1) = 0;
    }
  }
  if ( a1 + 24 != a2 + 24 )
  {
    v3 = *(_QWORD *)(a2 + 32);
    if ( v3 > 1 )
    {
      v8 = *(const void **)(a2 + 24);
      v9 = *(void **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v3 )
      {
        v9 = (void *)qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 32), 1);
        *(_QWORD *)(a1 + 24) = v9;
      }
      *(_QWORD *)(a1 + 32) = v3;
      memmove(v9, v8, v3 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 0;
    }
  }
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v5 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  result = *(unsigned __int8 *)(a2 + 94);
  *(_DWORD *)(a1 + 88) = v5;
  LOWORD(v5) = *(_WORD *)(a2 + 92);
  *(__m128i *)(a1 + 48) = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(_WORD *)(a1 + 92) = v5;
  *(_BYTE *)(a1 + 94) = result;
  *(__m128i *)(a1 + 72) = v7;
  return result;
}
