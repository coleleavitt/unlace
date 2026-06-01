__int64 __fastcall sub_31EF0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 44);
  *(_BYTE *)(a1 + 956) = (v1 & 8) != 0;
  result = 0;
  if ( *(_WORD *)(a1 + 40) == 320 )
  {
    if ( (v1 & 0x200) != 0 )
    {
      *(_DWORD *)(a1 + 900) = 281;
      return 1;
    }
    else if ( (v1 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 900) = 280;
      return 1;
    }
  }
  return result;
}

