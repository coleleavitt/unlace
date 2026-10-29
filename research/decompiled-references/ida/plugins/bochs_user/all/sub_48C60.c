__int64 __fastcall sub_48C60(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdi
  unsigned int v3; // ecx

  *(_BYTE *)(a1 + 24) = 0;
  v1 = a1;
  v2 = a1 + 36;
  *(_QWORD *)(v2 - 36) = 0;
  *(_OWORD *)(v2 - 28) = 0;
  *(_QWORD *)(v2 - 8) = 0;
  *(_QWORD *)(v2 + 496) = 0;
  v2 &= 0xFFFFFFFFFFFFFFF8LL;
  v3 = v1 - v2 + 540;
  memset((void *)v2, 0, 8LL * (v3 >> 3));
  return 0;
}

