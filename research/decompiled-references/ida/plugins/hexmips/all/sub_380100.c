void __fastcall sub_380100(_QWORD *a1)
{
  *a1 = &off_4C72C8;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

