__int64 __fastcall sub_BC00(__int64 a1, int a2)
{
  if ( a2 > 0 )
    return a1 << (63 - (unsigned __int8)a2) >> (63 - (unsigned __int8)a2);
  sub_B890(a1, a2);
  return sub_BC20();
}

