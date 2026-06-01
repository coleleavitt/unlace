const char *__fastcall sub_1A8A0(__int64 a1, int *a2)
{
  int v2; // eax
  const char *v3; // rdx

  v2 = *a2;
  if ( *a2 < 0 )
  {
    *a2 = v2 & 0x7FFFFFFF;
    return "PowerPC embedded mode";
  }
  else if ( (v2 & 0x10000) != 0 )
  {
    *a2 = v2 & 0xFFFEFFFF;
    return "-mrelocatable";
  }
  else
  {
    v3 = nullptr;
    if ( (v2 & 0x8000) != 0 )
    {
      BYTE1(v2) &= ~0x80u;
      v3 = "-mrelocatable-lib";
      *a2 = v2;
    }
    return v3;
  }
}
