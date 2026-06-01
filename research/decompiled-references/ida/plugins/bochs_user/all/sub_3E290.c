__int64 __fastcall sub_3E290(char *a1)
{
  char v1; // al
  int v2; // edx

  v1 = *a1;
  v2 = ((*a1 & 2) != 0) | 2;
  if ( (*a1 & 4) == 0 )
    v2 = (*a1 & 2) != 0;
  if ( (v1 & 1) == 0 )
    v2 |= 4u;
  if ( (v1 & 0x40) != 0 )
    v2 |= 0x40u;
  if ( (v1 & 0x10) != 0 )
    v2 |= 0x20u;
  if ( (v1 & 8) != 0 )
    v2 |= 0x10u;
  return v2 | ((a1[1] & 1) << 7) | 8u;
}

