void __fastcall sub_132E80(_QWORD *a1)
{
  *a1 = &unk_4D8DC0;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x68u);
}

