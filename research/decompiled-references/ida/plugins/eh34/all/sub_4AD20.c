__int64 __fastcall sub_4AD20(_QWORD *a1, signed int *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  signed int v12; // r13d
  void *v13; // r12
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BOOL8 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf

  v2 = a1 + 1;
  v4 = a1[2];
  if ( !v4 )
    goto LABEL_29;
  v5 = *a2;
  v6 = (__int64)v2;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_QWORD *)(v4 + 24);
      if ( v5 > *(_DWORD *)(v4 + 32) )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v8 );
LABEL_6:
  if ( v2 == (_QWORD *)v6 )
  {
LABEL_29:
    v22 = operator new(0x40u);
    v12 = *a2;
    v23 = a1[5] == 0;
    *(_QWORD *)(v22 + 40) = 0;
    v13 = (void *)v22;
    *(_DWORD *)(v22 + 32) = v12;
    *(_OWORD *)(v22 + 48) = 0;
    if ( !v23 )
    {
      v15 = a1[4];
      v6 = 0;
      if ( *(_DWORD *)(v15 + 32) < v12 )
      {
LABEL_13:
        if ( v15 )
        {
          if ( v6 || v2 == (_QWORD *)v15 )
          {
            v19 = 1;
LABEL_17:
            v6 = (__int64)v13;
            std::_Rb_tree_insert_and_rebalance(v19, v13, v15, v2);
            ++a1[5];
            return v6 + 40;
          }
          goto LABEL_27;
        }
        goto LABEL_20;
      }
    }
LABEL_31:
    v6 = sub_4A7C0((__int64)a1, (unsigned int)v12, v15, v17, v18);
    goto LABEL_13;
  }
  if ( v5 >= *(_DWORD *)(v6 + 32) )
    return v6 + 40;
  v9 = operator new(0x40u);
  v12 = *a2;
  *(_QWORD *)(v9 + 40) = 0;
  v13 = (void *)v9;
  *(_DWORD *)(v9 + 32) = v12;
  *(_OWORD *)(v9 + 48) = 0;
  v14 = *(_DWORD *)(v6 + 32);
  if ( v14 > v12 )
  {
    v15 = v6;
    if ( a1[3] == v6 )
      goto LABEL_13;
    v16 = std::_Rb_tree_decrement(v6, a2, v6, v10, v11);
    v15 = v16;
    if ( *(_DWORD *)(v16 + 32) < v12 )
    {
      if ( *(_QWORD *)(v16 + 24) )
        v15 = v6;
      else
        v6 = 0;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( v14 < v12 )
  {
    if ( a1[4] == v6 )
    {
      v15 = v6;
      if ( v6 )
      {
LABEL_27:
        v14 = *(_DWORD *)(v15 + 32);
LABEL_28:
        v19 = v14 > v12;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v21 = std::_Rb_tree_increment(v6);
    v15 = v21;
    if ( *(_DWORD *)(v21 + 32) <= v12 )
      goto LABEL_31;
    if ( *(_QWORD *)(v6 + 24) )
    {
      v6 = v21;
      goto LABEL_13;
    }
    v15 = v6;
    if ( v6 )
      goto LABEL_28;
  }
LABEL_20:
  if ( v13 )
    operator delete(v13, 0x40u);
  return v6 + 40;
}

