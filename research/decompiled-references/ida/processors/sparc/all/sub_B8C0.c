__int64 __fastcall sub_B8C0(__int64 a1)
{
  int v1; // ebx
  int byte; // r13d
  int v3; // r12d

  v1 = ((__int64 (*)(void))get_byte)();
  byte = (unsigned __int8)get_byte(a1 + 1);
  v3 = (unsigned __int8)get_byte(a1 + 2);
  return (v3 << 8) | (unsigned __int8)get_byte(a1 + 3) | (byte << 16) | (unsigned int)(v1 << 24);
}

