__int64 __fastcall sub_3EAA70(__int64 a1)
{
  unsigned __int16 v1; // cx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v1 = *(_WORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 28) & 1;
  v3 = v2;
  if ( v1 > 0x50u )
  {
    if ( (unsigned __int16)(v1 - 521) <= 1u )
      return 1;
    if ( !v2 )
      return v3;
LABEL_10:
    v3 = 1;
    if ( *(_BYTE *)(a1 + 41) == 1 )
      LOBYTE(v3) = *(_WORD *)(a1 + 46) != 15;
    return v3;
  }
  if ( v1 <= 0x11u )
  {
    if ( v1 == 4 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v4 = 1LL << ((unsigned __int8)v1 - 18);
  if ( (v4 & 0x3000000F) != 0 )
    return 1;
  if ( (v4 & 0x4000000000002020LL) == 0 )
  {
LABEL_9:
    if ( !v2 )
      return v3;
    goto LABEL_10;
  }
LABEL_5:
  if ( v2 )
    return 1;
  return (unsigned int)is_call_insn() | v2;
}

