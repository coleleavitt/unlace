__int64 __fastcall sub_11E00(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // edx
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v9; // rax

  v2 = a1[2];
  v3 = *a2;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 32);
      v5 = 0;
      v6 = *(_QWORD *)(v2 + 24);
      if ( v3 < v4 )
      {
        v6 = *(_QWORD *)(v2 + 16);
        v5 = 1;
      }
      if ( !v6 )
        break;
      v2 = v6;
    }
    v7 = v2;
    if ( v5 )
    {
      if ( a1[3] == v2 )
        goto LABEL_9;
      v9 = std::_Rb_tree_decrement();
      v4 = *(_DWORD *)(v9 + 32);
      v7 = v9;
    }
    if ( v4 >= v3 )
      return v7;
LABEL_9:
    v7 = operator new(0x28u);
    *(_DWORD *)(v7 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v7;
  }
  if ( a1 + 1 == (_QWORD *)a1[3] )
    goto LABEL_9;
  v7 = std::_Rb_tree_decrement();
  if ( *(_DWORD *)(v7 + 32) < v3 )
    goto LABEL_9;
  return v7;
}

