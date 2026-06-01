char __fastcall sub_9740(__int16 *a1, __int64 a2)
{
  __int16 v2; // dx
  __int16 v3; // ax
  char result; // al
  unsigned __int16 v5; // ax

  v2 = *a1;
  if ( ((*a1 - 358) & 0xFFFD) == 0 )
    return *(_WORD *)(a2 + 12) == 37;
  v3 = *a1;
  HIBYTE(v3) = HIBYTE(v2) & 0xFE;
  result = v2 == 1126 || v3 == 614;
  if ( result )
    return *(_WORD *)(a2 + 12) == 37;
  if ( (unsigned __int16)(v2 - 496) <= 2u )
    return *(_WORD *)(a2 + 12) == 18;
  if ( v2 == 388 )
    return *(_WORD *)(a2 + 12) == 12;
  if ( v2 == 147 || (unsigned __int16)(v2 - 193) <= 1u )
  {
    result = 1;
    if ( *(_DWORD *)(a2 + 8) != -1 )
    {
      v5 = *(_WORD *)(a2 + 12);
      if ( v5 > 0x400Cu )
        return (unsigned __int16)(v5 - 16399) <= 7u;
      else
        return v5 > 0x3FFFu;
    }
  }
  return result;
}
