__int64 __fastcall sub_D74D0(__int64 a1, const char *a2)
{
  if ( (*(_WORD *)(a1 + 20) & 0xFBF) != 0xA01 || !a2 || *(_BYTE *)(a1 + 23) != 112 )
    return 0;
  if ( !strcmp(*(const char **)a1, a2) )
    return *(_QWORD *)(a1 + 8);
  return 0;
}
