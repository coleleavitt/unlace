__int64 __fastcall sub_1A5C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi

  result = a1;
  if ( (*(_BYTE *)(result + 33346) & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)(a3 + 2);
    if ( (_WORD)v5 )
    {
      if ( (_WORD)v5 == 0xFFFF )
        v6 = *(_QWORD *)(result + 33053);
      else
        v6 = *(_QWORD *)(result + 33065) + v5;
      return add_dref(a2, v6, 5);
    }
  }
  return result;
}

