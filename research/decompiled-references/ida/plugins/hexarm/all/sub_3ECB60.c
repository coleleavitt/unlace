__int64 __fastcall sub_3ECB60(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4E8AE8;
  qfree();
  a1[86] = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  a1[83] = &off_4E81E8;
  remove_event_listener();
  v2 = a1[41];
  *a1 = off_4E8030;
  if ( v2 )
  {
    a1[42] = 0;
    qfree();
  }
  if ( a1[38] )
  {
    a1[39] = 0;
    qfree();
  }
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  qfree();
  if ( a1[30] )
  {
    a1[31] = 0;
    qfree();
  }
  qfree();
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  qfree();
  if ( a1[20] )
  {
    a1[21] = 0;
    qfree();
  }
  qfree();
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  return qfree();
}

