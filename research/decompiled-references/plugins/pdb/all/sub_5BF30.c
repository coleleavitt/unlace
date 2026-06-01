__int64 __fastcall sub_5BF30(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9)
{
  unsigned int *v9; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi

  v9 = a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (a4 = a1[4], v15 = *a3, v16 = *(_DWORD *)(a4 + 32), v16 >= v15)
      && (v15 != v16 || *(_DWORD *)(a4 + 36) >= v9[1]) )
    {
      v17 = v9[1];
      v18 = *v9;
      return sub_54B10((__int64)a1, v18, v17, a4, a5);
    }
    return 0;
  }
  v10 = *a3;
  v11 = *(_DWORD *)(a2 + 32);
  if ( *a3 < v11 )
    goto LABEL_3;
  if ( v11 != v10 )
  {
LABEL_17:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2, a2, a3, a4, a5, a6, a7, a8, a9);
    if ( v10 >= *(_DWORD *)(result + 32) )
    {
      if ( v10 != *(_DWORD *)(result + 32) )
        goto LABEL_25;
      a4 = *(unsigned int *)(result + 36);
      if ( v9[1] >= (unsigned int)a4 )
        goto LABEL_25;
    }
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v14 = a3[1];
  a3 = (unsigned int *)*(unsigned int *)(a2 + 36);
  if ( v14 >= (unsigned int)a3 )
  {
    if ( (unsigned int)a3 >= v14 )
      return a2;
    goto LABEL_17;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    a4 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    v13 = *(_DWORD *)(a4 + 32);
    if ( v13 >= v10 && (v10 != v13 || *(_DWORD *)(a4 + 36) >= v9[1]) )
    {
LABEL_25:
      v17 = v9[1];
      v18 = v10;
      return sub_54B10((__int64)a1, v18, v17, a4, a5);
    }
    result = a2;
    if ( !*(_QWORD *)(a4 + 24) )
      return 0;
  }
  return result;
}
