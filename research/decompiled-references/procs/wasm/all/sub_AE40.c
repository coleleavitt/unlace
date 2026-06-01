_QWORD *__fastcall sub_AE40(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  _QWORD *result; // rax

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      a4 = a1[4];
      if ( *(_QWORD *)(a4 + 32) < a3 )
        return nullptr;
    }
    return sub_AD80((__int64)a1, a3, a3, a4, a5);
  }
  v6 = a2[4];
  if ( a3 < v6 )
  {
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    a4 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    if ( *(_QWORD *)(a4 + 32) < a3 )
    {
      result = a2;
      if ( *(_QWORD *)(a4 + 24) )
        return result;
      return nullptr;
    }
    return sub_AD80((__int64)a1, a3, a3, a4, a5);
  }
  if ( v6 >= a3 )
    return a2;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  result = (_QWORD *)std::_Rb_tree_increment(a2);
  if ( a3 >= result[4] )
    return sub_AD80((__int64)a1, a3, a3, a4, a5);
  if ( !a2[3] )
    return nullptr;
  return result;
}
