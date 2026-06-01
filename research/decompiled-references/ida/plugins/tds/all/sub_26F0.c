__int64 __fastcall sub_26F0(_QWORD *a1)
{
  *(a1 - 13) = off_9CE0;
  *a1 = &off_9D38;
  remove_event_listener();
  return qfree(a1 - 13);
}

