__int64 __fastcall sub_BC00(__int64 a1)
{
  __int64 eah; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_454C0;
  *(_QWORD *)(a1 + 104) = &off_45518;
  *(_QWORD *)(a1 + 128) = "linux";
  *(_QWORD *)(a1 + 144) = "metapc";
  *(_QWORD *)(a1 + 152) = 0x23FA280C0000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 160) = off_48040;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 176) = &off_46C20;
  *(_DWORD *)(a1 + 120) = 31;
  *(_QWORD *)(a1 + 184) = 0x10000000004CLL;
  *(_WORD *)(a1 + 208) = -13312;
  *(_DWORD *)(a1 + 136) = 1;
  *(_DWORD *)(a1 + 168) = 1;
  *(_QWORD *)(a1 + 192) = a1 + 209;
  *(_DWORD *)(a1 + 200) = 65537;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return a1 + 209;
}

