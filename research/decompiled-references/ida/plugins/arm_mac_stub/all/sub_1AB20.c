void __fastcall sub_1AB20(_QWORD *a1)
{
  void **v2; // rdi
  __int64 v3; // rdi

  *(a1 - 108) = off_463E0;
  *a1 = off_46658;
  a1[24] = &off_45DE0;
  if ( a1[50] )
  {
    a1[51] = 0;
    qfree();
  }
  if ( a1[45] )
  {
    a1[46] = 0;
    qfree();
  }
  v2 = (void **)a1[30];
  a1[24] = &off_45D58;
  sub_1A5E0(v2);
  *(a1 - 108) = off_46980;
  *a1 = &off_466B0;
  free_debug_event();
  v3 = a1[9];
  *a1 = &unk_46CD8;
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
  sub_DAE0((__int64)(a1 - 108));
}

