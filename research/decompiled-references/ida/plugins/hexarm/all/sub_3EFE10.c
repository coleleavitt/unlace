__int64 __fastcall sub_3EFE10(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // eax

  v5 = (_QWORD *)j__qalloc_or_throw();
  v6 = *(_QWORD *)(a2 + 24);
  v7 = (__int64)v5;
  v8 = (__int64)(v5 + 8);
  v5[4] = 0xFFFFFFFF00000000LL;
  v5[5] = 0;
  v5[6] = 0xFFFFFFFF00000000LL;
  v5[7] = 0;
  v5[8] = 0xFFFFFFFF00000000LL;
  v5[9] = 0;
  sub_330C90((__int64)v5, v6);
  *(_QWORD *)(v7 + 40) = a2;
  *(_DWORD *)v7 = 4;
  *(_BYTE *)(v7 + 32) = 4;
  v9 = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(v7 + 36) = v9;
  *(_DWORD *)(v7 + 68) = v9;
  sub_124BC0(v8, a3);
  *(_BYTE *)(v7 + 33) |= 2u;
  *(_BYTE *)(v7 + 65) |= 2u;
  return sub_B4CD0(*(_QWORD **)(a1 + 16), v7);
}

