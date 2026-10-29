void __fastcall sub_330CB0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rdx
  int v8; // r14d
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax

  sub_11CFE0(a2);
  v3 = *(_DWORD *)(a1 + 76);
  if ( !v3 )
  {
    *(_DWORD *)a2 = 58;
    sub_1D4FF0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24));
    return;
  }
  if ( v3 != 2 )
  {
    if ( !under_debugger )
      sub_3835A0(51831);
LABEL_16:
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 368);
  v5 = *(_QWORD *)(a1 + 376);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v5 + 1) )
  {
    v13 = qvector_reserve();
    *(_QWORD *)(a1 + 368) = v13;
    v4 = v13;
    v5 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v4 + 4 * v5) = v6;
  v7 = *(_QWORD *)(a1 + 64);
  ++*(_QWORD *)(a1 + 376);
  if ( v6 >= *(_DWORD *)(v7 + 64) )
  {
    if ( !under_debugger )
      sub_3835A0(52719);
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(a1 + 72);
  v9 = *(_QWORD **)(*(_QWORD *)(v7 + 528) + 8LL * v6);
  v10 = v9[44];
  v11 = v9[43];
  if ( v9[45] < (unsigned __int64)(v10 + 1) )
  {
    v14 = qvector_reserve();
    v9[43] = v14;
    v11 = v14;
    v10 = v9[44];
  }
  *(_DWORD *)(v11 + 4 * v10) = v8;
  ++v9[44];
  v12 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 76) = 3;
  if ( v6 != v12 + 1 )
  {
    *(_DWORD *)a2 = 55;
    *(_BYTE *)(a2 + 32) = 7;
    *(_DWORD *)(a2 + 40) = v6;
  }
}

