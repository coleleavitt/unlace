__int64 __fastcall sub_F5C0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  char v6; // cl
  _QWORD *v7; // rax
  __int64 v8; // r12
  __int64 v10; // rax
  _BOOL4 v11; // [rsp+Ch] [rbp-3Ch]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = *a2;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = v3[4];
      v6 = 0;
      v7 = (_QWORD *)v3[3];
      if ( v4 < v5 )
      {
        v7 = (_QWORD *)v3[2];
        v6 = 1;
      }
      if ( !v7 )
        break;
      v3 = v7;
    }
    v8 = (__int64)v3;
    if ( v6 )
    {
      if ( (_QWORD *)a1[3] == v3 )
        goto LABEL_9;
      v10 = std::_Rb_tree_decrement(v3, v3[2]);
      v5 = *(_QWORD *)(v10 + 32);
      v8 = v10;
    }
    if ( v5 >= v4 )
      return v8;
LABEL_9:
    v11 = 1;
    if ( v2 != v3 )
      v11 = v4 < v3[4];
    goto LABEL_11;
  }
  if ( v2 == (_QWORD *)a1[3] || (v8 = std::_Rb_tree_decrement(a1 + 1, a2), *(_QWORD *)(v8 + 32) < v4) )
  {
    v11 = 1;
    v3 = a1 + 1;
LABEL_11:
    v8 = operator new(0x28u);
    *(_QWORD *)(v8 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance(v11, v8, v3, v2);
    ++a1[5];
  }
  return v8;
}
