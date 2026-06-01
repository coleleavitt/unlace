char *__fastcall sub_22F20(int a1)
{
  char *result; // rax

  if ( (unsigned int)(a1 - 61) <= 0x1F || a1 <= 15 )
    return (char *)*(&off_A0000 + a1);
  result = "PSR";
  if ( (a1 & 0xFFFFFFFD) == 0x10 )
    return result;
  if ( (unsigned int)(a1 - 129) <= 0x1E || (unsigned int)(a1 - 163) <= 0x1F )
    return (char *)*(&off_A0000 + a1);
  result = "SP";
  if ( a1 != 161 )
  {
    result = "PC";
    if ( a1 != 162 )
    {
      sub_22E50((__int64)"Bad register number passed to arm.get_register_value: %d", a1);
      return nullptr;
    }
  }
  return result;
}

