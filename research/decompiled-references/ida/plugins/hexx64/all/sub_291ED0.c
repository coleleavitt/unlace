__int64 __fastcall sub_291ED0(__int64 a1, double a2)
{
  __int64 v2; // rbp
  int tinfo_property; // ebp

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  if ( (*(_BYTE *)(v2 + 48) & 0xFu) > 9 )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 9 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (unsigned int)get_tinfo_property() != tinfo_property )
    return 0;
  sub_255850(*(__int64 **)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a2);
  return 1;
}

