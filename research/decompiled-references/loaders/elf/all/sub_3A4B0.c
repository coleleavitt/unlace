const char *__fastcall sub_3A4B0(__int64 a1)
{
  unsigned __int16 v1; // ax
  const char *v2; // rdx

  v1 = *(_WORD *)(a1 + 520);
  switch ( v1 )
  {
    case 0u:
      return "None";
    case 1u:
      return "Relocatable";
    case 2u:
      return "Executable";
    case 3u:
      return "Shared object";
    case 4u:
      return "Core file";
    default:
      if ( v1 == 0xFFA0 )
      {
        v2 = "PSP executable";
        if ( *(_WORD *)(a1 + 522) == 8 )
          return v2;
        return "Unknown";
      }
      if ( v1 <= 0xFFA0u )
      {
        v2 = "Processor specific";
        if ( v1 == 0xFF00 )
          return v2;
        if ( v1 == 0xFF80 )
        {
          v2 = "PS2 IRX";
          if ( *(_WORD *)(a1 + 522) == 8 )
            return v2;
        }
        return "Unknown";
      }
      if ( v1 == 0xFFA4 )
      {
        v2 = "Sony PS3 PRX file";
        if ( *(_WORD *)(a1 + 522) == 21 )
          return v2;
        return "Unknown";
      }
      v2 = "Unknown";
      if ( v1 == 0xFFFF )
        return "Processor specific";
      return v2;
  }
}
