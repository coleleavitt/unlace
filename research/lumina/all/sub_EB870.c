__int64 __fastcall sub_EB870(__int64 a1, char *a2, char a3)
{
  unsigned int v4; // ebx
  int fd; // [rsp+4h] [rbp-24h]

  if ( off_2412E8(a2) == -1 )
  {
    v4 = 5898;
    if ( *__errno_location() != 2 )
      return (unsigned int)sub_EABB0(0xA0Au, (__int64)"unlink", a2, 0xA2D9u);
  }
  else
  {
    v4 = a3 & 1;
    if ( v4 )
    {
      v4 = 0;
      if ( !(unsigned int)off_241300() )
      {
        v4 = fsync(fd);
        if ( v4 )
          v4 = sub_EABB0(0x50Au, (__int64)"fsync", a2, 0xA2E3u);
        if ( ((int (__fastcall *)())off_241180)() )
          sub_EAE20(0, 0xA2E5u);
      }
    }
  }
  return v4;
}
