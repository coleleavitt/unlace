__int64 __fastcall sub_3D040(__int64 a1, __int64 *a2)
{
  if ( a2 )
    return sub_3CC50(a1, (__int64)"osdata", (__int64)"processes", a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_3D080(1476, 0);
}

