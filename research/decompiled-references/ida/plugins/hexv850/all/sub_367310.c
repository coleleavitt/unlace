__int64 __fastcall sub_367310(__int64 a1)
{
  unsigned int v1; // ebx

  if ( *(_BYTE *)(a1 + 320) )
  {
    get_tinfo_property();
    LOBYTE(v1) = (get_tinfo_property() & 0x3F) != 1;
    clear_tinfo_t();
  }
  else
  {
    LOBYTE(v1) = *(_DWORD *)(a1 + 480) != -1;
  }
  return v1;
}

