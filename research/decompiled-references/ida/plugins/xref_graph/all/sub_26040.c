_QWORD *__fastcall sub_26040(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (v11 = a1[4], v12 = *a3, v13 = *(_QWORD *)(v11 + 32), v13 >= v12)
      && (v12 != v13 || *(_QWORD *)(v11 + 40) >= (unsigned __int64)a3[1]) )
    {
      v14 = a3[1];
      v15 = *a3;
      return sub_1ECE0((__int64)a1, v15, v14);
    }
    return nullptr;
  }
  v4 = *a3;
  v5 = a2[4];
  if ( *a3 < v5 )
    goto LABEL_3;
  if ( v5 != v4 )
  {
LABEL_17:
    if ( (_QWORD *)a1[4] == a2 )
      return nullptr;
    result = (_QWORD *)std::_Rb_tree_increment(a2, a2);
    if ( v4 >= result[4] && (v4 != result[4] || (unsigned __int64)a3[1] >= result[5]) )
      goto LABEL_25;
    if ( !a2[3] )
      return nullptr;
    return result;
  }
  v9 = a3[1];
  v10 = a2[5];
  if ( v9 >= v10 )
  {
    if ( v10 >= v9 )
      return a2;
    goto LABEL_17;
  }
LABEL_3:
  result = a2;
  if ( (_QWORD *)a1[3] != a2 )
  {
    v7 = (_QWORD *)std::_Rb_tree_decrement(a2, a2);
    v8 = v7[4];
    if ( v8 >= v4 && (v4 != v8 || v7[5] >= (unsigned __int64)a3[1]) )
    {
LABEL_25:
      v14 = a3[1];
      v15 = v4;
      return sub_1ECE0((__int64)a1, v15, v14);
    }
    result = a2;
    if ( !v7[3] )
      return nullptr;
  }
  return result;
}

