void __fastcall sub_102850(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = &unk_4EBEA0;
  qfree(a1[7]);
  qfree(a1[4]);
  v2 = a1[1];
  if ( v2 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 3 * i;
        qfree(*(_QWORD *)(v2 + 8 * v5));
        v2 = a1[1];
      }
    }
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x60u);
}

