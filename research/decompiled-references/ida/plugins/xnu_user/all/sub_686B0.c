__int64 __fastcall sub_686B0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx

  if ( a2 )
    return sub_682C0(a1, (__int64)"threads", (__int64)&unk_7D386, a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_686F0(1518, 0, v3);
}

