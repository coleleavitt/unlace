__int64 __fastcall sub_25B4D0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi

  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    sub_255050(*(_QWORD *)(a1 + 64), a3);
    j__qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    sub_255050(*(_QWORD *)(a1 + 72), a3);
    j__qfree(v5);
  }
  sub_25AFF0(a1, a2, a3);
  v8 = j__qalloc_or_throw(32, a2, v6, v7);
  v9 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v8 = -1;
  v10 = v8;
  *(_DWORD *)(v8 + 8) = 70;
  *(_QWORD *)(v8 + 12) = -1;
  sub_25AA70(v8, v9, a3);
  *(_QWORD *)(a1 + 64) = v10;
  v13 = *(_QWORD *)(a2 + 72);
  if ( v13 )
  {
    v14 = j__qalloc_or_throw(32, v9, v11, v12);
    v15 = *(_QWORD *)(a2 + 72);
    *(_QWORD *)v14 = -1;
    v13 = v14;
    *(_DWORD *)(v14 + 8) = 70;
    *(_QWORD *)(v14 + 12) = -1;
    sub_25AA70(v14, v15, a3);
  }
  *(_QWORD *)(a1 + 72) = v13;
  return a1;
}

