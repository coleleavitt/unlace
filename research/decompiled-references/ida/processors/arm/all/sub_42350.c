void __fastcall sub_42350(_QWORD *a1)
{
  *a1 = &off_A4B50;
  remove_event_listener();
  operator delete(a1, 0x18u);
}
