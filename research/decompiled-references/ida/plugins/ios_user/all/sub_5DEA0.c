__int64 __fastcall sub_5DEA0(__int64 a1, __int64 *a2)
{
  if ( a2 )
    return sub_5DAF0(a1, (__int64)"osdata", (__int64)"processes", a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_5DEE0(1476, 0);
}

