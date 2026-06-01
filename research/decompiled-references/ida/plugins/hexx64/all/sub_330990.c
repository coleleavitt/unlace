void __fastcall sub_330990(__int64 a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdx
  int v9; // r14d
  _QWORD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax

  sub_11D5A0(a2);
  v4 = *(_DWORD *)(a1 + 76);
  if ( !v4 )
  {
    *(_DWORD *)a2 = 58;
    sub_1D55B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24));
    return;
  }
  if ( v4 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCA77u, a3);
LABEL_16:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 368);
  v6 = *(_QWORD *)(a1 + 376);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v6 + 1) )
  {
    v14 = qvector_reserve(a1 + 368, v5, v6 + 1, 4);
    *(_QWORD *)(a1 + 368) = v14;
    v5 = v14;
    v6 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v5 + 4 * v6) = v7;
  v8 = *(_QWORD *)(a1 + 64);
  ++*(_QWORD *)(a1 + 376);
  if ( v7 >= *(_DWORD *)(v8 + 64) )
  {
    if ( !under_debugger )
      sub_383060(0xCDEFu, a3);
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(a1 + 72);
  v10 = *(_QWORD **)(*(_QWORD *)(v8 + 528) + 8LL * v7);
  v11 = v10[44];
  v12 = v10[43];
  if ( v10[45] < (unsigned __int64)(v11 + 1) )
  {
    v15 = qvector_reserve((__int64)(v10 + 43), v12, v11 + 1, 4);
    v10[43] = v15;
    v12 = v15;
    v11 = v10[44];
  }
  *(_DWORD *)(v12 + 4 * v11) = v9;
  ++v10[44];
  v13 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 76) = 3;
  if ( v7 != v13 + 1 )
  {
    *(_DWORD *)a2 = 55;
    *(_BYTE *)(a2 + 32) = 7;
    *(_DWORD *)(a2 + 40) = v7;
  }
}

