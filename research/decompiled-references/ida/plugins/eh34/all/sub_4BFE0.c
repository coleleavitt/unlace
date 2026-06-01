__int64 __fastcall sub_4BFE0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 8) = 2;
  *(_DWORD *)a2 = -1;
  return a1;
}

