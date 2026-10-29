void __fastcall sub_70A0(_QWORD *a1)
{
  *a1 = &off_ED20;
  remove_event_listener();
  operator delete(a1, 0x18u);
}

