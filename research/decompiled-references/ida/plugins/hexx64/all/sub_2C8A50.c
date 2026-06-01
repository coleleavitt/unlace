void __fastcall sub_2C8A50(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v4 + v2);
        v7 = v6[4];
        *v6 = off_4E12A8;
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7);
        }
        v2 = *a1;
        v4 += 88;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}

