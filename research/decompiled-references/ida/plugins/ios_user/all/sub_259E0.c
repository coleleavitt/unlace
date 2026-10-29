__int64 __fastcall sub_259E0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d

  v2 = *a2;
  if ( *a2 == 47 )
  {
    v3 = 3;
    goto LABEL_5;
  }
  if ( v2 <= 0x2F )
  {
    if ( v2 == 36 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 2;
      if ( v2 != 37 )
        return 0;
    }
LABEL_5:
    sub_25910(*(__int64 **)(a1 + 16), a2[3], v3);
    sub_25910(*(__int64 **)(a1 + 16), a2[2], v3);
    *(_BYTE *)(a1 + 24) = 1;
    return 0;
  }
  v3 = 4;
  if ( v2 == 48 )
    goto LABEL_5;
  return 0;
}

