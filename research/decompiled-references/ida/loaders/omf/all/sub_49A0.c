void __fastcall sub_49A0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 59 * v3;
      v5 = 0;
      do
      {
        v6 = *(_QWORD *)(v1 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v1 + v5 + 8) = 0;
          qfree(v6);
          v1 = *a1;
        }
        v5 += 59;
      }
      while ( v5 != v4 );
    }
    a1[1] = 0;
    qfree(v1);
  }
}

