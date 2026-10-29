void __fastcall sub_132400(_QWORD *a1)
{
  *a1 = &unk_4BDD20;
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x68u);
}

