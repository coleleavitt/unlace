_QWORD *__fastcall sub_4B3A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax
  _QWORD *v7; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rax
  void *v14; // rbx

  result = *(_QWORD **)(a1 + 1648);
  if ( !result )
    return nullptr;
  v7 = (_QWORD *)(a1 + 1640);
  v9 = (_QWORD *)(a1 + 1640);
  do
  {
    while ( 1 )
    {
      v10 = result[2];
      v11 = result[3];
      if ( result[4] < a3 )
        break;
      v9 = result;
      result = (_QWORD *)result[2];
      if ( !v10 )
        goto LABEL_6;
    }
    result = (_QWORD *)result[3];
  }
  while ( v11 );
LABEL_6:
  if ( v7 != v9 && a3 >= v9[4] )
  {
    if ( *(int *)(a1 + 1360) <= 4 )
    {
      v12 = *((_DWORD *)v9 + 16);
      if ( v12 != 999 )
      {
        if ( !v12 )
          LODWORD(a5) = *(unsigned __int8 *)(sub_15D50(v10, a3, v11, a4, a5, a4) + 80);
        if ( (unsigned __int8)sub_682B0(*(_QWORD *)(a1 + 864), a3, v12, (int)a5) )
          goto LABEL_13;
        return nullptr;
      }
      if ( (int)a5 <= 0 )
      {
        if ( (_DWORD)a5 != -1 )
          return nullptr;
        goto LABEL_13;
      }
      if ( !(unsigned __int8)sub_67E90(*(_QWORD *)(a1 + 864), a3, a4, (int)a5) )
        return nullptr;
    }
LABEL_13:
    v13 = std::_Rb_tree_rebalance_for_erase();
    v14 = (void *)v13;
    if ( *(_QWORD *)(v13 + 40) )
    {
      *(_QWORD *)(v13 + 48) = 0;
      qfree();
    }
    operator delete(v14, 0x48u);
    --*(_QWORD *)(a1 + 1672);
    return (_QWORD *)(&dword_0 + 1);
  }
  return result;
}

