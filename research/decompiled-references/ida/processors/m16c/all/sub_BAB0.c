__int64 __fastcall sub_BAB0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  unsigned __int16 byte; // ax
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  byte = get_byte();
  v4 = v1 + 40LL * v2;
  *(_BYTE *)(v4 + 41) = 1;
  *(_WORD *)(v4 + 46) = ((byte >> 4) & 1) + 16;
  *(_BYTE *)(v4 + 45) = 2;
  return 1;
}

