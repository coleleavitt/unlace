__int64 __fastcall sub_1DD90(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rdi
  _QWORD *i; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ebp
  __int64 result; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  int v15; // edi

  if ( !a1[70] )
    return 0xFFFFFFFFLL;
  v4 = a1 + 66;
  for ( i = (_QWORD *)a1[67]; i; i = (_QWORD *)i[3] )
  {
    while ( 1 )
    {
      v7 = i[2];
      if ( a2 >= i[4] )
        break;
      v4 = i;
      i = (_QWORD *)i[2];
      if ( !v7 )
        goto LABEL_6;
    }
  }
LABEL_6:
  if ( (_QWORD *)a1[68] == v4 )
    return 0xFFFFFFFFLL;
  v8 = std::_Rb_tree_decrement();
  v9 = *(_QWORD *)(v8 + 32);
  v10 = v8;
  if ( a2 < v9 )
  {
LABEL_36:
    if ( !under_debugger )
      interr();
    goto LABEL_38;
  }
  if ( v9 + 16 < a2 )
    return 0xFFFFFFFFLL;
  if ( v9 >= a2 )
  {
    result = *(unsigned __int8 *)(v8 + 41);
    if ( (_BYTE)result == 15 )
      goto LABEL_28;
    if ( (int)result > 15 )
    {
LABEL_34:
      if ( under_debugger )
        goto LABEL_38;
      interr();
      goto LABEL_36;
    }
    v14 = 2;
  }
  else
  {
    v11 = 0;
    do
    {
      if ( *(unsigned __int8 *)(v10 + 40) == ++v11 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
        return 0xFFFFFFFFLL;
    }
    while ( get_item_end() < a2 );
    v13 = *(_BYTE *)(v10 + 41);
    if ( v13 != 15 )
    {
      result = v13;
      if ( v13 <= 0xFu )
      {
        v14 = 2;
        if ( v11 > 0 )
        {
          v15 = *(unsigned __int8 *)(v10 + 42);
          result = *(_BYTE *)(v10 + 41) & 0xFE;
          if ( _bittest(&v15, 4 - v11) )
            result = v13 | 1u;
        }
        goto LABEL_22;
      }
      goto LABEL_34;
    }
    if ( sub_1DD10(*(unsigned __int8 *)(v10 + 42), v11) )
    {
LABEL_29:
      result = 48;
      v14 = 4;
    }
    else
    {
      result = 16;
      v14 = 4;
      if ( !v11 )
      {
        while ( !under_debugger )
        {
          interr();
LABEL_28:
          if ( sub_1DD10(*(unsigned __int8 *)(v10 + 42), 0) )
            goto LABEL_29;
        }
LABEL_38:
        BUG();
      }
    }
  }
LABEL_22:
  if ( a3 )
    *a3 = *(_QWORD *)(v10 + 32) - v14;
  return result;
}

