void __fastcall sub_1B710(_QWORD *a1)
{
  void **v2; // rdi
  __int64 v3; // rdi

  *a1 = off_473E0;
  a1[108] = off_47658;
  a1[132] = &off_46A40;
  if ( a1[158] )
  {
    a1[159] = 0;
    qfree();
  }
  if ( a1[153] )
  {
    a1[154] = 0;
    qfree();
  }
  v2 = (void **)a1[138];
  a1[132] = &off_469B8;
  sub_1B2E0(v2);
  *a1 = off_47980;
  a1[108] = &off_476B0;
  free_debug_event();
  v3 = a1[117];
  a1[108] = &unk_47CD8;
  if ( v3 )
  {
    a1[118] = 0;
    qfree();
  }
  if ( a1[110] )
  {
    a1[111] = 0;
    qfree();
  }
  sub_E9E0((__int64)a1);
}

