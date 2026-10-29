__int64 __fastcall sub_2B380(__int64 a1, const char *a2)
{
  unsigned int v2; // ebp

  v2 = 1;
  if ( !strstr(a2, "Error: see BX_DBG_MAX_VIR_BPOINTS")
    && !strstr(a2, "Error: see BX_DBG_MAX_LIN_BPOINTS")
    && !strstr(a2, "Error: see BX_DBG_MAX_PHY_BPOINTS") )
  {
    if ( !strstr(a2, "Error: breakpoint") )
      return 2 * (unsigned int)(strstr(a2, "Error") != nullptr);
    v2 = 5;
    if ( !strstr(a2, "not found") )
      return 2 * (unsigned int)(strstr(a2, "Error") != nullptr);
  }
  return v2;
}

