__int64 __fastcall sub_2568D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi

  if ( *(_QWORD *)(a1 + 64) )
  {
    sub_250450(*(_QWORD *)(a1 + 64));
    j__qfree();
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    sub_250450(*(_QWORD *)(a1 + 72));
    j__qfree();
  }
  sub_2563F0(a1, a2);
  v3 = j__qalloc_or_throw();
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v3 = -1;
  v5 = v3;
  *(_DWORD *)(v3 + 8) = 70;
  *(_QWORD *)(v3 + 12) = -1;
  sub_255E70(v3, v4);
  *(_QWORD *)(a1 + 64) = v5;
  v6 = *(_QWORD *)(a2 + 72);
  if ( v6 )
  {
    v7 = j__qalloc_or_throw();
    v8 = *(_QWORD *)(a2 + 72);
    *(_QWORD *)v7 = -1;
    v6 = v7;
    *(_DWORD *)(v7 + 8) = 70;
    *(_QWORD *)(v7 + 12) = -1;
    sub_255E70(v7, v8);
  }
  *(_QWORD *)(a1 + 72) = v6;
  return a1;
}

