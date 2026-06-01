void __fastcall sub_3F720(_QWORD *a1)
{
  __int64 v2; // rbp
  void *v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi

  v2 = a1[519];
  *a1 = &off_71D78;
  while ( v2 )
  {
    v3 = (void *)v2;
    sub_3F6A0(*(void ***)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 56);
    v2 = *(_QWORD *)(v2 + 16);
    while ( v4 )
    {
      sub_3F4D0(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x28u);
    }
    operator delete(v3, 0x58u);
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
}

