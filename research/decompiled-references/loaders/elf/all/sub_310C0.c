__int64 __fastcall sub_310C0(_QWORD *a1, __int64 a2, unsigned __int16 **a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int16 *v7; // rax
  unsigned int v8; // r13d
  unsigned __int16 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax

  v5 = a2;
  v6 = operator new(0x38u);
  v7 = *a3;
  *(_OWORD *)(v6 + 40) = 0;
  v8 = *v7;
  *(_WORD *)(v6 + 32) = v8;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v10 = a1[4];
      v5 = 0;
      if ( *(_WORD *)(v10 + 32) < (unsigned __int16)v8 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_30E80((__int64)a1, v8);
    goto LABEL_6;
  }
  v9 = *(_WORD *)(a2 + 32);
  if ( (unsigned __int16)v8 < v9 )
  {
    v10 = a1[3];
    if ( a2 == v10 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2, a2);
    v10 = v11;
    if ( *(_WORD *)(v11 + 32) >= (unsigned __int16)v8 )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
    {
      v10 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v9 >= (unsigned __int16)v8 )
    goto LABEL_17;
  v10 = a1[4];
  if ( a2 == v10 )
  {
LABEL_27:
    v5 = 0;
    goto LABEL_6;
  }
  v13 = std::_Rb_tree_increment(a2);
  v10 = v13;
  if ( (unsigned __int16)v8 >= *(_WORD *)(v13 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v10 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = v13;
LABEL_6:
  if ( v10 )
  {
    if ( a1 + 1 == (_QWORD *)v10 || v5 )
    {
      v12 = 1;
LABEL_10:
      v5 = v6;
      std::_Rb_tree_insert_and_rebalance(v12, v6, v10, a1 + 1);
      ++a1[5];
      return v5;
    }
    v9 = *(_WORD *)(v10 + 32);
LABEL_26:
    v12 = (unsigned __int16)v8 < v9;
    goto LABEL_10;
  }
LABEL_17:
  if ( v6 )
    operator delete((void *)v6, 0x38u);
  return v5;
}
