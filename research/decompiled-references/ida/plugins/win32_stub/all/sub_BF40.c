void __fastcall sub_BF40(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi

  v1 = a1 - 108;
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
  v3 = a1[9];
  *a1 = &unk_39CE8;
  if ( v3 )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  sub_B760((__int64)v1);
  operator delete(v1, 0x438u);
}

