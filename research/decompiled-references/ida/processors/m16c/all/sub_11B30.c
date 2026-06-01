__int64 __fastcall sub_11B30(__int64 a1, char a2, char a3)
{
  __int64 v4; // rdx
  int v5; // eax
  int byte; // ebp
  unsigned __int8 v7; // al

  v4 = *(_QWORD *)(a1 + 4352);
  v5 = *(_DWORD *)(a1 + 4360) + 1;
  *(_DWORD *)(a1 + 4360) = v5;
  *(_BYTE *)(v4 + 40LL * v5 + 73) = *(_BYTE *)(v4 + 29) & 1;
  --*(_DWORD *)(a1 + 4360);
  byte = (unsigned __int8)get_byte();
  v7 = get_byte();
  return sub_10AC0(a1, *((_DWORD *)qword_1AFE0 + (((int)v7 >> (a3 & 7)) & 0x1F)), 0, (byte >> (a2 & 7)) & 7, 255);
}

