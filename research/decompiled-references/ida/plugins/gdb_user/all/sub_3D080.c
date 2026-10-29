__int64 __fastcall sub_3D080(__int64 a1, __int64 *a2)
{
  if ( a2 )
    return sub_3CC50(a1, (__int64)"auxv", (__int64)&unk_54999, a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_3D0C0(1521, 0);
}

