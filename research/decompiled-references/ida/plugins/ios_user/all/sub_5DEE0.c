__int64 __fastcall sub_5DEE0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx

  if ( a2 )
    return sub_5DAF0(a1, (__int64)"threads", (__int64)&unk_71F21, a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_5DF20(1518, 0, v3);
}

