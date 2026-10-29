__int64 __fastcall sub_25B5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx

  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    sub_255050(*(_QWORD *)(a1 + 64), a5);
    j__qfree(v6);
  }
  v7 = j__qalloc_or_throw(32, a2, a3, a4);
  v8 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v7 = -1;
  v9 = v7;
  *(_DWORD *)(v7 + 8) = 70;
  *(_QWORD *)(v7 + 12) = -1;
  sub_25AA70(v7, v8, a5);
  *(_QWORD *)(a1 + 64) = v9;
  sub_25AFF0(a1, a2, a5);
  return a1;
}

