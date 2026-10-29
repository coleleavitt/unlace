__int64 __fastcall sub_65680(__int64 a1)
{
  int v1; // ebp
  char v2; // dl
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 == -1 )
    v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_BYTE *)(a1 + 16);
  result = 1;
  if ( !v2 )
  {
    while ( 1 )
    {
      result = sub_64E60(a1, v1);
      v2 = (_DWORD)result == 1 || (int)result < 0;
      if ( v2 )
        break;
      if ( !(_DWORD)result )
        goto LABEL_4;
      while ( *(_BYTE *)(a1 + 16) )
        ;
    }
    v2 = (_DWORD)result == 1;
  }
LABEL_4:
  *(_BYTE *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 12) = -1;
  return result;
}

