__int64 __fastcall sub_AA10(__int64 a1)
{
  __int64 eah; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_207A0;
  *(_QWORD *)(a1 + 104) = &off_207F8;
  *(_QWORD *)(a1 + 128) = "replay";
  *(_QWORD *)(a1 + 144) = "metapc";
  *(_QWORD *)(a1 + 152) = 0x23FA00144C94LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 160) = off_24FC0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 176) = &off_23BA0;
  *(_DWORD *)(a1 + 120) = 31;
  *(_QWORD *)(a1 + 184) = 0x10000000004CLL;
  *(_WORD *)(a1 + 208) = -13312;
  *(_DWORD *)(a1 + 136) = 12;
  *(_DWORD *)(a1 + 168) = 1;
  *(_QWORD *)(a1 + 192) = a1 + 209;
  *(_DWORD *)(a1 + 200) = (_DWORD)&loc_10001;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return a1 + 209;
}

