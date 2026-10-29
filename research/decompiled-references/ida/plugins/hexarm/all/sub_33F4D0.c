bool __fastcall sub_33F4D0(__int64 a1)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 1420) & 1) != 0 )
    return 1;
  v2 = sub_33D600(
         1u,
         (__int64)"The database uses %d byte long doubles, this is wrong.\n"
                  "Do you want to reset sizeof(long double) to 8 bytes?",
         *(unsigned __int8 *)(a1 + 137));
  if ( v2 )
  {
    if ( v2 != 1 )
      return v2 != -1;
    setinf();
    *(_BYTE *)(a1 + 137) = 8;
  }
  else
  {
    *(_DWORD *)(a1 + 1420) |= 1u;
  }
  return 1;
}

