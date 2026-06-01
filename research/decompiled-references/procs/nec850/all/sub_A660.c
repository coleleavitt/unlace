__int64 __fastcall sub_A660(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (_WORD)v1 == 51 )
    goto LABEL_14;
  if ( (unsigned __int16)v1 > 0x33u )
  {
    if ( (_WORD)v1 == 207 )
    {
LABEL_12:
      v2 = 0;
      goto LABEL_6;
    }
    if ( (unsigned __int16)v1 <= 0xCFu )
    {
      v2 = -1;
      if ( (unsigned __int16)(v1 - 98) > 1u )
        return v2;
      goto LABEL_12;
    }
    v2 = -1;
    if ( (_WORD)v1 != 208 )
      return v2;
LABEL_14:
    v2 = 1;
    goto LABEL_6;
  }
  if ( (unsigned __int16)v1 > 0x15u )
  {
    v2 = -1;
    if ( (unsigned __int16)(v1 - 40) > 2u )
      return v2;
    v2 = 0;
  }
  else
  {
    v2 = -1;
    if ( (unsigned __int16)v1 <= 3u )
      return v2;
    v3 = 2104336;
    v2 = 1;
    if ( !_bittest64(&v3, v1) )
      return (unsigned int)-1;
  }
LABEL_6:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 40LL * (int)v2 + 41) - 3) >= 2u )
    return (unsigned int)-1;
  return v2;
}
