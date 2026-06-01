__int64 __fastcall sub_24E680(__int64 a1)
{
  __int64 v1; // rbx
  __int64 tinfo_size; // r12
  bool i; // r13
  int tinfo_property; // ebp

  v1 = a1;
  tinfo_size = get_tinfo_size();
  for ( i = (get_tinfo_property() & 0xF) == 9; *(_DWORD *)(v1 + 8) == 48; v1 = *(_QWORD *)(v1 + 24) )
  {
    if ( i != ((get_tinfo_property() & 0xF) == 9) )
      break;
    if ( tinfo_size != get_tinfo_size() )
      break;
    tinfo_property = get_tinfo_property();
    if ( tinfo_property == (unsigned int)get_tinfo_property() )
      break;
  }
  return v1;
}

