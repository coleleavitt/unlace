__int64 sub_DF30()
{
  unsigned int dword; // eax

  dword = get_dword();
  return (int)(((dword << 8) & 0xFFE00
              | (dword >> 7) & 0x180
              | (dword >> 14) & 0x7C
              | (dword << 20) & 0x100000
              | (dword >> 12) & 3) << 11);
}

