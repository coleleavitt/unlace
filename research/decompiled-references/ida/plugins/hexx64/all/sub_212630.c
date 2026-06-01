__int64 __fastcall sub_212630(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = off_4DF560;
  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        sub_11CDA0(16 * v5 + v2);
        v2 = a1[6];
      }
    }
    a1[7] = 0;
    qfree(v2);
  }
  return j__qfree((__int64)a1);
}

