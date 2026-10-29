bool __fastcall sub_671C0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 40) + 1;
  *(_DWORD *)(a1 + 40) = v1;
  return (unsigned __int64)v1 < *(_QWORD *)(a1 + 24);
}

