__int64 __fastcall sub_6040(__int64 a1, __int64 a2)
{
  signed int next_dword; // edx
  unsigned int v4; // eax

  if ( (*(_BYTE *)(a2 + 8) & 3) != 0 )
    return 0;
  next_dword = insn_get_next_dword();
  v4 = (unsigned int)next_dword >> 28;
  if ( next_dword < 0 )
  {
    if ( v4 - 8 > 4 )
      return 0;
    if ( (unsigned __int8)sub_5CA0(a1, a2, next_dword) )
      goto LABEL_8;
    return 0;
  }
  else
  {
    if ( v4 <= 4 )
    {
      if ( v4 <= 1 )
      {
        if ( (unsigned __int8)sub_58C0(a1, a2, next_dword) )
          goto LABEL_8;
      }
      else if ( v4 != 4 && (unsigned __int8)sub_5960(a1, a2, next_dword) )
      {
LABEL_8:
        if ( *(_WORD *)(a2 + 24) )
          return *(unsigned __int16 *)(a2 + 26);
      }
      return 0;
    }
    if ( (unsigned __int8)sub_5D80(a1, a2, next_dword) )
      goto LABEL_8;
    return 0;
  }
}

