__int64 __fastcall sub_38D80(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  int v4; // edx
  _BOOL4 v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 == 4 )
    return (*(_DWORD *)(a1 + 28) & 8) == 0 ? 164 : 192;
  result = 0;
  if ( v2 == 5 )
  {
    v4 = *(unsigned __int16 *)(a1 + 24);
    if ( (_WORD)v4 == 516 )
      return 4;
    if ( (unsigned __int16)v4 > 0x204u )
    {
      if ( (_WORD)v4 != 734 )
      {
        if ( (unsigned __int16)v4 > 0x2DEu )
          v5 = (_WORD)v4 == 737;
        else
          v5 = (((_WORD)v4 - 594) & 0xFFFD) == 0;
        return (unsigned int)(4 * v5);
      }
      return 4;
    }
    v6 = (unsigned int)(v4 - 30);
    if ( (unsigned __int16)v6 <= 0x22u )
    {
      v7 = 0x56000003FLL;
      return 4 * (unsigned int)_bittest64(&v7, v6);
    }
  }
  return result;
}

