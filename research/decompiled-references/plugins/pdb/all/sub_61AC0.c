void __fastcall sub_61AC0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_AEE30;
  a1[1] = 0;
  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x68u);
}
