bool __fastcall sub_24240(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48) + 1;
  *(_DWORD *)(a1 + 48) = v1;
  return (unsigned __int64)v1 < *(_QWORD *)(a1 + 32);
}
