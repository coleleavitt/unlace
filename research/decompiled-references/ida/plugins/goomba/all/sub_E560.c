// write access to const memory has been detected, the output may be wrong!
__int64 sub_E560()
{
  int v0; // ecx

  if ( under_debugger )
    BUG();
  interr(52904);
  v0 = **(_DWORD **)((char *)&loc_CEC7 + 1);
  if ( **(_DWORD **)((char *)&loc_CEC7 + 1) > 0x18u )
    return 0;
  if ( ((1LL << v0) & 0xC7F020) == 0 )
  {
    if ( ((1LL << v0) & 0x1380080) != 0 )
      return (*(_DWORD *)((char *)&loc_CED1 + 3) > 0) & (unsigned __int8)(++*(_DWORD *)((char *)&loc_CECF + 1) > 0);
    return 0;
  }
  return (++*(_DWORD *)((char *)&loc_CED1 + 3) > 0) & (unsigned __int8)(*(_DWORD *)((char *)&loc_CECF + 1) > 0);
}

