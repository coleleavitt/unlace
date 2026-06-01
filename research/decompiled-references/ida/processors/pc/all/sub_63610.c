char __fastcall sub_63610(__int64 a1, __int64 a2, char a3)
{
  char result; // al
  unsigned int v4; // edx
  unsigned int v5; // edx
  char v6; // cl
  int v7; // edx

  switch ( a3 )
  {
    case 0:
      v4 = *(_DWORD *)(a2 + 28);
      result = 0;
      if ( (v4 & 0x800) != 0 && (~*(_BYTE *)(a1 + 5194) & 0x81) != 0 && (v4 & 4) == 0 )
      {
        v6 = *(_BYTE *)(a1 + 5194) & 0x83;
        v7 = (v4 >> 1) & 1;
        return ((v6 == -126) | v7) ^ 1;
      }
      return result;
    case 1:
      result = 1;
      if ( (*(_BYTE *)(a2 + 28) & 2) == 0 )
        return (*(_BYTE *)(a1 + 5194) & 0x83) == 0x82;
      return result;
    case 2:
      v5 = *(_DWORD *)(a2 + 28);
      if ( (v5 & 0x800) != 0 )
      {
        result = 0;
        v6 = *(_BYTE *)(a1 + 5194) & 0x83;
        if ( v6 != -127 || (v5 & 4) != 0 )
          return result;
      }
      else
      {
        result = 0;
        if ( (v5 & 4) != 0 )
          return result;
        v6 = *(_BYTE *)(a1 + 5194) & 0x83;
        if ( v6 == -125 )
          return result;
      }
      v7 = (v5 >> 1) & 1;
      return ((v6 == -126) | v7) ^ 1;
    case 3:
      result = 1;
      if ( (*(_BYTE *)(a2 + 28) & 4) == 0 )
        return (~*(_BYTE *)(a1 + 5194) & 0x83) == 0;
      return result;
    case 4:
      return 1;
    default:
      return 0;
  }
}
