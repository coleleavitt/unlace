__int64 __fastcall sub_2F60(__int64 a1)
{
  *(_QWORD *)(a1 - 104) = off_7CF0;
  *(_QWORD *)a1 = off_7D20;
  sub_2CC0(*(void **)(a1 + 32));
  *(_QWORD *)a1 = &off_7D48;
  remove_event_listener();
  return qfree();
}

