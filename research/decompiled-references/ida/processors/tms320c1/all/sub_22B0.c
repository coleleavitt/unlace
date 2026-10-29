__int64 __fastcall sub_22B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int16 v5; // r8

  if ( a4 >= 0 )
  {
    *(_BYTE *)(a2 + 1) = 2;
    *(_BYTE *)(a2 + 5) = 0;
    *(_QWORD *)(a2 + 16) = a4 & 0x7F;
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( (a4 & 0x20) != 0 )
  {
    v5 = 1;
    if ( (a4 & 0x10) != 0 )
      return 0;
  }
  else
  {
    v5 = (unsigned __int8)(a4 & 0x10) >> 3;
  }
  *(_BYTE *)(a2 + 1) = 3;
  *(_WORD *)(a2 + 6) = v5;
  if ( (a4 & 8) != 0 )
  {
    *(_BYTE *)(a3 + 1) = 1;
    *(_WORD *)(a3 + 6) = a4 & 1;
  }
  result = *(unsigned __int16 *)(a1 + 26);
  if ( !(_WORD)result )
    return 0;
  return result;
}

