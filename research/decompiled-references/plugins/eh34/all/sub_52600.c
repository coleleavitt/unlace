_QWORD *__fastcall sub_52600(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  _QWORD *v13; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  _BOOL8 v17; // rdi
  __int64 v19; // rax

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v6 = a1 + 1;
    goto LABEL_8;
  }
  v5 = *a2;
  v6 = v2;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < v5 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( v2 == v6 || v5 < v6[4] )
  {
LABEL_8:
    v9 = (_QWORD *)operator new(0x90u);
    v12 = *a2;
    v13 = v9;
    v9[4] = *a2;
    memset(v9 + 5, 0, 0x68u);
    v14 = 0;
    v9[5] = 0xFFFFFFFFFFFFLL;
    if ( v2 == v6 )
    {
      if ( a1[5] )
      {
        v10 = a1[4];
        v6 = nullptr;
        if ( *(_QWORD *)(v10 + 32) < v12 )
        {
LABEL_14:
          if ( v10 )
          {
            if ( v6 || v2 == (_QWORD *)v10 )
            {
              v17 = 1;
LABEL_18:
              v6 = v13;
              std::_Rb_tree_insert_and_rebalance(v17, v13, v10, v2);
              ++a1[5];
              return v6 + 5;
            }
            v15 = *(_QWORD *)(v10 + 32);
LABEL_32:
            v17 = v12 < v15;
            goto LABEL_18;
          }
          goto LABEL_21;
        }
      }
    }
    else
    {
      v15 = v6[4];
      if ( v12 >= v15 )
      {
        if ( v15 < v12 )
        {
          if ( (_QWORD *)a1[4] != v6 )
          {
            v19 = std::_Rb_tree_increment(v6);
            v10 = v19;
            if ( v12 >= *(_QWORD *)(v19 + 32) )
              goto LABEL_25;
            if ( v6[3] )
            {
              v6 = (_QWORD *)v19;
              goto LABEL_14;
            }
          }
          v10 = (unsigned __int64)v6;
          if ( v6 )
            goto LABEL_32;
        }
LABEL_21:
        if ( v13 )
          operator delete(v13, 0x90u);
        return v6 + 5;
      }
      v10 = (unsigned __int64)v6;
      if ( (_QWORD *)a1[3] == v6 )
        goto LABEL_14;
      v16 = std::_Rb_tree_decrement(v6, a2, v6, 0, v11);
      v10 = v16;
      if ( *(_QWORD *)(v16 + 32) < v12 )
      {
        if ( *(_QWORD *)(v16 + 24) )
          v10 = (unsigned __int64)v6;
        else
          v6 = nullptr;
        goto LABEL_14;
      }
    }
LABEL_25:
    v6 = sub_516C0((__int64)a1, v12, v10, v14, v11);
    goto LABEL_14;
  }
  return v6 + 5;
}
