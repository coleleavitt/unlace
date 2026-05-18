_BYTE *__fastcall sub_199940(_BYTE *a1, char *a2, __int64 a3)
{
  _BYTE *v3; // rdx
  char v4; // al

  if ( a3 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
LABEL_13:
    BUG();
  }
  v3 = &a1[a3];
  if ( a1 >= v3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(520);
    goto LABEL_13;
  }
  if ( a1 == v3 - 1 )
  {
LABEL_8:
    *(v3 - 1) = 0;
    return v3 - 1;
  }
  else
  {
    while ( 1 )
    {
      v4 = *a2++;
      *a1 = v4;
      if ( !v4 )
        return a1;
      if ( ++a1 == v3 - 1 )
        goto LABEL_8;
    }
  }
}
