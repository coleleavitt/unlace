__int64 __fastcall sub_314D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned int v4; // ecx

  v3 = *(_BYTE *)(a2 + 1);
  v4 = 0;
  if ( v3 != *(_BYTE *)(a3 + 1) )
    return v4;
  if ( v3 == 4 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return v4;
    goto LABEL_6;
  }
  if ( v3 > 4u )
  {
    if ( v3 != 11 )
    {
      LOBYTE(v4) = v3 == 99;
      return v4;
    }
  }
  else if ( v3 != 1 )
  {
    if ( v3 != 2 )
      return v4;
LABEL_6:
    LOBYTE(v4) = *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16);
    return v4;
  }
  LOBYTE(v4) = *(_WORD *)(a2 + 6) == *(_WORD *)(a3 + 6);
  return v4;
}

