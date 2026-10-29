__int64 __fastcall sub_5B80(__int64 a1, __int64 a2)
{
  int next_byte; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int8 v5; // dl
  int v6; // edx
  __int16 v7; // dx
  char v8; // al

  next_byte = insn_get_next_byte();
  if ( (unsigned __int8)(next_byte + 125) <= 0x13u )
  {
    v3 = 987409;
    if ( _bittest64(&v3, (unsigned int)(next_byte + 125)) )
    {
      *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F7C0[-32] + (unsigned __int8)next_byte - 3);
      return *(unsigned __int16 *)(a2 + 26);
    }
    v6 = (unsigned __int8)next_byte >> 2;
    if ( (unsigned int)(v6 - 32) <= 3 )
      goto LABEL_10;
    *(_WORD *)(a2 + 24) = 0;
    return 0;
  }
  if ( (unsigned int)((unsigned __int8)next_byte >> 2) - 32 <= 3 )
  {
    v6 = 32;
LABEL_10:
    v7 = *((_WORD *)&qword_F7A0[-8] + v6);
    *(_BYTE *)(a2 + 33) = (next_byte & 3) + 1;
    result = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = v7;
    return result;
  }
  v5 = (unsigned __int8)next_byte >> 4;
  *(_WORD *)(a2 + 24) = asc_F780[(unsigned __int8)next_byte >> 4];
  if ( (unsigned __int8)((unsigned __int8)next_byte >> 4) <= 5u )
  {
    if ( v5 > 3u )
    {
      *(_BYTE *)(a2 + 33) = 3;
      goto LABEL_8;
    }
    if ( v5 <= 1u )
    {
LABEL_8:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = next_byte & 0xF;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 45) = 1;
      return result;
    }
    return 0;
  }
  if ( (unsigned __int8)(v5 - 10) > 1u )
    return 0;
  *(_BYTE *)(a2 + 41) = 9;
  v8 = aCzsoIu[next_byte & 0xF];
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 72) = v8;
  if ( v8 == 46 )
    return 0;
  return *(unsigned __int16 *)(a2 + 26);
}

