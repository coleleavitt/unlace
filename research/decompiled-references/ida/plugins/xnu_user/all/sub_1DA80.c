__int64 __fastcall sub_1DA80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int tinfo; // ebp

  if ( a2 == -1 )
  {
    return 0;
  }
  else
  {
    if ( a3 && (get_idati(), tinfo = create_tinfo(), (_BYTE)tinfo) && (get_tinfo_property() & 0x2F) == 0xD )
      get_tinfo_details();
    else
      tinfo = 0;
    clear_tinfo_t();
  }
  return tinfo;
}

