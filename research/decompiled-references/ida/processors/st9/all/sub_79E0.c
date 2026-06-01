__int64 __fastcall sub_79E0(__int16 a1, int a2)
{
  __int64 v2; // rsi

  v2 = (unsigned int)(a2 >> 4);
  if ( (unsigned __int16)(a1 - 103) > 1u )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_7A30(10031, v2);
  }
  else if ( a1 == 104 )
  {
    return *((unsigned __int16 *)qword_10280 + v2);
  }
  else
  {
    return *((unsigned __int16 *)qword_102A0 + v2);
  }
}

