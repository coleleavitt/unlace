__int64 __fastcall sub_B8B0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  unsigned __int16 byte; // ax
  __int64 v4; // rdx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  byte = get_byte();
  v4 = v1 + 40LL * v2;
  v5 = *((unsigned int *)qword_1B740 + ((byte >> 4) & 7));
  *(_BYTE *)(v4 + 41) = 8;
  *(_QWORD *)(v4 + 48) = v5;
  return 1;
}

