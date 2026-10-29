__int64 __fastcall sub_BA00(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int16 byte; // ax

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  byte = get_byte();
  *(_BYTE *)(v1 + 45) = 0;
  *(_QWORD *)(v1 + 48) = ((byte >> 5) & 1) + 1LL;
  return 1;
}

