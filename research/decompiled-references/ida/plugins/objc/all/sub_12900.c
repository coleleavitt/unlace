void __fastcall sub_12900(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  *a1 = &unk_3CB00;
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v1 = a1[4];
  while ( v1 )
  {
    sub_10FE0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}
