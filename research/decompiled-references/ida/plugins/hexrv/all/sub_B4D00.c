__int64 sub_B4D00()
{
  unsigned int tinfo_details; // ebx

  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
    return 0;
  return tinfo_details;
}

