__int64 __fastcall sub_7DE0(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)a1 = off_12BF0;
  *(_QWORD *)(a1 + 104) = off_12C20;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = -1;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = -1;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(a1 + 136) = -1;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  return hook_event_listener(0, a1 + 104, a1, 0);
}

