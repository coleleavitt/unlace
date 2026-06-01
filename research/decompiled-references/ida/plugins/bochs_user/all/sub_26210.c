void __fastcall sub_26210(__int64 a1)
{
  *(_DWORD *)(a1 + 1192) = sub_276E0(a1 + 1208, *(_DWORD *)(a1 + 8) != 6);
  set_debug_event_code();
  if ( !under_debugger )
    interr();
  BUG();
}

