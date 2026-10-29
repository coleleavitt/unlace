__int64 __fastcall sub_11080(__int64 a1)
{
  char byte; // al

  byte = get_byte();
  return sub_10D40(a1, *((unsigned int *)qword_1AFE0 + (byte & 0x1F)), 255, 255);
}

