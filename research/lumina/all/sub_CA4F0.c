char **__fastcall sub_CA4F0(_BYTE *a1)
{
  _BYTE *v1; // r11
  char *v2; // rsi
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  int v6; // eax
  int v7; // r8d

  v1 = a1;
  v2 = "integrity_check";
  v3 = 0;
  v4 = 65;
  v5 = 65;
  while ( 1 )
  {
    v7 = v5 >> 1;
    if ( !v1 )
      break;
    if ( !v2 )
      goto LABEL_5;
    v6 = sub_CA2B0(v1, (unsigned __int8 *)v2);
    if ( !v6 )
      goto LABEL_11;
    if ( v6 >= 0 )
    {
LABEL_5:
      v3 = v7 + 1;
      if ( v7 + 1 > v4 )
        return nullptr;
      goto LABEL_6;
    }
LABEL_9:
    v4 = v7 - 1;
    if ( v3 > v7 - 1 )
      return nullptr;
LABEL_6:
    v5 = v3 + v4;
    v2 = (&off_23AC40)[3 * ((v3 + v4) >> 1)];
  }
  if ( v2 )
    goto LABEL_9;
LABEL_11:
  if ( v4 < v3 )
    return nullptr;
  return &(&off_23AC40)[3 * v7];
}
