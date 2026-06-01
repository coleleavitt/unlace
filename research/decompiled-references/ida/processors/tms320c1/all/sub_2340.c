__int64 __fastcall sub_2340(__int64 a1, char a2)
{
  __int64 result; // rax
  __int16 v3; // ax

  if ( a2 >= 0 )
  {
    *(_BYTE *)(a1 + 41) = 2;
    *(_BYTE *)(a1 + 45) = 0;
    *(_QWORD *)(a1 + 56) = a2 & 0x7F;
LABEL_3:
    result = *(unsigned __int16 *)(a1 + 26);
    if ( (_WORD)result )
      return result;
    return 0;
  }
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a2 & 0x10) != 0 )
      return 0;
    v3 = 1;
  }
  else
  {
    v3 = (unsigned __int8)(a2 & 0x10) >> 3;
  }
  *(_BYTE *)(a1 + 41) = 3;
  *(_WORD *)(a1 + 46) = v3;
  if ( (a2 & 8) == 0 )
    goto LABEL_3;
  result = *(unsigned __int16 *)(a1 + 26);
  *(_BYTE *)(a1 + 81) = 1;
  *(_WORD *)(a1 + 86) = a2 & 1;
  if ( !(_WORD)result )
    return 0;
  return result;
}

