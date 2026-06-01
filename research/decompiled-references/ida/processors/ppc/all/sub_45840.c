char __fastcall sub_45840(__int64 a1, _QWORD *a2)
{
  char result; // al
  unsigned __int64 tinfo_size; // rdx

  if ( (get_tinfo_property(*a2, 2) & 0x3F) == 1 )
    return 0;
  if ( (unsigned int)sub_4E2D0(a1) == 9 )
    return (unsigned int)sub_44FF0(a1, a2, 0) == 1;
  if ( (get_tinfo_property(*a2, 2) & 0x2F) != 0xD )
    return 0;
  tinfo_size = get_tinfo_size(0, *a2, 0);
  result = 1;
  if ( tinfo_size <= 8 )
    return !(*(_BYTE *)(a1 + 460) >> 7);
  return result;
}

