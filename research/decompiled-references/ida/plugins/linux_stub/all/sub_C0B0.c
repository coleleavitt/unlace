void __fastcall sub_C0B0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi

  v1 = a1 - 108;
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
  v3 = a1[9];
  *a1 = &unk_38CF0;
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
  sub_B8D0((__int64)v1);
  operator delete(v1, 0x440u);
}

