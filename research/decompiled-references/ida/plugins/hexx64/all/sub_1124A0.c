__int64 __fastcall sub_1124A0(__int64 a1, __int64 *a2, __int64 *a3, int a4, int a5, double a6)
{
  __int64 v7; // r13
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax

  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 7 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v9 = sub_110EB0(v7, a4);
  if ( v9 == -1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
    sub_111110(a6);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11);
  v13 = sub_110EB0(v12, a5);
  if ( v9 != v13 || v13 == -1 )
    return 0;
  *a2 = v7;
  *a3 = v12;
  return 1;
}

