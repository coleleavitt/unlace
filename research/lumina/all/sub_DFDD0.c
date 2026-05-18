__int64 __fastcall sub_DFDD0(__int64 a1, const char *a2)
{
  signed int v2; // edx

  v2 = 0;
  if ( a2 )
    v2 = strlen(a2) & 0x3FFFFFFF;
  return sub_DFD90(a1, a2, v2);
}
