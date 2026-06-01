void __fastcall sub_1C5F0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 121;
  *(v2 - 121) = off_37988;
  *(v2 - 13) = &off_376B8;
  free_debug_event();
  v3 = a1[117];
  a1[108] = &unk_37CE0;
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
  sub_A390((__int64)a1);
}

