__int64 __fastcall sub_2660(__int64 a1)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)(a1 + 104);
  *(v1 - 13) = off_9CE0;
  *v1 = &off_9D38;
  return remove_event_listener();
}
