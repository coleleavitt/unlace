__int64 __fastcall sub_13040(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a1 + 18;
  *(v3 - 18) = &off_290E0;
  *v3 = &off_29D20;
  remove_event_listener(v3);
  *a1 = &off_29D20;
  remove_event_listener(a1);
  return qfree(a1, a2, v4, v5);
}
