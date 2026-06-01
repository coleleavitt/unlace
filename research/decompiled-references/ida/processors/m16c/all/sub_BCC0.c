__int64 __fastcall sub_BCC0(__int64 a1)
{
  unsigned __int8 byte; // al
  __int64 v2; // rdx
  int v3; // eax

  byte = get_byte();
  v2 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  v3 = *((_DWORD *)qword_1AF20 + (byte >> 5));
  *(_BYTE *)(v2 + 41) = 1;
  *(_BYTE *)(v2 + 45) = 2;
  *(_WORD *)(v2 + 46) = v3;
  return 1;
}

