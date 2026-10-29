void __fastcall sub_196C0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // r14
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  void *v13; // rax
  const char *v14; // rdi

  v2 = a1 + 140;
  v3 = a1[142];
  if ( (_QWORD *)v3 != a1 + 140 )
  {
    v6 = a1 + 146;
    do
    {
      v7 = (_QWORD *)a1[147];
      v8 = *(_QWORD *)(v3 + 32);
      if ( v7 )
      {
        v9 = v6;
        do
        {
          while ( 1 )
          {
            v10 = v7[2];
            v11 = v7[3];
            if ( v7[4] < v8 )
              break;
            v9 = v7;
            v7 = (_QWORD *)v7[2];
            if ( !v10 )
              goto LABEL_8;
          }
          v7 = (_QWORD *)v7[3];
        }
        while ( v11 );
LABEL_8:
        if ( v6 != v9 && v8 >= v9[4] )
        {
          if ( a2 )
          {
            v14 = s;
            if ( v9[11] )
              v14 = (const char *)v9[10];
            if ( strcmp(v14, a2) )
            {
              v3 = std::_Rb_tree_increment();
              continue;
            }
          }
          sub_18FE0(a1, v9 + 5);
        }
      }
      v12 = std::_Rb_tree_increment();
      v13 = (void *)std::_Rb_tree_rebalance_for_erase();
      v3 = v12;
      operator delete(v13, 0x28u);
      --a1[144];
    }
    while ( (_QWORD *)v3 != v2 );
  }
}

