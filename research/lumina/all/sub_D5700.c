int __fastcall sub_D5700(__int64 a1, char a2)
{
  bool v3; // zf
  const char *v4; // rdi
  int result; // eax
  int v6; // edx

  v3 = *(_BYTE *)(a1 + 28) == 0;
  v4 = *(const char **)(a1 + 40);
  if ( v3 )
  {
    result = off_241318(v4, 0x1FFu);
    if ( result >= 0 )
    {
      *(_BYTE *)(a1 + 28) = a2;
      return result;
    }
    v6 = *__errno_location();
    if ( v6 != 17 && v6 != 13 )
    {
      if ( v6 > 13 )
      {
        if ( v6 != 37 && v6 != 110 && v6 != 16 )
          goto LABEL_14;
      }
      else if ( v6 != 4 && v6 != 11 )
      {
        result = 3;
        if ( v6 == 1 )
        {
LABEL_10:
          *(_DWORD *)(a1 + 32) = v6;
          return result;
        }
LABEL_14:
        result = 3850;
        goto LABEL_10;
      }
    }
    return 5;
  }
  else
  {
    *(_BYTE *)(a1 + 28) = a2;
    utimes(v4, nullptr);
    return 0;
  }
}
