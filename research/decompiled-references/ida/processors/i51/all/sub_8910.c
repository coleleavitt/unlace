void __fastcall sub_8910(_QWORD *a1)
{
  *a1 = &off_10D20;
  remove_event_listener();
  operator delete(a1, 0x18u);
}

