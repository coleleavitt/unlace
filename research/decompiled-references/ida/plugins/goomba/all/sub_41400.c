__int64 __fastcall sub_41400(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v5; // bp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rax

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    v6 = a1 + 8;
LABEL_15:
    if ( v6 != *(_QWORD *)(a1 + 24) )
    {
      v9 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
      LOBYTE(a4) = *(_BYTE *)(v9 + 40);
      v6 = v9;
      if ( v5 == (_BYTE)a4 )
        goto LABEL_17;
LABEL_13:
      if ( (unsigned __int8)a4 >= v5 )
        return v6;
    }
    return 0;
  }
  while ( 1 )
  {
    a4 = *(unsigned __int8 *)(v6 + 40);
    if ( (_BYTE)a4 != v5 )
      break;
    v7 = *(_QWORD *)(v6 + 24);
    LOBYTE(a3) = a2 < *(_QWORD *)(v6 + 32);
    if ( a2 < *(_QWORD *)(v6 + 32) )
      v7 = *(_QWORD *)(v6 + 16);
    if ( !v7 )
      goto LABEL_11;
LABEL_6:
    v6 = v7;
  }
  v7 = *(_QWORD *)(v6 + 24);
  LOBYTE(a3) = v5 < (unsigned __int8)a4;
  if ( v5 < (unsigned __int8)a4 )
    v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
    goto LABEL_6;
LABEL_11:
  if ( (_BYTE)a3 )
    goto LABEL_15;
  if ( v5 != (_BYTE)a4 )
    goto LABEL_13;
LABEL_17:
  if ( *(_QWORD *)(v6 + 32) < a2 )
    return 0;
  return v6;
}

