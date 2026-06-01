void __fastcall sub_22690(_QWORD *a1)
{
  *a1 = &off_35828;
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x28u);
}

