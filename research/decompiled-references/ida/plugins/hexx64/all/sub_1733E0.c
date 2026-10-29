__int64 __fastcall sub_1733E0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d

  if ( !a3 )
    return sub_64070((__int64 *)a2, *(_DWORD *)(a2 + 16) - 1, a4);
  v5 = 24LL * a3;
  v6 = v5 + *(_QWORD *)(a1 + 8);
  sub_648D0((__int64 *)a2, (const void **)v6, a4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 16);
  return sub_64640((__int64 *)a2, (__int64 *)(v5 + **(_QWORD **)(a1 + 88)), v7, v8, v9, v10);
}

