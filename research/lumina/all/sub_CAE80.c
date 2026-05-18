__int64 __fastcall sub_CAE80(char *s)
{
  int v1; // r13d
  char *v2; // rbp
  char **v3; // r11
  unsigned __int8 *v4; // rbx

  v1 = 0;
  v2 = s;
  if ( s )
  {
    v1 = sub_CA590((unsigned __int8 *)s, "SQLITE_", 7);
    if ( v1 || (v2 = s + 7, s != (char *)-7LL) )
      v1 = strlen(v2) & 0x3FFFFFFF;
  }
  v3 = off_23C0E8;
  v4 = "ATOMIC_INTRINSICS=1";
  while ( !v2 )
  {
    if ( !v4 )
      goto LABEL_7;
    if ( v3 == (char **)&unk_23C200 )
      return 0;
LABEL_9:
    v4 = (unsigned __int8 *)*v3++;
  }
  if ( !v4 || (unsigned int)sub_CA590((unsigned __int8 *)v2, v4, v1) )
  {
LABEL_8:
    if ( v3 == (char **)&unk_23C200 )
      return 0;
    goto LABEL_9;
  }
LABEL_7:
  if ( (byte_1BEF00[v4[v1]] & 0x46) != 0 )
    goto LABEL_8;
  return 1;
}
