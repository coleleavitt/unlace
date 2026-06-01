bool __fastcall sub_383F40(__int64 a1, __int64 a2)
{
  int v2; // edx
  char *v4; // rsi
  __int64 v5; // r10
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 44);
  v4 = (char *)s1;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(v5 + 128) + 32LL * (v2 + 1);
  if ( *(_QWORD *)(v6 + 8) )
    v4 = *(char **)v6;
  sub_382E90(*(_QWORD *)(a1 + 32), v4, *(_DWORD *)(a1 + 48), v2 >= *(_DWORD *)(v5 + 152), a2, 0, 0);
  return *(_DWORD *)(a2 + 16) == 74;
}

