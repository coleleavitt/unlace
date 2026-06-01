void __fastcall sub_3D150(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  v3 = a1[16];
  if ( v3 )
  {
    v4 = a1[17];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = *(_QWORD *)(v3 + v5 + 32);
        if ( v7 )
        {
          *(_QWORD *)(v3 + v5 + 40) = 0;
          qfree(v7);
          v3 = a1[16];
        }
        v5 += 56;
      }
    }
    a1[17] = 0;
    qfree(v3);
  }
  v8 = a1[13];
  if ( v8 )
  {
    a1[14] = 0;
    qfree(v8);
  }
}
