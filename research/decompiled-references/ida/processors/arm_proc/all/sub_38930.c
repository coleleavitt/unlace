void __fastcall sub_38930(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 i; // r15
  void (__fastcall ****v5)(void *); // rbx
  void (__fastcall ***v6)(void *); // rdx
  void (__fastcall ***v8)(void *); // rbx
  void (__fastcall *v9)(void *); // rdx
  void (__fastcall *v10)(void *); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void (__fastcall ****)(void *))(v2 + 32 * i);
        if ( v5[1] )
        {
          v5[2] = nullptr;
          qfree();
        }
        v6 = *v5;
        if ( *v5 )
        {
          if ( (*((_DWORD *)v6 + 2))-- == 1 )
          {
            v8 = *v5;
            v9 = **v8;
            if ( v9 == sub_387B0 )
            {
              if ( v8 )
              {
                v10 = (*v8)[2];
                if ( (char *)v10 == (char *)sub_38540 )
                {
                  *v8 = (void (__fastcall **)(void *))&off_A0628;
                  qregfree();
                  operator delete(v8, 0x30u);
                }
                else
                {
                  v10(v8);
                }
              }
            }
            else
            {
              v9(v8);
            }
          }
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

