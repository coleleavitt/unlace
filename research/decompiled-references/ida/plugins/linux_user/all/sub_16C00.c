unsigned __int64 __fastcall sub_16C00(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax
  __int64 v13; // rdx

  v4 = *(_QWORD *)(a1 + 1224);
  if ( !v4 )
    goto LABEL_8;
  v3 = a2;
  v5 = a1 + 1216;
  v2 = a1;
  v6 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) >= v3 )
        break;
      v4 = *(_QWORD *)(v4 + 24);
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = v4;
    v4 = *(_QWORD *)(v4 + 16);
  }
  while ( v7 );
LABEL_6:
  if ( v5 == v6 || *(_DWORD *)(v6 + 32) > v3 )
  {
LABEL_8:
    if ( under_debugger )
      BUG();
    v6 = 30064;
    interr();
  }
  if ( *(_BYTE *)(v6 + 65) )
    --*(_DWORD *)(v2 + 1408);
  v9 = std::_Rb_tree_rebalance_for_erase();
  v10 = (void *)v9;
  if ( *(_QWORD *)(v9 + 72) )
  {
    *(_QWORD *)(v9 + 80) = 0;
    qfree();
  }
  operator delete(v10, 0x60u);
  v11 = *(_QWORD *)(v2 + 1264);
  --*(_QWORD *)(v2 + 1248);
  result = v11 + 1;
  if ( v11 > 9 )
  {
    memmove(*(void **)(v2 + 1256), (const void *)(*(_QWORD *)(v2 + 1256) + 4LL), 4 * v11 - 4);
    result = *(_QWORD *)(v2 + 1264);
    v11 = result - 1;
    *(_QWORD *)(v2 + 1264) = result - 1;
  }
  if ( *(_QWORD *)(v2 + 1272) < result )
  {
    result = qvector_reserve();
    v13 = *(_QWORD *)(v2 + 1264);
    *(_QWORD *)(v2 + 1256) = result;
    *(_DWORD *)(result + 4 * v13) = v3;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 1256) + 4 * v11) = v3;
  }
  ++*(_QWORD *)(v2 + 1264);
  return result;
}

