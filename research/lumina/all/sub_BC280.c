__int64 __fastcall sub_BC280(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // edx

  v2 = *(_DWORD *)(a1 + 24);
  LOBYTE(v1) = v2 == 1062;
  LOBYTE(v2) = v2 == 1169;
  return v2 | v1;
}
