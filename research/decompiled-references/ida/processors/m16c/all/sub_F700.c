__int64 __fastcall sub_F700(__int64 a1)
{
  char byte; // al

  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)&qword_1B780 + (byte & 7)));
}

