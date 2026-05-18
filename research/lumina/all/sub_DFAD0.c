__int64 *__fastcall sub_DFAD0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  if ( !a2 )
    return sub_DBF10(a1, a3);
  if ( *(_QWORD *)(a1 + 488) <= (unsigned __int64)a2 )
    return (__int64 *)sub_DFA20(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 472) > (unsigned __int64)a2 )
  {
    if ( *(_QWORD *)(a1 + 480) > (unsigned __int64)a2 || *(unsigned __int16 *)(a1 + 414) < a3 )
      return (__int64 *)sub_DFA20(a1, a2, a3);
  }
  else if ( a3 > 0x80 )
  {
    return (__int64 *)sub_DFA20(a1, a2, a3);
  }
  return a2;
}
