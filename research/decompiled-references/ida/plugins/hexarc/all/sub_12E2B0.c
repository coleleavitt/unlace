__int64 __fastcall sub_12E2B0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  signed __int64 v6; // rbp
  int v7; // r14d
  __int64 v8; // rsi
  unsigned int v9; // r15d
  int v10; // edx
  __int64 result; // rax
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax

  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_DWORD *)(a2 + 68);
  if ( a4 >= v6 && *(_DWORD *)(a1 + 96) && *(int *)(a1 + 96) + v6 - 1 >= a4 + v7 - 1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = a4 - v6;
    v6 = a4;
  }
  else
  {
    if ( v6 <= (__int64)a4 || v6 >= (__int64)(a4 + v7) )
      return 0;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = ((int)v6 - (int)a4) % *(_DWORD *)(*(_QWORD *)(v8 + 112) + 80LL);
    if ( v9 )
    {
      if ( !under_debugger )
        sub_37B760(51705);
      BUG();
    }
    v7 = v7 + a4 - v6;
  }
  v10 = sub_1BC6B0(*(_QWORD *)(a1 + 56), v8, v9, (unsigned int)v7, *(int *)(a1 + 96));
  result = 0xFFFFFFFFLL;
  if ( v10 == a3 )
  {
    sub_5D900(*(__int64 **)(a1 + 64), v9, v7);
    v12 = *(__int64 **)(a1 + 72);
    v13 = v12[1];
    v14 = *v12;
    if ( v12[2] < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve();
      *v12 = v15;
      v14 = v15;
      v13 = v12[1];
    }
    *(_QWORD *)(v14 + 8 * v13) = a2;
    ++v12[1];
    if ( *(_QWORD *)(a1 + 88) > v6 )
      *(_QWORD *)(a1 + 88) = v6;
    return 1;
  }
  return result;
}

