__int64 __fastcall sub_C600(__int64 a1)
{
  unsigned __int8 byte; // al
  unsigned int v2; // ecx
  __int16 v3; // dx
  __int64 v4; // rax

  byte = get_byte();
  v2 = 0;
  v3 = (byte >> 4) & 4;
  LOBYTE(v3) = byte & 3 | v3;
  if ( (_BYTE)v3 && (~(_BYTE)v3 & 3) != 0 )
  {
    LOBYTE(v3) = ((v3 & 4) == 0) + v3 - 1;
    v4 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
    v2 = 1;
    *(_BYTE *)(v4 + 41) = 5;
    *(_QWORD *)(v4 + 48) = (4 * v3) & 0x3FC;
    *(_BYTE *)(v4 + 45) = 0;
  }
  return v2;
}

