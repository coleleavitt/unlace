__int64 __fastcall sub_24DF80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 tinfo_size; // rbp
  bool i; // r12

  v1 = a1;
  tinfo_size = get_tinfo_size();
  for ( i = (get_tinfo_property() & 0xF) == 9; *(_DWORD *)(v1 + 8) == 48; v1 = *(_QWORD *)(v1 + 24) )
  {
    if ( i != ((get_tinfo_property() & 0xF) == 9) )
      break;
    if ( tinfo_size != get_tinfo_size() )
      break;
  }
  return v1;
}

