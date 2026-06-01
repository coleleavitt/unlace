__int64 __fastcall sub_AE30(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned __int8 next_byte; // al
  int v4; // esi
  unsigned __int8 v5; // dl
  char v6; // cl
  __int64 v7; // rdx

  v1 = *(int *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  *(_BYTE *)(v2 + 40 * v1 + 41) = 9;
  next_byte = insn_get_next_byte();
  LOBYTE(v4) = next_byte >> 1;
  if ( next_byte >> 1 )
  {
    v5 = next_byte >> 1;
    do
    {
      next_byte = v5 & 1 | (2 * next_byte);
      v5 >>= 1;
    }
    while ( v5 );
    _BitScanReverse((unsigned int *)&v4, (unsigned __int8)v4);
    v6 = (v4 ^ 0x1F) - 25;
  }
  else
  {
    v6 = 7;
  }
  v7 = v2 + 40 * v1;
  *(_BYTE *)(v7 + 45) = 0;
  *(_QWORD *)(v7 + 48) = (unsigned __int8)(next_byte << v6);
  return 1;
}

