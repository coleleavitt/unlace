__int64 __fastcall sub_83F40(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  *a1 = &off_174998;
  sub_787A0((__int64)a1);
  if ( a1[676] )
  {
    a1[677] = 0;
    qfree();
  }
  v2 = a1[672];
  while ( v2 )
  {
    sub_83D70(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  a1[15] = &off_175D18;
  remove_event_listener();
  *a1 = &off_175D18;
  return remove_event_listener();
}
