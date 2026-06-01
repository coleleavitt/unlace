void __fastcall sub_39F510(_QWORD *a1)
{
  *a1 = &off_4D3DD0;
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

