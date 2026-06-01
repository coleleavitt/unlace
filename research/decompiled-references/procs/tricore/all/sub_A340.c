__int64 __fastcall sub_A340(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v4; // ecx

  v3 = *(_BYTE *)(a2 + 1);
  v4 = 0;
  if ( v3 != *(_BYTE *)(a3 + 1) )
    return 0;
  if ( v3 == 2 )
  {
LABEL_7:
    LOBYTE(v4) = *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16);
    return v4;
  }
  if ( v3 == 4 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return 0;
    goto LABEL_7;
  }
  if ( v3 != 1 )
    return 0;
  LOBYTE(v4) = *(_WORD *)(a2 + 6) == *(_WORD *)(a3 + 6);
  return v4;
}
