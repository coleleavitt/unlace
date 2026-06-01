bool __fastcall sub_24180(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // rax

  v3 = a1[2];
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    while ( *(_QWORD *)(a1[1] + 32 * v6) != a3 )
    {
      v6 = ++v5;
      if ( v5 >= v3 )
        goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  v8 = a1[7];
  if ( v8 )
  {
    v9 = a1[6];
    v10 = 0;
    v11 = 0;
    while ( *(_QWORD *)(v9 + 8 * v11) != a3 )
    {
      v11 = ++v10;
      if ( v10 >= v8 )
        return (unsigned __int8)netnode_charval() == 1;
    }
    return 1;
  }
  return (unsigned __int8)netnode_charval() == 1;
}

