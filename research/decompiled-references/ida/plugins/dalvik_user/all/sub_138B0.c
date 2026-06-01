__int64 __fastcall sub_138B0(__int64 a1)
{
  __int64 eah; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_7E4D8;
  *(_QWORD *)(a1 + 104) = &off_7E530;
  *(_QWORD *)(a1 + 128) = "dalvik";
  *(_QWORD *)(a1 + 144) = "dalvik";
  *(_QWORD *)(a1 + 152) = 0x23FA00605C73LL;
  *(_QWORD *)(a1 + 160) = &off_7F740;
  *(_QWORD *)(a1 + 176) = &off_7F720;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 184) = 0x100000000001LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 120) = 31;
  *(_DWORD *)(a1 + 136) = 15;
  *(_DWORD *)(a1 + 168) = 1;
  *(_QWORD *)(a1 + 192) = a1 + 209;
  *(_DWORD *)(a1 + 200) = 4128769;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return a1 + 209;
}

