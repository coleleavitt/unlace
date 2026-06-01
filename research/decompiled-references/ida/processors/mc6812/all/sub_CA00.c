void __fastcall sub_CA00(_QWORD *a1)
{
  *a1 = &off_16D20;
  remove_event_listener();
  operator delete(a1, 0x18u);
}

