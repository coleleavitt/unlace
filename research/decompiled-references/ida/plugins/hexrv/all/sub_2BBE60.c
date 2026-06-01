void __fastcall sub_2BBE60(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax

  *a1 = &off_4B4850;
  a1[8] = 0;
  switch_dbctx();
  sub_13BC80(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4B4798;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v5 + v3);
        v8 = v7[2];
        *v7 = off_4B3E00;
        if ( v8 )
        {
          v7[3] = 0;
          qfree();
        }
        v3 = a1[5];
        v5 += 56;
      }
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x58u);
}

