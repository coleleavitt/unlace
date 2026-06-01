char __fastcall sub_23220(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // r11
  int v6; // r9d
  __int64 v7; // rax
  __int64 *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rax

  v3 = *(_QWORD *)(a1 + 80);
  if ( !v3 )
    return (unsigned __int8)netnode_charval() == 2;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (__int64 *)(v5 + 24 * v7);
    v9 = v8[1];
    if ( v9 )
      break;
LABEL_8:
    v7 = ++v6;
    if ( v6 >= v3 )
      return (unsigned __int8)netnode_charval() == 2;
  }
  v10 = *v8;
  v11 = 0;
  v12 = 0;
  while ( *(_QWORD *)(v10 + 8 * v12) != a3 )
  {
    v12 = ++v11;
    if ( v11 >= v9 )
      goto LABEL_8;
  }
  return 1;
}
