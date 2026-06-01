bool __fastcall sub_672F0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v1;
  return (unsigned __int64)v1 < *(_QWORD *)(a1 + 40);
}

