__int64 sub_2EC00()
{
  unsigned int v0; // ebp

  if ( !dbg )
    return (unsigned int)-2;
  if ( (*((_BYTE *)&debug + 2) & 1) != 0 )
    sub_29350();
  v0 = callui(1109);
  if ( (debug & 0x10000) == 0 )
    return v0;
  sub_29350();
  return v0;
}

