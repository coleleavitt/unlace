__int64 __fastcall sub_2EC90(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_981E8;
  *(_WORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = 8;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0;
  return a1 + 40;
}

