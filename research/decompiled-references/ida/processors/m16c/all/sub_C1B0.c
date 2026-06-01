__int64 __fastcall sub_C1B0(__int64 a1)
{
  unsigned __int8 byte; // al
  signed int v2; // edx
  __int64 v3; // rax

  byte = get_byte();
  v2 = byte & 0xF;
  if ( (byte & 8) != 0 )
    v2 = byte | 0xFFFFFFF0;
  v3 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_WORD *)(v3 + 64) |= 1u;
  *(_BYTE *)(v3 + 41) = 5;
  *(_QWORD *)(v3 + 48) = v2;
  *(_BYTE *)(v3 + 45) = 0;
  return 1;
}

