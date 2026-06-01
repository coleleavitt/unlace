__int64 __fastcall sub_21D60(__int64 a1)
{
  unsigned int v1; // edx
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v6; // edx

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 273) & 8) == 0 )
    return v1;
  v2 = *(_BYTE *)(a1 + 121);
  if ( (*(_BYTE *)(a1 + 30) & 1) != 0 )
  {
    if ( v2 && v2 != 5 )
      goto LABEL_5;
  }
  else if ( v2 != 5 )
  {
    return 1;
  }
  v2 = *(_BYTE *)(a1 + 81);
LABEL_5:
  v1 = 1;
  if ( (unsigned __int8)(v2 - 3) > 1u )
    return v1;
  v3 = (unsigned int)sub_218A0(*(_WORD *)(a1 + 24)) - 2;
  if ( (unsigned __int8)v4 > 0x11u )
  {
    v1 = 0;
    if ( (unsigned int)v3 <= 6 )
    {
LABEL_8:
      v1 = v1 - dword_940C0[v3] - 1;
      LOBYTE(v1) = v1 <= 4;
    }
    return v1;
  }
  v1 = dword_940E0[v4];
  if ( (unsigned int)v3 <= 6 )
    goto LABEL_8;
  v6 = v1 - 1;
  LOBYTE(v6) = v6 <= 4;
  return v6;
}

