void __fastcall sub_2FB30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  void **v6; // rdi

  *a1 = &off_98270;
  sub_2FA70((__int64)a1);
  v2 = a1[13];
  if ( v2 )
  {
    v3 = a1[14];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 9 * i;
        sub_2F9D0((_QWORD *)(v2 + 8 * v5));
        v2 = a1[13];
      }
    }
    a1[14] = 0;
    qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  v6 = (void **)a1[6];
  *a1 = &off_981E8;
  sub_2B290(v6);
}

