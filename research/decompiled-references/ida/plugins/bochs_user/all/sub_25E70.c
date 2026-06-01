__int64 __fastcall sub_25E70(__int64 a1)
{
  __int64 v2; // rdi

  *(_QWORD *)(a1 + 8) = 0;
  v2 = a1 + 16;
  *(_WORD *)(v2 + 2592) = 0;
  *(_QWORD *)(v2 + 576) = 0;
  memset(
    (void *)(v2 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v2 & 0xFFFFFFF8) + 600) >> 3));
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  memset(
    (void *)((a1 + 624) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 624) & 0xFFFFFFF8) + 1184) >> 3));
  *(_BYTE *)(a1 + 1188) = 0;
  *(_DWORD *)(a1 + 1184) = 0x1000000;
  *(_QWORD *)(a1 + 600) = 65520;
  *(_WORD *)(a1 + 612) = -4096;
  *(_BYTE *)(a1 + 614) = 112;
  *(_DWORD *)(a1 + 1192) = 0;
  return 0;
}

