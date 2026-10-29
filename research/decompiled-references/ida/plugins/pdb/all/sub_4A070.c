__int64 __fastcall sub_4A070(_QWORD *a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  int *v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  _BOOL8 v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+Ch] [rbp-3Ch]

  v9 = a3 + 4;
  v10 = operator new(0x40u);
  v11 = *a3;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 32) = v11;
  *(_DWORD *)(v10 + 40) = a3[2];
  *(_BYTE *)(v10 + 44) = *((_BYTE *)a3 + 12);
  copy_tinfo_t(v10 + 48, a3 + 4);
  v16 = *((_QWORD *)a3 + 3);
  v17 = *(_DWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 56) = v16;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v12 = a1[4];
      a2 = 0;
      if ( *(_DWORD *)(v12 + 32) < v17 )
        goto LABEL_6;
    }
LABEL_5:
    a2 = sub_24F00((__int64)a1, v17, v12, v13, v14);
    goto LABEL_6;
  }
  v18 = *(unsigned int *)(a2 + 32);
  if ( v17 < (unsigned int)v18 )
  {
    v12 = a1[3];
    if ( a2 == v12 )
      goto LABEL_6;
    v19 = std::_Rb_tree_decrement(a2, v9, v12, v18, v14);
    v12 = v19;
    if ( *(_DWORD *)(v19 + 32) >= v17 )
      goto LABEL_5;
    if ( *(_QWORD *)(v19 + 24) )
    {
      v12 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  v24 = *(_DWORD *)(a2 + 32);
  if ( (unsigned int)v18 >= v17 )
    goto LABEL_17;
  v12 = a1[4];
  if ( a2 == v12 )
  {
LABEL_27:
    a2 = 0;
    goto LABEL_6;
  }
  v21 = std::_Rb_tree_increment(a2, v9, v12, v18, v14, v15, a4, a5, a6);
  v12 = v21;
  if ( v17 >= *(_DWORD *)(v21 + 32) )
    goto LABEL_5;
  v22 = v24;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v12 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  a2 = v21;
LABEL_6:
  if ( v12 )
  {
    if ( a1 + 1 == (_QWORD *)v12 || a2 )
    {
      v20 = 1;
LABEL_10:
      a2 = v10;
      std::_Rb_tree_insert_and_rebalance(v20, v10, v12, a1 + 1, a4, a5, a6);
      ++a1[5];
      return a2;
    }
    v22 = *(_DWORD *)(v12 + 32);
LABEL_26:
    v20 = v17 < v22;
    goto LABEL_10;
  }
LABEL_17:
  if ( v10 )
  {
    clear_tinfo_t(v10 + 48);
    operator delete((void *)v10, 0x40u);
  }
  return a2;
}

