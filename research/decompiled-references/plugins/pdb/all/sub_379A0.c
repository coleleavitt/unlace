__int64 __fastcall sub_379A0(_QWORD *a1, unsigned int *a2, double a3, double a4, double a5)
{
  _QWORD *v5; // r14
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  char *v18; // r13
  unsigned int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _BOOL8 v24; // rdi
  __int64 v26; // rax
  char *v27; // rax
  bool v28; // zf

  v5 = a1 + 1;
  v7 = a1[2];
  if ( !v7 )
    goto LABEL_29;
  v8 = *a2;
  v9 = (__int64)v5;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 24);
      if ( *(_DWORD *)(v7 + 32) < v8 )
        break;
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v10 )
        goto LABEL_6;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v11 );
LABEL_6:
  if ( v5 == (_QWORD *)v9 )
  {
LABEL_29:
    v27 = (char *)operator new(0x30u);
    v17 = *a2;
    v28 = a1[5] == 0;
    *((_QWORD *)v27 + 5) = 0;
    v18 = v27;
    *((_DWORD *)v27 + 8) = v17;
    if ( !v28 )
    {
      v20 = a1[4];
      v9 = 0;
      if ( *(_DWORD *)(v20 + 32) < v17 )
      {
LABEL_13:
        if ( v20 )
        {
          if ( v9 || v5 == (_QWORD *)v20 )
          {
            v24 = 1;
LABEL_17:
            v9 = (__int64)v18;
            std::_Rb_tree_insert_and_rebalance(v24, v18, v20, v5, a3, a4, a5);
            ++a1[5];
            return v9 + 40;
          }
          goto LABEL_27;
        }
        goto LABEL_20;
      }
    }
LABEL_31:
    v9 = sub_24CC0((__int64)a1, v17, v20, v22, v23);
    goto LABEL_13;
  }
  if ( v8 >= *(_DWORD *)(v9 + 32) )
    return v9 + 40;
  v12 = (char *)operator new(0x30u);
  v17 = *a2;
  *((_QWORD *)v12 + 5) = 0;
  v18 = v12;
  *((_DWORD *)v12 + 8) = v17;
  v19 = *(_DWORD *)(v9 + 32);
  if ( v17 < v19 )
  {
    v20 = v9;
    if ( a1[3] == v9 )
      goto LABEL_13;
    v21 = std::_Rb_tree_decrement(v9, a2, v9, v14, v15);
    v20 = v21;
    if ( *(_DWORD *)(v21 + 32) < v17 )
    {
      if ( *(_QWORD *)(v21 + 24) )
        v20 = v9;
      else
        v9 = 0;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( v19 < v17 )
  {
    if ( a1[4] == v9 )
    {
      v20 = v9;
      if ( v9 )
      {
LABEL_27:
        v19 = *(_DWORD *)(v20 + 32);
LABEL_28:
        v24 = v17 < v19;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v26 = std::_Rb_tree_increment(v9, a2, v13, v14, v15, v16, a3, a4, a5);
    v20 = v26;
    if ( v17 >= *(_DWORD *)(v26 + 32) )
      goto LABEL_31;
    if ( *(_QWORD *)(v9 + 24) )
    {
      v9 = v26;
      goto LABEL_13;
    }
    v20 = v9;
    if ( v9 )
      goto LABEL_28;
  }
LABEL_20:
  if ( v18 )
  {
    clear_tinfo_t(v18 + 40);
    operator delete(v18, 0x30u);
  }
  return v9 + 40;
}
