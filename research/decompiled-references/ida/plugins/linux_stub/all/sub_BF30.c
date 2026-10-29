void __fastcall sub_BF30(_QWORD *a1)
{
  __int64 v2; // rdi

  *(a1 - 108) = off_38378;
  *a1 = off_385F0;
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  *(a1 - 108) = off_38998;
  *a1 = &off_386C8;
  free_debug_event();
  v2 = a1[9];
  *a1 = &unk_38CF0;
  if ( v2 )
  {
    a1[10] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  sub_B8D0((__int64)(a1 - 108));
}

