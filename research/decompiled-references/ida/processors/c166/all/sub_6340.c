bool __fastcall sub_6340(__int64 a1, unsigned __int8 a2)
{
  char next_byte; // dl
  bool result; // al

  next_byte = insn_get_next_byte();
  result = 0;
  if ( next_byte == a2 )
    return (unsigned __int8)insn_get_next_byte() == a2;
  return result;
}

