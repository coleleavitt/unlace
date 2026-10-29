_BOOL8 __fastcall sub_95F0(unsigned __int64 a1, char a2)
{
  unsigned int dword; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx

  if ( !a2 && (get_flags_ex() & 0x10000) != 0 && a1 > 3 && (unsigned int)sub_9480(a1 - 4, 4) == 1
    || a1 + 4 == sub_9200(a1) )
  {
    return 0;
  }
  dword = get_dword();
  v4 = dword >> 26;
  if ( dword > 0xCFFFFFFF )
  {
    if ( (_DWORD)v4 == 56 )
      return (dword & 2) == 0;
    if ( (_DWORD)v4 == 58 )
    {
      v6 = (unsigned __int16)dword >> 13;
      if ( v6 <= 2 )
      {
        if ( (dword & 0x3E00000) == 0 )
          return (dword & 2) == 0;
      }
      else if ( v6 == 6 )
      {
        return (dword & 2) == 0;
      }
      if ( !a2 )
        return 0;
LABEL_25:
      if ( sub_9070(dword) )
        return (dword & 2) == 0;
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)v4 > 0x31 )
    {
      if ( (dword & 0xE000) == 0x8000 || a2 )
        return (dword & 2) == 0;
      return 0;
    }
    if ( (unsigned int)(v4 - 34) <= 0xD )
    {
      v5 = 0x8C0C00000000LL;
      if ( _bittest64(&v5, v4) )
      {
        if ( (dword & 0xE000) == 0 )
          return (dword & 2) == 0;
      }
    }
  }
  if ( !a2 )
    return 0;
  v7 = 0x80F8F8F00000000LL;
  if ( !_bittest64(&v7, v4) )
    goto LABEL_25;
  return (dword & 2) == 0;
}

