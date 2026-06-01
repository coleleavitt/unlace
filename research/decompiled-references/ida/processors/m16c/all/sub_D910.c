__int64 __fastcall sub_D910(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  __int64 result; // rax
  char v4; // dl
  unsigned __int8 v5; // cl
  unsigned int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  v6 = -1;
  switch ( next_byte )
  {
    case 0x41u:
      *(_BYTE *)(a2 + 29) = 1;
LABEL_9:
      next_byte = insn_get_next_byte();
      if ( next_byte == 1 )
        goto LABEL_6;
      goto LABEL_10;
    case 0x49u:
      *(_BYTE *)(a2 + 29) = 3;
      goto LABEL_9;
    case 9u:
      *(_BYTE *)(a2 + 29) = 2;
      goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 29) )
    goto LABEL_9;
  if ( next_byte == 1 )
  {
LABEL_6:
    *(_WORD *)(a2 + 30) |= 0x400u;
LABEL_7:
    sub_B370(a1, a2, &v6);
    return v6;
  }
LABEL_10:
  v4 = next_byte >> 6;
  v5 = next_byte & 0xF;
  if ( next_byte >> 6 == 2 )
  {
    sub_CD00(a1, a2, next_byte, v5, (int *)&v6);
    return v6;
  }
  else if ( v4 == 3 )
  {
    sub_D440(a1, a2, next_byte, v5, (int *)&v6);
    return v6;
  }
  else if ( v4 == 1 )
  {
    return *((unsigned int *)qword_1AD00 + ((v5 >> 1) & 7));
  }
  else
  {
    if ( (next_byte & 0x30) != 0 )
      return *((unsigned int *)qword_1AD20 + ((v5 >> 1) & 7));
    if ( v5 == 1 )
      goto LABEL_7;
    result = 32;
    if ( v5 != 8 )
    {
      result = 31;
      if ( v5 )
        return *((unsigned int *)qword_1AD20 + ((v5 >> 1) & 7));
    }
  }
  return result;
}

