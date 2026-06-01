unsigned __int64 __fastcall sub_1CDED0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r12
  __int64 i; // rbp
  int v4; // r13d
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 j; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 520);
  if ( !v1 )
    goto LABEL_15;
  do
  {
    if ( v1[43] )
    {
      v1[44] = 0;
      qfree();
      v1[43] = 0;
      v1[45] = 0;
    }
    v1 = (_QWORD *)v1[1];
  }
  while ( v1 );
  v2 = *(_QWORD *)(a1 + 520);
  if ( v2 )
  {
    do
    {
      for ( i = 0; *(_DWORD *)(v2 + 376) > (int)i; ++v5[44] )
      {
        v4 = *(_DWORD *)(v2 + 72);
        v5 = *(_QWORD **)(*(_QWORD *)(a1 + 528) + 8LL * *(int *)(*(_QWORD *)(v2 + 368) + 4 * i));
        v6 = v5[44];
        v7 = v5[43];
        if ( v5[45] < (unsigned __int64)(v6 + 1) )
        {
          v8 = qvector_reserve();
          v5[43] = v8;
          v7 = v8;
          v6 = v5[44];
        }
        *(_DWORD *)(v7 + 4 * v6) = v4;
        ++i;
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
    v9 = *(_QWORD *)(a1 + 520);
    v11 = 0;
    for ( j = 0; v9; v9 = *(_QWORD *)(v9 + 8) )
      sub_1CCC40(v9, &v11);
  }
  else
  {
LABEL_15:
    v11 = 0;
    j = 0;
  }
  qfree();
  return v13 - __readfsqword(0x28u);
}

