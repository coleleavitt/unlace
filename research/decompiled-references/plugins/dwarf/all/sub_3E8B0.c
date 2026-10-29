__int64 __fastcall sub_3E8B0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // r13
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // r13
  int v13; // ecx
  __int64 v14; // r13

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && (int)sub_849A0(a1[4] + 32LL, a3) < 0 )
      return 0;
    return sub_3E7E0((__int64)a1, a3, a3, a4, a5);
  }
  v6 = a2 + 4;
  v8 = a2 + 4;
  if ( (int)sub_849A0(a3, v8) < 0 )
  {
    result = a1[3];
    if ( (_QWORD *)result == a2 )
      return result;
    v12 = std::_Rb_tree_decrement(a2, v8, result, v9, v10);
    if ( (int)sub_849A0(v12 + 32, a3) < 0 )
    {
      result = (__int64)a2;
      if ( !*(_QWORD *)(v12 + 24) )
        return 0;
      return result;
    }
    return sub_3E7E0((__int64)a1, a3, a3, a4, a5);
  }
  v13 = sub_849A0(v6, a3);
  result = (__int64)a2;
  if ( v13 >= 0 )
    return result;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v14 = std::_Rb_tree_increment(a2);
  if ( (int)sub_849A0(a3, v14 + 32) >= 0 )
    return sub_3E7E0((__int64)a1, a3, a3, a4, a5);
  result = v14;
  if ( !a2[3] )
    return 0;
  return result;
}
