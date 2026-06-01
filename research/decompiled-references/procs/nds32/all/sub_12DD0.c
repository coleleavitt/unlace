__int64 __fastcall sub_12DD0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 18;
  *(v2 - 18) = &off_290E0;
  *v2 = &off_29D20;
  ((void (*)(void))remove_event_listener)();
  *a1 = &off_29D20;
  return remove_event_listener(a1);
}
