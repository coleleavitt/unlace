__int64 __fastcall sub_F4BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi

  v6 = *(_BYTE *)(a1 + 32) == 0;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(a1 + 8);
  v10 = (__int64)sub_C91C0;
  v11 = *(_QWORD *)a1;
  if ( !v6 )
    v10 = -1;
  sub_F4B60(v11, v9, v8, (void (*)(void))v10, 1, a6);
  *(_QWORD *)(a1 + 16) = 100;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 8) = a1 + 34;
  return a1 + 34;
}
