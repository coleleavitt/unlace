__int64 __fastcall sub_5AD0(_QWORD *a1)
{
  *a1 = off_28A20;
  a1[13] = off_28A50;
  remove_srclang_parser(&unk_29300);
  clr_module_data((unsigned int)dword_29364);
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  a1[15] = &off_28D40;
  remove_event_listener(a1 + 15);
  a1[13] = &off_28D40;
  return remove_event_listener(a1 + 13);
}

