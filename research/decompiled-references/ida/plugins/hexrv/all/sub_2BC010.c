void __fastcall sub_2BC010(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx

  *a1 = &off_4B4D90;
  a1[8] = 0;
  switch_dbctx();
  sub_13BC80(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4B4CD8;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        *v6 = off_4B3EF0;
        clear_tinfo_t();
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x58u);
}

