bool __fastcall sub_6BC0(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 24);
  if ( v1 > 0x46u )
    return (unsigned __int16)(v1 - 205) <= 3u;
  else
    return v1 > 0x43u;
}

