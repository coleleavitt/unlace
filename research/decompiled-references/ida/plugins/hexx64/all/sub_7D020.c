unsigned __int64 __fastcall sub_7D020(__int64 a1, unsigned __int8 a2, double a3)
{
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return sub_7CF00((_QWORD *)a1, a3);
  if ( (unsigned __int8)is_cvt64() )
    return (int)sub_7CD20((_QWORD *)a1, a3) - (unsigned __int64)a2;
  return sub_7CD40(a1, a3) - a2;
}

