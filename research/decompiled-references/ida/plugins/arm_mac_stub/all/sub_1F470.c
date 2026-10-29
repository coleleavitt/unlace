void __fastcall sub_1F470(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 32 * i;
        if ( *(int *)v5 >= -1 )
        {
          if ( *(_QWORD *)(v5 + 8) )
          {
            *(_QWORD *)(v5 + 16) = 0;
            qfree();
            v2 = *a1;
          }
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

