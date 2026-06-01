void __fastcall sub_25E00(_QWORD *a1)
{
  void (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  void (**v6)(void); // rax
  void (****v7)(void); // rcx
  void (***v8)(void); // rdx

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 48LL);
    if ( (char *)v2 == (char *)sub_25CA0 )
    {
      *a1 = &off_A9FC8;
      v3 = a1[3];
      if ( v3 )
      {
        v4 = a1[4];
        if ( v4 )
        {
          v5 = 0;
          while ( 1 )
          {
            v7 = (void (****)(void))(v3 + 8 * v5);
            v8 = *v7;
            if ( !*v7 )
              goto LABEL_9;
            if ( (*((_DWORD *)v8 + 2))-- != 1 )
              goto LABEL_12;
            v6 = **v7;
            if ( (char *)*v6 != (char *)sub_241E0 )
            {
              (*v6)();
              v3 = a1[3];
              goto LABEL_13;
            }
            if ( *v7 )
            {
              v6[20]();
              v3 = a1[3];
LABEL_9:
              if ( v4 == ++v5 )
                break;
            }
            else
            {
LABEL_12:
              v3 = a1[3];
LABEL_13:
              if ( v4 == ++v5 )
                break;
            }
          }
        }
        a1[4] = 0;
        qfree(v3);
      }
      operator delete(a1, 0x38u);
    }
    else
    {
      v2();
    }
  }
}
