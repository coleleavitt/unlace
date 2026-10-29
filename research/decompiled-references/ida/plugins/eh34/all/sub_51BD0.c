__int64 __fastcall sub_51BD0(__int64 a1)
{
  unsigned int v1; // ebp

  v1 = *(unsigned __int8 *)(a1 + 112);
  if ( !(_BYTE)v1 )
  {
    if ( (unsigned __int8)sub_4E700() )
      return v1;
    *(_BYTE *)(a1 + 112) = 1;
  }
  return 1;
}

