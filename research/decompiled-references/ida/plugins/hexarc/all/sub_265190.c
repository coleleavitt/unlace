bool __fastcall sub_265190(__int64 a1, __int64 a2)
{
  char tinfo_property; // al
  __int64 v4; // r12
  char v5; // bl

  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  v4 = *(int *)(a2 + 40);
  if ( v4 != get_tinfo_size() || (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v5 = get_tinfo_property();
  return ((get_tinfo_property() & 0xF) == 9) == ((v5 & 0xF) == 9);
}

