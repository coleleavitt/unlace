const char *__fastcall sub_21FF0(__int64 a1, int *a2)
{
  int v2; // eax
  const char *v3; // rdx

  v2 = *a2;
  if ( (*a2 & 0x100) != 0 )
  {
    BYTE1(v2) &= ~1u;
    *a2 = v2;
    return "Generic V8+ features";
  }
  else if ( (v2 & 0x200) != 0 )
  {
    BYTE1(v2) &= ~2u;
    *a2 = v2;
    return "Sun UltraSPARC1 extensions";
  }
  else
  {
    v3 = nullptr;
    if ( (v2 & 0x400) != 0 )
    {
      BYTE1(v2) &= ~4u;
      v3 = "HAL R1 extensions";
      *a2 = v2;
    }
    return v3;
  }
}
