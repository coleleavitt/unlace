__int64 __fastcall sub_FC10(_QWORD *a1)
{
  _QWORD *v1; // rbx

  *a1 = off_38928;
  unhook_event_listener();
  a1[30] = &off_392F0;
  remove_event_listener();
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
  }
  v1 = a1 + 19;
  *a1 = &unk_39668;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 7 );
  return qfree();
}

