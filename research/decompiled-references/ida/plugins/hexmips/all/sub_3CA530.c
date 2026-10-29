void __fastcall sub_3CA530(_QWORD *a1)
{
  *a1 = &off_4C9538;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

