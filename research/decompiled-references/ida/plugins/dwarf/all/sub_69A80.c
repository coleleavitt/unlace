void __fastcall sub_69A80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi

  *a1 = off_C8908;
  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = v4 + v2;
        ++v5;
        v4 += 264;
        sub_1B750(v6);
        v2 = a1[3];
      }
      while ( v3 != v5 );
    }
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x30u);
}

