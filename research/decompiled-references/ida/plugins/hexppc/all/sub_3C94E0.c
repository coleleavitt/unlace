void __fastcall sub_3C94E0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[21];
  *a1 = &off_4D5EC8;
  while ( v2 )
  {
    sub_3C9280(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *a1 = &off_4CE030;
  merge_handler_dtr();
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0xE0u);
}

