__int64 __fastcall sub_C680(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r13
  __int16 v4; // bp
  char byte; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = v1 + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v2 + 41) = 7;
  v3 = *(_QWORD *)(v1 + 16);
  v4 = (unsigned __int16)get_byte() >> 4;
  byte = get_byte();
  *(_BYTE *)(v2 + 45) = 0;
  *(_QWORD *)(v2 + 56) = v3 + (byte & 1) + 2 + ((2 * (_BYTE)v4) & 6);
  return 1;
}

