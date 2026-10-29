void __fastcall sub_BDC0(_QWORD *a1)
{
  __int64 v2; // rdi

  *(a1 - 108) = off_39318;
  *a1 = off_39590;
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  *(a1 - 108) = off_39990;
  *a1 = &off_396C0;
  free_debug_event();
  v2 = a1[9];
  *a1 = &unk_39CE8;
  if ( v2 )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  sub_B760((__int64)(a1 - 108));
}

