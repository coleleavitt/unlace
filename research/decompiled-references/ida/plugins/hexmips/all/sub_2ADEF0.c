void __fastcall sub_2ADEF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *a1 = &off_4C29D8;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        *v5 = off_4C1BF0;
        clear_tinfo_t();
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = a1[5];
      }
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

