void __fastcall sub_158C0(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi

  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  if ( a1[14] )
  {
    a1[15] = 0;
    qfree();
  }
  v2 = a1[10];
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_122F0(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree();
    }
    operator delete(v3, 0x40u);
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
}

