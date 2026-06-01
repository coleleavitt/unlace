void __fastcall sub_2BCD20(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  *a1 = &off_4CED70;
  a1[8] = 0;
  switch_dbctx();
  sub_13C700(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4CECB8;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(48 * i + v3);
        v7 = v6[2];
        *v6 = off_4CE490;
        if ( v7 )
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

