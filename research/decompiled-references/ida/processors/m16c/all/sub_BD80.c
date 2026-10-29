__int64 __fastcall sub_BD80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = v1 + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 7;
  v3 = *(_QWORD *)(v1 + 16);
  byte = get_byte();
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 56) = v3 + (byte & 7) + 2;
  return 1;
}

