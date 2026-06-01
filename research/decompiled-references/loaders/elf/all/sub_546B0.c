_QWORD *__fastcall sub_546B0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, const double *a4)
{
  _QWORD *m128_u64; // rbx
  __m128 *v8; // rax
  unsigned __int64 v9; // r13
  __m128 *v10; // r12
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  m128_u64 = a2;
  v8 = (__m128 *)operator new(0x30u);
  v9 = *a3;
  v10 = v8;
  v8[2] = _mm_loadh_ps(a4);
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v12 = (_QWORD *)a1[4];
      m128_u64 = nullptr;
      if ( v12[4] < v9 )
        goto LABEL_6;
    }
LABEL_5:
    m128_u64 = sub_31000((__int64)a1, v9);
    goto LABEL_6;
  }
  v11 = a2[4];
  if ( v9 < v11 )
  {
    v12 = (_QWORD *)a1[3];
    if ( a2 == v12 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2, a2);
    v12 = (_QWORD *)v13;
    if ( *(_QWORD *)(v13 + 32) >= v9 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
    {
      v12 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v11 >= v9 )
    goto LABEL_17;
  v12 = (_QWORD *)a1[4];
  if ( a2 == v12 )
  {
LABEL_27:
    m128_u64 = nullptr;
    goto LABEL_6;
  }
  v15 = std::_Rb_tree_increment(a2);
  v12 = (_QWORD *)v15;
  if ( v9 >= *(_QWORD *)(v15 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    v12 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  m128_u64 = (_QWORD *)v15;
LABEL_6:
  if ( v12 )
  {
    if ( a1 + 1 == v12 || m128_u64 )
    {
      v14 = 1;
LABEL_10:
      m128_u64 = v10->m128_u64;
      std::_Rb_tree_insert_and_rebalance(v14, v10, v12, a1 + 1);
      ++a1[5];
      return m128_u64;
    }
    v11 = v12[4];
LABEL_26:
    v14 = v9 < v11;
    goto LABEL_10;
  }
LABEL_17:
  if ( v10 )
    operator delete(v10, 0x30u);
  return m128_u64;
}
