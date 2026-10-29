void __fastcall sub_136300(_QWORD *a1)
{
  *a1 = &unk_4E7DC0;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x68u);
}

