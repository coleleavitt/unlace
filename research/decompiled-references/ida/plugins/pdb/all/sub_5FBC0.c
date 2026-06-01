__int64 __fastcall sub_5FBC0(__int64 a1, __int64 *a2)
{
  int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rdi
  size_t v10; // rbp
  void *v11; // r12
  __int64 v12; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 96) )
  {
    v4 = 0;
    while ( 1 )
    {
      v9 = *a2;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 56LL))(v9, &src) )
        break;
      v10 = n[0];
      v11 = nullptr;
      if ( n[0] )
      {
        v11 = (void *)qalloc_or_throw(n[0]);
        memcpy(v11, src, v10);
      }
      v5 = *(_QWORD *)(a1 + 112);
      v6 = *(_QWORD *)(a1 + 104);
      if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v5 + 1) )
      {
        v12 = qvector_reserve(a1 + 104, v6, v5 + 1, 24);
        *(_QWORD *)(a1 + 104) = v12;
        v5 = *(_QWORD *)(a1 + 112);
        v6 = v12;
      }
      v7 = v6 + 24 * v5;
      *(_QWORD *)v7 = v11;
      v8 = src;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
      ++*(_QWORD *)(a1 + 112);
      if ( v8 )
      {
        n[0] = 0;
        qfree(v8);
      }
      if ( *(unsigned __int16 *)(a1 + 96) <= ++v4 )
        return 1;
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return 1;
}

