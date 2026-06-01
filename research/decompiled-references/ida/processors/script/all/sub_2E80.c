__int64 __fastcall sub_2E80(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 108;
  *(v2 - 108) = &off_7418;
  *v2 = &off_7D30;
  remove_event_listener();
  if ( a1[103] )
  {
    a1[104] = 0;
    qfree();
  }
  free_idcv();
  if ( a1[96] )
  {
    a1[97] = 0;
    qfree();
  }
  if ( a1[93] )
  {
    a1[94] = 0;
    qfree();
  }
  if ( a1[90] )
  {
    a1[91] = 0;
    qfree();
  }
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  *a1 = &off_7D30;
  remove_event_listener();
  return qfree();
}

