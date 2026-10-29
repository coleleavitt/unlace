__int64 __fastcall sub_195DB0(__int64 a1, __int64 *a2, unsigned int a3, double a4)
{
  void *v4; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 v17; // r13
  __m128i v18[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = nullptr;
  v7 = *(_QWORD *)(a1 + 8) + 40LL * (int)a3;
  sub_648D0(a2, (const void **)v7, a4);
  v11 = *(_QWORD *)(v7 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  if ( v11 )
  {
    v18[0] = si128;
    v17 = 16 * v11;
    v4 = (void *)qalloc_or_throw(v17, v7, v17, v8);
    memcpy(v4, *(const void **)(v7 + 16), v17);
    si128 = _mm_load_si128(v18);
  }
  v13 = a2[2];
  if ( v13 )
  {
    a2[3] = 0;
    v18[0] = si128;
    qfree(v13);
    si128 = _mm_load_si128(v18);
  }
  a2[2] = (__int64)v4;
  *(__m128i *)(a2 + 3) = si128;
  if ( *(_DWORD *)(a1 + 128) == a3 )
  {
    v15 = *(__int64 **)(a1 + 136);
  }
  else if ( *(_DWORD *)(a1 + 132) == a3 )
  {
    v15 = *(__int64 **)(a1 + 144);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 120);
    if ( a3 >= *(_DWORD *)(v14 + 64) )
      sub_195140(*(double *)si128.m128i_i64);
    v15 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 528) + 8LL * a3) + 200LL);
  }
  sub_64640(a2, v15, v11, v8, v9, v10);
  return sub_317C60(a2 + 2, (__int64)(v15 + 2));
}

