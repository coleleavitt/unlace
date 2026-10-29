__int64 __fastcall sub_57E60(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 32;
  *(_QWORD *)(a1 + 96) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 80;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 152;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 4;
  *(_OWORD *)(a1 + 128) = 0;
  return a1 + 152;
}

