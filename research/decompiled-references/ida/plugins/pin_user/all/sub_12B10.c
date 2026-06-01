void __fastcall sub_12B10(_QWORD *a1)
{
  *a1 = off_39550;
  if ( a1[283] )
  {
    a1[284] = 0;
    qfree();
  }
  sub_19A40(a1 + 119);
  *a1 = off_39A88;
  sub_D070((__int64)a1);
  operator delete(a1, 0x8F8u);
}

