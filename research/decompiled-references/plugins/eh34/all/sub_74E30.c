unsigned __int64 __fastcall sub_74E30(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  void *v12; // rax
  __m128i v13; // [rsp+0h] [rbp-88h]
  __m128i v15; // [rsp+20h] [rbp-68h] BYREF
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+40h] [rbp-48h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  sub_74B30(&v16, a1, a2);
  if ( v17 )
  {
    v13 = _mm_load_si128(&v16);
    v15 = v13;
    v5 = sub_74D30(a1, (unsigned __int64 *)&v15);
    v9 = v6;
    v10 = (__int64)v5;
    if ( v5 == *(_QWORD **)(a1 + 24) && v6 == a1 + 8 )
    {
      sub_74960(*(_QWORD **)(a1 + 16));
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9;
      *(_QWORD *)(a1 + 40) = 0;
    }
    else if ( (_QWORD *)v6 != v5 )
    {
      do
      {
        v11 = v10;
        v10 = std::_Rb_tree_increment(v10);
        v12 = (void *)std::_Rb_tree_rebalance_for_erase(v11, a1 + 8);
        operator delete(v12, 0x30u);
        --*(_QWORD *)(a1 + 40);
      }
      while ( v9 != v10 );
    }
    v15 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(a3 - a2), (__m128i)(a3 - a2)), v13);
    sub_74BC0((_QWORD *)a1, &v15, v6, v7, v8);
  }
  return v18 - __readfsqword(0x28u);
}
