__int64 __fastcall sub_10900(__int64 a1)
{
  char v1; // bp
  int v2; // esi

  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 2) != 0;
  v1 = 2 * get_byte();
  v2 = *((_DWORD *)qword_1B520 + (v1 & 0x1C | ((unsigned __int8)get_byte() >> 6) & 0x1Fu));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4352) + 30LL) & 1) != 0 )
  {
    if ( v2 != 39 )
      return sub_E930(a1, v2);
  }
  else if ( v2 != 37 )
  {
    return sub_E930(a1, v2);
  }
  return 0;
}

