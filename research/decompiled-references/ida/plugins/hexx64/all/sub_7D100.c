__int64 __fastcall sub_7D100(__int64 a1, double a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return v2 + sub_7CF00((_QWORD *)a1, a2);
  if ( (unsigned __int8)is_cvt64() )
    return v2 + (int)sub_7CD20((_QWORD *)a1, a2);
  return v2 + sub_7CD40(a1, a2);
}

