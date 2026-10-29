void __fastcall sub_253E0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi

  v2 = a1[3];
  *a1 = off_AA320;
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x30u);
}

