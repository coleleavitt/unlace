__int64 __fastcall sub_21AB0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r13
  __int64 v5; // r15
  int *v8; // rdx
  int v9; // eax
  int v10; // r14d
  int i; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+0h] [rbp-38h]

  v4 = *(_DWORD **)(a2 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      v5 = sub_E2050();
    v8 = *(int **)(a2 + 16);
    v9 = 0;
    if ( v8 )
      v9 = *v8;
    v10 = v9 + *(_DWORD *)(a2 + 120);
    for ( i = 0; *v4 > i; ++i )
    {
      v12 = (unsigned int)(v10 + i);
      v13 = (unsigned int)(a4 + i);
      sub_E1710(v5, 94, a3, v12, v13);
    }
  }
  return v15;
}
