__int64 __fastcall sub_2CB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
  {
    v5 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    a3 = *(unsigned int *)(v5 + 32);
    a5 = *(_QWORD *)(v5 + 16);
    a4 = 0;
    v6 = *(_QWORD *)(v5 + 24);
    if ( (unsigned int)a2 < (unsigned int)a3 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      a4 = 1;
    }
    if ( !v6 )
      break;
    v5 = v6;
  }
  if ( (_BYTE)a4 )
  {
LABEL_10:
    if ( v5 != *(_QWORD *)(a1 + 24) )
    {
      v5 = std::_Rb_tree_decrement(v5, a2, a3, a4, a5);
      if ( *(_DWORD *)(v5 + 32) >= (unsigned int)a2 )
        return v5;
    }
    return 0;
  }
  if ( (unsigned int)a3 < (unsigned int)a2 )
    return 0;
  return v5;
}
