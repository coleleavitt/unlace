__int64 __fastcall sub_51630(__int64 a1, int a2, __int64 a3)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = -2;
  *(_WORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 32) = 0;
  return 1;
}

