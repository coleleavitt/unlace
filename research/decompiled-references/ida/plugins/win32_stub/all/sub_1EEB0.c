void __fastcall sub_1EEB0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 13;
  *(v2 - 121) = off_39990;
  *(v2 - 13) = &off_396C0;
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
  sub_B760((__int64)(a1 - 108));
}

