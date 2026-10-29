__int64 __fastcall sub_132D0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 16) = &off_2CE88;
  *v2 = &off_2DB78;
  ((void (*)(void))remove_event_listener)();
  *a1 = &off_2DB78;
  return remove_event_listener(a1);
}
