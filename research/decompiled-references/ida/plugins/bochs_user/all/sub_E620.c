void *__fastcall sub_E620(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_70CA8;
  unhook_event_listener();
  a1[30] = &off_72250;
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
  result = &unk_721D0;
  v2 = a1 + 19;
  *a1 = &unk_721D0;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      result = (void *)qfree();
    }
    v2 -= 3;
  }
  while ( v2 != a1 + 7 );
  return result;
}

