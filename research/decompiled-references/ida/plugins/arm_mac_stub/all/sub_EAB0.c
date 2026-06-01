__int64 __fastcall sub_EAB0(__int64 a1)
{
  __int64 eah; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_46338;
  *(_QWORD *)(a1 + 104) = &off_46390;
  *(_QWORD *)(a1 + 128) = "arm_mac";
  *(_QWORD *)(a1 + 144) = "arm";
  *(_QWORD *)(a1 + 152) = 0x23FA0E0C0001LL;
  *(_QWORD *)(a1 + 160) = off_48500;
  *(_QWORD *)(a1 + 176) = &off_47C80;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 184) = 0x100000000044LL;
  *(_BYTE *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 120) = 31;
  *(_DWORD *)(a1 + 136) = 17;
  *(_DWORD *)(a1 + 168) = 1;
  *(_DWORD *)(a1 + 209) = -403701264;
  *(_QWORD *)(a1 + 192) = a1 + 209;
  *(_DWORD *)(a1 + 200) = (_DWORD)&loc_10004;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return a1 + 209;
}

