__int64 __fastcall sub_7BA0(__int64 a1, char a2)
{
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // dl

  v2 = a2;
  v3 = ((unsigned __int8)a2 >> 4) & 7;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a1 + 28) = 3;
    if ( (a2 & 8) != 0 )
    {
      *(_BYTE *)(a1 + 41) = 5;
      v2 = a2 & 7;
      *(_BYTE *)(a1 + 45) = 2;
      *(_QWORD *)(a1 + 48) = v3;
    }
    else if ( !sub_7A80(a1, a1 + 40, v3, 0x25u, 0) )
    {
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 2;
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 1;
    *(_QWORD *)(a1 + 48) = v3;
  }
  if ( !sub_7A80(a1, a1 + 80, v2, 0x25u, 0) )
    return 0;
  return *(unsigned __int16 *)(a1 + 26);
}

