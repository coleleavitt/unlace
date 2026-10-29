__int64 __fastcall sub_4B2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 112) = a1 + 96;
  *(_QWORD *)(a1 + 120) = a1 + 96;
  *(_QWORD *)(a1 + 168) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 152;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 80) = a4;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = a1 + 208;
  *(_QWORD *)(a1 + 232) = a1 + 208;
  *(_QWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 264) = -1;
  *(_DWORD *)(a1 + 248) = (int)(rand() & 0xFFFFFFFC) % 6000 + 1000;
  *(_DWORD *)(a1 + 252) = (int)(rand() & 0xFFFFFFFC) % 6000 + 1000;
  result = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(result + 8256) = -1;
  return result;
}

