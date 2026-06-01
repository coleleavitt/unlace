void __fastcall sub_88A0(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  void (__fastcall ***v5)(void *); // r13
  void (__fastcall *v6)(void *); // rdx
  void (__fastcall *v7)(void *); // rax
  __int64 v8; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_88A0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 8))-- == 1 )
        {
          v5 = (void (__fastcall ***)(void *))v2[7];
          v6 = **v5;
          if ( v6 == sub_85C0 )
          {
            if ( v5 )
            {
              v7 = (*v5)[2];
              if ( (char *)v7 == (char *)sub_7E60 )
              {
                *v5 = (void (__fastcall **)(void *))&off_1FD30;
                qregfree(v5 + 2);
                operator delete(v5, 0x30u);
              }
              else
              {
                v7((void *)v2[7]);
              }
            }
          }
          else
          {
            v6((void *)v2[7]);
          }
        }
      }
      v8 = v2[4];
      if ( v8 )
      {
        v2[5] = 0;
        qfree(v8);
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}

