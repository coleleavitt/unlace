void __fastcall sub_7EB0(_QWORD *a1)
{
  *a1 = &off_32518;
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  operator delete(a1, 0xA0u);
}
