__int64 __fastcall sub_326280(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  LOBYTE(v2) = a2 == 256 || a2 == 176;
  if ( !(_BYTE)v2 )
  {
    v3 = v2;
    if ( (get_tinfo_property() & 0xF) == 0xB )
      return v3;
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      LOBYTE(v3) = get_tinfo_property() != 0;
      return v3;
    }
  }
  return 1;
}

