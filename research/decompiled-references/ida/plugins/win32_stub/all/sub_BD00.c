void __fastcall sub_BD00(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_39318;
  a1[108] = off_39590;
  if ( a1[132] )
  {
    a1[133] = 0;
    qfree();
  }
  *a1 = off_39990;
  a1[108] = &off_396C0;
  free_debug_event();
  v2 = a1[117];
  a1[108] = &unk_39CE8;
  if ( v2 )
  {
    a1[118] = 0;
    qfree();
  }
  if ( a1[110] )
  {
    a1[111] = 0;
    qfree();
  }
  sub_B760((__int64)a1);
}

