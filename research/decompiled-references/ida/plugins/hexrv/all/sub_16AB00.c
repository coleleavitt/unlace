__int64 __fastcall sub_16AB00(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rax
  char v6; // cl
  __int64 v7; // r12
  __int64 v9; // rax

  v2 = (_QWORD *)a1[2];
  v3 = *a2;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[4];
      v5 = (_QWORD *)v2[2];
      v6 = 1;
      if ( v3 >= v4 )
      {
        v5 = (_QWORD *)v2[3];
        v6 = 0;
      }
      if ( !v5 )
        break;
      v2 = v5;
    }
    v7 = (__int64)v2;
    if ( v6 )
    {
      if ( (_QWORD *)a1[3] == v2 )
        goto LABEL_9;
      v9 = std::_Rb_tree_decrement();
      v4 = *(_QWORD *)(v9 + 32);
      v7 = v9;
    }
    if ( v4 >= v3 )
      return v7;
LABEL_9:
    v7 = operator new(0x28u);
    *(_QWORD *)(v7 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v7;
  }
  if ( a1 + 1 == (_QWORD *)a1[3] )
    goto LABEL_9;
  v7 = std::_Rb_tree_decrement();
  if ( *(_QWORD *)(v7 + 32) < v3 )
    goto LABEL_9;
  return v7;
}

