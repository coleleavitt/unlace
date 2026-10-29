_QWORD *__fastcall sub_A440(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax

  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
  {
    v5 = (_QWORD *)(a1 + 8);
    goto LABEL_10;
  }
  while ( 1 )
  {
    a3 = v5[4];
    a5 = v5[2];
    a4 = 0;
    v6 = (_QWORD *)v5[3];
    if ( a2 < a3 )
    {
      v6 = (_QWORD *)v5[2];
      a4 = 1;
    }
    if ( !v6 )
      break;
    v5 = v6;
  }
  if ( (_BYTE)a4 )
  {
LABEL_10:
    if ( v5 != *(_QWORD **)(a1 + 24) )
    {
      v5 = (_QWORD *)std::_Rb_tree_decrement(v5, a2, a3, a4, a5);
      if ( v5[4] >= a2 )
        return v5;
    }
    return nullptr;
  }
  if ( a3 < a2 )
    return nullptr;
  return v5;
}

