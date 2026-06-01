unsigned __int64 __fastcall sub_3A98B0(_BYTE *a1)
{
  int tinfo_property; // ebp
  __int64 v3; // [rsp+0h] [rbp-38h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  set_tinfo_property();
  if ( (*a1 & 0x3F) == 0x3D )
  {
    tinfo_property = get_tinfo_property();
    if ( tinfo_property )
    {
      if ( tinfo_property != (unsigned int)get_tinfo_property() )
      {
        get_tinfo_pdata();
        if ( !v3 )
          get_idati();
        create_tinfo();
      }
    }
  }
  return v4 - __readfsqword(0x28u);
}

