__int64 __fastcall sub_1C83F0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 *v5; // r13
  __int64 v6; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx

  v5 = (__int64 *)(a1 + 16);
  v6 = a4;
  sub_64190((__int64 *)(a1 + 16), a3, a5);
  sub_64190((__int64 *)(a1 + 16), a3 + v6, a5);
  if ( *(_DWORD *)a2 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = *(_QWORD *)(v9 + 144);
    v12 = v10 + v6;
    if ( v10 < v11 && v12 > v11 )
    {
      sub_64190(v5, v11 + a3 - v10, a5);
      v9 = *(_QWORD *)(a1 + 8);
    }
    v13 = *(_QWORD *)(v9 + 152);
    if ( v10 < v13 && v12 > v13 )
    {
      sub_64190(v5, v13 + a3 - v10, a5);
      v9 = *(_QWORD *)(a1 + 8);
    }
    v14 = *(_QWORD *)(v9 + 168);
    if ( v10 < v14 && v12 > v14 )
    {
      sub_64190(v5, v14 + a3 - v10, a5);
      v9 = *(_QWORD *)(a1 + 8);
    }
    v15 = *(int *)(v9 + 116);
    if ( (_DWORD)v15 )
    {
      v16 = *(_QWORD *)(v9 + 136);
      if ( v10 < v16 && v12 > v16 )
      {
        sub_64190(v5, v16 + a3 - v10, a5);
        v17 = *(_QWORD *)(a1 + 8);
        v16 = *(_QWORD *)(v17 + 136);
        v15 = *(int *)(v17 + 116);
      }
      v18 = v16 + v15;
      if ( v10 < v18 && v12 > v18 )
        sub_64190(v5, a3 - v10 + v18, a5);
    }
  }
  return 0;
}

