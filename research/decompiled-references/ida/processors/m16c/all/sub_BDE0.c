__int64 __fastcall sub_BDE0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  unsigned __int16 byte; // ax
  __int64 v4; // rdx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  byte = get_byte();
  v4 = v1 + 40LL * v2;
  v5 = *((_DWORD *)qword_1B640 + ((byte >> 4) & 7));
  *(_BYTE *)(v4 + 41) = 1;
  *(_BYTE *)(v4 + 45) = 1;
  *(_WORD *)(v4 + 46) = v5;
  return 1;
}

