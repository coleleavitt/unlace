void __fastcall sub_126F0(_QWORD *a1)
{
  *a1 = &unk_65CD0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x30u);
}

