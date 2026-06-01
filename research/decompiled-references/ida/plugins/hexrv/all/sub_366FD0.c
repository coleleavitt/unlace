void *__fastcall sub_366FD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  __int64 v5; // rbx
  void *v6; // rdi
  void *result; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp

  *a1 = off_4B8D78;
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  v2 = a1[24];
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        clear_tinfo_t();
        v5 = *(_QWORD *)(v2 + (i << 6) + 16);
        while ( v5 )
        {
          sub_366950(*(_QWORD **)(v5 + 24));
          v6 = (void *)v5;
          v5 = *(_QWORD *)(v5 + 16);
          operator delete(v6, 0x28u);
        }
        v2 = a1[24];
      }
    }
    a1[25] = 0;
    qfree();
  }
  result = &unk_4BDC88;
  v8 = a1 + 19;
  v9 = a1 + 7;
  *(v9 - 7) = &unk_4BDC88;
  do
  {
    if ( *v8 )
    {
      v8[1] = 0;
      result = (void *)qfree();
    }
    v8 -= 3;
  }
  while ( v9 != v8 );
  return result;
}

