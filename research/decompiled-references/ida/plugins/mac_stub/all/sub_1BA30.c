void __fastcall sub_1BA30(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void **v3; // rdi
  __int64 v4; // rdi

  v1 = a1 - 108;
  *(a1 - 108) = off_473E0;
  *a1 = off_47658;
  a1[24] = &off_46A40;
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
  v3 = (void **)a1[30];
  a1[24] = &off_469B8;
  sub_1B2E0(v3);
  *(a1 - 108) = off_47980;
  *a1 = &off_476B0;
  free_debug_event();
  v4 = a1[9];
  *a1 = &unk_47CD8;
  if ( v4 )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  sub_E9E0((__int64)v1);
  operator delete(v1, 0x508u);
}

