unsigned __int8 __fastcall sub_36F620(__int64 a1, unsigned int a2, double a3)
{
  unsigned __int8 result; // al
  __int64 v4; // rax
  unsigned __int64 v5; // rbx

  result = getinf_flag();
  if ( result )
  {
    if ( a2 == 48 )
      return (*(_BYTE *)(a1 + 48) & 8) == 0;
    if ( a2 <= 0x30 )
    {
      if ( !a2 )
      {
        if ( !under_debugger )
          sub_383060(0xCB6Au, a3);
        BUG();
      }
    }
    else
    {
      if ( a2 == 64 )
        return result;
      v4 = 0x100010001LL;
      v5 = a2 - 112;
      result = _bittest64(&v4, v5);
      if ( (unsigned int)v5 <= 0x20 )
        return result;
    }
    return 0;
  }
  return result;
}

