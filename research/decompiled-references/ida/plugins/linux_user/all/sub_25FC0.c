void __fastcall sub_25FC0(_QWORD *a1)
{
  *a1 = &off_44F40;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x50u);
}

