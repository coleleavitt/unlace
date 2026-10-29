__int64 __fastcall sub_18B870(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // r12

  v5 = *(_QWORD *)(a1 + 8) + 24LL * a3;
  sub_648D0((__int64 *)a2, (const void **)v5, a4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 16);
  return sub_64190((__int64 *)a2, a3, a4);
}

