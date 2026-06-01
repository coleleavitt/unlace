void __fastcall sub_1AC20(_QWORD *a1)
{
  void **v2; // rdi
  __int64 v3; // rdi

  *a1 = off_463E0;
  a1[108] = off_46658;
  a1[132] = &off_45DE0;
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
  a1[132] = &off_45D58;
  sub_1A5E0(v2);
  *a1 = off_46980;
  a1[108] = &off_466B0;
  free_debug_event();
  v3 = a1[117];
  a1[108] = &unk_46CD8;
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
  sub_DAE0((__int64)a1);
  operator delete(a1, 0x508u);
}

