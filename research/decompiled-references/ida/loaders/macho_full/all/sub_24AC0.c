unsigned __int64 __fastcall sub_24AC0(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // [rsp+F8h] [rbp-28h]

  v3 = __readfsqword(0x28u);
  *(_QWORD *)a1 = get_ph();
  *(_QWORD *)(a1 + 8) = get_eah();
  *(_QWORD *)(a1 + 16) = &off_64448;
  *(_QWORD *)(a1 + 24) = -1;
  *(_QWORD *)(a1 + 5152) = 0;
  *(_QWORD *)(a1 + 5176) = 0;
  *(_DWORD *)(a1 + 5200) = 0;
  *(_QWORD *)(a1 + 5208) = 0;
  *(_QWORD *)(a1 + 5232) = 0;
  *(_QWORD *)(a1 + 5256) = 0;
  *(_DWORD *)(a1 + 5264) = -1;
  *(_QWORD *)(a1 + 5272) = 0;
  *(_QWORD *)(a1 + 5296) = 0;
  *(_DWORD *)(a1 + 5304) = -1;
  *(_QWORD *)(a1 + 5312) = 0;
  *(_QWORD *)(a1 + 5336) = 0;
  *(_DWORD *)(a1 + 5344) = -1;
  *(_QWORD *)(a1 + 13592) = -1;
  *(_QWORD *)(a1 + 13600) = 0;
  *(_QWORD *)(a1 + 13624) = 0;
  *(_DWORD *)(a1 + 13632) = -1;
  *(_QWORD *)(a1 + 13640) = 0;
  *(_OWORD *)(a1 + 5160) = 0;
  *(_OWORD *)(a1 + 5184) = 0;
  *(_OWORD *)(a1 + 5216) = 0;
  *(_OWORD *)(a1 + 5240) = 0;
  *(_OWORD *)(a1 + 5280) = 0;
  *(_OWORD *)(a1 + 5320) = 0;
  *(_OWORD *)(a1 + 5352) = -1;
  *(_OWORD *)(a1 + 13560) = 0;
  *(_OWORD *)(a1 + 13576) = 0;
  *(_OWORD *)(a1 + 13608) = 0;
  *(_OWORD *)(a1 + 13648) = 0;
  *(_QWORD *)(a1 + 13664) = 0;
  *(_DWORD *)(a1 + 13672) = -1;
  *(_QWORD *)(a1 + 13680) = 0;
  *(_WORD *)(a1 + 13688) = a2;
  *(_WORD *)(a1 + 13690) = 0;
  *(_BYTE *)(a1 + 13692) = 0;
  netnode_check();
  *(_QWORD *)(a1 + 4128) = 0;
  *(_QWORD *)(a1 + 5144) = 0;
  memset(
    (void *)((a1 + 4136) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 4128 - (((_DWORD)a1 + 4136) & 0xFFFFFFF8) + 1024) >> 3));
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 4120) = 0;
  memset(
    (void *)((a1 + 40) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 32 - (((_DWORD)a1 + 40) & 0xFFFFFFF8) + 4096) >> 3));
  *(_QWORD *)(a1 + 5368) = 0;
  *(_QWORD *)(a1 + 9456) = 0;
  memset(
    (void *)((a1 + 5376) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 5368 - (((_DWORD)a1 + 5376) & 0xFFFFFFF8) + 4096) >> 3));
  *(_QWORD *)(a1 + 9464) = 0;
  *(_QWORD *)(a1 + 13552) = 0;
  memset(
    (void *)((a1 + 9472) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 9464 - (((_DWORD)a1 + 9472) & 0xFFFFFFF8) + 4096) >> 3));
  getinf_buf();
  read_config();
  return v3 - __readfsqword(0x28u);
}

