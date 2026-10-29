__int64 __fastcall sub_2B9170(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( (a4 & 0x3F) != 0 || *(_QWORD *)(a2 + 40) + (a4 >> 6) == -1 )
    return a1;
  sub_67670((__int64 *)a1);
  return a1;
}

