__int64 __fastcall sub_F7C0(__int64 a1)
{
  unsigned __int16 byte; // ax

  byte = get_byte();
  return sub_E930(a1, *((_DWORD *)&qword_1B770 + ((byte >> 3) & 1)));
}

