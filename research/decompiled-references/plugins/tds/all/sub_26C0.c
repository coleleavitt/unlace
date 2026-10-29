__int64 __fastcall sub_26C0(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)(a1 + 104);
  *(v2 - 13) = off_9CE0;
  *v2 = &off_9D38;
  remove_event_listener();
  return qfree(a1);
}
