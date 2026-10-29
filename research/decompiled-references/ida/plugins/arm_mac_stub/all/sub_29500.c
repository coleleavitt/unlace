void __fastcall sub_29500(_QWORD *a1)
{
  _QWORD *v1; // rbp
  _QWORD *v3; // rdi
  __int64 v4; // rdi

  v1 = a1 - 108;
  v3 = a1 + 13;
  *(v3 - 121) = off_46980;
  *(v3 - 13) = &off_466B0;
  free_debug_event();
  v4 = a1[9];
  *a1 = &unk_46CD8;
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
  sub_DAE0((__int64)v1);
  operator delete(v1, 0x420u);
}

