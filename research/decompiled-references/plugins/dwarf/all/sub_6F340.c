__int64 *__fastcall sub_6F340(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int v5; // ebp
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  int v23; // eax
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]

  v5 = a3;
  v24 = sub_69FC0(a2, a4, a3, a4, a5);
  if ( !v24 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v24 + 72);
  if ( !v10 )
    goto LABEL_6;
  v11 = sub_A17C0(v10, a4);
  if ( v11 )
  {
    v12 = sub_6F0C0(v24, v5, v11, v7, v8, v9);
    if ( v12 )
      goto LABEL_5;
  }
  v20 = *(_QWORD *)(v24 + 72);
  if ( v20 && (v21 = *(_QWORD *)(v20 + 288)) != 0 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = 33 * v22++;
      v12 = sub_6F0C0(v24, v5, *(_DWORD *)(v20 + 280) + 8 * v23, v7, v8, v9);
      if ( v12 )
        break;
      if ( v22 >= v21 )
        goto LABEL_6;
      v20 = *(_QWORD *)(v24 + 72);
    }
  }
  else
  {
LABEL_6:
    v14 = *(_QWORD *)(a2 + 96);
    v25 = a2 + 80;
    while ( v14 != v25 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 40);
        if ( v15 == v24 )
          break;
        v16 = *(_QWORD *)(v15 + 72);
        if ( !v16 )
          break;
        v17 = *(_QWORD *)(v16 + 288);
        v18 = 0;
        if ( !v17 )
          break;
        while ( 1 )
        {
          v19 = 33 * v18++;
          v12 = sub_6F0C0(v15, v5, *(_DWORD *)(v16 + 280) + 8 * v19, v7, v8, v9);
          if ( v12 || v18 >= v17 )
            break;
          v16 = *(_QWORD *)(v15 + 72);
        }
        v14 = std::_Rb_tree_increment(v14);
        if ( v12 )
          goto LABEL_5;
        if ( v14 == v25 )
          goto LABEL_17;
      }
      v14 = std::_Rb_tree_increment(v14);
    }
LABEL_17:
    v12 = 0;
  }
LABEL_5:
  *a1 = v12;
  return a1;
}
