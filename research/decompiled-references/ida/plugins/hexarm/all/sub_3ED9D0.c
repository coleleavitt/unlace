__int64 __fastcall sub_3ED9D0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v5; // ebp

  v1 = getinf_flag();
  if ( (_BYTE)v1 )
    return 0;
  v2 = v1;
  v3 = *(_DWORD *)(a1 + 16);
  switch ( v3 )
  {
    case 72:
      return 0;
    case 15:
      if ( (getinf() & 0xF) == 6 )
        return (unsigned int)getinf_flag() ^ 1;
      return 0;
    case 12:
      if ( (getinf() & 0xF) == 6 )
      {
        v5 = getinf_flag();
        if ( !(_BYTE)v5 )
        {
          v2 = 0;
          if ( get_abi_name() )
            return v5;
        }
      }
      return v2;
  }
  if ( (getinf() & 0xF) != 6 )
    return 0;
  return getinf_flag();
}

