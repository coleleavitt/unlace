void __fastcall sub_130200(_QWORD *a1)
{
  *a1 = &unk_4B7D20;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x68u);
}

