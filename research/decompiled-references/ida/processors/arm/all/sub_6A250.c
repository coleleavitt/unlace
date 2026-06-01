__int64 __fastcall sub_6A250(__int64 a1)
{
  int v1; // eax

  v1 = (*(int *)(a1 + 16) >> 20) & 1 | (*(_DWORD *)(a1 + 16) >> 8) & 0xE;
  if ( v1 <= 9 )
  {
    if ( v1 <= 7 )
      return 0;
    if ( (unsigned int)sub_69740(a1) )
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  else if ( (unsigned int)(v1 - 14) > 1 )
  {
    return 0;
  }
  if ( !(unsigned int)sub_69A50(a1) )
    return 0;
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
