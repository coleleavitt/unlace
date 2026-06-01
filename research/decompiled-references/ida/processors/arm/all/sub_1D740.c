_QWORD *__fastcall sub_1D740(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  _QWORD *result; // rax
  __int64 v6; // rcx

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && *(_QWORD *)(a1[4] + 32LL) < a3 )
      return 0;
    return sub_1D680((__int64)a1, a3);
  }
  v4 = a2[4];
  if ( a3 < v4 )
  {
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v6 = std::_Rb_tree_decrement();
    if ( *(_QWORD *)(v6 + 32) < a3 )
    {
      result = a2;
      if ( *(_QWORD *)(v6 + 24) )
        return result;
      return 0;
    }
    return sub_1D680((__int64)a1, a3);
  }
  if ( v4 >= a3 )
    return a2;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  result = (_QWORD *)std::_Rb_tree_increment();
  if ( a3 >= result[4] )
    return sub_1D680((__int64)a1, a3);
  if ( !a2[3] )
    return 0;
  return result;
}
