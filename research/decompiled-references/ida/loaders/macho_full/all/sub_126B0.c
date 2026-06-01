void __fastcall sub_126B0(_QWORD *a1)
{
  *a1 = &off_640A0;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

