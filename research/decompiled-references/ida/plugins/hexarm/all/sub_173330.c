__int64 __fastcall sub_173330(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx

  *a1 = off_4D8778;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = a1[8];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = v2 + (v4 << 6);
        if ( *(_QWORD *)(v5 + 40) )
        {
          *(_QWORD *)(v5 + 48) = 0;
          qfree();
        }
        ++v4;
        qfree();
        sub_11C7E0(v5 + 8);
        v2 = a1[7];
      }
      while ( v3 != v4 );
    }
    a1[8] = 0;
    qfree();
  }
  return j__qfree();
}

