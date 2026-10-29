__int64 __fastcall sub_56F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r12d
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v11; // rax
  int v12; // ecx

  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
  {
    v7 = a1 + 8;
LABEL_14:
    if ( v7 != *(_QWORD *)(a1 + 24) )
    {
      v11 = std::_Rb_tree_decrement(v7, a2, a3, a4, a5);
      v12 = *(_DWORD *)(v11 + 32);
      v7 = v11;
      v9 = v6 == v12;
      if ( v6 <= v12 )
        goto LABEL_16;
    }
    return 0;
  }
  while ( 1 )
  {
    a4 = *(unsigned int *)(v7 + 32);
    if ( (int)a4 > v6 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      a2 = 1;
      goto LABEL_8;
    }
    if ( (_DWORD)a4 == v6 && *(_DWORD *)(v7 + 36) > (int)a3 )
      break;
    v8 = *(_QWORD *)(v7 + 24);
    a2 = 0;
    if ( !v8 )
      goto LABEL_9;
LABEL_5:
    v7 = v8;
  }
  v8 = *(_QWORD *)(v7 + 16);
  a2 = 1;
LABEL_8:
  if ( v8 )
    goto LABEL_5;
LABEL_9:
  if ( (_BYTE)a2 )
    goto LABEL_14;
  v9 = v6 == (_DWORD)a4;
  if ( v6 > (int)a4 )
    return 0;
LABEL_16:
  if ( v9 && *(_DWORD *)(v7 + 36) < v5 )
    return 0;
  return v7;
}

