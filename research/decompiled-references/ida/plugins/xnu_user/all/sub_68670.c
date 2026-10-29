__int64 __fastcall sub_68670(__int64 a1, __int64 *a2)
{
  if ( a2 )
    return sub_682C0(a1, (__int64)"osdata", (__int64)"processes", a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_686B0(1476, 0);
}

