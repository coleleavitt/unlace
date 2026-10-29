void __fastcall sub_39E790(_QWORD *a1)
{
  *a1 = &off_4C73F0;
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

