__int64 __fastcall sub_25A100(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // ebx

  v2 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v2 <= 0x17 )
  {
    v3 = -12648455;
    if ( !_bittest64(&v3, v2) )
      return 1;
LABEL_6:
    if ( (unsigned __int64)get_tinfo_size() > 0xF )
    {
      v5 = 13;
      while ( (unsigned int)lexcompare_tinfo() )
      {
        if ( ++v5 == 22 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  if ( (unsigned int)(v2 - 70) <= 0xE )
    return 1;
  if ( (int)v2 <= 69 )
    goto LABEL_6;
  return 0;
}

