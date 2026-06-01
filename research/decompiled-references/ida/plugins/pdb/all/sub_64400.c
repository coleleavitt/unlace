__int64 __fastcall sub_64400(_QWORD *a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = 0;
  if ( !a1[105] )
    return v3;
  v4 = (_QWORD *)a1[102];
  v5 = (unsigned __int64)a2 << 32;
  v6 = a1 + 101;
  v7 = a3 | v5;
  if ( !v4 )
    goto LABEL_3;
  do
  {
    while ( 1 )
    {
      v10 = v4[2];
      v11 = v4[3];
      if ( v4[4] < v7 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v10 )
        goto LABEL_10;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v11 );
LABEL_10:
  if ( a1 + 101 == v6 || v6[4] != v7 )
  {
LABEL_3:
    v3 = 0;
    if ( v6 != (_QWORD *)a1[103] )
    {
      v8 = std::_Rb_tree_decrement(v6);
      if ( v7 < *(_QWORD *)(v8 + 32) + (unsigned __int64)*(unsigned int *)(v8 + 40) )
        return *(unsigned int *)(v8 + 44);
    }
    return v3;
  }
  return *((unsigned int *)v6 + 11);
}

