__int64 __fastcall sub_D120(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 16) = off_15638;
  *v2 = &off_15D20;
  remove_event_listener();
  *a1 = &off_15D20;
  remove_event_listener();
  return qfree();
}

