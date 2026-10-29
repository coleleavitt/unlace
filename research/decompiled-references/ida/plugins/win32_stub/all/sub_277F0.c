__int64 __fastcall sub_277F0(__int64 fd, char a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v5; // ecx

  if ( fd == -1 )
    return 0;
  v2 = fcntl(fd, 3, 0);
  v3 = 0;
  if ( v2 == -1 )
    return v3;
  v3 = 1;
  if ( ((v2 & 0x800) == 0) == a2 )
    return v3;
  BYTE1(v2) ^= 8u;
  LOBYTE(v5) = fcntl(fd, 4, v2, 1) == 0;
  return v5;
}

