__int64 __fastcall sub_C3BC0(_QWORD *a1, int *a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v8; // rax

  v2 = a1[2];
  v3 = *a2;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 32);
      v5 = *(_QWORD *)(v2 + 24);
      if ( v3 < v4 )
        v5 = *(_QWORD *)(v2 + 16);
      if ( !v5 )
        break;
      v2 = v5;
    }
    v6 = v2;
    if ( v3 < v4 )
    {
      if ( a1[3] == v2 )
        goto LABEL_9;
      v8 = std::_Rb_tree_decrement();
      v4 = *(_DWORD *)(v8 + 32);
      v6 = v8;
    }
    if ( v3 <= v4 )
      return v6;
LABEL_9:
    v6 = operator new(0x28u);
    *(_DWORD *)(v6 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  if ( a1 + 1 == (_QWORD *)a1[3] )
    goto LABEL_9;
  v6 = std::_Rb_tree_decrement();
  if ( v3 > *(_DWORD *)(v6 + 32) )
    goto LABEL_9;
  return v6;
}

