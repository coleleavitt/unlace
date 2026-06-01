void __fastcall sub_63010(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  if ( (*(_WORD *)(a1 + 29) & 0x140) == 0 && !*(_BYTE *)(a2 + 5) )
  {
    v2 = *(_WORD *)(a2 + 6);
    if ( v2 <= 7u )
    {
      *(_WORD *)(a2 + 6) = v2 + 16;
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (__int16)(v2 + 16) > 19 )
          *(_WORD *)(a2 + 6) = v2 + 20;
      }
    }
  }
}
