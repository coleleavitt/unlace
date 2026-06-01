__int64 __fastcall sub_414E0(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v6; // ebp
  unsigned __int8 v7; // al
  __int64 result; // rax
  unsigned __int8 v9; // dl
  bool v10; // dl
  __int64 v11; // rax
  bool v12; // cf

  v6 = a4;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_41400((__int64)a1, a3, v6, a4, a5);
    a4 = a1[4];
    v12 = *(_BYTE *)(a4 + 40) < (unsigned __int8)v6;
    if ( *(_BYTE *)(a4 + 40) == (_BYTE)v6 )
      v12 = *(_QWORD *)(a4 + 32) < a3;
    if ( !v12 )
      return sub_41400((__int64)a1, a3, v6, a4, a5);
    return 0;
  }
  v7 = *(_BYTE *)(a2 + 40);
  if ( v7 == (_BYTE)a4 )
  {
    a4 = *(_QWORD *)(a2 + 32);
    if ( a3 >= a4 )
    {
      result = a2;
      if ( a4 < a3 )
        goto LABEL_4;
      return result;
    }
  }
  else if ( (unsigned __int8)a4 >= v7 )
  {
LABEL_4:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2);
    v9 = *(_BYTE *)(result + 40);
    if ( v9 == (_BYTE)v6 )
      v10 = a3 < *(_QWORD *)(result + 32);
    else
      v10 = (unsigned __int8)v6 < v9;
    if ( v10 )
    {
      if ( *(_QWORD *)(a2 + 24) )
        return result;
      return 0;
    }
    return sub_41400((__int64)a1, a3, v6, a4, a5);
  }
  result = a2;
  if ( a1[3] != a2 )
  {
    v11 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    a4 = v11;
    if ( *(_BYTE *)(v11 + 40) == (_BYTE)v6 )
    {
      if ( *(_QWORD *)(v11 + 32) >= a3 )
        return sub_41400((__int64)a1, a3, v6, a4, a5);
    }
    else if ( *(_BYTE *)(v11 + 40) >= (unsigned __int8)v6 )
    {
      return sub_41400((__int64)a1, a3, v6, a4, a5);
    }
    result = a2;
    if ( !*(_QWORD *)(a4 + 24) )
      return 0;
  }
  return result;
}

