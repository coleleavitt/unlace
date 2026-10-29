bool __fastcall sub_39DF40(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v2 = *(_DWORD *)(a1 + 32) + 1;
  *(_DWORD *)(a1 + 32) = v2;
  return (unsigned __int64)v2 < *(_QWORD *)(v1 + 440);
}

