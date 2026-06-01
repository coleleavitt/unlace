__int64 __fastcall sub_1C7E30(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 *v4; // r13
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx

  v4 = (__int64 *)(a1 + 16);
  v5 = a4;
  sub_63B90((__int64 *)(a1 + 16), a3);
  sub_63B90((__int64 *)(a1 + 16), a3 + v5);
  if ( *(_DWORD *)a2 == 1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(v8 + 144);
    v11 = v9 + v5;
    if ( v9 < v10 && v11 > v10 )
    {
      sub_63B90(v4, v10 + a3 - v9);
      v8 = *(_QWORD *)(a1 + 8);
    }
    v12 = *(_QWORD *)(v8 + 152);
    if ( v9 < v12 && v11 > v12 )
    {
      sub_63B90(v4, v12 + a3 - v9);
      v8 = *(_QWORD *)(a1 + 8);
    }
    v13 = *(_QWORD *)(v8 + 168);
    if ( v9 < v13 && v11 > v13 )
    {
      sub_63B90(v4, v13 + a3 - v9);
      v8 = *(_QWORD *)(a1 + 8);
    }
    v14 = *(int *)(v8 + 116);
    if ( (_DWORD)v14 )
    {
      v15 = *(_QWORD *)(v8 + 136);
      if ( v9 < v15 && v11 > v15 )
      {
        sub_63B90(v4, v15 + a3 - v9);
        v16 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD *)(v16 + 136);
        v14 = *(int *)(v16 + 116);
      }
      v17 = v15 + v14;
      if ( v9 < v17 && v11 > v17 )
        sub_63B90(v4, a3 - v9 + v17);
    }
  }
  return 0;
}

