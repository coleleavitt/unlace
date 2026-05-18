__int64 __fastcall sub_EB7B0(__int64 a1)
{
  unsigned int v1; // ebp
  int *v3; // rax
  char *v4; // rdx
  int fd; // [rsp+4h] [rbp-24h]

  if ( fsync(*(_DWORD *)(a1 + 24)) )
  {
    v3 = __errno_location();
    v4 = *(char **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = *v3;
    return (unsigned int)sub_EABB0(0x40Au, (__int64)"full_fsync", v4, 0x98A6u);
  }
  else
  {
    v1 = 0;
    if ( (*(_BYTE *)(a1 + 30) & 8) != 0 )
    {
      if ( !(unsigned int)off_241300() )
      {
        fsync(fd);
        if ( ((int (__fastcall *)())off_241180)() )
          sub_EAE20(a1, 0x98B4u);
      }
      *(_WORD *)(a1 + 30) &= ~8u;
    }
  }
  return v1;
}
