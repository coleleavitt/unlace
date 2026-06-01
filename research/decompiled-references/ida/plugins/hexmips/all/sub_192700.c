void __fastcall sub_192700(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi

  *a1 = &off_4BE900;
  clear_tinfo_t();
  clear_tinfo_t();
  if ( a1[53] )
  {
    a1[54] = 0;
    qfree();
  }
  if ( a1[50] )
  {
    a1[51] = 0;
    qfree();
  }
  if ( a1[46] )
  {
    a1[47] = 0;
    qfree();
  }
  if ( a1[30] )
  {
    a1[31] = 0;
    qfree();
  }
  v2 = a1[15];
  if ( v2 )
  {
    v3 = a1[16];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + (i << 7);
        if ( *(_QWORD *)(v5 + 96) )
        {
          *(_QWORD *)(v5 + 104) = 0;
          qfree();
          v2 = a1[15];
        }
      }
    }
    a1[16] = 0;
    qfree();
  }
  v6 = a1[3];
  *a1 = &unk_4CBE20;
  if ( v6 )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x1D8u);
}

