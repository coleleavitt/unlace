_QWORD *__fastcall sub_14400(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v18; // rax
  bool v19; // [rsp+Fh] [rbp-39h]

  v6 = a1 + 1;
  v7 = (_QWORD *)a1[2];
  v8 = *a2;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = v7[4];
      v10 = 0;
      v11 = (_QWORD *)v7[3];
      if ( v8 < v9 )
      {
        v11 = (_QWORD *)v7[2];
        v10 = 1;
      }
      if ( !v11 )
        break;
      v7 = v11;
    }
    v12 = v7;
    if ( (_BYTE)v10 )
    {
      if ( (_QWORD *)a1[3] == v7 )
      {
LABEL_9:
        v19 = 1;
        if ( v6 != v7 )
          v19 = v8 < v7[4];
        goto LABEL_11;
      }
      v18 = std::_Rb_tree_decrement(v7, v7[2], v9, v10, a5);
      v9 = *(_QWORD *)(v18 + 32);
      v12 = (_QWORD *)v18;
    }
    if ( v9 >= v8 )
      return v12;
    goto LABEL_9;
  }
  if ( (_QWORD *)a1[3] == v6 || (v12 = (_QWORD *)std::_Rb_tree_decrement(a1 + 1, a2, a3, a4, a5), v12[4] < v8) )
  {
    v19 = 1;
    v7 = a1 + 1;
LABEL_11:
    v13 = (_QWORD *)operator new(0x40u);
    v14 = a2[3];
    v12 = v13;
    v15 = *a2;
    v12[5] = &off_4D850;
    v12[4] = v15;
    v16 = a2[2];
    v12[7] = v14;
    v12[6] = v16;
    Z3_inc_ref(*(_QWORD *)(v16 + 8), v14);
    v12[5] = &off_4D890;
    std::_Rb_tree_insert_and_rebalance(v19, v12, v7, v6);
    ++a1[5];
  }
  return v12;
}

