_QWORD *__fastcall sub_3F8F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  _QWORD *v6; // rbx
  __int64 *v7; // r10
  __int64 *v8; // r9
  __int64 v9; // rax
  unsigned __int8 v10; // dl
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // cl
  __int64 v16; // rax

  v5 = a2;
  v6 = *(_QWORD **)(a1 + 16);
  if ( !v6 )
  {
    v6 = (_QWORD *)(a1 + 8);
    goto LABEL_22;
  }
  v7 = (__int64 *)a2[1];
  while ( 1 )
  {
    v8 = (__int64 *)v6[5];
    a2 = v8;
    if ( v7 <= v8 )
      a2 = v7;
    if ( !a2 )
      break;
    a5 = *v5;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_BYTE *)(a5 + v9);
      a4 = *(unsigned __int8 *)(v6[4] + v9);
      if ( v10 < (unsigned __int8)a4 )
        break;
      if ( (unsigned __int8)a4 < v10 )
        goto LABEL_13;
      if ( a2 == (__int64 *)++v9 )
        goto LABEL_12;
    }
LABEL_10:
    v11 = (_QWORD *)v6[2];
    a3 = 1;
    if ( !v11 )
      goto LABEL_14;
LABEL_11:
    v6 = v11;
  }
LABEL_12:
  if ( v7 < v8 )
    goto LABEL_10;
LABEL_13:
  v11 = (_QWORD *)v6[3];
  a3 = 0;
  if ( v11 )
    goto LABEL_11;
LABEL_14:
  if ( !(_BYTE)a3 )
    goto LABEL_15;
LABEL_22:
  if ( *(_QWORD **)(a1 + 24) == v6 )
    return nullptr;
  v16 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
  v7 = (__int64 *)v5[1];
  v8 = *(__int64 **)(v16 + 40);
  v6 = (_QWORD *)v16;
  a2 = v7;
  if ( v8 <= v7 )
    a2 = *(__int64 **)(v16 + 40);
LABEL_15:
  if ( a2 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v6[4] + v12);
      v14 = *(_BYTE *)(*v5 + v12);
      if ( v13 < v14 )
        return nullptr;
      if ( v14 < v13 )
        return v6;
      if ( (__int64 *)++v12 == a2 )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    if ( v8 < v7 )
      return nullptr;
    return v6;
  }
}
