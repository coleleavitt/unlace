__int64 __fastcall sub_16EF20(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d

  if ( !a3 )
    return sub_5FCF0((__int64 *)a2, *(_DWORD *)(a2 + 16) - 1);
  v4 = 24LL * a3;
  v5 = v4 + *(_QWORD *)(a1 + 8);
  sub_60550((__int64 *)a2, (__int64 *)v5);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 16);
  return sub_602C0((__int64 *)a2, (__int64 *)(v4 + **(_QWORD **)(a1 + 88)), v6, v7, v8, v9);
}

