void __fastcall sub_FAE0(_QWORD *a1)
{
  __int64 v2; // rdi

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
  operator delete(a1, 0xC0u);
}

