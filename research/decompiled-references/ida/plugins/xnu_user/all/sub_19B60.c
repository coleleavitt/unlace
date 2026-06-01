__int64 __fastcall sub_19B60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  void *v10; // rbx

  v3 = *(_QWORD **)(a1 + 1648);
  if ( !v3 )
    return 0;
  v5 = (_QWORD *)(a1 + 1640);
  do
  {
    while ( 1 )
    {
      v6 = v3[2];
      v7 = v3[3];
      if ( v3[4] < a3 )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v7 );
LABEL_6:
  if ( v5 == (_QWORD *)(a1 + 1640)
    || a3 < v5[4]
    || *(int *)(a1 + 1360) <= 4
    && !(unsigned __int8)sub_682B0(*(_QWORD *)(a1 + 864), a3, *((unsigned int *)v5 + 16), *((int *)v5 + 17)) )
  {
    return 0;
  }
  v9 = std::_Rb_tree_rebalance_for_erase();
  v10 = (void *)v9;
  if ( *(_QWORD *)(v9 + 40) )
  {
    *(_QWORD *)(v9 + 48) = 0;
    qfree();
  }
  operator delete(v10, 0x48u);
  --*(_QWORD *)(a1 + 1672);
  return 1;
}

