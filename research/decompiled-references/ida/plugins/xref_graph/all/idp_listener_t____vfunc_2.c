void __fastcall idp_listener_t__::vfunc_2(_QWORD *a1)
{
  *a1 = &off_4C430;
  remove_event_listener();
  operator delete(a1, 0x18u);
}

