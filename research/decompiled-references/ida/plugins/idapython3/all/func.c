void __fastcall func(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = *(__int64 **)(v1 + 8 * i);
        if ( v5 )
        {
          if ( *v5 <= 0 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          (*(void (**)(void))(qword_24798 + 984))();
          v1 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

