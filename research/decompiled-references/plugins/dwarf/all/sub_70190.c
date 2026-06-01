void __fastcall sub_70190(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_C8B98;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x50u);
}
