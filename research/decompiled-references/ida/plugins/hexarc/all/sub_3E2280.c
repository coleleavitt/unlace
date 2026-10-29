__int64 __fastcall sub_3E2280(__int64 a1, int a2, int a3)
{
  unsigned int v3; // eax

  v3 = a2 - 132;
  LOBYTE(v3) = (unsigned int)(a2 - 132) <= 0x73;
  LOBYTE(a3) = (unsigned int)(a2 - 112) > 0xB9;
  return a3 | v3;
}

