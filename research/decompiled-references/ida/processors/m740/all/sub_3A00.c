__int64 __fastcall sub_3A00(__int64 a1)
{
  unsigned __int8 next_byte; // al
  __int64 i; // rdx
  int v4; // esi
  int v5; // ecx
  char v6; // di
  int v7; // eax
  __int16 v8; // r9
  __int64 v9; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int16 v14; // si
  char v15; // dl

  next_byte = insn_get_next_byte();
  for ( i = 0; i != 8; ++i )
  {
    v4 = LOBYTE(word_7062[2 * i]);
    v5 = next_byte - v4;
    v6 = (next_byte - v4) & 0x1F;
    if ( !v6 )
    {
      v7 = v5 + 31;
      v8 = *(_WORD *)&byte_7060[4 * (int)i];
      *(_BYTE *)(a1 + 41) = 5;
      if ( v5 >= 0 )
        v7 = v5;
      *(_BYTE *)(a1 + 72) |= 4u;
      *(_WORD *)(a1 + 24) = v8;
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v7 >> 5;
      v9 = 0;
      while ( v8 != *((_WORD *)qword_7080 + 2 * v9) )
      {
        if ( ++v9 == 31 )
          goto LABEL_8;
      }
      v6 = *((_BYTE *)qword_7080 + 4 * (int)v9 + 2);
LABEL_8:
      sub_3660(a1, byte_7060[4 * (int)i + 3], v6);
      return *(unsigned __int16 *)(a1 + 26);
    }
  }
  v11 = 0;
  while ( next_byte != LOBYTE(word_7102[2 * v11]) )
  {
    if ( ++v11 == 167 )
      return 0;
  }
  v12 = v11;
  v13 = 0;
  v14 = *(_WORD *)&byte_7100[4 * (int)v11];
  *(_WORD *)(a1 + 24) = v14;
  while ( v14 != *((_WORD *)qword_7080 + 2 * v13) )
  {
    if ( ++v13 == 31 )
    {
      v15 = 0;
      goto LABEL_21;
    }
  }
  v15 = *((_BYTE *)qword_7080 + 4 * (int)v13 + 2);
LABEL_21:
  sub_3660(a1, byte_7100[4 * v12 + 3], v15);
  return *(unsigned __int16 *)(a1 + 26);
}

