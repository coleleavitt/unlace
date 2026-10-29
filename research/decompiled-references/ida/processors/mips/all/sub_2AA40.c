__int64 __fastcall sub_2AA40(unsigned __int16 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax

  if ( a1 == 518 )
    goto LABEL_15;
  if ( a1 <= 0x206u )
  {
    if ( a1 != 116 )
    {
      if ( a1 == 517 || a1 == 114 )
        goto LABEL_6;
      return 0;
    }
LABEL_15:
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    return 1;
  }
  if ( a1 == 547 )
    goto LABEL_15;
  if ( a1 <= 0x223u )
  {
    if ( a1 == 546 )
    {
LABEL_6:
      if ( a2 )
        *a2 = 1;
      if ( a3 )
        *a3 = 1;
      return 1;
    }
    return 0;
  }
  result = 0;
  if ( (unsigned __int16)(a1 - 835) <= 1u )
    goto LABEL_6;
  return result;
}

