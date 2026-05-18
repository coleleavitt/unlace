__int64 __fastcall sub_E4D20(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  char v5; // al
  const char *v6; // rdx

  if ( *(int *)a2 <= 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 25) & 0x20) == 0 )
  {
    v2 = 0;
    while ( ++v2 != *(_DWORD *)a2 )
    {
      v3 = v2;
      if ( (*(_BYTE *)(a2 + 24LL * v2 + 25) & 0x20) != 0 )
        goto LABEL_8;
    }
    return 0;
  }
  v3 = 0;
LABEL_8:
  v5 = *(_BYTE *)(a2 + 24 * v3 + 24);
  if ( !v5 || (v6 = "LAST", v5 == 3) )
    v6 = "FIRST";
  sub_DBD10(a1, "unsupported use of NULLS %s", v6);
  return 1;
}
