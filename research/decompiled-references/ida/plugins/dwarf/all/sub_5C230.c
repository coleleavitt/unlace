__m128i *__fastcall sub_5C230(_QWORD *a1, _QWORD *a2, const __m128i **a3)
{
  __m128i *v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  unsigned int v15; // eax
  _QWORD *v16; // [rsp+0h] [rbp-38h]

  v5 = (__m128i *)operator new(0x38u);
  v6 = _mm_loadu_si128(*a3);
  v5[3].m128i_i64[0] = 0;
  v5[2] = v6;
  v9 = sub_432E0(a1, a2, (__int64)v5[2].m128i_i64, v7, v8);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && v10 != v12 )
    {
      v16 = v10;
      v15 = sub_849A0(&v5[2], v10 + 4);
      v12 = a1 + 1;
      v10 = v16;
      v11 = v15 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v11, v5, v10, v12);
    ++a1[5];
    return v5;
  }
  v13 = v9;
  if ( !v5 )
    return (__m128i *)v13;
  clear_tinfo_t(&v5[3]);
  operator delete(v5, 0x38u);
  return (__m128i *)v13;
}

