void __fastcall sub_40060(_QWORD *a1)
{
  *a1 = &off_68D68;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

