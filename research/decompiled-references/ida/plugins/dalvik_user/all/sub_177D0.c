_QWORD *__fastcall sub_177D0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  char v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v11; // rax

  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
  {
    v5 = (_QWORD *)(a1 + 8);
LABEL_13:
    if ( v5 != *(_QWORD **)(a1 + 24) )
    {
      v11 = std::_Rb_tree_decrement();
      v8 = *(_QWORD *)(v11 + 32);
      v9 = *(_QWORD *)(v11 + 40);
      v5 = (_QWORD *)v11;
      if ( a2 == v8 )
        goto LABEL_15;
LABEL_11:
      if ( v8 >= a2 )
        return v5;
    }
    return nullptr;
  }
  while ( 1 )
  {
    v8 = v5[4];
    v9 = v5[5];
    if ( a2 == v8 )
      break;
    if ( a2 >= v8 )
      goto LABEL_8;
LABEL_4:
    v6 = (_QWORD *)v5[2];
    v7 = 1;
    if ( !v6 )
      goto LABEL_9;
LABEL_5:
    v5 = v6;
  }
  if ( a3 < v9 )
    goto LABEL_4;
LABEL_8:
  v6 = (_QWORD *)v5[3];
  v7 = 0;
  if ( v6 )
    goto LABEL_5;
LABEL_9:
  if ( v7 )
    goto LABEL_13;
  if ( a2 != v8 )
    goto LABEL_11;
LABEL_15:
  if ( v9 < a3 )
    return nullptr;
  return v5;
}

