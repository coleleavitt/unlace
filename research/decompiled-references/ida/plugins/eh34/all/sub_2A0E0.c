__int64 __fastcall sub_2A0E0(_QWORD *a1, __int64 a2, signed int *a3, __int64 a4, __int64 a5)
{
  signed int v6; // r13d
  __int64 result; // rax
  __int64 v8; // rax
  signed int v9; // eax
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] || (a4 = a1[4], v10 = *(_DWORD *)(a4 + 32), *a3 <= v10) && (*a3 != v10 || a3[1] <= *(_DWORD *)(a4 + 36)) )
    {
      v11 = (unsigned int)a3[1];
      v12 = (unsigned int)*a3;
      return sub_27ED0((__int64)a1, v12, v11, a4, a5);
    }
    return 0;
  }
  v6 = *a3;
  if ( *(_DWORD *)(a2 + 32) > *a3 )
    goto LABEL_3;
  if ( *(_DWORD *)(a2 + 32) != v6 )
  {
LABEL_17:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2);
    if ( v6 >= *(_DWORD *)(result + 32) )
    {
      if ( v6 != *(_DWORD *)(result + 32) )
        goto LABEL_25;
      a4 = *(unsigned int *)(result + 36);
      if ( a3[1] >= (int)a4 )
        goto LABEL_25;
    }
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v9 = *(_DWORD *)(a2 + 36);
  if ( a3[1] >= v9 )
  {
    if ( a3[1] <= v9 )
      return a2;
    goto LABEL_17;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    v8 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    a4 = v8;
    if ( v6 <= *(_DWORD *)(v8 + 32) && (v6 != *(_DWORD *)(v8 + 32) || *(_DWORD *)(v8 + 36) >= a3[1]) )
    {
LABEL_25:
      v11 = (unsigned int)a3[1];
      v12 = (unsigned int)v6;
      return sub_27ED0((__int64)a1, v12, v11, a4, a5);
    }
    result = a2;
    if ( !*(_QWORD *)(a4 + 24) )
      return 0;
  }
  return result;
}

