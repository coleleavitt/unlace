void __fastcall sub_4BEC0(__int64 a1, int a2)
{
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_OWORD *)(a1 + 16) = 0;
}

