// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_238120(__int64 a1, int a2, char a3)
{
  char tinfo_property; // al
  char v4; // cl
  unsigned int tinfo_details; // r12d

  while ( 1 )
  {
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D || a2 >= (unsigned __int64)get_tinfo_size() )
      break;
    v4 = get_tinfo_property();
    if ( (v4 & 0xF) != 0xB )
    {
      if ( (v4 & 0x2F) == 0xD )
      {
        tinfo_details = get_tinfo_details();
        if ( (_BYTE)tinfo_details )
          tinfo_details = 0;
        goto LABEL_8;
      }
LABEL_12:
      tinfo_details = 0;
      goto LABEL_8;
    }
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (get_tinfo_property() & 0xF) != 9 )
    goto LABEL_12;
  tinfo_details = 1;
  if ( a3 )
    LOBYTE(tinfo_details) = a2 == get_tinfo_size();
LABEL_8:
  clear_tinfo_t();
  return tinfo_details;
}

