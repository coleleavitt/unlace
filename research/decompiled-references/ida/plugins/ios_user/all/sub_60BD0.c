void __fastcall sub_60BD0(_QWORD *a1)
{
  *a1 = &off_8CA48;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

