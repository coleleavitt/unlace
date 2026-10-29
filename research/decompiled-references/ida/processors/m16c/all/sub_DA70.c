__int64 sub_DA70()
{
  char byte; // al

  byte = get_byte();
  if ( (byte & 0xBF) == 0x3F )
    return get_byte() & 3;
  else
    return byte & 3;
}

