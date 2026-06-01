__int64 __fastcall sub_430A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi

  *a1 = &off_A0CA0;
  sub_81D90(a1[77]);
  v2 = a1[82];
  a1[77] = 0;
  sub_59130(v2);
  v3 = a1[73];
  a1[82] = 0;
  a1[78] = 0;
  a1[80] = 0;
  a1[21] = 0;
  while ( v3 )
  {
    sub_42ED0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x40u);
  }
  v5 = a1[67];
  while ( v5 )
  {
    sub_42AD0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  if ( a1[56] )
  {
    a1[57] = 0;
    qfree();
  }
  if ( a1[53] )
  {
    a1[54] = 0;
    qfree();
  }
  if ( a1[50] )
  {
    a1[51] = 0;
    qfree();
  }
  if ( a1[46] )
  {
    a1[47] = 0;
    qfree();
  }
  if ( a1[43] )
  {
    a1[44] = 0;
    qfree();
  }
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  if ( a1[30] )
  {
    a1[31] = 0;
    qfree();
  }
  a1[18] = &off_A4B50;
  remove_event_listener();
  a1[15] = &off_A4B50;
  remove_event_listener();
  *a1 = &off_A4B50;
  return remove_event_listener();
}

