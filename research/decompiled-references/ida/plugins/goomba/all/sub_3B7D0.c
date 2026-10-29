__int64 __fastcall sub_3B7D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r13
  char v8; // al

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = v6 + 32;
      a2 = v6 + 32;
      v8 = sub_35D60(v5, v6 + 32);
      a3 = *(_QWORD *)(v6 + 24);
      if ( v8 )
        a3 = *(_QWORD *)(v6 + 16);
      if ( !a3 )
        break;
      v6 = a3;
    }
    if ( !v8 )
      goto LABEL_10;
  }
  else
  {
    v6 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 24) == v6 )
    return 0;
  v6 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
  v7 = v6 + 32;
LABEL_10:
  if ( (unsigned __int8)sub_35D60(v7, v5) )
    return 0;
  return v6;
}

