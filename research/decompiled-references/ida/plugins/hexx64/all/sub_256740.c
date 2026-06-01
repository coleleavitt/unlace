bool __fastcall sub_256740(__int64 a1, __int64 a2)
{
  int v2; // edx
  bool result; // al

  if ( !a2 )
    return 0;
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 0;
  v2 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v2 - 71) <= 1 )
    return 0;
  if ( v2 == 74 )
    return *(_QWORD *)(a2 + 24) == a1;
  result = 1;
  if ( v2 == 1 )
    return *(_QWORD *)(a2 + 24) != a1;
  return result;
}

