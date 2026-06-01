void __fastcall sub_20DC0(volatile signed __int32 **a1, unsigned __int64 *a2, const double *a3)
{
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbp
  void *v14; // rdi
  __m128 *v15; // rax
  unsigned __int64 v16; // rbp
  __m128 *v17; // r9
  unsigned __int64 v18; // r12
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _BOOL8 v21; // rdi
  __int64 v22; // rax
  __m128 *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-58h]
  __m128 *v26; // [rsp+8h] [rbp-50h]
  __m128 *v27; // [rsp+8h] [rbp-50h]
  __m128 *v28; // [rsp+8h] [rbp-50h]

  v4 = *a1;
  if ( !*a1 || *v4 == 1 )
    v4 = nullptr;
  else
    _InterlockedAdd(v4, 1u);
  sub_20C00(a1);
  v6 = *a1;
  v7 = (__int64)(*a1 + 4);
  v25 = (__int64)(*a1 + 2);
  v8 = *((_QWORD **)*a1 + 3);
  if ( v8 )
  {
    v9 = *a2;
    v10 = *a1 + 4;
    do
    {
      while ( 1 )
      {
        v11 = v8[2];
        v12 = v8[3];
        if ( v8[4] < v9 )
          break;
        v10 = v8;
        v8 = (_QWORD *)v8[2];
        if ( !v11 )
          goto LABEL_9;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v12 );
LABEL_9:
    if ( (_QWORD *)v7 != v10 )
    {
      if ( v9 >= v10[4] )
      {
        v10[5] = *(_QWORD *)a3;
        goto LABEL_12;
      }
      v15 = (__m128 *)operator new(0x30u);
      v16 = *a2;
      v17 = v15;
      v15[2] = _mm_loadh_ps(a3);
      v18 = v10[4];
      if ( v16 < v18 )
      {
        v19 = v10;
        if ( *((_QWORD **)v6 + 4) == v10 )
          goto LABEL_23;
        v26 = v15;
        v20 = std::_Rb_tree_decrement(v10, v9);
        v17 = v26;
        v19 = (_QWORD *)v20;
        if ( *(_QWORD *)(v20 + 32) < v16 )
        {
          if ( *(_QWORD *)(v20 + 24) )
            v19 = v10;
          else
            v10 = nullptr;
          goto LABEL_23;
        }
LABEL_38:
        v28 = v17;
        v24 = sub_1EDC0(v25, v16);
        v17 = v28;
        v10 = v24;
        goto LABEL_23;
      }
      if ( v18 >= v16 )
        goto LABEL_30;
      if ( *((_QWORD **)v6 + 5) != v10 )
      {
        v27 = v15;
        v22 = std::_Rb_tree_increment(v10, v9);
        v17 = v27;
        v19 = (_QWORD *)v22;
        if ( v16 >= *(_QWORD *)(v22 + 32) )
          goto LABEL_38;
        if ( v10[3] )
        {
          v10 = (_QWORD *)v22;
          goto LABEL_23;
        }
      }
      v19 = v10;
      if ( v10 )
        goto LABEL_40;
      goto LABEL_30;
    }
  }
  v23 = (__m128 *)operator new(0x30u);
  v16 = *a2;
  v17 = v23;
  v23[2] = _mm_loadh_ps(a3);
  if ( !*((_QWORD *)v6 + 6) )
    goto LABEL_38;
  v19 = *((_QWORD **)v6 + 5);
  v10 = nullptr;
  if ( v19[4] >= v16 )
    goto LABEL_38;
LABEL_23:
  if ( v19 )
  {
    if ( v10 || (_QWORD *)v7 == v19 )
    {
      v21 = 1;
      goto LABEL_27;
    }
    v18 = v19[4];
LABEL_40:
    v21 = v16 < v18;
LABEL_27:
    std::_Rb_tree_insert_and_rebalance(v21, v17, v19, v7);
    ++*((_QWORD *)v6 + 6);
    if ( !v4 )
      return;
    goto LABEL_13;
  }
LABEL_30:
  if ( v17 )
    operator delete(v17, 0x30u);
LABEL_12:
  if ( !v4 )
    return;
LABEL_13:
  if ( !_InterlockedSub(v4, 1u) )
  {
    v13 = *((_QWORD *)v4 + 3);
    while ( v13 )
    {
      sub_1F600(*(_QWORD **)(v13 + 24));
      v14 = (void *)v13;
      v13 = *(_QWORD *)(v13 + 16);
      operator delete(v14, 0x30u);
    }
    operator delete((void *)v4, 0x38u);
  }
}

