__int64 __fastcall sub_134970(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, double a5)
{
  signed __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // rsi
  int v10; // r15d
  int v11; // edx
  __int64 result; // rax
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax

  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(_DWORD *)(a2 + 68);
  if ( a4 >= v7 && *(_DWORD *)(a1 + 96) && *(int *)(a1 + 96) + v7 - 1 >= a4 + v8 - 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = a4 - v7;
    v7 = a4;
  }
  else
  {
    if ( v7 <= (__int64)a4 || v7 >= (__int64)(a4 + v8) )
      return 0;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = ((int)v7 - (int)a4) % *(_DWORD *)(*(_QWORD *)(v9 + 112) + 80LL);
    if ( v10 )
    {
      if ( !under_debugger )
        sub_383060(0xC9F9u, a5);
      BUG();
    }
    v8 = v8 + a4 - v7;
  }
  v11 = sub_1C2F30(*(_QWORD *)(a1 + 56), v9, v10, v8, *(_DWORD *)(a1 + 96));
  result = 0xFFFFFFFFLL;
  if ( v11 == a3 )
  {
    sub_63E80(*(__int64 **)(a1 + 64), v10, v8, a5);
    v13 = *(__int64 **)(a1 + 72);
    v14 = v13[1];
    v15 = *v13;
    if ( v13[2] < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(*(_QWORD *)(a1 + 72), v15, v14 + 1, 8);
      *v13 = v16;
      v15 = v16;
      v14 = v13[1];
    }
    *(_QWORD *)(v15 + 8 * v14) = a2;
    ++v13[1];
    if ( *(_QWORD *)(a1 + 88) > v7 )
      *(_QWORD *)(a1 + 88) = v7;
    return 1;
  }
  return result;
}

