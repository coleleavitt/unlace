__int64 __fastcall sub_101CA0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d

  v4 = 24LL * a3;
  v5 = v4 + *(_QWORD *)(a1 + 8);
  sub_648D0((__int64 *)a2, (const void **)v5, a4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 16);
  sub_64640((__int64 *)a2, (__int64 *)(v4 + *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL)), v6, v7, v8, v9);
  return sub_64280((__int64 *)a2, (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) + v4), a4);
}

