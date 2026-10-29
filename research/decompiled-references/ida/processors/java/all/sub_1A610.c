__int64 __fastcall sub_1A610(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rsi

  result = a3;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a1 + 33346) & 4) == 0 )
      return result;
  }
  else if ( (*(_BYTE *)(a1 + 33346) & 2) == 0 || (*(_BYTE *)(a3 + 1) & 0x14) == 0x10 )
  {
    return result;
  }
  result = sub_1A490(a1, *(_WORD *)(a3 + 4), a4);
  if ( (_WORD)result && (*(_BYTE *)(a1 + 33346) & 1) != 0 )
  {
    if ( (_WORD)result == 0xFFFF )
      v6 = *(_QWORD *)(a1 + 33053);
    else
      v6 = *(_QWORD *)(a1 + 33065) + (unsigned __int16)result;
    return add_dref(a2, v6, 5);
  }
  return result;
}

