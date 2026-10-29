unsigned __int64 __fastcall sub_1D4FD0(__int64 a1, double a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  int v7; // r13d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 520);
  if ( !v2 )
    goto LABEL_16;
  do
  {
    v4 = v2[43];
    if ( v4 )
    {
      v2[44] = 0;
      qfree(v4);
      v2[43] = 0;
      v2[45] = 0;
    }
    v2 = (_QWORD *)v2[1];
  }
  while ( v2 );
  v5 = *(_QWORD *)(a1 + 520);
  if ( !v5 )
  {
LABEL_16:
    v15 = 0;
    v16 = 0;
LABEL_17:
    v13 = 0;
    goto LABEL_15;
  }
  do
  {
    for ( i = 0; *(_DWORD *)(v5 + 376) > (int)i; ++v8[44] )
    {
      v7 = *(_DWORD *)(v5 + 72);
      v8 = *(_QWORD **)(*(_QWORD *)(a1 + 528) + 8LL * *(int *)(*(_QWORD *)(v5 + 368) + 4 * i));
      v9 = v8[44];
      v10 = v8[43];
      if ( v8[45] < (unsigned __int64)(v9 + 1) )
      {
        v11 = qvector_reserve((__int64)(v8 + 43), v10, v9 + 1, 4);
        v8[43] = v11;
        v10 = v11;
        v9 = v8[44];
      }
      *(_DWORD *)(v10 + 4 * v9) = v7;
      ++i;
    }
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( v5 );
  v12 = *(_QWORD *)(a1 + 520);
  v15 = 0;
  v16 = 0;
  if ( !v12 )
    goto LABEL_17;
  do
  {
    sub_1D3D40(v12, &v15, a2);
    v12 = *(_QWORD *)(v12 + 8);
  }
  while ( v12 );
  v13 = v15;
LABEL_15:
  qfree(v13);
  return v17 - __readfsqword(0x28u);
}

