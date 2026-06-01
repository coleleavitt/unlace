__int64 __fastcall sub_14E80(__int64 a1)
{
  __int64 eah; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_8CF38;
  *(_QWORD *)(a1 + 104) = &off_8CF90;
  *(_QWORD *)(a1 + 128) = "ios";
  *(_QWORD *)(a1 + 144) = "arm";
  *(_QWORD *)(a1 + 152) = 0x23FA0110D445LL;
  *(_QWORD *)(a1 + 160) = off_8F680;
  *(_QWORD *)(a1 + 176) = &off_8EE00;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 184) = 0x100000000044LL;
  *(_BYTE *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 120) = 31;
  *(_DWORD *)(a1 + 136) = 5;
  *(_DWORD *)(a1 + 168) = 1;
  *(_DWORD *)(a1 + 209) = -403701264;
  *(_QWORD *)(a1 + 192) = a1 + 209;
  *(_DWORD *)(a1 + 200) = 65540;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return a1 + 209;
}

