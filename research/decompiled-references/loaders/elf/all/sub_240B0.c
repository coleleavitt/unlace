__int64 __fastcall sub_240B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi

  *(_QWORD *)(a1 + 8) = a2;
  v5 = a1 + 32;
  *(_QWORD *)(v5 - 16) = a3;
  *(_QWORD *)(v5 - 8) = 0;
  *(_QWORD *)(v5 + 240) = 0;
  memset(
    (void *)(v5 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v5 & 0xFFFFFFF8) + 280) >> 3));
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)a1 = off_88B98;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_WORD *)(a1 + 348) = 0x8000;
  *(_BYTE *)(a1 + 350) = a4;
  *(_DWORD *)(a1 + 344) = -2147483646;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  return 4294934528LL;
}
