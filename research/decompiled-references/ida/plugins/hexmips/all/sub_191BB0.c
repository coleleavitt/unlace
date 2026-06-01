__int64 __fastcall sub_191BB0(__int64 a1, __int64 *a2, unsigned int a3)
{
  void *v3; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 *v12; // rbp
  size_t v14; // r13
  __m128i v15[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = nullptr;
  v5 = *(_QWORD *)(a1 + 8) + 40LL * (int)a3;
  sub_606D0(a2, (__int64 *)v5);
  v9 = *(_QWORD *)(v5 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
  if ( v9 )
  {
    v15[0] = si128;
    v14 = 16 * v9;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)(v5 + 16), v14);
    si128 = _mm_load_si128(v15);
  }
  if ( a2[2] )
  {
    a2[3] = 0;
    v15[0] = si128;
    qfree();
    si128 = _mm_load_si128(v15);
  }
  a2[2] = (__int64)v3;
  *(__m128i *)(a2 + 3) = si128;
  if ( *(_DWORD *)(a1 + 128) == a3 )
  {
    v12 = *(__int64 **)(a1 + 136);
  }
  else if ( *(_DWORD *)(a1 + 132) == a3 )
  {
    v12 = *(__int64 **)(a1 + 144);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 120);
    if ( a3 >= *(_DWORD *)(v11 + 64) )
      sub_190F40();
    v12 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 528) + 8LL * a3) + 200LL);
  }
  sub_60440(a2, v12, v9, v6, v7, v8);
  return sub_312EE0(a2 + 2, v12 + 2);
}

