__int64 __fastcall sub_FAB0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = v1 + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 5;
  byte = get_byte();
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 48) = byte & 7;
  ++*(_DWORD *)(a1 + 4360);
  *(_QWORD *)(a1 + 4352) = v1;
  return (unsigned int)sub_FA30(a1) + 1;
}

