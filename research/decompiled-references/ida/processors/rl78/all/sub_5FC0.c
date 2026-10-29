__int64 __fastcall sub_5FC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a3 + 24);
  if ( (_WORD)result == 8 )
  {
    if ( a2 )
      return add_auto_stkpnt();
  }
  else if ( (unsigned __int16)result > 8u )
  {
    if ( (_WORD)result == 17 && a2 )
      return add_auto_stkpnt();
  }
  else if ( (_WORD)result == 1 )
  {
    if ( *(_BYTE *)(a3 + 41) == 1 && *(_WORD *)(a3 + 46) == 12 && *(_BYTE *)(a3 + 81) == 5 && a2 )
      return add_auto_stkpnt();
  }
  else if ( (_WORD)result == 5
         && *(_BYTE *)(a3 + 41) == 1
         && *(_WORD *)(a3 + 46) == 12
         && *(_BYTE *)(a3 + 81) == 5
         && a2 )
  {
    return add_auto_stkpnt();
  }
  return result;
}

