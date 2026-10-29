__int64 __fastcall sub_3B880(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r13

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && (unsigned __int8)sub_35D60(a1[4] + 32LL, a3) )
      return 0;
    return sub_3B7D0((__int64)a1, a3, a3, a4, a5);
  }
  v6 = (__int64)(a2 + 4);
  v8 = (__int64)(a2 + 4);
  if ( (unsigned __int8)sub_35D60(a3, v8) )
  {
    result = a1[3];
    if ( (_QWORD *)result == a2 )
      return result;
    v12 = std::_Rb_tree_decrement(a2, v8, result, v9, v10);
    if ( (unsigned __int8)sub_35D60(v12 + 32, a3) )
    {
      result = (__int64)a2;
      if ( !*(_QWORD *)(v12 + 24) )
        return 0;
      return result;
    }
    return sub_3B7D0((__int64)a1, a3, a3, a4, a5);
  }
  if ( !(unsigned __int8)sub_35D60(v6, a3) )
    return (__int64)a2;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v13 = std::_Rb_tree_increment(a2);
  if ( !(unsigned __int8)sub_35D60(a3, v13 + 32) )
    return sub_3B7D0((__int64)a1, a3, a3, a4, a5);
  result = v13;
  if ( !a2[3] )
    return 0;
  return result;
}
