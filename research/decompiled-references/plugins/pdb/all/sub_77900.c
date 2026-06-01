void __fastcall sub_77900(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_B2330;
  v2 = a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x260u);
}
