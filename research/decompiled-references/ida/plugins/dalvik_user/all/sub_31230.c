void __fastcall sub_31230(_QWORD *a1)
{
  *a1 = &off_7D8B8;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

