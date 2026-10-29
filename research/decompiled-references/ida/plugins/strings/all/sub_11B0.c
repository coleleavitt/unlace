__int64 __fastcall sub_11B0(__int64 a1)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)(a1 + 104);
  *(v1 - 13) = off_3CF0;
  *v1 = &off_3D48;
  return remove_event_listener();
}

