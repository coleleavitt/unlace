__int64 __fastcall sub_365A60(__int64 a1)
{
  int v1; // eax
  unsigned int tinfo; // ebp

  v1 = *(_BYTE *)(a1 + 88) & 0xF0;
  if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
    v1 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v1 - 208) > 0x2F )
    return calc_arglocs();
  tinfo = create_tinfo();
  if ( (_BYTE)tinfo )
    tinfo = get_tinfo_details();
  clear_tinfo_t();
  return tinfo;
}

