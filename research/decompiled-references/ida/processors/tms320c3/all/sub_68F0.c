__int64 __fastcall sub_68F0(__int64 *a1, char a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int16 v4; // dx

  v2 = a2 & 0x1F;
  if ( v2 == 11 || (a2 & 0x1Fu) > 0x14 )
    return 0;
  *(_DWORD *)(*a1 + 28) |= v2;
  v3 = *a1;
  if ( (*(_BYTE *)(*a1 + 28) & 0x1F) == 0 )
  {
    v4 = *(_WORD *)(v3 + 24);
    if ( v4 == 86 )
    {
      *(_WORD *)(v3 + 24) = 88;
    }
    else if ( v4 == 87 )
    {
      *(_WORD *)(v3 + 24) = 89;
    }
  }
  if ( (a2 & 0x20) != 0 )
    *(_DWORD *)(*a1 + 28) |= 0x80u;
  return 1;
}

