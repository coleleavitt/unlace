__int64 __fastcall sub_C790(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  char byte; // bl
  unsigned __int8 v4; // al
  char v5; // dl
  __int64 v6; // rcx
  char v7; // al

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(int *)(a1 + 4360);
  byte = get_byte();
  v4 = get_byte();
  v5 = (2 * byte) & 8;
  v6 = v1 + 40 * v2;
  v7 = v5 | (v4 >> 5);
  *(_BYTE *)(v6 + 41) = 5;
  *(_BYTE *)(v6 + 45) = 0;
  if ( v5 )
    v7 -= 16;
  *(_WORD *)(v6 + 64) |= 1u;
  *(_QWORD *)(v6 + 48) = v7;
  return 1;
}

