__int64 __fastcall sub_34810(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)a1 = &off_AA348;
  *(_QWORD *)(a1 + 104) = off_AA378;
  *(_WORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 392) = -4294943350LL;
  *(_QWORD *)(a1 + 496) = a1 + 480;
  *(_QWORD *)(a1 + 504) = a1 + 480;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 448) = 2;
  *(_BYTE *)(a1 + 452) = 0;
  *(_QWORD *)(a1 + 456) = 1;
  *(_DWORD *)(a1 + 464) = -1;
  *(_DWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  hook_event_listener(0, a1 + 104, a1, 0);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  memset(
    (void *)((a1 + 152) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 152) & 0xFFFFFFF8) + 392) >> 3));
  result = sub_33EB0(a1);
  *(_DWORD *)(a1 + 528) = 3;
  return result;
}
