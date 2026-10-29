void __fastcall sub_BFE0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_38378;
  a1[108] = off_385F0;
  if ( a1[132] )
  {
    a1[133] = 0;
    qfree();
  }
  *a1 = off_38998;
  a1[108] = &off_386C8;
  free_debug_event();
  v2 = a1[117];
  a1[108] = &unk_38CF0;
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
  sub_B8D0((__int64)a1);
  operator delete(a1, 0x440u);
}

