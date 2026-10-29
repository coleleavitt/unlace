__int64 __fastcall sub_6B550(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebx
  _QWORD *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax

  if ( **(_DWORD **)(a1 + 56) != 55 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD5u, a2);
    BUG();
  }
  result = 0;
  if ( *(_DWORD *)(a1 + 76) == 2 )
  {
    sub_1D51C0(a1, 0, a4, a5);
    v6 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v6 + 32) == 7 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      v8 = *(unsigned int *)(v6 + 40);
      if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 64) )
        sub_65460(a2);
      v9 = *(_DWORD *)(a1 + 72);
      v10 = *(_QWORD **)(*(_QWORD *)(v7 + 528) + 8 * v8);
      v11 = v10[44];
      v12 = v10[43];
      if ( v10[45] < (unsigned __int64)(v11 + 1) )
      {
        v13 = qvector_reserve((__int64)(v10 + 43), v12, v11 + 1, 4);
        v10[43] = v13;
        v12 = v13;
        v11 = v10[44];
      }
      *(_DWORD *)(v12 + 4 * v11) = v9;
      ++v10[44];
    }
    return 1;
  }
  return result;
}

