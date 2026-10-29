void __fastcall sub_634A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_B0A48;
  v2 = a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  a1[1] = 0;
  *a1 = off_AEE30;
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x90u);
}

