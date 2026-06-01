__int64 __fastcall sub_13B30(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = a1 + 15;
  *(v3 - 15) = &off_19AF8;
  *v3 = &off_19B80;
  remove_event_listener(v3);
  *a1 = &off_19B80;
  remove_event_listener(a1);
  return qfree(a1, a2, v4, v5, v6, v7);
}

