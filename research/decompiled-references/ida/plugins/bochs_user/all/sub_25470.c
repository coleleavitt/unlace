void __fastcall sub_25470(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rdi
  _QWORD **v4; // rbx
  _QWORD *v5; // rbp

  *a1 = &off_71690;
  v2 = a1[2];
  v3 = (_QWORD **)a1[1];
  if ( 8 * v2 )
  {
    v4 = v3;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        operator delete(v5, 0x20u);
        v3 = (_QWORD **)a1[1];
        v2 = a1[2];
      }
      ++v4;
    }
    while ( v4 != &v3[v2] );
  }
  if ( v3 )
  {
    a1[2] = 0;
    qfree();
  }
  else
  {
    a1[4] = 0;
  }
  operator delete(a1, 0x30u);
}

