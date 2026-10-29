void __fastcall sub_1BD9C0(_QWORD *a1)
{
  *a1 = off_4B12C0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

