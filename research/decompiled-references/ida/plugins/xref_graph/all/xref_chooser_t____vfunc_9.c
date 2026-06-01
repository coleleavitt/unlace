void __fastcall xref_chooser_t__::vfunc_9(__int64 a1, const char *a2, __int64 a3)
{
  void *v3; // r13
  char *v5; // rbx
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm0
  __int64 v8; // rdi
  size_t v9; // r12
  void *v10; // rax
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = nullptr;
  v5 = (char *)a2;
  v6 = *(_QWORD *)(a3 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v9 = 8 * v6;
    v11[0] = si128;
    v10 = (void *)qalloc_or_throw(8 * v6);
    a2 = *(const char **)a3;
    v3 = v10;
    memcpy(v10, *(const void **)a3, v9);
    si128 = _mm_load_si128(v11);
  }
  v8 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    *((_QWORD *)v5 + 1) = 0;
    v11[0] = si128;
    qfree(v8, a2);
    si128 = _mm_load_si128(v11);
  }
  *(_QWORD *)v5 = v3;
  *(__m128i *)(v5 + 8) = si128;
}

