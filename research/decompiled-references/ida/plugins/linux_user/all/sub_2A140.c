__int64 __fastcall sub_2A140(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // r12

  v2 = *(_DWORD *)(a2 + 88);
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 1;
  v4 = a1 + 16;
  v5 = a1 + 16;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      v7 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v3 + 32) >= v2 )
        break;
      v3 = *(_QWORD *)(v3 + 24);
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v3;
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v6 );
LABEL_6:
  v8 = 1;
  if ( v5 != v4 && v2 >= *(_DWORD *)(v5 + 32) )
  {
    v9 = v5 + 48;
    v10 = *(_QWORD *)(v5 + 64);
    if ( v10 != v9 )
    {
      v11 = *(_QWORD *)(a2 + 56);
      do
      {
        if ( v11 < *(_QWORD *)(v10 + 32) )
          break;
        v8 = *(_DWORD *)(v10 + 40);
        v10 = std::_Rb_tree_increment();
      }
      while ( v9 != v10 );
    }
  }
  return v8;
}

