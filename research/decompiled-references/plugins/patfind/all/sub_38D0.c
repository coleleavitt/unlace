__int64 __fastcall sub_38D0(__int64 a1, __int64 a2)
{
  if ( a2 == 1 )
  {
    unregister_post_event_visitor(0, *(_QWORD *)(a1 + 16) + 128LL);
    return 0;
  }
  else
  {
    if ( a2 == 4 )
      register_post_event_visitor(0, *(_QWORD *)(a1 + 16) + 128LL);
    return 0;
  }
}
