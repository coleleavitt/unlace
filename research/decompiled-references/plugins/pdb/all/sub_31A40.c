__int64 __fastcall sub_31A40(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t v5; // rbp
  void *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v3 = a1[2];
  v13 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (unsigned __int8)sub_318B0(v3, (__int64)&src, a2) )
  {
    v5 = n[0];
    v6 = nullptr;
    if ( n[0] )
    {
      v6 = (void *)qalloc_or_throw(n[0]);
      memcpy(v6, src, v5);
    }
    v7 = a1[4];
    v8 = a1[3];
    if ( a1[5] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(a1 + 3, v8, v7 + 1, 24);
      a1[3] = v10;
      v7 = a1[4];
      v8 = v10;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = v6;
    *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    ++a1[4];
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}
