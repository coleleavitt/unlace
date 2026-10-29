void __fastcall sub_1924A0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4CB438;
  qfree();
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[3];
  *a1 = &unk_4D8E80;
  if ( v2 )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x78u);
}

