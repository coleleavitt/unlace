void __fastcall sub_11440(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  *a1 = &unk_3CB00;
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[4];
  while ( v2 )
  {
    sub_10FE0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  operator delete(a1, 0x80u);
}
