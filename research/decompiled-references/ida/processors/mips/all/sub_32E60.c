__int64 __fastcall sub_32E60(__int64 a1, _QWORD *a2)
{
  char tinfo_property; // al
  unsigned __int64 tinfo_size; // rdx
  unsigned int v5; // edx

  tinfo_property = get_tinfo_property(*a2, 2);
  LODWORD(tinfo_size) = 0;
  if ( (tinfo_property & 0x3F) == 1 )
    return (unsigned int)tinfo_size;
  if ( *(_DWORD *)a1 == 5 || (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    tinfo_size = get_tinfo_size(0, *a2, 0);
    LOBYTE(tinfo_size) = 2LL * *(_QWORD *)(a1 + 8) < tinfo_size;
    return (unsigned int)tinfo_size;
  }
  LOBYTE(v5) = (get_tinfo_property(*a2, 2) & 0x2F) == 13;
  return v5;
}

