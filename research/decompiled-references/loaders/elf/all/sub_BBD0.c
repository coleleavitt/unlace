const char *sub_BBD0()
{
  BYTE10(xmmword_8C260) = 1;
  *(_QWORD *)&xmmword_8C260 = "extern";
  WORD4(xmmword_8C260) = 0;
  *((_QWORD *)&xmmword_8C280 + 1) = "common";
  *(_QWORD *)&xmmword_8C2B0 = "abs";
  HIDWORD(xmmword_8C260) = 0;
  *(_QWORD *)&xmmword_8C280 = 0;
  LOWORD(xmmword_8C290) = -14;
  BYTE2(xmmword_8C290) = 11;
  DWORD1(xmmword_8C290) = 0;
  *((_QWORD *)&xmmword_8C2A0 + 1) = 0;
  WORD4(xmmword_8C2B0) = -15;
  BYTE10(xmmword_8C2B0) = 10;
  HIDWORD(xmmword_8C2B0) = 0;
  *(_QWORD *)&xmmword_8C2D0 = 0;
  *((_QWORD *)&xmmword_8C2D0 + 1) = "extern_tls";
  LOWORD(xmmword_8C2E0) = 0;
  BYTE2(xmmword_8C2E0) = 1;
  DWORD1(xmmword_8C2E0) = 0;
  *((_QWORD *)&xmmword_8C2F0 + 1) = 0;
  xmmword_8C270 = 0;
  *(__int128 *)((char *)&xmmword_8C290 + 8) = 0;
  xmmword_8C2C0 = 0;
  *(__int128 *)((char *)&xmmword_8C2E0 + 8) = 0;
  return "extern_tls";
}
