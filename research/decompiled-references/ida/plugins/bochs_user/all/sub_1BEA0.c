unsigned __int64 __fastcall sub_1BEA0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1080) )
  {
    unhook_event_listener();
    *(_BYTE *)(a1 + 1080) = 0;
  }
  return sub_1BC60((_QWORD *)a1);
}

