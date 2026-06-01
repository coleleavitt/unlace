void __fastcall sub_1E0B0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 121;
  *(v2 - 121) = off_38998;
  *(v2 - 13) = &off_386C8;
  free_debug_event();
  v3 = a1[117];
  a1[108] = &unk_38CF0;
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
  sub_B8D0((__int64)a1);
}

