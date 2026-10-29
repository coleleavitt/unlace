__int64 __fastcall sub_295900(_QWORD *a1)
{
  unsigned int v1; // ebp

  v1 = 1;
  if ( (get_tinfo_property() & 0xF) != 8 )
  {
    v1 = 0;
    if ( (get_tinfo_property() & 0x3F) != 0x2D && (*a1 & 0x100) != 0 )
    {
      if ( get_tinfo_pdata() )
      {
        v1 = 1;
        if ( strcasecmp(nullptr, "bool") )
        {
          v1 = 0;
          strncmp(nullptr, "_BOOL", 5u);
        }
      }
    }
  }
  return v1;
}

