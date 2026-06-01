__int64 __fastcall sub_11E40(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int16 v3; // bx
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = v1 + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 5;
  v3 = (unsigned __int16)get_byte() >> 4;
  byte = get_byte();
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 48) = byte & 1 | (2 * (v3 & 3));
  ++*(_DWORD *)(a1 + 4360);
  *(_QWORD *)(a1 + 4352) = v1;
  return (unsigned int)sub_E930(a1, 23) + 1;
}

